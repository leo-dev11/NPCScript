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
        4,1,40,208,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
        6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,
        2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,5,
        0,42,8,0,10,0,12,0,45,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,
        2,5,2,57,8,2,10,2,12,2,60,9,2,1,3,1,3,1,3,5,3,65,8,3,10,3,12,3,68,
        9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,82,8,4,1,
        5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,5,6,94,8,6,10,6,12,6,97,9,
        6,1,6,1,6,1,7,1,7,1,7,3,7,104,8,7,1,8,1,8,1,8,1,8,3,8,110,8,8,1,
        9,1,9,1,9,3,9,115,8,9,1,10,1,10,1,10,4,10,120,8,10,11,10,12,10,121,
        1,10,1,10,1,11,1,11,1,11,1,11,1,11,3,11,131,8,11,1,12,1,12,1,12,
        1,12,1,12,3,12,138,8,12,1,13,1,13,1,13,1,13,1,13,3,13,145,8,13,1,
        14,1,14,1,14,1,14,3,14,151,8,14,1,15,1,15,1,15,1,15,1,15,5,15,158,
        8,15,10,15,12,15,161,9,15,3,15,163,8,15,1,15,1,15,3,15,167,8,15,
        1,16,1,16,1,16,1,16,1,16,5,16,174,8,16,10,16,12,16,177,9,16,3,16,
        179,8,16,1,16,1,16,1,16,1,16,1,16,3,16,186,8,16,1,17,1,17,1,18,1,
        18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,198,8,18,1,18,1,18,1,18,5,
        18,203,8,18,10,18,12,18,206,9,18,1,18,0,1,36,19,0,2,4,6,8,10,12,
        14,16,18,20,22,24,26,28,30,32,34,36,0,3,1,0,23,24,1,0,26,31,1,0,
        32,35,221,0,43,1,0,0,0,2,48,1,0,0,0,4,53,1,0,0,0,6,61,1,0,0,0,8,
        81,1,0,0,0,10,83,1,0,0,0,12,89,1,0,0,0,14,100,1,0,0,0,16,105,1,0,
        0,0,18,111,1,0,0,0,20,116,1,0,0,0,22,125,1,0,0,0,24,132,1,0,0,0,
        26,139,1,0,0,0,28,146,1,0,0,0,30,152,1,0,0,0,32,185,1,0,0,0,34,187,
        1,0,0,0,36,197,1,0,0,0,38,42,3,2,1,0,39,42,3,4,2,0,40,42,3,6,3,0,
        41,38,1,0,0,0,41,39,1,0,0,0,41,40,1,0,0,0,42,45,1,0,0,0,43,41,1,
        0,0,0,43,44,1,0,0,0,44,46,1,0,0,0,45,43,1,0,0,0,46,47,5,0,0,1,47,
        1,1,0,0,0,48,49,5,1,0,0,49,50,5,36,0,0,50,51,5,2,0,0,51,52,5,36,
        0,0,52,3,1,0,0,0,53,54,5,3,0,0,54,58,5,36,0,0,55,57,3,8,4,0,56,55,
        1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,5,1,0,0,0,60,
        58,1,0,0,0,61,62,5,4,0,0,62,66,5,36,0,0,63,65,3,8,4,0,64,63,1,0,
        0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,69,1,0,0,0,68,66,
        1,0,0,0,69,70,5,5,0,0,70,7,1,0,0,0,71,82,3,10,5,0,72,82,3,12,6,0,
        73,82,3,30,15,0,74,82,3,16,8,0,75,82,3,18,9,0,76,82,3,20,10,0,77,
        82,3,28,14,0,78,82,3,14,7,0,79,82,3,24,12,0,80,82,3,26,13,0,81,71,
        1,0,0,0,81,72,1,0,0,0,81,73,1,0,0,0,81,74,1,0,0,0,81,75,1,0,0,0,
        81,76,1,0,0,0,81,77,1,0,0,0,81,78,1,0,0,0,81,79,1,0,0,0,81,80,1,
        0,0,0,82,9,1,0,0,0,83,84,5,6,0,0,84,85,3,32,16,0,85,86,5,7,0,0,86,
        87,5,8,0,0,87,88,5,36,0,0,88,11,1,0,0,0,89,90,5,9,0,0,90,91,3,32,
        16,0,91,95,5,10,0,0,92,94,3,8,4,0,93,92,1,0,0,0,94,97,1,0,0,0,95,
        93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,0,0,97,95,1,0,0,0,98,99,5,5,0,
        0,99,13,1,0,0,0,100,101,5,8,0,0,101,103,5,36,0,0,102,104,5,11,0,
        0,103,102,1,0,0,0,103,104,1,0,0,0,104,15,1,0,0,0,105,106,5,37,0,
        0,106,107,5,12,0,0,107,109,3,36,18,0,108,110,5,11,0,0,109,108,1,
        0,0,0,109,110,1,0,0,0,110,17,1,0,0,0,111,112,5,13,0,0,112,114,5,
        36,0,0,113,115,5,11,0,0,114,113,1,0,0,0,114,115,1,0,0,0,115,19,1,
        0,0,0,116,117,5,14,0,0,117,119,5,15,0,0,118,120,3,22,11,0,119,118,
        1,0,0,0,120,121,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,123,
        1,0,0,0,123,124,5,16,0,0,124,21,1,0,0,0,125,126,5,36,0,0,126,127,
        5,17,0,0,127,128,5,8,0,0,128,130,5,36,0,0,129,131,5,11,0,0,130,129,
        1,0,0,0,130,131,1,0,0,0,131,23,1,0,0,0,132,133,5,18,0,0,133,134,
        5,19,0,0,134,135,5,36,0,0,135,137,5,20,0,0,136,138,5,11,0,0,137,
        136,1,0,0,0,137,138,1,0,0,0,138,25,1,0,0,0,139,140,5,21,0,0,140,
        141,5,19,0,0,141,142,5,36,0,0,142,144,5,20,0,0,143,145,5,11,0,0,
        144,143,1,0,0,0,144,145,1,0,0,0,145,27,1,0,0,0,146,147,5,22,0,0,
        147,148,5,38,0,0,148,150,7,0,0,0,149,151,5,11,0,0,150,149,1,0,0,
        0,150,151,1,0,0,0,151,29,1,0,0,0,152,153,5,37,0,0,153,162,5,19,0,
        0,154,159,3,36,18,0,155,156,5,25,0,0,156,158,3,36,18,0,157,155,1,
        0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,163,1,
        0,0,0,161,159,1,0,0,0,162,154,1,0,0,0,162,163,1,0,0,0,163,164,1,
        0,0,0,164,166,5,20,0,0,165,167,5,11,0,0,166,165,1,0,0,0,166,167,
        1,0,0,0,167,31,1,0,0,0,168,169,5,37,0,0,169,178,5,19,0,0,170,175,
        3,36,18,0,171,172,5,25,0,0,172,174,3,36,18,0,173,171,1,0,0,0,174,
        177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,179,1,0,0,0,177,
        175,1,0,0,0,178,170,1,0,0,0,178,179,1,0,0,0,179,180,1,0,0,0,180,
        186,5,20,0,0,181,182,3,36,18,0,182,183,3,34,17,0,183,184,3,36,18,
        0,184,186,1,0,0,0,185,168,1,0,0,0,185,181,1,0,0,0,186,33,1,0,0,0,
        187,188,7,1,0,0,188,35,1,0,0,0,189,190,6,18,-1,0,190,198,5,38,0,
        0,191,198,5,36,0,0,192,198,5,37,0,0,193,194,5,19,0,0,194,195,3,36,
        18,0,195,196,5,20,0,0,196,198,1,0,0,0,197,189,1,0,0,0,197,191,1,
        0,0,0,197,192,1,0,0,0,197,193,1,0,0,0,198,204,1,0,0,0,199,200,10,
        2,0,0,200,201,7,2,0,0,201,203,3,36,18,3,202,199,1,0,0,0,203,206,
        1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,37,1,0,0,0,206,204,1,
        0,0,0,22,41,43,58,66,81,95,103,109,114,121,130,137,144,150,159,162,
        166,175,178,185,197,204
    ]

