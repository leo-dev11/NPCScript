
// Generated from /compilers/NPCScript/NPCScript.g4 by ANTLR 4.13.2


#include "NPCScriptListener.h"
#include "NPCScriptVisitor.h"

#include "NPCScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NPCScriptParserStaticData final {
  NPCScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NPCScriptParserStaticData(const NPCScriptParserStaticData&) = delete;
  NPCScriptParserStaticData(NPCScriptParserStaticData&&) = delete;
  NPCScriptParserStaticData& operator=(const NPCScriptParserStaticData&) = delete;
  NPCScriptParserStaticData& operator=(NPCScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag npcscriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<NPCScriptParserStaticData> npcscriptParserStaticData = nullptr;

void npcscriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (npcscriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(npcscriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<NPCScriptParserStaticData>(
    std::vector<std::string>{
      "program", "npcDefinition", "stateDefinition", "onEvent", "statement", 
      "ifStatement", "whileStatement", "transitionStatement", "assignment", 
      "sayStatement", "choiceStatement", "choiceOption", "emotionStatement", 
      "animationStatement", "waitStatement", "actionStatement", "condition", 
      "comparator", "expr"
    },
    std::vector<std::string>{
      "", "'npc'", "'iniciaEn'", "'@estado'", "'on'", "'end'", "'if'", "'then'", 
      "'goto'", "'while'", "'do'", "';'", "'='", "'say'", "'choice'", "'{'", 
      "'}'", "'->'", "'emotion'", "'('", "')'", "'playAnimation'", "'wait'", 
      "'seconds'", "'ms'", "','", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "EQ", "NEQ", "LT", "GT", "LEQ", 
      "GEQ", "PLUS", "MINUS", "STAR", "SLASH", "STRING", "IDENTIFIER", "NUMBER", 
      "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,40,216,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,5,0,42,8,0,10,
  	0,12,0,45,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,5,2,57,8,2,10,2,
  	12,2,60,9,2,1,3,1,3,1,3,5,3,65,8,3,10,3,12,3,68,9,3,1,3,1,3,1,4,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,82,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,5,6,94,8,6,10,6,12,6,97,9,6,1,6,1,6,1,7,1,7,1,7,3,7,104,8,
  	7,1,8,1,8,1,8,1,8,3,8,110,8,8,1,9,1,9,1,9,3,9,115,8,9,1,10,1,10,1,10,
  	4,10,120,8,10,11,10,12,10,121,1,10,1,10,1,11,1,11,1,11,1,11,1,11,3,11,
  	131,8,11,1,12,1,12,1,12,1,12,1,12,3,12,138,8,12,1,13,1,13,1,13,1,13,1,
  	13,3,13,145,8,13,1,14,1,14,1,14,1,14,3,14,151,8,14,1,15,1,15,1,15,1,15,
  	1,15,5,15,158,8,15,10,15,12,15,161,9,15,3,15,163,8,15,1,15,1,15,3,15,
  	167,8,15,1,16,1,16,1,16,1,16,1,16,5,16,174,8,16,10,16,12,16,177,9,16,
  	3,16,179,8,16,1,16,1,16,1,16,1,16,1,16,3,16,186,8,16,1,17,1,17,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,3,18,197,8,18,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,211,8,18,10,18,12,18,214,9,18,1,
  	18,0,1,36,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,0,2,
  	1,0,23,24,1,0,26,31,231,0,43,1,0,0,0,2,48,1,0,0,0,4,53,1,0,0,0,6,61,1,
  	0,0,0,8,81,1,0,0,0,10,83,1,0,0,0,12,89,1,0,0,0,14,100,1,0,0,0,16,105,
  	1,0,0,0,18,111,1,0,0,0,20,116,1,0,0,0,22,125,1,0,0,0,24,132,1,0,0,0,26,
  	139,1,0,0,0,28,146,1,0,0,0,30,152,1,0,0,0,32,185,1,0,0,0,34,187,1,0,0,
  	0,36,196,1,0,0,0,38,42,3,2,1,0,39,42,3,4,2,0,40,42,3,6,3,0,41,38,1,0,
  	0,0,41,39,1,0,0,0,41,40,1,0,0,0,42,45,1,0,0,0,43,41,1,0,0,0,43,44,1,0,
  	0,0,44,46,1,0,0,0,45,43,1,0,0,0,46,47,5,0,0,1,47,1,1,0,0,0,48,49,5,1,
  	0,0,49,50,5,36,0,0,50,51,5,2,0,0,51,52,5,36,0,0,52,3,1,0,0,0,53,54,5,
  	3,0,0,54,58,5,36,0,0,55,57,3,8,4,0,56,55,1,0,0,0,57,60,1,0,0,0,58,56,
  	1,0,0,0,58,59,1,0,0,0,59,5,1,0,0,0,60,58,1,0,0,0,61,62,5,4,0,0,62,66,
  	5,36,0,0,63,65,3,8,4,0,64,63,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,
  	1,0,0,0,67,69,1,0,0,0,68,66,1,0,0,0,69,70,5,5,0,0,70,7,1,0,0,0,71,82,
  	3,10,5,0,72,82,3,12,6,0,73,82,3,30,15,0,74,82,3,16,8,0,75,82,3,18,9,0,
  	76,82,3,20,10,0,77,82,3,28,14,0,78,82,3,14,7,0,79,82,3,24,12,0,80,82,
  	3,26,13,0,81,71,1,0,0,0,81,72,1,0,0,0,81,73,1,0,0,0,81,74,1,0,0,0,81,
  	75,1,0,0,0,81,76,1,0,0,0,81,77,1,0,0,0,81,78,1,0,0,0,81,79,1,0,0,0,81,
  	80,1,0,0,0,82,9,1,0,0,0,83,84,5,6,0,0,84,85,3,32,16,0,85,86,5,7,0,0,86,
  	87,5,8,0,0,87,88,5,36,0,0,88,11,1,0,0,0,89,90,5,9,0,0,90,91,3,32,16,0,
  	91,95,5,10,0,0,92,94,3,8,4,0,93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,
  	0,95,96,1,0,0,0,96,98,1,0,0,0,97,95,1,0,0,0,98,99,5,5,0,0,99,13,1,0,0,
  	0,100,101,5,8,0,0,101,103,5,36,0,0,102,104,5,11,0,0,103,102,1,0,0,0,103,
  	104,1,0,0,0,104,15,1,0,0,0,105,106,5,37,0,0,106,107,5,12,0,0,107,109,
  	3,36,18,0,108,110,5,11,0,0,109,108,1,0,0,0,109,110,1,0,0,0,110,17,1,0,
  	0,0,111,112,5,13,0,0,112,114,5,36,0,0,113,115,5,11,0,0,114,113,1,0,0,
  	0,114,115,1,0,0,0,115,19,1,0,0,0,116,117,5,14,0,0,117,119,5,15,0,0,118,
  	120,3,22,11,0,119,118,1,0,0,0,120,121,1,0,0,0,121,119,1,0,0,0,121,122,
  	1,0,0,0,122,123,1,0,0,0,123,124,5,16,0,0,124,21,1,0,0,0,125,126,5,36,
  	0,0,126,127,5,17,0,0,127,128,5,8,0,0,128,130,5,36,0,0,129,131,5,11,0,
  	0,130,129,1,0,0,0,130,131,1,0,0,0,131,23,1,0,0,0,132,133,5,18,0,0,133,
  	134,5,19,0,0,134,135,5,36,0,0,135,137,5,20,0,0,136,138,5,11,0,0,137,136,
  	1,0,0,0,137,138,1,0,0,0,138,25,1,0,0,0,139,140,5,21,0,0,140,141,5,19,
  	0,0,141,142,5,36,0,0,142,144,5,20,0,0,143,145,5,11,0,0,144,143,1,0,0,
  	0,144,145,1,0,0,0,145,27,1,0,0,0,146,147,5,22,0,0,147,148,5,38,0,0,148,
  	150,7,0,0,0,149,151,5,11,0,0,150,149,1,0,0,0,150,151,1,0,0,0,151,29,1,
  	0,0,0,152,153,5,37,0,0,153,162,5,19,0,0,154,159,3,36,18,0,155,156,5,25,
  	0,0,156,158,3,36,18,0,157,155,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,
  	159,160,1,0,0,0,160,163,1,0,0,0,161,159,1,0,0,0,162,154,1,0,0,0,162,163,
  	1,0,0,0,163,164,1,0,0,0,164,166,5,20,0,0,165,167,5,11,0,0,166,165,1,0,
  	0,0,166,167,1,0,0,0,167,31,1,0,0,0,168,169,5,37,0,0,169,178,5,19,0,0,
  	170,175,3,36,18,0,171,172,5,25,0,0,172,174,3,36,18,0,173,171,1,0,0,0,
  	174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,179,1,0,0,0,177,175,
  	1,0,0,0,178,170,1,0,0,0,178,179,1,0,0,0,179,180,1,0,0,0,180,186,5,20,
  	0,0,181,182,3,36,18,0,182,183,3,34,17,0,183,184,3,36,18,0,184,186,1,0,
  	0,0,185,168,1,0,0,0,185,181,1,0,0,0,186,33,1,0,0,0,187,188,7,1,0,0,188,
  	35,1,0,0,0,189,190,6,18,-1,0,190,191,5,19,0,0,191,192,3,36,18,0,192,193,
  	5,20,0,0,193,197,1,0,0,0,194,197,5,38,0,0,195,197,5,37,0,0,196,189,1,
  	0,0,0,196,194,1,0,0,0,196,195,1,0,0,0,197,212,1,0,0,0,198,199,10,7,0,
  	0,199,200,5,32,0,0,200,211,3,36,18,8,201,202,10,6,0,0,202,203,5,33,0,
  	0,203,211,3,36,18,7,204,205,10,5,0,0,205,206,5,34,0,0,206,211,3,36,18,
  	6,207,208,10,4,0,0,208,209,5,35,0,0,209,211,3,36,18,5,210,198,1,0,0,0,
  	210,201,1,0,0,0,210,204,1,0,0,0,210,207,1,0,0,0,211,214,1,0,0,0,212,210,
  	1,0,0,0,212,213,1,0,0,0,213,37,1,0,0,0,214,212,1,0,0,0,23,41,43,58,66,
  	81,95,103,109,114,121,130,137,144,150,159,162,166,175,178,185,196,210,
  	212
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  npcscriptParserStaticData = std::move(staticData);
}

}

NPCScriptParser::NPCScriptParser(TokenStream *input) : NPCScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NPCScriptParser::NPCScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NPCScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *npcscriptParserStaticData->atn, npcscriptParserStaticData->decisionToDFA, npcscriptParserStaticData->sharedContextCache, options);
}

NPCScriptParser::~NPCScriptParser() {
  delete _interpreter;
}

const atn::ATN& NPCScriptParser::getATN() const {
  return *npcscriptParserStaticData->atn;
}

std::string NPCScriptParser::getGrammarFileName() const {
  return "NPCScript.g4";
}

const std::vector<std::string>& NPCScriptParser::getRuleNames() const {
  return npcscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& NPCScriptParser::getVocabulary() const {
  return npcscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NPCScriptParser::getSerializedATN() const {
  return npcscriptParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

NPCScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::ProgramContext::EOF() {
  return getToken(NPCScriptParser::EOF, 0);
}

std::vector<NPCScriptParser::NpcDefinitionContext *> NPCScriptParser::ProgramContext::npcDefinition() {
  return getRuleContexts<NPCScriptParser::NpcDefinitionContext>();
}

NPCScriptParser::NpcDefinitionContext* NPCScriptParser::ProgramContext::npcDefinition(size_t i) {
  return getRuleContext<NPCScriptParser::NpcDefinitionContext>(i);
}

std::vector<NPCScriptParser::StateDefinitionContext *> NPCScriptParser::ProgramContext::stateDefinition() {
  return getRuleContexts<NPCScriptParser::StateDefinitionContext>();
}

NPCScriptParser::StateDefinitionContext* NPCScriptParser::ProgramContext::stateDefinition(size_t i) {
  return getRuleContext<NPCScriptParser::StateDefinitionContext>(i);
}

std::vector<NPCScriptParser::OnEventContext *> NPCScriptParser::ProgramContext::onEvent() {
  return getRuleContexts<NPCScriptParser::OnEventContext>();
}

NPCScriptParser::OnEventContext* NPCScriptParser::ProgramContext::onEvent(size_t i) {
  return getRuleContext<NPCScriptParser::OnEventContext>(i);
}


size_t NPCScriptParser::ProgramContext::getRuleIndex() const {
  return NPCScriptParser::RuleProgram;
}

void NPCScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void NPCScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any NPCScriptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::ProgramContext* NPCScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, NPCScriptParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 26) != 0)) {
      setState(41);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case NPCScriptParser::T__0: {
          setState(38);
          npcDefinition();
          break;
        }

        case NPCScriptParser::T__2: {
          setState(39);
          stateDefinition();
          break;
        }

        case NPCScriptParser::T__3: {
          setState(40);
          onEvent();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(46);
    match(NPCScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NpcDefinitionContext ------------------------------------------------------------------

NPCScriptParser::NpcDefinitionContext::NpcDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NPCScriptParser::NpcDefinitionContext::STRING() {
  return getTokens(NPCScriptParser::STRING);
}

tree::TerminalNode* NPCScriptParser::NpcDefinitionContext::STRING(size_t i) {
  return getToken(NPCScriptParser::STRING, i);
}


size_t NPCScriptParser::NpcDefinitionContext::getRuleIndex() const {
  return NPCScriptParser::RuleNpcDefinition;
}

void NPCScriptParser::NpcDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNpcDefinition(this);
}

void NPCScriptParser::NpcDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNpcDefinition(this);
}


std::any NPCScriptParser::NpcDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitNpcDefinition(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::NpcDefinitionContext* NPCScriptParser::npcDefinition() {
  NpcDefinitionContext *_localctx = _tracker.createInstance<NpcDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, NPCScriptParser::RuleNpcDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(NPCScriptParser::T__0);
    setState(49);
    match(NPCScriptParser::STRING);
    setState(50);
    match(NPCScriptParser::T__1);
    setState(51);
    match(NPCScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StateDefinitionContext ------------------------------------------------------------------

NPCScriptParser::StateDefinitionContext::StateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::StateDefinitionContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}

std::vector<NPCScriptParser::StatementContext *> NPCScriptParser::StateDefinitionContext::statement() {
  return getRuleContexts<NPCScriptParser::StatementContext>();
}

NPCScriptParser::StatementContext* NPCScriptParser::StateDefinitionContext::statement(size_t i) {
  return getRuleContext<NPCScriptParser::StatementContext>(i);
}


size_t NPCScriptParser::StateDefinitionContext::getRuleIndex() const {
  return NPCScriptParser::RuleStateDefinition;
}

void NPCScriptParser::StateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStateDefinition(this);
}

void NPCScriptParser::StateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStateDefinition(this);
}


std::any NPCScriptParser::StateDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitStateDefinition(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::StateDefinitionContext* NPCScriptParser::stateDefinition() {
  StateDefinitionContext *_localctx = _tracker.createInstance<StateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 4, NPCScriptParser::RuleStateDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(NPCScriptParser::T__2);
    setState(54);
    match(NPCScriptParser::STRING);
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137445532480) != 0)) {
      setState(55);
      statement();
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OnEventContext ------------------------------------------------------------------

NPCScriptParser::OnEventContext::OnEventContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::OnEventContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}

std::vector<NPCScriptParser::StatementContext *> NPCScriptParser::OnEventContext::statement() {
  return getRuleContexts<NPCScriptParser::StatementContext>();
}

NPCScriptParser::StatementContext* NPCScriptParser::OnEventContext::statement(size_t i) {
  return getRuleContext<NPCScriptParser::StatementContext>(i);
}


size_t NPCScriptParser::OnEventContext::getRuleIndex() const {
  return NPCScriptParser::RuleOnEvent;
}

void NPCScriptParser::OnEventContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnEvent(this);
}

