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


    # Enter a parse tree produced by NPCScriptParser#onEvent.
    def enterOnEvent(self, ctx:NPCScriptParser.OnEventContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#onEvent.
    def exitOnEvent(self, ctx:NPCScriptParser.OnEventContext):
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


    # Enter a parse tree produced by NPCScriptParser#whileStatement.
    def enterWhileStatement(self, ctx:NPCScriptParser.WhileStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#whileStatement.
    def exitWhileStatement(self, ctx:NPCScriptParser.WhileStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#transitionStatement.
    def enterTransitionStatement(self, ctx:NPCScriptParser.TransitionStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#transitionStatement.
    def exitTransitionStatement(self, ctx:NPCScriptParser.TransitionStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#assignment.
    def enterAssignment(self, ctx:NPCScriptParser.AssignmentContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#assignment.
    def exitAssignment(self, ctx:NPCScriptParser.AssignmentContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#sayStatement.
    def enterSayStatement(self, ctx:NPCScriptParser.SayStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#sayStatement.
    def exitSayStatement(self, ctx:NPCScriptParser.SayStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#choiceStatement.
    def enterChoiceStatement(self, ctx:NPCScriptParser.ChoiceStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#choiceStatement.
    def exitChoiceStatement(self, ctx:NPCScriptParser.ChoiceStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#choiceOption.
    def enterChoiceOption(self, ctx:NPCScriptParser.ChoiceOptionContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#choiceOption.
    def exitChoiceOption(self, ctx:NPCScriptParser.ChoiceOptionContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#emotionStatement.
    def enterEmotionStatement(self, ctx:NPCScriptParser.EmotionStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#emotionStatement.
    def exitEmotionStatement(self, ctx:NPCScriptParser.EmotionStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#animationStatement.
    def enterAnimationStatement(self, ctx:NPCScriptParser.AnimationStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#animationStatement.
    def exitAnimationStatement(self, ctx:NPCScriptParser.AnimationStatementContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#waitStatement.
    def enterWaitStatement(self, ctx:NPCScriptParser.WaitStatementContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#waitStatement.
    def exitWaitStatement(self, ctx:NPCScriptParser.WaitStatementContext):
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


    # Enter a parse tree produced by NPCScriptParser#comparator.
    def enterComparator(self, ctx:NPCScriptParser.ComparatorContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#comparator.
    def exitComparator(self, ctx:NPCScriptParser.ComparatorContext):
        pass


    # Enter a parse tree produced by NPCScriptParser#expr.
    def enterExpr(self, ctx:NPCScriptParser.ExprContext):
        pass

    # Exit a parse tree produced by NPCScriptParser#expr.
    def exitExpr(self, ctx:NPCScriptParser.ExprContext):
        pass



del NPCScriptParser