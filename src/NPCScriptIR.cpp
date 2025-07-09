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
  FunctionType *fnType = FunctionType::get(i32Ty, false);
  Function *mainFn = Function::Create(fnType, Function::ExternalLinkage, "main", M);
  BasicBlock *entry = BasicBlock::Create(C, "entry", mainFn);
  builder->SetInsertPoint(entry);

  visitChildren(ctx); // recorrer todo el árbol

  builder->CreateRet(ConstantInt::get(i32Ty, 0));

  verifyFunction(*mainFn);
  return std::any(M);
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