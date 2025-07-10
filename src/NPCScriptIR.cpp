#include "NPCScriptIR.h"
#include "llvm/IR/Verifier.h"

using namespace llvm;
using namespace std;

NPCScriptIR::NPCScriptIR(string sourceFileName, LLVMContext &C) : C(C) {
  M = new Module(sourceFileName, C);
  builder = new IRBuilder<>(C);

  i32Ty = IntegerType::getInt32Ty(C);
  i8Ptr = PointerType::getUnqual(Type::getInt8Ty(C));
}

std::any NPCScriptIR::visitProgram(NPCScriptParser::ProgramContext *ctx) {
  // define i32 @main()
  llvm::FunctionType *fnType = llvm::FunctionType::get(i32Ty, false);
  llvm::Function *mainFn = llvm::Function::Create(fnType, llvm::Function::ExternalLinkage, "main", M);
  llvm::BasicBlock *entry = llvm::BasicBlock::Create(C, "entry", mainFn);
  builder->SetInsertPoint(entry);

  // Recorremos explícitamente los nodos hijos
  for (auto npc : ctx->npcDefinition()) {
    visit(npc);
  }

  for (auto state : ctx->stateDefinition()) {
    visit(state);
  }

  for (auto evt : ctx->onEvent()) {
    visit(evt);
  }

  builder->CreateRet(llvm::ConstantInt::get(i32Ty, 0));

  llvm::verifyFunction(*mainFn);
  return std::any(M);
}
void NPCScriptIR::emitPrintInt(llvm::Value *val, const std::string &label) {
  std::string fmtStr = label + ": %d\n";
  llvm::Value *fmt = builder->CreateGlobalStringPtr(fmtStr, "fmt");

  llvm::FunctionCallee printfFunc = M->getFunction("printf");
  if (!printfFunc) {
    llvm::FunctionType *printfType = llvm::FunctionType::get(
        i32Ty, i8Ptr, true);  // Usa i8Ptr ya definido
    printfFunc = M->getOrInsertFunction("printf", printfType);
  }

  builder->CreateCall(printfFunc, {fmt, val});
}
std::any NPCScriptIR::visitSayStatement(NPCScriptParser::SayStatementContext *ctx) {
  string text = ctx->STRING()->getText();
  text = text.substr(1, text.length() - 2);  // quitar comillas

  Value *msg = builder->CreateGlobalStringPtr(text, "msg");
  FunctionCallee putsFunc = M->getOrInsertFunction("puts",
    FunctionType::get(i32Ty, i8Ptr, false));
  builder->CreateCall(putsFunc, msg);

  return std::any();
}

std::any NPCScriptIR::visitExpr(NPCScriptParser::ExprContext *ctx) {
  if (ctx->NUMBER()) {
    int val = std::stoi(ctx->NUMBER()->getText());
    std::cout << "Número detectado: " << val << std::endl;
    llvm::Value* constant = static_cast<llvm::Value*>(builder->getInt32(val));
    return std::any(constant);
  }

  if (ctx->IDENTIFIER()) {
    std::string name = ctx->IDENTIFIER()->getText();
    auto it = symbolTable.find(name);
    if (it != symbolTable.end()) {
      llvm::Value* loaded = builder->CreateLoad(i32Ty, it->second, name);
      return std::any(static_cast<llvm::Value*>(loaded));
    } else {
      std::cerr << "Error: Variable no definida: " << name << std::endl;
      return std::any();
    }
  }

  if (ctx->expr().size() == 1) {
    return visit(ctx->expr(0));
  }

  if (ctx->expr().size() == 2) {
    std::any leftAny = visit(ctx->expr(0));
    std::any rightAny = visit(ctx->expr(1));

    llvm::Value *left = nullptr, *right = nullptr;
    try {
      left = std::any_cast<llvm::Value *>(leftAny);
    } catch (const std::bad_any_cast &e) {
      std::cerr << "Error: no se pudo hacer cast en expr izquierda: " << e.what() << std::endl;
      return std::any();
    }

    try {
      right = std::any_cast<llvm::Value *>(rightAny);
    } catch (const std::bad_any_cast &e) {
      std::cerr << "Error: no se pudo hacer cast en expr derecha: " << e.what() << std::endl;
      return std::any();
    }

    if (ctx->PLUS())  return std::any(static_cast<llvm::Value*>(builder->CreateAdd(left, right, "addtmp")));
    if (ctx->MINUS()) return std::any(static_cast<llvm::Value*>(builder->CreateSub(left, right, "subtmp")));
    if (ctx->STAR())  return std::any(static_cast<llvm::Value*>(builder->CreateMul(left, right, "multtmp")));
    if (ctx->SLASH()) return std::any(static_cast<llvm::Value*>(builder->CreateSDiv(left, right, "divtmp")));

    std::cerr << "Operador binario no reconocido.\n";
    return std::any();
  }

  std::cerr << "Error: expresión no reconocida\n";
  return std::any();
}

std::any NPCScriptIR::visitAssignment(NPCScriptParser::AssignmentContext *ctx) {
  std::string varName = ctx->IDENTIFIER()->getText();
  std::cout << "Asignando: " << varName << std::endl;

  // Paso 1: Reservar alloca antes de evaluar la expresión
  llvm::AllocaInst *alloca;
  if (symbolTable.count(varName) == 0) {
    alloca = builder->CreateAlloca(i32Ty, nullptr, varName);
    symbolTable[varName] = alloca;
  } else {
    alloca = symbolTable[varName];
  }

  // Paso 2: Evaluar la expresión
  std::any valueAny = visit(ctx->expr());
  llvm::Value *value = nullptr;

  if (!valueAny.has_value()) {
    std::cerr << "Error: expresión sin valor para variable '" << varName << "'\n";
    value = llvm::ConstantInt::get(i32Ty, 0);  // Valor por defecto para evitar crash
  } else {
    try {
      value = std::any_cast<llvm::Value *>(valueAny);
    } catch (const std::bad_any_cast &e) {
      std::cerr << "Error: no se pudo hacer cast de la expresión a llvm::Value* para variable '"
                << varName << "': " << e.what() << std::endl;
      value = llvm::ConstantInt::get(i32Ty, 0);  // También evita crash
    }
  }

  // Paso 3: Guardar el valor en la variable
  builder->CreateStore(value, alloca);

  // Paso 4: Mostrar el valor
  emitPrintInt(value, varName);

  return nullptr;
}


std::any NPCScriptIR::visitStateDefinition(NPCScriptParser::StateDefinitionContext *ctx) {
  for (auto stmt : ctx->statement()) {
    visit(stmt);
  }
  return nullptr;
}
std::any NPCScriptIR::visitNpcDefinition(NPCScriptParser::NpcDefinitionContext *ctx) {
  // Podrías registrar el NPC, pero no necesitas hacer nada por ahora.
  return {};
}
std::any NPCScriptIR::visitOnEvent(NPCScriptParser::OnEventContext *ctx) {
  for (auto stmt : ctx->statement()) {
    visit(stmt);
  }
  return {};
}
std::any NPCScriptIR::visitTransitionStatement(NPCScriptParser::TransitionStatementContext *ctx) {
    std::string target = ctx->STRING()->getText();
    target = target.substr(1, target.length() - 2);
    std::cout << "Transición a estado: " << target << std::endl;
    return std::any();
    //Por ahora no hace nada a nivel de código LLVM IR
}