void NPCScriptParser::OnEventContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnEvent(this);
}


std::any NPCScriptParser::OnEventContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitOnEvent(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::OnEventContext* NPCScriptParser::onEvent() {
  OnEventContext *_localctx = _tracker.createInstance<OnEventContext>(_ctx, getState());
  enterRule(_localctx, 6, NPCScriptParser::RuleOnEvent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(NPCScriptParser::T__3);
    setState(62);
    match(NPCScriptParser::STRING);
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137445532480) != 0)) {
      setState(63);
      statement();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(69);
    match(NPCScriptParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

NPCScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NPCScriptParser::IfStatementContext* NPCScriptParser::StatementContext::ifStatement() {
  return getRuleContext<NPCScriptParser::IfStatementContext>(0);
}

NPCScriptParser::WhileStatementContext* NPCScriptParser::StatementContext::whileStatement() {
  return getRuleContext<NPCScriptParser::WhileStatementContext>(0);
}

NPCScriptParser::ActionStatementContext* NPCScriptParser::StatementContext::actionStatement() {
  return getRuleContext<NPCScriptParser::ActionStatementContext>(0);
}

NPCScriptParser::AssignmentContext* NPCScriptParser::StatementContext::assignment() {
  return getRuleContext<NPCScriptParser::AssignmentContext>(0);
}

NPCScriptParser::SayStatementContext* NPCScriptParser::StatementContext::sayStatement() {
  return getRuleContext<NPCScriptParser::SayStatementContext>(0);
}

NPCScriptParser::ChoiceStatementContext* NPCScriptParser::StatementContext::choiceStatement() {
  return getRuleContext<NPCScriptParser::ChoiceStatementContext>(0);
}

NPCScriptParser::WaitStatementContext* NPCScriptParser::StatementContext::waitStatement() {
  return getRuleContext<NPCScriptParser::WaitStatementContext>(0);
}

NPCScriptParser::TransitionStatementContext* NPCScriptParser::StatementContext::transitionStatement() {
  return getRuleContext<NPCScriptParser::TransitionStatementContext>(0);
}

NPCScriptParser::EmotionStatementContext* NPCScriptParser::StatementContext::emotionStatement() {
  return getRuleContext<NPCScriptParser::EmotionStatementContext>(0);
}

NPCScriptParser::AnimationStatementContext* NPCScriptParser::StatementContext::animationStatement() {
  return getRuleContext<NPCScriptParser::AnimationStatementContext>(0);
}


size_t NPCScriptParser::StatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleStatement;
}

void NPCScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void NPCScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any NPCScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::StatementContext* NPCScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, NPCScriptParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(72);
      whileStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(73);
      actionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(74);
      assignment();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(75);
      sayStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(76);
      choiceStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(77);
      waitStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(78);
      transitionStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(79);
      emotionStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(80);
      animationStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

NPCScriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NPCScriptParser::ConditionContext* NPCScriptParser::IfStatementContext::condition() {
  return getRuleContext<NPCScriptParser::ConditionContext>(0);
}

tree::TerminalNode* NPCScriptParser::IfStatementContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}


