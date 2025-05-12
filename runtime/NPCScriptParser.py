# Generated from grammar/NPCScript.g4 by ANTLR 4.13.2
# encoding: utf-8
from antlr4 import *
from io import StringIO
import sys
if sys.version_info[1] > 5:
	from typing import TextIO
else:
	from typing.io import TextIO

def serializedATN():
    return [
        4,1,14,81,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,1,0,1,0,5,0,19,8,0,10,0,12,0,22,9,0,1,0,1,0,1,1,1,1,1,
        1,1,1,1,1,1,2,1,2,1,2,5,2,34,8,2,10,2,12,2,37,9,2,1,3,1,3,3,3,41,
        8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,5,5,54,8,5,10,5,
        12,5,57,9,5,3,5,59,8,5,1,5,1,5,3,5,63,8,5,1,6,1,6,1,6,1,6,1,6,5,
        6,70,8,6,10,6,12,6,73,9,6,3,6,75,8,6,1,6,1,6,1,7,1,7,1,7,0,0,8,0,
        2,4,6,8,10,12,14,0,1,1,0,11,13,81,0,20,1,0,0,0,2,25,1,0,0,0,4,30,
        1,0,0,0,6,40,1,0,0,0,8,42,1,0,0,0,10,48,1,0,0,0,12,64,1,0,0,0,14,
        78,1,0,0,0,16,19,3,2,1,0,17,19,3,4,2,0,18,16,1,0,0,0,18,17,1,0,0,
        0,19,22,1,0,0,0,20,18,1,0,0,0,20,21,1,0,0,0,21,23,1,0,0,0,22,20,
        1,0,0,0,23,24,5,0,0,1,24,1,1,0,0,0,25,26,5,1,0,0,26,27,5,11,0,0,
        27,28,5,2,0,0,28,29,5,11,0,0,29,3,1,0,0,0,30,31,5,3,0,0,31,35,5,
        11,0,0,32,34,3,6,3,0,33,32,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,35,
        36,1,0,0,0,36,5,1,0,0,0,37,35,1,0,0,0,38,41,3,8,4,0,39,41,3,10,5,
        0,40,38,1,0,0,0,40,39,1,0,0,0,41,7,1,0,0,0,42,43,5,4,0,0,43,44,3,
        12,6,0,44,45,5,5,0,0,45,46,5,6,0,0,46,47,5,11,0,0,47,9,1,0,0,0,48,
        49,5,12,0,0,49,58,5,7,0,0,50,55,3,14,7,0,51,52,5,8,0,0,52,54,3,14,
        7,0,53,51,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,59,
        1,0,0,0,57,55,1,0,0,0,58,50,1,0,0,0,58,59,1,0,0,0,59,60,1,0,0,0,
        60,62,5,9,0,0,61,63,5,10,0,0,62,61,1,0,0,0,62,63,1,0,0,0,63,11,1,
        0,0,0,64,65,5,12,0,0,65,74,5,7,0,0,66,71,3,14,7,0,67,68,5,8,0,0,
        68,70,3,14,7,0,69,67,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,1,
        0,0,0,72,75,1,0,0,0,73,71,1,0,0,0,74,66,1,0,0,0,74,75,1,0,0,0,75,
        76,1,0,0,0,76,77,5,9,0,0,77,13,1,0,0,0,78,79,7,0,0,0,79,15,1,0,0,
        0,9,18,20,35,40,55,58,62,71,74
    ]

