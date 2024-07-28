
// Generated from antlr/Jinja.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "JinjaParser.h"


namespace ajinja {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by JinjaParser.
 */
class  JinjaVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by JinjaParser.
   */
    virtual antlrcpp::Any visitJinjaTemplate(JinjaParser::JinjaTemplateContext *context) = 0;

    virtual antlrcpp::Any visitStatement(JinjaParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(JinjaParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(JinjaParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitSetStatement(JinjaParser::SetStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(JinjaParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticExpression(JinjaParser::ArithmeticExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticTerm(JinjaParser::ArithmeticTermContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticFactor(JinjaParser::ArithmeticFactorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpression(JinjaParser::LogicalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalTerm(JinjaParser::LogicalTermContext *context) = 0;

    virtual antlrcpp::Any visitLogicalFactor(JinjaParser::LogicalFactorContext *context) = 0;

    virtual antlrcpp::Any visitComparisonExpression(JinjaParser::ComparisonExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(JinjaParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitLiteralExpression(JinjaParser::LiteralExpressionContext *context) = 0;


};

}  // namespace ajinja