size_t NPCScriptParser::IfStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleIfStatement;
}

void NPCScriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void NPCScriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any NPCScriptParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::IfStatementContext* NPCScriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, NPCScriptParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(NPCScriptParser::T__5);
    setState(84);
    condition();
    setState(85);
    match(NPCScriptParser::T__6);
    setState(86);
    match(NPCScriptParser::T__7);
    setState(87);
    match(NPCScriptParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

NPCScriptParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NPCScriptParser::ConditionContext* NPCScriptParser::WhileStatementContext::condition() {
  return getRuleContext<NPCScriptParser::ConditionContext>(0);
}

std::vector<NPCScriptParser::StatementContext *> NPCScriptParser::WhileStatementContext::statement() {
  return getRuleContexts<NPCScriptParser::StatementContext>();
}

NPCScriptParser::StatementContext* NPCScriptParser::WhileStatementContext::statement(size_t i) {
  return getRuleContext<NPCScriptParser::StatementContext>(i);
}


size_t NPCScriptParser::WhileStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleWhileStatement;
}

void NPCScriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void NPCScriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any NPCScriptParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::WhileStatementContext* NPCScriptParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, NPCScriptParser::RuleWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(NPCScriptParser::T__8);
    setState(90);
    condition();
    setState(91);
    match(NPCScriptParser::T__9);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137445532480) != 0)) {
      setState(92);
      statement();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(NPCScriptParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TransitionStatementContext ------------------------------------------------------------------

NPCScriptParser::TransitionStatementContext::TransitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::TransitionStatementContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}


size_t NPCScriptParser::TransitionStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleTransitionStatement;
}

