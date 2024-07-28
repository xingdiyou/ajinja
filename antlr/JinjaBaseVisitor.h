
// Generated from antlr/Jinja.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "JinjaVisitor.h"


namespace ajinja {

/**
 * This class provides an empty implementation of JinjaVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  JinjaBaseVisitor : public JinjaVisitor {
public:

  virtual antlrcpp::Any visitJinjaTemplate(JinjaParser::JinjaTemplateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(JinjaParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(JinjaParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(JinjaParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSetStatement(JinjaParser::SetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(JinjaParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticExpression(JinjaParser::ArithmeticExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticTerm(JinjaParser::ArithmeticTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticFactor(JinjaParser::ArithmeticFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalExpression(JinjaParser::LogicalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalTerm(JinjaParser::LogicalTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalFactor(JinjaParser::LogicalFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonExpression(JinjaParser::ComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(JinjaParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralExpression(JinjaParser::LiteralExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace ajinja
