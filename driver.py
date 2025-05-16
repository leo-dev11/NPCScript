from antlr4 import *
from runtime.NPCScriptLexer import NPCScriptLexer
from runtime.NPCScriptParser import NPCScriptParser

def main():
    archivo = FileStream("examples/npcInitialState.npc", encoding="utf-8")
    lexer = NPCScriptLexer(archivo)
    stream = CommonTokenStream(lexer)
    parser = NPCScriptParser(stream)
    tree = parser.program()  # tu regla inicial
    print(tree.toStringTree(recog=parser))

if __name__ == "__main__":
    main()