void NPCScriptParser::TransitionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTransitionStatement(this);
}

void NPCScriptParser::TransitionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTransitionStatement(this);
}


std::any NPCScriptParser::TransitionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitTransitionStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::TransitionStatementContext* NPCScriptParser::transitionStatement() {
  TransitionStatementContext *_localctx = _tracker.createInstance<TransitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, NPCScriptParser::RuleTransitionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(NPCScriptParser::T__7);
    setState(101);
    match(NPCScriptParser::STRING);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(102);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

NPCScriptParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::AssignmentContext::IDENTIFIER() {
  return getToken(NPCScriptParser::IDENTIFIER, 0);
}

NPCScriptParser::ExprContext* NPCScriptParser::AssignmentContext::expr() {
  return getRuleContext<NPCScriptParser::ExprContext>(0);
}


size_t NPCScriptParser::AssignmentContext::getRuleIndex() const {
  return NPCScriptParser::RuleAssignment;
}

void NPCScriptParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void NPCScriptParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any NPCScriptParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::AssignmentContext* NPCScriptParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 16, NPCScriptParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(NPCScriptParser::IDENTIFIER);
    setState(106);
    match(NPCScriptParser::T__11);
    setState(107);
    expr(0);
    setState(109);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(108);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SayStatementContext ------------------------------------------------------------------

NPCScriptParser::SayStatementContext::SayStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::SayStatementContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}


