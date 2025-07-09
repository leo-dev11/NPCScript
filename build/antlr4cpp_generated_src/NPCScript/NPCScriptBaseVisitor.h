
// Generated from /compilers/NPCScript/NPCScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NPCScriptVisitor.h"


/**
 * This class provides an empty implementation of NPCScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NPCScriptBaseVisitor : public NPCScriptVisitor {
public:

  virtual std::any visitProgram(NPCScriptParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNpcDefinition(NPCScriptParser::NpcDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStateDefinition(NPCScriptParser::StateDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnEvent(NPCScriptParser::OnEventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(NPCScriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(NPCScriptParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(NPCScriptParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransitionStatement(NPCScriptParser::TransitionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(NPCScriptParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSayStatement(NPCScriptParser::SayStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceStatement(NPCScriptParser::ChoiceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChoiceOption(NPCScriptParser::ChoiceOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmotionStatement(NPCScriptParser::EmotionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnimationStatement(NPCScriptParser::AnimationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWaitStatement(NPCScriptParser::WaitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitActionStatement(NPCScriptParser::ActionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(NPCScriptParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparator(NPCScriptParser::ComparatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(NPCScriptParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

