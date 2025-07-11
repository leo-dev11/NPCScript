#ifndef __NPCSCRIPT_IR_H__
#define __NPCSCRIPT_IR_H__

#include "NPCScriptBaseVisitor.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include <string>
#include <unordered_map>

class NPCScriptIR : public NPCScriptBaseVisitor {
private:
  llvm::LLVMContext &C;
  llvm::Module *M;
  llvm::IRBuilder<> *builder;

  llvm::IntegerType *i32Ty;
  llvm::PointerType *i8Ptr;
  std::unordered_map<std::string, llvm::AllocaInst*> symbolTable;

public:
  NPCScriptIR(std::string sourceFileName, llvm::LLVMContext &C);

  std::any visitProgram(NPCScriptParser::ProgramContext *ctx) override;
  std::any visitStateDefinition(NPCScriptParser::StateDefinitionContext *ctx) override;
  std::any visitNpcDefinition(NPCScriptParser::NpcDefinitionContext *ctx) override;
  std::any visitOnEvent(NPCScriptParser::OnEventContext *ctx) override;
  std::any visitSayStatement(NPCScriptParser::SayStatementContext *ctx) override;
  std::any visitAssignment(NPCScriptParser::AssignmentContext *ctx) override;
  std::any visitExpr(NPCScriptParser::ExprContext *ctx) override;
  std::any visitTransitionStatement(NPCScriptParser::TransitionStatementContext *ctx) override;
  std::any visitWaitStatement(NPCScriptParser::WaitStatementContext *ctx) override;
  std::any visitCondition(NPCScriptParser::ConditionContext *ctx) override;
  std::any visitIfStatement(NPCScriptParser::IfStatementContext *ctx) override;
  std::any visitWhileStatement(NPCScriptParser::WhileStatementContext *ctx) override;
  std::any visitActionStatement(NPCScriptParser::ActionStatementContext *ctx) override;

  llvm::Module* getModule() const { return M; }

  void emitPrintInt(llvm::Value* val, const std::string& label = "");
};

#endif