size_t NPCScriptParser::SayStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleSayStatement;
}

void NPCScriptParser::SayStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSayStatement(this);
}

void NPCScriptParser::SayStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSayStatement(this);
}


std::any NPCScriptParser::SayStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitSayStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::SayStatementContext* NPCScriptParser::sayStatement() {
  SayStatementContext *_localctx = _tracker.createInstance<SayStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, NPCScriptParser::RuleSayStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(NPCScriptParser::T__12);
    setState(112);
    match(NPCScriptParser::STRING);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(113);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChoiceStatementContext ------------------------------------------------------------------

NPCScriptParser::ChoiceStatementContext::ChoiceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NPCScriptParser::ChoiceOptionContext *> NPCScriptParser::ChoiceStatementContext::choiceOption() {
  return getRuleContexts<NPCScriptParser::ChoiceOptionContext>();
}

NPCScriptParser::ChoiceOptionContext* NPCScriptParser::ChoiceStatementContext::choiceOption(size_t i) {
  return getRuleContext<NPCScriptParser::ChoiceOptionContext>(i);
}


size_t NPCScriptParser::ChoiceStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleChoiceStatement;
}

void NPCScriptParser::ChoiceStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChoiceStatement(this);
}

void NPCScriptParser::ChoiceStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChoiceStatement(this);
}


