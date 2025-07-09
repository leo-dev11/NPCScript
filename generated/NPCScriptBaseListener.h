
// Generated from NPCScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NPCScriptListener.h"


/**
 * This class provides an empty implementation of NPCScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NPCScriptBaseListener : public NPCScriptListener {
public:

  virtual void enterProgram(NPCScriptParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(NPCScriptParser::ProgramContext * /*ctx*/) override { }

  virtual void enterNpcDefinition(NPCScriptParser::NpcDefinitionContext * /*ctx*/) override { }
  virtual void exitNpcDefinition(NPCScriptParser::NpcDefinitionContext * /*ctx*/) override { }

  virtual void enterStateDefinition(NPCScriptParser::StateDefinitionContext * /*ctx*/) override { }
  virtual void exitStateDefinition(NPCScriptParser::StateDefinitionContext * /*ctx*/) override { }

  virtual void enterOnEvent(NPCScriptParser::OnEventContext * /*ctx*/) override { }
  virtual void exitOnEvent(NPCScriptParser::OnEventContext * /*ctx*/) override { }

  virtual void enterStatement(NPCScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(NPCScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(NPCScriptParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(NPCScriptParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(NPCScriptParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(NPCScriptParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterTransitionStatement(NPCScriptParser::TransitionStatementContext * /*ctx*/) override { }
  virtual void exitTransitionStatement(NPCScriptParser::TransitionStatementContext * /*ctx*/) override { }

  virtual void enterAssignment(NPCScriptParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(NPCScriptParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterSayStatement(NPCScriptParser::SayStatementContext * /*ctx*/) override { }
  virtual void exitSayStatement(NPCScriptParser::SayStatementContext * /*ctx*/) override { }

  virtual void enterChoiceStatement(NPCScriptParser::ChoiceStatementContext * /*ctx*/) override { }
  virtual void exitChoiceStatement(NPCScriptParser::ChoiceStatementContext * /*ctx*/) override { }

  virtual void enterChoiceOption(NPCScriptParser::ChoiceOptionContext * /*ctx*/) override { }
  virtual void exitChoiceOption(NPCScriptParser::ChoiceOptionContext * /*ctx*/) override { }

  virtual void enterEmotionStatement(NPCScriptParser::EmotionStatementContext * /*ctx*/) override { }
  virtual void exitEmotionStatement(NPCScriptParser::EmotionStatementContext * /*ctx*/) override { }

  virtual void enterAnimationStatement(NPCScriptParser::AnimationStatementContext * /*ctx*/) override { }
  virtual void exitAnimationStatement(NPCScriptParser::AnimationStatementContext * /*ctx*/) override { }

  virtual void enterWaitStatement(NPCScriptParser::WaitStatementContext * /*ctx*/) override { }
  virtual void exitWaitStatement(NPCScriptParser::WaitStatementContext * /*ctx*/) override { }

  virtual void enterActionStatement(NPCScriptParser::ActionStatementContext * /*ctx*/) override { }
  virtual void exitActionStatement(NPCScriptParser::ActionStatementContext * /*ctx*/) override { }

  virtual void enterCondition(NPCScriptParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(NPCScriptParser::ConditionContext * /*ctx*/) override { }

  virtual void enterComparator(NPCScriptParser::ComparatorContext * /*ctx*/) override { }
  virtual void exitComparator(NPCScriptParser::ComparatorContext * /*ctx*/) override { }

  virtual void enterExpr(NPCScriptParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(NPCScriptParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