class NPCScriptParser ( Parser ):

    grammarFileName = "NPCScript.g4"

    atn = ATNDeserializer().deserialize(serializedATN())

    decisionsToDFA = [ DFA(ds, i) for i, ds in enumerate(atn.decisionToState) ]

    sharedContextCache = PredictionContextCache()

    literalNames = [ "<INVALID>", "'npc'", "'iniciaEn'", "'@estado'", "'on'", 
                     "'end'", "'if'", "'then'", "'goto'", "'while'", "'do'", 
                     "';'", "'='", "'say'", "'choice'", "'{'", "'}'", "'->'", 
                     "'emotion'", "'('", "')'", "'playAnimation'", "'wait'", 
                     "'seconds'", "'ms'", "','", "'=='", "'!='", "'<'", 
                     "'>'", "'<='", "'>='", "'+'", "'-'", "'*'", "'/'" ]

    symbolicNames = [ "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "<INVALID>", "<INVALID>", "<INVALID>", "<INVALID>", 
                      "STRING", "IDENTIFIER", "NUMBER", "COMMENT", "WS" ]

    RULE_program = 0
    RULE_npcDefinition = 1
    RULE_stateDefinition = 2
    RULE_onEvent = 3
    RULE_statement = 4
    RULE_ifStatement = 5
    RULE_whileStatement = 6
    RULE_transitionStatement = 7
    RULE_assignment = 8
    RULE_sayStatement = 9
    RULE_choiceStatement = 10
    RULE_choiceOption = 11
    RULE_emotionStatement = 12
    RULE_animationStatement = 13
    RULE_waitStatement = 14
    RULE_actionStatement = 15
    RULE_condition = 16
    RULE_comparator = 17
    RULE_expr = 18

    ruleNames =  [ "program", "npcDefinition", "stateDefinition", "onEvent", 
                   "statement", "ifStatement", "whileStatement", "transitionStatement", 
                   "assignment", "sayStatement", "choiceStatement", "choiceOption", 
                   "emotionStatement", "animationStatement", "waitStatement", 
                   "actionStatement", "condition", "comparator", "expr" ]

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
    T__10=11
    T__11=12
    T__12=13
    T__13=14
    T__14=15
    T__15=16
    T__16=17
    T__17=18
    T__18=19
    T__19=20
    T__20=21
    T__21=22
    T__22=23
    T__23=24
    T__24=25
    T__25=26
    T__26=27
    T__27=28
    T__28=29
    T__29=30
    T__30=31
    T__31=32
    T__32=33
    T__33=34
    T__34=35
    STRING=36
    IDENTIFIER=37
    NUMBER=38
    COMMENT=39
    WS=40

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


        def onEvent(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.OnEventContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.OnEventContext,i)


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
            self.state = 43
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 26) != 0):
                self.state = 41
                self._errHandler.sync(self)
                token = self._input.LA(1)
                if token in [1]:
                    self.state = 38
                    self.npcDefinition()
                    pass
                elif token in [3]:
                    self.state = 39
                    self.stateDefinition()
                    pass
                elif token in [4]:
                    self.state = 40
                    self.onEvent()
                    pass
                else:
                    raise NoViableAltException(self)

                self.state = 45
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 46
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
            self.state = 48
            self.match(NPCScriptParser.T__0)
            self.state = 49
            self.match(NPCScriptParser.STRING)
            self.state = 50
            self.match(NPCScriptParser.T__1)
            self.state = 51
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
            self.state = 53
            self.match(NPCScriptParser.T__2)
            self.state = 54
            self.match(NPCScriptParser.STRING)
            self.state = 58
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 137445532480) != 0):
                self.state = 55
                self.statement()
                self.state = 60
                self._errHandler.sync(self)
                _la = self._input.LA(1)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class OnEventContext(ParserRuleContext):
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
            return NPCScriptParser.RULE_onEvent

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterOnEvent" ):
                listener.enterOnEvent(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitOnEvent" ):
                listener.exitOnEvent(self)




    def onEvent(self):

        localctx = NPCScriptParser.OnEventContext(self, self._ctx, self.state)
        self.enterRule(localctx, 6, self.RULE_onEvent)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 61
            self.match(NPCScriptParser.T__3)
            self.state = 62
            self.match(NPCScriptParser.STRING)
            self.state = 66
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 137445532480) != 0):
                self.state = 63
                self.statement()
                self.state = 68
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 69
            self.match(NPCScriptParser.T__4)
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


        def whileStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.WhileStatementContext,0)


        def actionStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.ActionStatementContext,0)


        def assignment(self):
            return self.getTypedRuleContext(NPCScriptParser.AssignmentContext,0)


        def sayStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.SayStatementContext,0)


        def choiceStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.ChoiceStatementContext,0)


        def waitStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.WaitStatementContext,0)


        def transitionStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.TransitionStatementContext,0)


        def emotionStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.EmotionStatementContext,0)


        def animationStatement(self):
            return self.getTypedRuleContext(NPCScriptParser.AnimationStatementContext,0)


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
        self.enterRule(localctx, 8, self.RULE_statement)
        try:
            self.state = 81
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,4,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 71
                self.ifStatement()
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 72
                self.whileStatement()
                pass

            elif la_ == 3:
                self.enterOuterAlt(localctx, 3)
                self.state = 73
                self.actionStatement()
                pass

            elif la_ == 4:
                self.enterOuterAlt(localctx, 4)
                self.state = 74
                self.assignment()
                pass

            elif la_ == 5:
                self.enterOuterAlt(localctx, 5)
                self.state = 75
                self.sayStatement()
                pass

            elif la_ == 6:
                self.enterOuterAlt(localctx, 6)
                self.state = 76
                self.choiceStatement()
                pass

            elif la_ == 7:
                self.enterOuterAlt(localctx, 7)
                self.state = 77
                self.waitStatement()
                pass

            elif la_ == 8:
                self.enterOuterAlt(localctx, 8)
                self.state = 78
                self.transitionStatement()
                pass

            elif la_ == 9:
                self.enterOuterAlt(localctx, 9)
                self.state = 79
                self.emotionStatement()
                pass

            elif la_ == 10:
                self.enterOuterAlt(localctx, 10)
                self.state = 80
                self.animationStatement()
                pass


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
        self.enterRule(localctx, 10, self.RULE_ifStatement)
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 83
            self.match(NPCScriptParser.T__5)
            self.state = 84
            self.condition()
            self.state = 85
            self.match(NPCScriptParser.T__6)
            self.state = 86
            self.match(NPCScriptParser.T__7)
            self.state = 87
            self.match(NPCScriptParser.STRING)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class WhileStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def condition(self):
            return self.getTypedRuleContext(NPCScriptParser.ConditionContext,0)


        def statement(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.StatementContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.StatementContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_whileStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterWhileStatement" ):
                listener.enterWhileStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitWhileStatement" ):
                listener.exitWhileStatement(self)




    def whileStatement(self):

        localctx = NPCScriptParser.WhileStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 12, self.RULE_whileStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 89
            self.match(NPCScriptParser.T__8)
            self.state = 90
            self.condition()
            self.state = 91
            self.match(NPCScriptParser.T__9)
            self.state = 95
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while (((_la) & ~0x3f) == 0 and ((1 << _la) & 137445532480) != 0):
                self.state = 92
                self.statement()
                self.state = 97
                self._errHandler.sync(self)
                _la = self._input.LA(1)

            self.state = 98
            self.match(NPCScriptParser.T__4)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class TransitionStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_transitionStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterTransitionStatement" ):
                listener.enterTransitionStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitTransitionStatement" ):
                listener.exitTransitionStatement(self)




    def transitionStatement(self):

        localctx = NPCScriptParser.TransitionStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 14, self.RULE_transitionStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 100
            self.match(NPCScriptParser.T__7)
            self.state = 101
            self.match(NPCScriptParser.STRING)
            self.state = 103
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 102
                self.match(NPCScriptParser.T__10)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AssignmentContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def IDENTIFIER(self):
            return self.getToken(NPCScriptParser.IDENTIFIER, 0)

        def expr(self):
            return self.getTypedRuleContext(NPCScriptParser.ExprContext,0)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_assignment

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAssignment" ):
                listener.enterAssignment(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAssignment" ):
                listener.exitAssignment(self)




    def assignment(self):

        localctx = NPCScriptParser.AssignmentContext(self, self._ctx, self.state)
        self.enterRule(localctx, 16, self.RULE_assignment)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 105
            self.match(NPCScriptParser.IDENTIFIER)
            self.state = 106
            self.match(NPCScriptParser.T__11)
            self.state = 107
            self.expr(0)
            self.state = 109
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 108
                self.match(NPCScriptParser.T__10)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class SayStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_sayStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterSayStatement" ):
                listener.enterSayStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitSayStatement" ):
                listener.exitSayStatement(self)




    def sayStatement(self):

        localctx = NPCScriptParser.SayStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 18, self.RULE_sayStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 111
            self.match(NPCScriptParser.T__12)
            self.state = 112
            self.match(NPCScriptParser.STRING)
            self.state = 114
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 113
                self.match(NPCScriptParser.T__10)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ChoiceStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def choiceOption(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.ChoiceOptionContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.ChoiceOptionContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_choiceStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterChoiceStatement" ):
                listener.enterChoiceStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitChoiceStatement" ):
                listener.exitChoiceStatement(self)




    def choiceStatement(self):

        localctx = NPCScriptParser.ChoiceStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 20, self.RULE_choiceStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 116
            self.match(NPCScriptParser.T__13)
            self.state = 117
            self.match(NPCScriptParser.T__14)
            self.state = 119 
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            while True:
                self.state = 118
                self.choiceOption()
                self.state = 121 
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if not (_la==36):
                    break

            self.state = 123
            self.match(NPCScriptParser.T__15)
        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ChoiceOptionContext(ParserRuleContext):
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
            return NPCScriptParser.RULE_choiceOption

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterChoiceOption" ):
                listener.enterChoiceOption(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitChoiceOption" ):
                listener.exitChoiceOption(self)




    def choiceOption(self):

        localctx = NPCScriptParser.ChoiceOptionContext(self, self._ctx, self.state)
        self.enterRule(localctx, 22, self.RULE_choiceOption)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 125
            self.match(NPCScriptParser.STRING)
            self.state = 126
            self.match(NPCScriptParser.T__16)
            self.state = 127
            self.match(NPCScriptParser.T__7)
            self.state = 128
            self.match(NPCScriptParser.STRING)
            self.state = 130
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 129
                self.match(NPCScriptParser.T__10)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class EmotionStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_emotionStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterEmotionStatement" ):
                listener.enterEmotionStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitEmotionStatement" ):
                listener.exitEmotionStatement(self)




    def emotionStatement(self):

        localctx = NPCScriptParser.EmotionStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 24, self.RULE_emotionStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 132
            self.match(NPCScriptParser.T__17)
            self.state = 133
            self.match(NPCScriptParser.T__18)
            self.state = 134
            self.match(NPCScriptParser.STRING)
            self.state = 135
            self.match(NPCScriptParser.T__19)
            self.state = 137
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 136
                self.match(NPCScriptParser.T__10)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class AnimationStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def STRING(self):
            return self.getToken(NPCScriptParser.STRING, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_animationStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterAnimationStatement" ):
                listener.enterAnimationStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitAnimationStatement" ):
                listener.exitAnimationStatement(self)




    def animationStatement(self):

        localctx = NPCScriptParser.AnimationStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 26, self.RULE_animationStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 139
            self.match(NPCScriptParser.T__20)
            self.state = 140
            self.match(NPCScriptParser.T__18)
            self.state = 141
            self.match(NPCScriptParser.STRING)
            self.state = 142
            self.match(NPCScriptParser.T__19)
            self.state = 144
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 143
                self.match(NPCScriptParser.T__10)


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class WaitStatementContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser

        def NUMBER(self):
            return self.getToken(NPCScriptParser.NUMBER, 0)

        def getRuleIndex(self):
            return NPCScriptParser.RULE_waitStatement

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterWaitStatement" ):
                listener.enterWaitStatement(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitWaitStatement" ):
                listener.exitWaitStatement(self)




    def waitStatement(self):

        localctx = NPCScriptParser.WaitStatementContext(self, self._ctx, self.state)
        self.enterRule(localctx, 28, self.RULE_waitStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 146
            self.match(NPCScriptParser.T__21)
            self.state = 147
            self.match(NPCScriptParser.NUMBER)
            self.state = 148
            _la = self._input.LA(1)
            if not(_la==23 or _la==24):
                self._errHandler.recoverInline(self)
            else:
                self._errHandler.reportMatch(self)
                self.consume()
            self.state = 150
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 149
                self.match(NPCScriptParser.T__10)


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
        self.enterRule(localctx, 30, self.RULE_actionStatement)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 152
            self.match(NPCScriptParser.IDENTIFIER)
            self.state = 153
            self.match(NPCScriptParser.T__18)
            self.state = 162
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if (((_la) & ~0x3f) == 0 and ((1 << _la) & 481036861440) != 0):
                self.state = 154
                self.expr(0)
                self.state = 159
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                while _la==25:
                    self.state = 155
                    self.match(NPCScriptParser.T__24)
                    self.state = 156
                    self.expr(0)
                    self.state = 161
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)



            self.state = 164
            self.match(NPCScriptParser.T__19)
            self.state = 166
            self._errHandler.sync(self)
            _la = self._input.LA(1)
            if _la==11:
                self.state = 165
                self.match(NPCScriptParser.T__10)


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


        def comparator(self):
            return self.getTypedRuleContext(NPCScriptParser.ComparatorContext,0)


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
        self.enterRule(localctx, 32, self.RULE_condition)
        self._la = 0 # Token type
        try:
            self.state = 185
            self._errHandler.sync(self)
            la_ = self._interp.adaptivePredict(self._input,19,self._ctx)
            if la_ == 1:
                self.enterOuterAlt(localctx, 1)
                self.state = 168
                self.match(NPCScriptParser.IDENTIFIER)
                self.state = 169
                self.match(NPCScriptParser.T__18)
                self.state = 178
                self._errHandler.sync(self)
                _la = self._input.LA(1)
                if (((_la) & ~0x3f) == 0 and ((1 << _la) & 481036861440) != 0):
                    self.state = 170
                    self.expr(0)
                    self.state = 175
                    self._errHandler.sync(self)
                    _la = self._input.LA(1)
                    while _la==25:
                        self.state = 171
                        self.match(NPCScriptParser.T__24)
                        self.state = 172
                        self.expr(0)
                        self.state = 177
                        self._errHandler.sync(self)
                        _la = self._input.LA(1)



                self.state = 180
                self.match(NPCScriptParser.T__19)
                pass

            elif la_ == 2:
                self.enterOuterAlt(localctx, 2)
                self.state = 181
                self.expr(0)
                self.state = 182
                self.comparator()
                self.state = 183
                self.expr(0)
                pass


        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.exitRule()
        return localctx


    class ComparatorContext(ParserRuleContext):
        __slots__ = 'parser'

        def __init__(self, parser, parent:ParserRuleContext=None, invokingState:int=-1):
            super().__init__(parent, invokingState)
            self.parser = parser


        def getRuleIndex(self):
            return NPCScriptParser.RULE_comparator

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterComparator" ):
                listener.enterComparator(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitComparator" ):
                listener.exitComparator(self)




    def comparator(self):

        localctx = NPCScriptParser.ComparatorContext(self, self._ctx, self.state)
        self.enterRule(localctx, 34, self.RULE_comparator)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 187
            _la = self._input.LA(1)
            if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 4227858432) != 0)):
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

        def expr(self, i:int=None):
            if i is None:
                return self.getTypedRuleContexts(NPCScriptParser.ExprContext)
            else:
                return self.getTypedRuleContext(NPCScriptParser.ExprContext,i)


        def getRuleIndex(self):
            return NPCScriptParser.RULE_expr

        def enterRule(self, listener:ParseTreeListener):
            if hasattr( listener, "enterExpr" ):
                listener.enterExpr(self)

        def exitRule(self, listener:ParseTreeListener):
            if hasattr( listener, "exitExpr" ):
                listener.exitExpr(self)



    def expr(self, _p:int=0):
        _parentctx = self._ctx
        _parentState = self.state
        localctx = NPCScriptParser.ExprContext(self, self._ctx, _parentState)
        _prevctx = localctx
        _startState = 36
        self.enterRecursionRule(localctx, 36, self.RULE_expr, _p)
        self._la = 0 # Token type
        try:
            self.enterOuterAlt(localctx, 1)
            self.state = 197
            self._errHandler.sync(self)
            token = self._input.LA(1)
            if token in [38]:
                self.state = 190
                self.match(NPCScriptParser.NUMBER)
                pass
            elif token in [36]:
                self.state = 191
                self.match(NPCScriptParser.STRING)
                pass
            elif token in [37]:
                self.state = 192
                self.match(NPCScriptParser.IDENTIFIER)
                pass
            elif token in [19]:
                self.state = 193
                self.match(NPCScriptParser.T__18)
                self.state = 194
                self.expr(0)
                self.state = 195
                self.match(NPCScriptParser.T__19)
                pass
            else:
                raise NoViableAltException(self)

            self._ctx.stop = self._input.LT(-1)
            self.state = 204
            self._errHandler.sync(self)
            _alt = self._interp.adaptivePredict(self._input,21,self._ctx)
            while _alt!=2 and _alt!=ATN.INVALID_ALT_NUMBER:
                if _alt==1:
                    if self._parseListeners is not None:
                        self.triggerExitRuleEvent()
                    _prevctx = localctx
                    localctx = NPCScriptParser.ExprContext(self, _parentctx, _parentState)
                    self.pushNewRecursionContext(localctx, _startState, self.RULE_expr)
                    self.state = 199
                    if not self.precpred(self._ctx, 2):
                        from antlr4.error.Errors import FailedPredicateException
                        raise FailedPredicateException(self, "self.precpred(self._ctx, 2)")
                    self.state = 200
                    _la = self._input.LA(1)
                    if not((((_la) & ~0x3f) == 0 and ((1 << _la) & 64424509440) != 0)):
                        self._errHandler.recoverInline(self)
                    else:
                        self._errHandler.reportMatch(self)
                        self.consume()
                    self.state = 201
                    self.expr(3) 
                self.state = 206
                self._errHandler.sync(self)
                _alt = self._interp.adaptivePredict(self._input,21,self._ctx)

        except RecognitionException as re:
            localctx.exception = re
            self._errHandler.reportError(self, re)
            self._errHandler.recover(self, re)
        finally:
            self.unrollRecursionContexts(_parentctx)
        return localctx



    def sempred(self, localctx:RuleContext, ruleIndex:int, predIndex:int):
        if self._predicates == None:
            self._predicates = dict()
        self._predicates[18] = self.expr_sempred
        pred = self._predicates.get(ruleIndex, None)
        if pred is None:
            raise Exception("No predicate with index:" + str(ruleIndex))
        else:
            return pred(localctx, predIndex)

    def expr_sempred(self, localctx:ExprContext, predIndex:int):
            if predIndex == 0:
                return self.precpred(self._ctx, 2)
         