std::any NPCScriptParser::ChoiceStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitChoiceStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::ChoiceStatementContext* NPCScriptParser::choiceStatement() {
  ChoiceStatementContext *_localctx = _tracker.createInstance<ChoiceStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, NPCScriptParser::RuleChoiceStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(NPCScriptParser::T__13);
    setState(117);
    match(NPCScriptParser::T__14);
    setState(119); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(118);
      choiceOption();
      setState(121); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == NPCScriptParser::STRING);
    setState(123);
    match(NPCScriptParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChoiceOptionContext ------------------------------------------------------------------

NPCScriptParser::ChoiceOptionContext::ChoiceOptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> NPCScriptParser::ChoiceOptionContext::STRING() {
  return getTokens(NPCScriptParser::STRING);
}

tree::TerminalNode* NPCScriptParser::ChoiceOptionContext::STRING(size_t i) {
  return getToken(NPCScriptParser::STRING, i);
}


size_t NPCScriptParser::ChoiceOptionContext::getRuleIndex() const {
  return NPCScriptParser::RuleChoiceOption;
}

void NPCScriptParser::ChoiceOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChoiceOption(this);
}

void NPCScriptParser::ChoiceOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChoiceOption(this);
}


std::any NPCScriptParser::ChoiceOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitChoiceOption(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::ChoiceOptionContext* NPCScriptParser::choiceOption() {
  ChoiceOptionContext *_localctx = _tracker.createInstance<ChoiceOptionContext>(_ctx, getState());
  enterRule(_localctx, 22, NPCScriptParser::RuleChoiceOption);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(NPCScriptParser::STRING);
    setState(126);
    match(NPCScriptParser::T__16);
    setState(127);
    match(NPCScriptParser::T__7);
    setState(128);
    match(NPCScriptParser::STRING);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(129);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmotionStatementContext ------------------------------------------------------------------

NPCScriptParser::EmotionStatementContext::EmotionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::EmotionStatementContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}


size_t NPCScriptParser::EmotionStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleEmotionStatement;
}

void NPCScriptParser::EmotionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmotionStatement(this);
}

void NPCScriptParser::EmotionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmotionStatement(this);
}


std::any NPCScriptParser::EmotionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitEmotionStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::EmotionStatementContext* NPCScriptParser::emotionStatement() {
  EmotionStatementContext *_localctx = _tracker.createInstance<EmotionStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, NPCScriptParser::RuleEmotionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(NPCScriptParser::T__17);
    setState(133);
    match(NPCScriptParser::T__18);
    setState(134);
    match(NPCScriptParser::STRING);
    setState(135);
    match(NPCScriptParser::T__19);
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(136);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnimationStatementContext ------------------------------------------------------------------

NPCScriptParser::AnimationStatementContext::AnimationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::AnimationStatementContext::STRING() {
  return getToken(NPCScriptParser::STRING, 0);
}


size_t NPCScriptParser::AnimationStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleAnimationStatement;
}

