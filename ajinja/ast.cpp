#include "ast.h"

namespace ajinja {

JinjaTemplate::JinjaTemplate(const std::vector<Segment> &segments)
    : segments_(segments) {}

IfStatement::IfStatement(const std::vector<Condition> &conditions,
                         JinjaTemplatePtr else_body)
    : conditions_(conditions), else_body_(else_body) {}

ForStatement::ForStatement(const std::string &id, ExpressionPtr expression,
                           JinjaTemplatePtr body)
    : id_(id), expression_(expression), body_(body) {}

SetStatement::SetStatement(const std::string &id, ExpressionPtr expression)
    : id_(id), expression_(expression) {}

ArithmeticExpression::ArithmeticExpression(ExpressionPtr left, Op op,
                                           ExpressionPtr right)
    : left_(left), op_(op), right_(right) {}

LogicalExpression::LogicalExpression(ExpressionPtr left, Op op,
                                     ExpressionPtr right)
    : left_(left), op_(op), right_(right) {}

LogicalExpression::LogicalExpression(Op op, ExpressionPtr operand)
    : op_(op), operand_(operand) {}

FunctionCall::FunctionCall(const std::string &name,
                           const std::vector<ExpressionPtr> &arguments)
    : name_(name), arguments_(arguments) {}

LiteralExpression::LiteralExpression(const std::string &value)
    : value_(value) {}

LiteralExpression::LiteralExpression(double value) : value_(value) {}

LiteralExpression::LiteralExpression(bool value) : value_(value) {}

} // namespace ajinja
