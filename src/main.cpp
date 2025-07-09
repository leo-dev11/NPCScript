#include <fstream>
#include <iostream>

#include "antlr4-runtime.h"
#include "NPCScriptLexer.h"
#include "NPCScriptParser.h"
#include "NPCScriptIR.h"

#include "llvm/IR/LLVMContext.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/IR/Verifier.h"

using namespace llvm;
using namespace antlr4;
using namespace std;

int main(int argc, const char *argv[]) {
  ifstream ifile;
  string sourceFileName = "stdin";
  if (argc > 1) {
    sourceFileName = argv[1];
    ifile.open(sourceFileName);
    if (!ifile.is_open()) {
      cerr << "Error: No se pudo abrir el archivo." << endl;
      return 1;
    }
  }

  istream &stream = argc > 1 ? ifile : cin;
  ANTLRInputStream input(stream);
  NPCScriptLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  NPCScriptParser parser(&tokens);

  LLVMContext C;
  InitializeNativeTarget();
  InitializeNativeTargetAsmPrinter();

  NPCScriptIR visitor(sourceFileName, C);
  unique_ptr<Module> M(any_cast<Module *>(visitor.visit(parser.program())));

  M->print(outs(), nullptr);

  if (verifyModule(*M)) {
    errs() << "Error: module failed verification.\n";
    return 1;
  }

  // Puedes guardar a archivo .ll si quieres
  std::error_code EC;
  raw_fd_ostream outFile("out.ll", EC);
  M->print(outFile, nullptr);

  return 0;
}