void NPCScriptParser::AnimationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnimationStatement(this);
}

void NPCScriptParser::AnimationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnimationStatement(this);
}


std::any NPCScriptParser::AnimationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitAnimationStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::AnimationStatementContext* NPCScriptParser::animationStatement() {
  AnimationStatementContext *_localctx = _tracker.createInstance<AnimationStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, NPCScriptParser::RuleAnimationStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(NPCScriptParser::T__20);
    setState(140);
    match(NPCScriptParser::T__18);
    setState(141);
    match(NPCScriptParser::STRING);
    setState(142);
    match(NPCScriptParser::T__19);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(143);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WaitStatementContext ------------------------------------------------------------------

NPCScriptParser::WaitStatementContext::WaitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::WaitStatementContext::NUMBER() {
  return getToken(NPCScriptParser::NUMBER, 0);
}


size_t NPCScriptParser::WaitStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleWaitStatement;
}

void NPCScriptParser::WaitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWaitStatement(this);
}

void NPCScriptParser::WaitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWaitStatement(this);
}


std::any NPCScriptParser::WaitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitWaitStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::WaitStatementContext* NPCScriptParser::waitStatement() {
  WaitStatementContext *_localctx = _tracker.createInstance<WaitStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, NPCScriptParser::RuleWaitStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(NPCScriptParser::T__21);
    setState(147);
    match(NPCScriptParser::NUMBER);
    setState(148);
    _la = _input->LA(1);
    if (!(_la == NPCScriptParser::T__22

    || _la == NPCScriptParser::T__23)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(149);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionStatementContext ------------------------------------------------------------------

NPCScriptParser::ActionStatementContext::ActionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::ActionStatementContext::IDENTIFIER() {
  return getToken(NPCScriptParser::IDENTIFIER, 0);
}

std::vector<NPCScriptParser::ExprContext *> NPCScriptParser::ActionStatementContext::expr() {
  return getRuleContexts<NPCScriptParser::ExprContext>();
}

NPCScriptParser::ExprContext* NPCScriptParser::ActionStatementContext::expr(size_t i) {
  return getRuleContext<NPCScriptParser::ExprContext>(i);
}


size_t NPCScriptParser::ActionStatementContext::getRuleIndex() const {
  return NPCScriptParser::RuleActionStatement;
}

void NPCScriptParser::ActionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActionStatement(this);
}

void NPCScriptParser::ActionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActionStatement(this);
}


std::any NPCScriptParser::ActionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitActionStatement(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::ActionStatementContext* NPCScriptParser::actionStatement() {
  ActionStatementContext *_localctx = _tracker.createInstance<ActionStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, NPCScriptParser::RuleActionStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(NPCScriptParser::IDENTIFIER);
    setState(153);
    match(NPCScriptParser::T__18);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 412317384704) != 0)) {
      setState(154);
      expr(0);
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == NPCScriptParser::T__24) {
        setState(155);
        match(NPCScriptParser::T__24);
        setState(156);
        expr(0);
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(164);
    match(NPCScriptParser::T__19);
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == NPCScriptParser::T__10) {
      setState(165);
      match(NPCScriptParser::T__10);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

NPCScriptParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::ConditionContext::IDENTIFIER() {
  return getToken(NPCScriptParser::IDENTIFIER, 0);
}

std::vector<NPCScriptParser::ExprContext *> NPCScriptParser::ConditionContext::expr() {
  return getRuleContexts<NPCScriptParser::ExprContext>();
}

NPCScriptParser::ExprContext* NPCScriptParser::ConditionContext::expr(size_t i) {
  return getRuleContext<NPCScriptParser::ExprContext>(i);
}

NPCScriptParser::ComparatorContext* NPCScriptParser::ConditionContext::comparator() {
  return getRuleContext<NPCScriptParser::ComparatorContext>(0);
}


size_t NPCScriptParser::ConditionContext::getRuleIndex() const {
  return NPCScriptParser::RuleCondition;
}

void NPCScriptParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void NPCScriptParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


std::any NPCScriptParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::ConditionContext* NPCScriptParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 32, NPCScriptParser::RuleCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      match(NPCScriptParser::IDENTIFIER);
      setState(169);
      match(NPCScriptParser::T__18);
      setState(178);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 412317384704) != 0)) {
        setState(170);
        expr(0);
        setState(175);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == NPCScriptParser::T__24) {
          setState(171);
          match(NPCScriptParser::T__24);
          setState(172);
          expr(0);
          setState(177);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(180);
      match(NPCScriptParser::T__19);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      expr(0);
      setState(182);
      comparator();
      setState(183);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparatorContext ------------------------------------------------------------------

NPCScriptParser::ComparatorContext::ComparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NPCScriptParser::ComparatorContext::EQ() {
  return getToken(NPCScriptParser::EQ, 0);
}

tree::TerminalNode* NPCScriptParser::ComparatorContext::NEQ() {
  return getToken(NPCScriptParser::NEQ, 0);
}

tree::TerminalNode* NPCScriptParser::ComparatorContext::LT() {
  return getToken(NPCScriptParser::LT, 0);
}

tree::TerminalNode* NPCScriptParser::ComparatorContext::GT() {
  return getToken(NPCScriptParser::GT, 0);
}

tree::TerminalNode* NPCScriptParser::ComparatorContext::LEQ() {
  return getToken(NPCScriptParser::LEQ, 0);
}

tree::TerminalNode* NPCScriptParser::ComparatorContext::GEQ() {
  return getToken(NPCScriptParser::GEQ, 0);
}


size_t NPCScriptParser::ComparatorContext::getRuleIndex() const {
  return NPCScriptParser::RuleComparator;
}

void NPCScriptParser::ComparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparator(this);
}

