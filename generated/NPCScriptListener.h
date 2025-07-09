
// Generated from NPCScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NPCScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NPCScriptParser.
 */
class  NPCScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(NPCScriptParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(NPCScriptParser::ProgramContext *ctx) = 0;

  virtual void enterNpcDefinition(NPCScriptParser::NpcDefinitionContext *ctx) = 0;
  virtual void exitNpcDefinition(NPCScriptParser::NpcDefinitionContext *ctx) = 0;

  virtual void enterStateDefinition(NPCScriptParser::StateDefinitionContext *ctx) = 0;
  virtual void exitStateDefinition(NPCScriptParser::StateDefinitionContext *ctx) = 0;

  virtual void enterOnEvent(NPCScriptParser::OnEventContext *ctx) = 0;
  virtual void exitOnEvent(NPCScriptParser::OnEventContext *ctx) = 0;

  virtual void enterStatement(NPCScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(NPCScriptParser::StatementContext *ctx) = 0;

  virtual void enterIfStatement(NPCScriptParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(NPCScriptParser::IfStatementContext *ctx) = 0;

  virtual void enterWhileStatement(NPCScriptParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(NPCScriptParser::WhileStatementContext *ctx) = 0;

  virtual void enterTransitionStatement(NPCScriptParser::TransitionStatementContext *ctx) = 0;
  virtual void exitTransitionStatement(NPCScriptParser::TransitionStatementContext *ctx) = 0;

  virtual void enterAssignment(NPCScriptParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(NPCScriptParser::AssignmentContext *ctx) = 0;

  virtual void enterSayStatement(NPCScriptParser::SayStatementContext *ctx) = 0;
  virtual void exitSayStatement(NPCScriptParser::SayStatementContext *ctx) = 0;

  virtual void enterChoiceStatement(NPCScriptParser::ChoiceStatementContext *ctx) = 0;
  virtual void exitChoiceStatement(NPCScriptParser::ChoiceStatementContext *ctx) = 0;

  virtual void enterChoiceOption(NPCScriptParser::ChoiceOptionContext *ctx) = 0;
  virtual void exitChoiceOption(NPCScriptParser::ChoiceOptionContext *ctx) = 0;

  virtual void enterEmotionStatement(NPCScriptParser::EmotionStatementContext *ctx) = 0;
  virtual void exitEmotionStatement(NPCScriptParser::EmotionStatementContext *ctx) = 0;

  virtual void enterAnimationStatement(NPCScriptParser::AnimationStatementContext *ctx) = 0;
  virtual void exitAnimationStatement(NPCScriptParser::AnimationStatementContext *ctx) = 0;

  virtual void enterWaitStatement(NPCScriptParser::WaitStatementContext *ctx) = 0;
  virtual void exitWaitStatement(NPCScriptParser::WaitStatementContext *ctx) = 0;

  virtual void enterActionStatement(NPCScriptParser::ActionStatementContext *ctx) = 0;
  virtual void exitActionStatement(NPCScriptParser::ActionStatementContext *ctx) = 0;

  virtual void enterCondition(NPCScriptParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(NPCScriptParser::ConditionContext *ctx) = 0;

  virtual void enterComparator(NPCScriptParser::ComparatorContext *ctx) = 0;
  virtual void exitComparator(NPCScriptParser::ComparatorContext *ctx) = 0;

  virtual void enterExpr(NPCScriptParser::ExprContext *ctx) = 0;
  virtual void exitExpr(NPCScriptParser::ExprContext *ctx) = 0;


};

