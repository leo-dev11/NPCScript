# Generated from grammar/NPCScript.g4 by ANTLR 4.13.2
from antlr4 import *
if "." in __name__:
    from .NPCScriptParser import NPCScriptParser
else:
    from NPCScriptParser import NPCScriptParser

# This class defines a complete listener for a parse tree produced by NPCScriptParser.
class NPCScriptListener(ParseTreeListener):

    # Enter a parse tree produced by NPCScriptParser#program.
    def enterProgram(self, ctx:NPCScriptParser.ProgramContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#program.
    def exitProgram(self, ctx:NPCScriptParser.ProgramContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#npcDefinition.
    def enterNpcDefinition(self, ctx:NPCScriptParser.NpcDefinitionContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#npcDefinition.
    def exitNpcDefinition(self, ctx:NPCScriptParser.NpcDefinitionContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#stateDefinition.
    def enterStateDefinition(self, ctx:NPCScriptParser.StateDefinitionContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#stateDefinition.
    def exitStateDefinition(self, ctx:NPCScriptParser.StateDefinitionContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#statement.
    def enterStatement(self, ctx:NPCScriptParser.StatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#statement.
    def exitStatement(self, ctx:NPCScriptParser.StatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#ifStatement.
    def enterIfStatement(self, ctx:NPCScriptParser.IfStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#ifStatement.
    def exitIfStatement(self, ctx:NPCScriptParser.IfStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#actionStatement.
    def enterActionStatement(self, ctx:NPCScriptParser.ActionStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#actionStatement.
    def exitActionStatement(self, ctx:NPCScriptParser.ActionStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#condition.
    def enterCondition(self, ctx:NPCScriptParser.ConditionContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#condition.
    def exitCondition(self, ctx:NPCScriptParser.ConditionContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#expr.
    def enterExpr(self, ctx:NPCScriptParser.ExprContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#expr.
    def exitExpr(self, ctx:NPCScriptParser.ExprContext):
        pass



del NPCScriptParser