void NPCScriptParser::ComparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparator(this);
}


std::any NPCScriptParser::ComparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitComparator(this);
  else
    return visitor->visitChildren(this);
}

NPCScriptParser::ComparatorContext* NPCScriptParser::comparator() {
  ComparatorContext *_localctx = _tracker.createInstance<ComparatorContext>(_ctx, getState());
  enterRule(_localctx, 34, NPCScriptParser::RuleComparator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4227858432) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

NPCScriptParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NPCScriptParser::ExprContext *> NPCScriptParser::ExprContext::expr() {
  return getRuleContexts<NPCScriptParser::ExprContext>();
}

NPCScriptParser::ExprContext* NPCScriptParser::ExprContext::expr(size_t i) {
  return getRuleContext<NPCScriptParser::ExprContext>(i);
}

tree::TerminalNode* NPCScriptParser::ExprContext::NUMBER() {
  return getToken(NPCScriptParser::NUMBER, 0);
}

tree::TerminalNode* NPCScriptParser::ExprContext::IDENTIFIER() {
  return getToken(NPCScriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* NPCScriptParser::ExprContext::PLUS() {
  return getToken(NPCScriptParser::PLUS, 0);
}

tree::TerminalNode* NPCScriptParser::ExprContext::MINUS() {
  return getToken(NPCScriptParser::MINUS, 0);
}

tree::TerminalNode* NPCScriptParser::ExprContext::STAR() {
  return getToken(NPCScriptParser::STAR, 0);
}

tree::TerminalNode* NPCScriptParser::ExprContext::SLASH() {
  return getToken(NPCScriptParser::SLASH, 0);
}


size_t NPCScriptParser::ExprContext::getRuleIndex() const {
  return NPCScriptParser::RuleExpr;
}

void NPCScriptParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void NPCScriptParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NPCScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any NPCScriptParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<NPCScriptVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


NPCScriptParser::ExprContext* NPCScriptParser::expr() {
   return expr(0);
}

NPCScriptParser::ExprContext* NPCScriptParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NPCScriptParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  NPCScriptParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, NPCScriptParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NPCScriptParser::T__18: {
        setState(190);
        match(NPCScriptParser::T__18);
        setState(191);
        expr(0);
        setState(192);
        match(NPCScriptParser::T__19);
        break;
      }

      case NPCScriptParser::NUMBER: {
        setState(194);
        match(NPCScriptParser::NUMBER);
        break;
      }

      case NPCScriptParser::IDENTIFIER: {
        setState(195);
        match(NPCScriptParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(212);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(210);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(198);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(199);
          match(NPCScriptParser::PLUS);
          setState(200);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(201);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(202);
          match(NPCScriptParser::MINUS);
          setState(203);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(204);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(205);
          match(NPCScriptParser::STAR);
          setState(206);
          expr(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(207);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(208);
          match(NPCScriptParser::SLASH);
          setState(209);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(214);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool NPCScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NPCScriptParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void NPCScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  npcscriptParserInitialize();
#else
  ::antlr4::internal::call_once(npcscriptParserOnceFlag, npcscriptParserInitialize);
#endif
}
