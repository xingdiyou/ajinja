#pragma once

#include <memory>
#include <string>
#include <variant>
#include <vector>

namespace ajinja {

class Expression;
class Statement;
class JinjaTemplate;

using ExpressionPtr = std::shared_ptr<Expression>;
using StatementPtr = std::shared_ptr<Statement>;
using JinjaTemplatePtr = std::shared_ptr<JinjaTemplate>;

class JinjaTemplate {
public:
  using Segment = std::variant<std::string, StatementPtr, ExpressionPtr>;
  JinjaTemplate(const std::vector<Segment> &segments);

private:
  std::vector<Segment> segments_;
};

class Statement {
public:
  virtual ~Statement();
};

class IfStatement : public Statement {
public:
  using Condition = std::pair<ExpressionPtr, JinjaTemplatePtr>;

  IfStatement(const std::vector<Condition> &conditions,
              JinjaTemplatePtr else_body);

private:
  std::vector<Condition> conditions_;
  JinjaTemplatePtr else_body_;
};

class ForStatement : public Statement {
public:
  ForStatement(const std::string &id, ExpressionPtr expression,
               JinjaTemplatePtr body);

private:
  std::string id_;
  ExpressionPtr expression_;
  JinjaTemplatePtr body_;
};

class SetStatement : public Statement {
public:
  SetStatement(const std::string &id, ExpressionPtr expression);

private:
  std::string id_;
  ExpressionPtr expression_;
};

class Expression {};

class ArithmeticExpression : public Expression {
public:
  enum class Op { Add, Substract, Multiply, Divide };

  ArithmeticExpression(ExpressionPtr left, Op op, ExpressionPtr right);

private:
  ExpressionPtr left_;
  Op op_;
  ExpressionPtr right_;
};

class LogicalExpression : public Expression {
public:
  enum class Op { And, Or, Not };

  LogicalExpression(ExpressionPtr left, Op op, ExpressionPtr right);

  LogicalExpression(Op op, ExpressionPtr operand);

private:
  ExpressionPtr left_;
  Op op_;
  ExpressionPtr right_;
  ExpressionPtr operand_;
};

class FunctionCall : public Expression {
public:
  FunctionCall(const std::string &name,
               const std::vector<ExpressionPtr> &arguments);

private:
  std::string name_;
  std::vector<ExpressionPtr> arguments_;
};

class LiteralExpression : public Expression {
public:
  LiteralExpression(const std::string &value);

  LiteralExpression(double value);

  LiteralExpression(bool value);

private:
  std::variant<std::string, double, bool> value_;
};

} // namespace ajinja
