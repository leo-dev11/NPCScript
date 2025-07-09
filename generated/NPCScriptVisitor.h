
// Generated from NPCScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "NPCScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by NPCScriptParser.
 */
class  NPCScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by NPCScriptParser.
   */
    virtual std::any visitProgram(NPCScriptParser::ProgramContext *context) = 0;

    virtual std::any visitNpcDefinition(NPCScriptParser::NpcDefinitionContext *context) = 0;

    virtual std::any visitStateDefinition(NPCScriptParser::StateDefinitionContext *context) = 0;

    virtual std::any visitOnEvent(NPCScriptParser::OnEventContext *context) = 0;

    virtual std::any visitStatement(NPCScriptParser::StatementContext *context) = 0;

    virtual std::any visitIfStatement(NPCScriptParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(NPCScriptParser::WhileStatementContext *context) = 0;

    virtual std::any visitTransitionStatement(NPCScriptParser::TransitionStatementContext *context) = 0;

    virtual std::any visitAssignment(NPCScriptParser::AssignmentContext *context) = 0;

    virtual std::any visitSayStatement(NPCScriptParser::SayStatementContext *context) = 0;

    virtual std::any visitChoiceStatement(NPCScriptParser::ChoiceStatementContext *context) = 0;

    virtual std::any visitChoiceOption(NPCScriptParser::ChoiceOptionContext *context) = 0;

    virtual std::any visitEmotionStatement(NPCScriptParser::EmotionStatementContext *context) = 0;

    virtual std::any visitAnimationStatement(NPCScriptParser::AnimationStatementContext *context) = 0;

    virtual std::any visitWaitStatement(NPCScriptParser::WaitStatementContext *context) = 0;

    virtual std::any visitActionStatement(NPCScriptParser::ActionStatementContext *context) = 0;

    virtual std::any visitCondition(NPCScriptParser::ConditionContext *context) = 0;

    virtual std::any visitComparator(NPCScriptParser::ComparatorContext *context) = 0;

    virtual std::any visitExpr(NPCScriptParser::ExprContext *context) = 0;


};