std::any NPCScriptIR::visitCondition(NPCScriptParser::ConditionContext *ctx) {
  // Comparación con operador
  if (ctx->expr().size() == 2) {
    llvm::Value *left = nullptr;
    llvm::Value *right = nullptr;

    try {
        left = std::any_cast<llvm::Value *>(visit(ctx->expr(0)));
        right = std::any_cast<llvm::Value *>(visit(ctx->expr(1)));
    } catch (const std::bad_any_cast& e) {
        std::cerr << "Error: cast fallido en comparación: " << e.what() << "\n";
        return std::any();
    }

    if (!left || !right) {
      std::cerr << "Error: alguno de los operandos es nulo\n";
      return std::any();
    }

    if (left->getType() != right->getType()) {
      std::cerr << "Error: tipos incompatibles en comparación:\n";
      left->getType()->print(llvm::errs()); std::cerr << "\n";
      right->getType()->print(llvm::errs()); std::cerr << "\n";
      return std::any();
    }

    // Comparadores
    if (ctx->comparator()->EQ())  return std::any(builder->CreateICmpEQ(left, right, "eqtmp"));
    if (ctx->comparator()->NEQ()) return std::any(builder->CreateICmpNE(left, right, "netmp"));
    if (ctx->comparator()->LT())  return std::any(builder->CreateICmpSLT(left, right, "lttmp"));
    if (ctx->comparator()->GT())  return std::any(builder->CreateICmpSGT(left, right, "gttmp"));
    if (ctx->comparator()->LEQ()) return std::any(builder->CreateICmpSLE(left, right, "letmp"));
    if (ctx->comparator()->GEQ()) return std::any(builder->CreateICmpSGE(left, right, "getmp"));
  }

  // Si es una condición booleana tipo: if (x)
  llvm::Value *val = nullptr;
  try {
    val = std::any_cast<llvm::Value *>(visit(ctx->expr(0)));
  } catch (const std::bad_any_cast& e) {
    std::cerr << "Error: cast fallido en condición simple: " << e.what() << "\n";
    return std::any();
  }

  return std::any(builder->CreateICmpNE(val, builder->getInt32(0), "condtmp"));
}
std::any NPCScriptIR::visitIfStatement(NPCScriptParser::IfStatementContext *ctx) {
  auto condValueAny = visit(ctx->condition());
  llvm::Value *condVal = std::any_cast<llvm::Value*>(visit(ctx->condition()));

  llvm::Value *isTrue = condVal;
  if (condVal->getType()->isIntegerTy(32)) {
    isTrue = builder->CreateICmpNE(condVal, builder->getInt32(0), "ifcond");
  }

  Function *fn = builder->GetInsertBlock()->getParent();
  BasicBlock *thenBB = BasicBlock::Create(C, "then", fn);
  BasicBlock *mergeBB = BasicBlock::Create(C, "endif", fn);

  builder->CreateCondBr(isTrue, thenBB, mergeBB);

  builder->SetInsertPoint(thenBB);
  std::string estado = ctx->STRING()->getText();
  estado = estado.substr(1, estado.length() - 2);
  llvm::Value *msg = builder->CreateGlobalStringPtr("Transición a estado: " + estado);
  builder->CreateCall(M->getOrInsertFunction("puts", FunctionType::get(i32Ty, i8Ptr, false)), msg);
  builder->CreateBr(mergeBB);

  builder->SetInsertPoint(mergeBB);

  return nullptr;
}
std::any NPCScriptIR::visitWhileStatement(NPCScriptParser::WhileStatementContext *ctx) {
  Function *fn = builder->GetInsertBlock()->getParent();

  BasicBlock *condBB = BasicBlock::Create(C, "while.cond", fn);
  BasicBlock *bodyBB = BasicBlock::Create(C, "while.body", fn);
  BasicBlock *afterBB = BasicBlock::Create(C, "while.end", fn);

  builder->CreateBr(condBB);  // saltar al condicional
  builder->SetInsertPoint(condBB);

  // Evaluar condición
  llvm::Value *condVal = std::any_cast<llvm::Value *>(visit(ctx->condition()));
  llvm::Value *condBool = condVal;
  if (condVal->getType()->isIntegerTy(32)) {
      condBool = builder->CreateICmpNE(condVal, builder->getInt32(0), "loopcond");
  }
  builder->CreateCondBr(condBool, bodyBB, afterBB); // usar condBool

  // Cuerpo del while
  builder->SetInsertPoint(bodyBB);
  for (auto stmt : ctx->statement()) {
    visit(stmt);
  }
  builder->CreateBr(condBB);  // volver a cond

  // Salida del bucle
  builder->SetInsertPoint(afterBB);

  return nullptr;
}

std::any NPCScriptIR::visitActionStatement(NPCScriptParser::ActionStatementContext *ctx) {
  std::string actionName = ctx->IDENTIFIER()->getText();
  std::string msg = "Acción: " + actionName;

  llvm::Value *msgVal = builder->CreateGlobalStringPtr(msg);
  FunctionCallee putsFunc = M->getOrInsertFunction(
      "puts", llvm::FunctionType::get(i32Ty, i8Ptr, false));
  builder->CreateCall(putsFunc, msgVal);

  // También podrías evaluar y mostrar los argumentos
  for (auto exprCtx : ctx->expr()) {
    std::any valAny = visit(exprCtx);
    if (valAny.has_value()) {
      llvm::Value *argVal = std::any_cast<llvm::Value *>(valAny);
      emitPrintInt(argVal, "arg");  // ya tienes esta función
    }
  }

  return nullptr;
}