class NPCScriptParser ( Parser ):

    grammarFileName = "NPCScript.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'npc'", "'iniciaEn'", "'@estado'", "'if'", 
                     "'then'", "'goto'", "'('", "','", "')'", "';'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "STRING", "IDENTIFIER", 
                      "NUMBER", "WS" ]

    RULE_program = 0
    RULE_npcDefinition = 1
    RULE_stateDefinition = 2
    RULE_statement = 3
    RULE_ifStatement = 4
    RULE_actionStatement = 5
    RULE_condition = 6
    RULE_expr = 7

    ruleNames =  [ "program", "npcDefinition", "stateDefinition", "statement", 
                   "ifStatement", "actionStatement", "condition", "expr" ]

    EOF = Token.EOF
    T__0=1
    T__1=2
    T__2=3
    T__3=4
    T__4=5
    T__5=6
    T__6=7
    T__7=8
    T__8=9
    T__9=10
    STRING=11
    IDENTIFIER=12
    NUMBER=13
    WS=14

    def __init__(self, input:TokenStream, output:TextIO = sys.stdout):
        super().__init__(input, output)
        self.checkVersion("4.13.2")
        self._interp = ParserATNSimulator(self, self.atn, self.decisionsToDFA, self.sharedContextCache)
        self._predicates = None




    class ProgramContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def EOF(self):
            return self.getToken(NPCScriptParser.EOF, 0)

        def npcDefinition(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.NpcDefinitionContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.NpcDefinitionContext,i)


        def stateDefinition(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.StateDefinitionContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.StateDefinitionContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_program

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterProgram" ):
                listener.enterProgram(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitProgram" ):
                listener.exitProgram(self)




    def program(self):

        localctx = NPCScriptParser.ProgramContext(self, self._ctx, self.state)
        self.enterRule(localctx, 0, self.RULE_program)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 20
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==1 or _la==3:
                self.state = 18
                self._errHandler.sync(self)
                token = self._input.LA(1)
                if token in [1]:
                    self.state = 16
                    self.npcDefinition()
                    pass
                elif token in [3]:
                    self.state = 17
                    self.stateDefinition()
                    pass
                else:
                    raise NoViableAltException(self)

                self.state = 22
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 23
            self.match(NPCScriptParser.EOF)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class NpcDefinitionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self, i:int=None):
            if i is None:
                return self.getTokens(NPCScriptParser.STRING)
            else:
                return self.getToken(NPCScriptParser.STRING, i)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_npcDefinition

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterNpcDefinition" ):
                listener.enterNpcDefinition(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitNpcDefinition" ):
                listener.exitNpcDefinition(self)




    def npcDefinition(self):

        localctx = NPCScriptParser.NpcDefinitionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 2, self.RULE_npcDefinition)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 25
            self.match(NPCScriptParser.T__0)
            self.state = 26
            self.match(NPCScriptParser.STRING)
            self.state = 27
            self.match(NPCScriptParser.T__1)
            self.state = 28
            self.match(NPCScriptParser.STRING)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class StateDefinitionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def statement(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.StatementContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.StatementContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_stateDefinition

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterStateDefinition" ):
                listener.enterStateDefinition(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitStateDefinition" ):
                listener.exitStateDefinition(self)




    def stateDefinition(self):

        localctx = NPCScriptParser.StateDefinitionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 4, self.RULE_stateDefinition)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 30
            self.match(NPCScriptParser.T__2)
            self.state = 31
            self.match(NPCScriptParser.STRING)
            self.state = 35
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while _la==4 or _la==12:
                self.state = 32
                self.statement()
                self.state = 37
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class StatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def ifStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.IfStatementContext,0)


        def actionStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.ActionStatementContext,0)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_statement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterStatement" ):
                listener.enterStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitStatement" ):
                listener.exitStatement(self)




    def statement(self):

        localctx = NPCScriptParser.StatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_statement)
        try:
            self.state = 40
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [4]:
                self.enterOuterAlt(localctx, 1)
                self.state = 38
                self.ifStatement()
                pass
            elif token in [12]:
                self.enterOuterAlt(localctx, 2)
                self.state = 39
                self.actionStatement()
                pass
            else:
                raise NoViableAltException(self)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class IfStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def condition(self):
            return self.getTypedRuleContext(NPCScriptParser.ConditionContext,0)


        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_ifStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterIfStatement" ):
                listener.enterIfStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitIfStatement" ):
                listener.exitIfStatement(self)




    def ifStatement(self):

        localctx = NPCScriptParser.IfStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 8, self.RULE_ifStatement)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 42
            self.match(NPCScriptParser.T__3)
            self.state = 43
            self.condition()
            self.state = 44
            self.match(NPCScriptParser.T__4)
            self.state = 45
            self.match(NPCScriptParser.T__5)
            self.state = 46
            self.match(NPCScriptParser.STRING)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ActionStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(NPCScriptParser.IDENTIFIER, 0)

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.ExprContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.ExprContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_actionStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterActionStatement" ):
                listener.enterActionStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitActionStatement" ):
                listener.exitActionStatement(self)




    def actionStatement(self):

        localctx = NPCScriptParser.ActionStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 10, self.RULE_actionStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 48
            self.match(NPCScriptParser.IDENTIFIER)
            self.state = 49
            self.match(NPCScriptParser.T__6)
            self.state = 58
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 14336) != 0):
                self.state = 50
                self.expr()
                self.state = 55
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==8:
                    self.state = 51
                    self.match(NPCScriptParser.T__7)
                    self.state = 52
                    self.expr()
                    self.state = 57
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 60
            self.match(NPCScriptParser.T__8)
            self.state = 62
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==10:
                self.state = 61
                self.match(NPCScriptParser.T__9)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ConditionContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(NPCScriptParser.IDENTIFIER, 0)

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.ExprContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.ExprContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_condition

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterCondition" ):
                listener.enterCondition(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitCondition" ):
                listener.exitCondition(self)




    def condition(self):

        localctx = NPCScriptParser.ConditionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_condition)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 64
            self.match(NPCScriptParser.IDENTIFIER)
            self.state = 65
            self.match(NPCScriptParser.T__6)
            self.state = 74
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 14336) != 0):
                self.state = 66
                self.expr()
                self.state = 71
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==8:
                    self.state = 67
                    self.match(NPCScriptParser.T__7)
                    self.state = 68
                    self.expr()
                    self.state = 73
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 76
            self.match(NPCScriptParser.T__8)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ExprContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def NUMBER(self):
            return self.getToken(NPCScriptParser.NUMBER, 0)

        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def IDENTIFIER(self):
            return self.getToken(NPCScriptParser.IDENTIFIER, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_expr

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpr" ):
                listener.enterExpr(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpr" ):
                listener.exitExpr(self)




    def expr(self):

        localctx = NPCScriptParser.ExprContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_expr)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 78
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 14336) != 0)):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx





