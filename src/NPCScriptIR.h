#ifndef __NPCSCRIPT_IR_H__
#define __NPCSCRIPT_IR_H__

#include "NPCScriptBaseVisitor.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include <string>

class NPCScriptIR : public NPCScriptBaseVisitor {
private:
  llvm::LLVMContext &C;
  llvm::Module *M;
  llvm::IRBuilder<> *builder;

  llvm::IntegerType *i32Ty;
  llvm::PointerType *i8Ptr;

public:
  NPCScriptIR(std::string sourceFileName, llvm::LLVMContext &C);

  std::any visitProgram(NPCScriptParser::ProgramContext *ctx) override;
  std::any visitSayStatement(NPCScriptParser::SayStatementContext *ctx) override;

  llvm::Module* getModule() const { return M; }
};

#endif