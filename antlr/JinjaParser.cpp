
// Generated from antlr/Jinja.g4 by ANTLR 4.7.2


#include "JinjaVisitor.h"

#include "JinjaParser.h"


using namespace antlrcpp;
using namespace ajinja;
using namespace antlr4;

JinjaParser::JinjaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JinjaParser::~JinjaParser() {
  delete _interpreter;
}

std::string JinjaParser::getGrammarFileName() const {
  return "Jinja.g4";
}

const std::vector<std::string>& JinjaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JinjaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- JinjaTemplateContext ------------------------------------------------------------------

JinjaParser::JinjaTemplateContext::JinjaTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JinjaParser::JinjaTemplateContext::TEXT() {
  return getTokens(JinjaParser::TEXT);
}

tree::TerminalNode* JinjaParser::JinjaTemplateContext::TEXT(size_t i) {
  return getToken(JinjaParser::TEXT, i);
}

std::vector<JinjaParser::StatementContext *> JinjaParser::JinjaTemplateContext::statement() {
  return getRuleContexts<JinjaParser::StatementContext>();
}

JinjaParser::StatementContext* JinjaParser::JinjaTemplateContext::statement(size_t i) {
  return getRuleContext<JinjaParser::StatementContext>(i);
}

std::vector<JinjaParser::ExpressionContext *> JinjaParser::JinjaTemplateContext::expression() {
  return getRuleContexts<JinjaParser::ExpressionContext>();
}

JinjaParser::ExpressionContext* JinjaParser::JinjaTemplateContext::expression(size_t i) {
  return getRuleContext<JinjaParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> JinjaParser::JinjaTemplateContext::WS() {
  return getTokens(JinjaParser::WS);
}

tree::TerminalNode* JinjaParser::JinjaTemplateContext::WS(size_t i) {
  return getToken(JinjaParser::WS, i);
}


size_t JinjaParser::JinjaTemplateContext::getRuleIndex() const {
  return JinjaParser::RuleJinjaTemplate;
}

antlrcpp::Any JinjaParser::JinjaTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitJinjaTemplate(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::JinjaTemplateContext* JinjaParser::jinjaTemplate() {
  JinjaTemplateContext *_localctx = _tracker.createInstance<JinjaTemplateContext>(_ctx, getState());
  enterRule(_localctx, 0, JinjaParser::RuleJinjaTemplate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(44);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(42);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case JinjaParser::TEXT: {
            setState(30);
            match(JinjaParser::TEXT);
            break;
          }

          case JinjaParser::T__2: {
            setState(31);
            statement();
            break;
          }

          case JinjaParser::T__0: {
            setState(32);
            match(JinjaParser::T__0);
            setState(34);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JinjaParser::WS) {
              setState(33);
              match(JinjaParser::WS);
            }
            setState(36);
            expression();
            setState(38);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == JinjaParser::WS) {
              setState(37);
              match(JinjaParser::WS);
            }
            setState(40);
            match(JinjaParser::T__1);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(46);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

JinjaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JinjaParser::IfStatementContext* JinjaParser::StatementContext::ifStatement() {
  return getRuleContext<JinjaParser::IfStatementContext>(0);
}

JinjaParser::ForStatementContext* JinjaParser::StatementContext::forStatement() {
  return getRuleContext<JinjaParser::ForStatementContext>(0);
}

JinjaParser::SetStatementContext* JinjaParser::StatementContext::setStatement() {
  return getRuleContext<JinjaParser::SetStatementContext>(0);
}


size_t JinjaParser::StatementContext::getRuleIndex() const {
  return JinjaParser::RuleStatement;
}

antlrcpp::Any JinjaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::StatementContext* JinjaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, JinjaParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);
      forStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(49);
      setStatement();
      break;
    }

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

JinjaParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JinjaParser::IfStatementContext::WS() {
  return getTokens(JinjaParser::WS);
}

tree::TerminalNode* JinjaParser::IfStatementContext::WS(size_t i) {
  return getToken(JinjaParser::WS, i);
}

std::vector<JinjaParser::ExpressionContext *> JinjaParser::IfStatementContext::expression() {
  return getRuleContexts<JinjaParser::ExpressionContext>();
}

JinjaParser::ExpressionContext* JinjaParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<JinjaParser::ExpressionContext>(i);
}

std::vector<JinjaParser::JinjaTemplateContext *> JinjaParser::IfStatementContext::jinjaTemplate() {
  return getRuleContexts<JinjaParser::JinjaTemplateContext>();
}

JinjaParser::JinjaTemplateContext* JinjaParser::IfStatementContext::jinjaTemplate(size_t i) {
  return getRuleContext<JinjaParser::JinjaTemplateContext>(i);
}


size_t JinjaParser::IfStatementContext::getRuleIndex() const {
  return JinjaParser::RuleIfStatement;
}

antlrcpp::Any JinjaParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::IfStatementContext* JinjaParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, JinjaParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(JinjaParser::T__2);
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(53);
      match(JinjaParser::WS);
    }
    setState(56);
    match(JinjaParser::T__3);
    setState(57);
    match(JinjaParser::WS);
    setState(58);
    expression();
    setState(60);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(59);
      match(JinjaParser::WS);
    }
    setState(62);
    match(JinjaParser::T__4);
    setState(63);
    jinjaTemplate();
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(64);
        match(JinjaParser::T__2);
        setState(66);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JinjaParser::WS) {
          setState(65);
          match(JinjaParser::WS);
        }
        setState(68);
        match(JinjaParser::T__5);
        setState(69);
        match(JinjaParser::WS);
        setState(70);
        expression();
        setState(72);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JinjaParser::WS) {
          setState(71);
          match(JinjaParser::WS);
        }
        setState(74);
        match(JinjaParser::T__4);
        setState(75);
        jinjaTemplate(); 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(82);
      match(JinjaParser::T__2);
      setState(84);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JinjaParser::WS) {
        setState(83);
        match(JinjaParser::WS);
      }
      setState(86);
      match(JinjaParser::T__6);
      setState(87);
      match(JinjaParser::WS);
      setState(88);
      match(JinjaParser::T__4);
      setState(89);
      jinjaTemplate();
      break;
    }

    }
    setState(92);
    match(JinjaParser::T__2);
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(93);
      match(JinjaParser::WS);
    }
    setState(96);
    match(JinjaParser::T__7);
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(97);
      match(JinjaParser::WS);
    }
    setState(100);
    match(JinjaParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

JinjaParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JinjaParser::ForStatementContext::WS() {
  return getTokens(JinjaParser::WS);
}

tree::TerminalNode* JinjaParser::ForStatementContext::WS(size_t i) {
  return getToken(JinjaParser::WS, i);
}

tree::TerminalNode* JinjaParser::ForStatementContext::ID() {
  return getToken(JinjaParser::ID, 0);
}

JinjaParser::ExpressionContext* JinjaParser::ForStatementContext::expression() {
  return getRuleContext<JinjaParser::ExpressionContext>(0);
}

JinjaParser::JinjaTemplateContext* JinjaParser::ForStatementContext::jinjaTemplate() {
  return getRuleContext<JinjaParser::JinjaTemplateContext>(0);
}


size_t JinjaParser::ForStatementContext::getRuleIndex() const {
  return JinjaParser::RuleForStatement;
}

antlrcpp::Any JinjaParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::ForStatementContext* JinjaParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, JinjaParser::RuleForStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(JinjaParser::T__2);
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(103);
      match(JinjaParser::WS);
    }
    setState(106);
    match(JinjaParser::T__8);
    setState(107);
    match(JinjaParser::WS);
    setState(108);
    match(JinjaParser::ID);
    setState(109);
    match(JinjaParser::WS);
    setState(110);
    match(JinjaParser::T__9);
    setState(111);
    match(JinjaParser::WS);
    setState(112);
    expression();
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(113);
      match(JinjaParser::WS);
    }
    setState(116);
    match(JinjaParser::T__4);
    setState(117);
    jinjaTemplate();
    setState(118);
    match(JinjaParser::T__2);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(119);
      match(JinjaParser::WS);
    }
    setState(122);
    match(JinjaParser::T__10);
    setState(124);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(123);
      match(JinjaParser::WS);
    }
    setState(126);
    match(JinjaParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetStatementContext ------------------------------------------------------------------

JinjaParser::SetStatementContext::SetStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> JinjaParser::SetStatementContext::WS() {
  return getTokens(JinjaParser::WS);
}

tree::TerminalNode* JinjaParser::SetStatementContext::WS(size_t i) {
  return getToken(JinjaParser::WS, i);
}

tree::TerminalNode* JinjaParser::SetStatementContext::ID() {
  return getToken(JinjaParser::ID, 0);
}

JinjaParser::ExpressionContext* JinjaParser::SetStatementContext::expression() {
  return getRuleContext<JinjaParser::ExpressionContext>(0);
}


size_t JinjaParser::SetStatementContext::getRuleIndex() const {
  return JinjaParser::RuleSetStatement;
}

antlrcpp::Any JinjaParser::SetStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitSetStatement(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::SetStatementContext* JinjaParser::setStatement() {
  SetStatementContext *_localctx = _tracker.createInstance<SetStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, JinjaParser::RuleSetStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(JinjaParser::T__2);
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(129);
      match(JinjaParser::WS);
    }
    setState(132);
    match(JinjaParser::T__11);
    setState(133);
    match(JinjaParser::WS);
    setState(134);
    match(JinjaParser::ID);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(135);
      match(JinjaParser::WS);
    }
    setState(138);
    match(JinjaParser::T__12);
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(139);
      match(JinjaParser::WS);
    }
    setState(142);
    expression();
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JinjaParser::WS) {
      setState(143);
      match(JinjaParser::WS);
    }
    setState(146);
    match(JinjaParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

JinjaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JinjaParser::ArithmeticExpressionContext* JinjaParser::ExpressionContext::arithmeticExpression() {
  return getRuleContext<JinjaParser::ArithmeticExpressionContext>(0);
}

JinjaParser::LogicalExpressionContext* JinjaParser::ExpressionContext::logicalExpression() {
  return getRuleContext<JinjaParser::LogicalExpressionContext>(0);
}

JinjaParser::FunctionCallContext* JinjaParser::ExpressionContext::functionCall() {
  return getRuleContext<JinjaParser::FunctionCallContext>(0);
}

JinjaParser::LiteralExpressionContext* JinjaParser::ExpressionContext::literalExpression() {
  return getRuleContext<JinjaParser::LiteralExpressionContext>(0);
}

tree::TerminalNode* JinjaParser::ExpressionContext::ID() {
  return getToken(JinjaParser::ID, 0);
}


size_t JinjaParser::ExpressionContext::getRuleIndex() const {
  return JinjaParser::RuleExpression;
}

antlrcpp::Any JinjaParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::ExpressionContext* JinjaParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, JinjaParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(153);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      arithmeticExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      logicalExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(150);
      functionCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(151);
      literalExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(152);
      match(JinjaParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticExpressionContext ------------------------------------------------------------------

JinjaParser::ArithmeticExpressionContext::ArithmeticExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JinjaParser::ArithmeticTermContext *> JinjaParser::ArithmeticExpressionContext::arithmeticTerm() {
  return getRuleContexts<JinjaParser::ArithmeticTermContext>();
}

JinjaParser::ArithmeticTermContext* JinjaParser::ArithmeticExpressionContext::arithmeticTerm(size_t i) {
  return getRuleContext<JinjaParser::ArithmeticTermContext>(i);
}


size_t JinjaParser::ArithmeticExpressionContext::getRuleIndex() const {
  return JinjaParser::RuleArithmeticExpression;
}

antlrcpp::Any JinjaParser::ArithmeticExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitArithmeticExpression(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::ArithmeticExpressionContext* JinjaParser::arithmeticExpression() {
  ArithmeticExpressionContext *_localctx = _tracker.createInstance<ArithmeticExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, JinjaParser::RuleArithmeticExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    arithmeticTerm();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JinjaParser::T__13

    || _la == JinjaParser::T__14) {
      setState(156);
      _la = _input->LA(1);
      if (!(_la == JinjaParser::T__13

      || _la == JinjaParser::T__14)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(157);
      arithmeticTerm();
      setState(162);
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

//----------------- ArithmeticTermContext ------------------------------------------------------------------

JinjaParser::ArithmeticTermContext::ArithmeticTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JinjaParser::ArithmeticFactorContext *> JinjaParser::ArithmeticTermContext::arithmeticFactor() {
  return getRuleContexts<JinjaParser::ArithmeticFactorContext>();
}

JinjaParser::ArithmeticFactorContext* JinjaParser::ArithmeticTermContext::arithmeticFactor(size_t i) {
  return getRuleContext<JinjaParser::ArithmeticFactorContext>(i);
}


size_t JinjaParser::ArithmeticTermContext::getRuleIndex() const {
  return JinjaParser::RuleArithmeticTerm;
}

antlrcpp::Any JinjaParser::ArithmeticTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitArithmeticTerm(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::ArithmeticTermContext* JinjaParser::arithmeticTerm() {
  ArithmeticTermContext *_localctx = _tracker.createInstance<ArithmeticTermContext>(_ctx, getState());
  enterRule(_localctx, 14, JinjaParser::RuleArithmeticTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    arithmeticFactor();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JinjaParser::T__15

    || _la == JinjaParser::T__16) {
      setState(164);
      _la = _input->LA(1);
      if (!(_la == JinjaParser::T__15

      || _la == JinjaParser::T__16)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(165);
      arithmeticFactor();
      setState(170);
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

//----------------- ArithmeticFactorContext ------------------------------------------------------------------

JinjaParser::ArithmeticFactorContext::ArithmeticFactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JinjaParser::ArithmeticExpressionContext* JinjaParser::ArithmeticFactorContext::arithmeticExpression() {
  return getRuleContext<JinjaParser::ArithmeticExpressionContext>(0);
}

tree::TerminalNode* JinjaParser::ArithmeticFactorContext::NUMBER() {
  return getToken(JinjaParser::NUMBER, 0);
}

tree::TerminalNode* JinjaParser::ArithmeticFactorContext::ID() {
  return getToken(JinjaParser::ID, 0);
}


size_t JinjaParser::ArithmeticFactorContext::getRuleIndex() const {
  return JinjaParser::RuleArithmeticFactor;
}

antlrcpp::Any JinjaParser::ArithmeticFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitArithmeticFactor(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::ArithmeticFactorContext* JinjaParser::arithmeticFactor() {
  ArithmeticFactorContext *_localctx = _tracker.createInstance<ArithmeticFactorContext>(_ctx, getState());
  enterRule(_localctx, 16, JinjaParser::RuleArithmeticFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(177);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JinjaParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(171);
        match(JinjaParser::T__17);
        setState(172);
        arithmeticExpression();
        setState(173);
        match(JinjaParser::T__18);
        break;
      }

      case JinjaParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(175);
        match(JinjaParser::NUMBER);
        break;
      }

      case JinjaParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(176);
        match(JinjaParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalExpressionContext ------------------------------------------------------------------

JinjaParser::LogicalExpressionContext::LogicalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JinjaParser::LogicalTermContext *> JinjaParser::LogicalExpressionContext::logicalTerm() {
  return getRuleContexts<JinjaParser::LogicalTermContext>();
}

JinjaParser::LogicalTermContext* JinjaParser::LogicalExpressionContext::logicalTerm(size_t i) {
  return getRuleContext<JinjaParser::LogicalTermContext>(i);
}


size_t JinjaParser::LogicalExpressionContext::getRuleIndex() const {
  return JinjaParser::RuleLogicalExpression;
}

antlrcpp::Any JinjaParser::LogicalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitLogicalExpression(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::LogicalExpressionContext* JinjaParser::logicalExpression() {
  LogicalExpressionContext *_localctx = _tracker.createInstance<LogicalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, JinjaParser::RuleLogicalExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    logicalTerm();
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JinjaParser::T__19) {
      setState(180);
      match(JinjaParser::T__19);
      setState(181);
      logicalTerm();
      setState(186);
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

//----------------- LogicalTermContext ------------------------------------------------------------------

JinjaParser::LogicalTermContext::LogicalTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JinjaParser::LogicalFactorContext *> JinjaParser::LogicalTermContext::logicalFactor() {
  return getRuleContexts<JinjaParser::LogicalFactorContext>();
}

JinjaParser::LogicalFactorContext* JinjaParser::LogicalTermContext::logicalFactor(size_t i) {
  return getRuleContext<JinjaParser::LogicalFactorContext>(i);
}


size_t JinjaParser::LogicalTermContext::getRuleIndex() const {
  return JinjaParser::RuleLogicalTerm;
}

antlrcpp::Any JinjaParser::LogicalTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitLogicalTerm(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::LogicalTermContext* JinjaParser::logicalTerm() {
  LogicalTermContext *_localctx = _tracker.createInstance<LogicalTermContext>(_ctx, getState());
  enterRule(_localctx, 20, JinjaParser::RuleLogicalTerm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    logicalFactor();
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JinjaParser::T__20) {
      setState(188);
      match(JinjaParser::T__20);
      setState(189);
      logicalFactor();
      setState(194);
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

//----------------- LogicalFactorContext ------------------------------------------------------------------

JinjaParser::LogicalFactorContext::LogicalFactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JinjaParser::LogicalFactorContext* JinjaParser::LogicalFactorContext::logicalFactor() {
  return getRuleContext<JinjaParser::LogicalFactorContext>(0);
}

JinjaParser::LogicalExpressionContext* JinjaParser::LogicalFactorContext::logicalExpression() {
  return getRuleContext<JinjaParser::LogicalExpressionContext>(0);
}

JinjaParser::ComparisonExpressionContext* JinjaParser::LogicalFactorContext::comparisonExpression() {
  return getRuleContext<JinjaParser::ComparisonExpressionContext>(0);
}

tree::TerminalNode* JinjaParser::LogicalFactorContext::BOOL() {
  return getToken(JinjaParser::BOOL, 0);
}

tree::TerminalNode* JinjaParser::LogicalFactorContext::ID() {
  return getToken(JinjaParser::ID, 0);
}


size_t JinjaParser::LogicalFactorContext::getRuleIndex() const {
  return JinjaParser::RuleLogicalFactor;
}

antlrcpp::Any JinjaParser::LogicalFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitLogicalFactor(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::LogicalFactorContext* JinjaParser::logicalFactor() {
  LogicalFactorContext *_localctx = _tracker.createInstance<LogicalFactorContext>(_ctx, getState());
  enterRule(_localctx, 22, JinjaParser::RuleLogicalFactor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(JinjaParser::T__21);
      setState(196);
      logicalFactor();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(197);
      match(JinjaParser::T__17);
      setState(198);
      logicalExpression();
      setState(199);
      match(JinjaParser::T__18);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(201);
      comparisonExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(202);
      match(JinjaParser::BOOL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(203);
      match(JinjaParser::ID);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonExpressionContext ------------------------------------------------------------------

JinjaParser::ComparisonExpressionContext::ComparisonExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JinjaParser::ArithmeticExpressionContext *> JinjaParser::ComparisonExpressionContext::arithmeticExpression() {
  return getRuleContexts<JinjaParser::ArithmeticExpressionContext>();
}

JinjaParser::ArithmeticExpressionContext* JinjaParser::ComparisonExpressionContext::arithmeticExpression(size_t i) {
  return getRuleContext<JinjaParser::ArithmeticExpressionContext>(i);
}


size_t JinjaParser::ComparisonExpressionContext::getRuleIndex() const {
  return JinjaParser::RuleComparisonExpression;
}

antlrcpp::Any JinjaParser::ComparisonExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitComparisonExpression(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::ComparisonExpressionContext* JinjaParser::comparisonExpression() {
  ComparisonExpressionContext *_localctx = _tracker.createInstance<ComparisonExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, JinjaParser::RuleComparisonExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    arithmeticExpression();
    setState(207);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JinjaParser::T__22)
      | (1ULL << JinjaParser::T__23)
      | (1ULL << JinjaParser::T__24)
      | (1ULL << JinjaParser::T__25)
      | (1ULL << JinjaParser::T__26)
      | (1ULL << JinjaParser::T__27))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(208);
    arithmeticExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

JinjaParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JinjaParser::FunctionCallContext::ID() {
  return getToken(JinjaParser::ID, 0);
}

std::vector<JinjaParser::ExpressionContext *> JinjaParser::FunctionCallContext::expression() {
  return getRuleContexts<JinjaParser::ExpressionContext>();
}

JinjaParser::ExpressionContext* JinjaParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<JinjaParser::ExpressionContext>(i);
}


size_t JinjaParser::FunctionCallContext::getRuleIndex() const {
  return JinjaParser::RuleFunctionCall;
}

antlrcpp::Any JinjaParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::FunctionCallContext* JinjaParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 26, JinjaParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(JinjaParser::ID);
    setState(211);
    match(JinjaParser::T__17);
    setState(220);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JinjaParser::T__17)
      | (1ULL << JinjaParser::T__21)
      | (1ULL << JinjaParser::STRING)
      | (1ULL << JinjaParser::NUMBER)
      | (1ULL << JinjaParser::BOOL)
      | (1ULL << JinjaParser::ID))) != 0)) {
      setState(212);
      expression();
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == JinjaParser::T__28) {
        setState(213);
        match(JinjaParser::T__28);
        setState(214);
        expression();
        setState(219);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(222);
    match(JinjaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralExpressionContext ------------------------------------------------------------------

JinjaParser::LiteralExpressionContext::LiteralExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JinjaParser::LiteralExpressionContext::STRING() {
  return getToken(JinjaParser::STRING, 0);
}

tree::TerminalNode* JinjaParser::LiteralExpressionContext::NUMBER() {
  return getToken(JinjaParser::NUMBER, 0);
}

tree::TerminalNode* JinjaParser::LiteralExpressionContext::BOOL() {
  return getToken(JinjaParser::BOOL, 0);
}


size_t JinjaParser::LiteralExpressionContext::getRuleIndex() const {
  return JinjaParser::RuleLiteralExpression;
}

antlrcpp::Any JinjaParser::LiteralExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<JinjaVisitor*>(visitor))
    return parserVisitor->visitLiteralExpression(this);
  else
    return visitor->visitChildren(this);
}

JinjaParser::LiteralExpressionContext* JinjaParser::literalExpression() {
  LiteralExpressionContext *_localctx = _tracker.createInstance<LiteralExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, JinjaParser::RuleLiteralExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JinjaParser::STRING)
      | (1ULL << JinjaParser::NUMBER)
      | (1ULL << JinjaParser::BOOL))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> JinjaParser::_decisionToDFA;
atn::PredictionContextCache JinjaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JinjaParser::_atn;
std::vector<uint16_t> JinjaParser::_serializedATN;

std::vector<std::string> JinjaParser::_ruleNames = {
  "jinjaTemplate", "statement", "ifStatement", "forStatement", "setStatement", 
  "expression", "arithmeticExpression", "arithmeticTerm", "arithmeticFactor", 
  "logicalExpression", "logicalTerm", "logicalFactor", "comparisonExpression", 
  "functionCall", "literalExpression"
};

std::vector<std::string> JinjaParser::_literalNames = {
  "", "'{{'", "'}}'", "'{%'", "'if'", "'%}'", "'elif'", "'else'", "'endif'", 
  "'for'", "'in'", "'endfor'", "'set'", "'='", "'+'", "'-'", "'*'", "'/'", 
  "'('", "')'", "'or'", "'and'", "'not'", "'=='", "'!='", "'<'", "'>'", 
  "'<='", "'>='", "','"
};

std::vector<std::string> JinjaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "STRING", "NUMBER", "BOOL", 
  "ID", "TEXT", "COMMENT", "WS"
};

dfa::Vocabulary JinjaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JinjaParser::_tokenNames;

JinjaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x26, 0xe5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x25, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x29, 0xa, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x2d, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x30, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x35, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x39, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x3f, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x45, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x4b, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
    0x50, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x53, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x57, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x5d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x61, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x65, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x6b, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x75, 0xa, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x7b, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x7f, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x85, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x8b, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x8f, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x93, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x9c, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xa1, 0xa, 0x8, 0xc, 0x8, 
    0xe, 0x8, 0xa4, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xa9, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0xac, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xb4, 0xa, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xb9, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xbc, 
    0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xc1, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0xc4, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xcf, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xda, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0xdd, 0xb, 0xf, 0x5, 0xf, 0xdf, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x2, 0x2, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x6, 0x3, 
    0x2, 0x10, 0x11, 0x3, 0x2, 0x12, 0x13, 0x3, 0x2, 0x19, 0x1e, 0x3, 0x2, 
    0x20, 0x22, 0x2, 0xfd, 0x2, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x34, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x36, 0x3, 0x2, 0x2, 0x2, 0x8, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x82, 0x3, 0x2, 0x2, 0x2, 0xc, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x16, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xce, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x2d, 0x7, 0x24, 0x2, 0x2, 0x21, 0x2d, 0x5, 0x4, 0x3, 0x2, 
    0x22, 0x24, 0x7, 0x3, 0x2, 0x2, 0x23, 0x25, 0x7, 0x26, 0x2, 0x2, 0x24, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x28, 0x5, 0xc, 0x7, 0x2, 0x27, 0x29, 0x7, 
    0x26, 0x2, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x4, 0x2, 
    0x2, 0x2b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x35, 0x5, 0x6, 0x4, 0x2, 0x32, 0x35, 0x5, 0x8, 
    0x5, 0x2, 0x33, 0x35, 0x5, 0xa, 0x6, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x35, 0x5, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x7, 0x5, 0x2, 0x2, 0x37, 
    0x39, 0x7, 0x26, 0x2, 0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 
    0x6, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x26, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0xc, 
    0x7, 0x2, 0x3d, 0x3f, 0x7, 0x26, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0x7, 0x2, 0x2, 0x41, 0x51, 0x5, 0x2, 0x2, 0x2, 0x42, 
    0x44, 0x7, 0x5, 0x2, 0x2, 0x43, 0x45, 0x7, 0x26, 0x2, 0x2, 0x44, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x8, 0x2, 0x2, 0x47, 0x48, 0x7, 0x26, 
    0x2, 0x2, 0x48, 0x4a, 0x5, 0xc, 0x7, 0x2, 0x49, 0x4b, 0x7, 0x26, 0x2, 
    0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x7, 0x2, 0x2, 0x4d, 
    0x4e, 0x5, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x7, 0x5, 0x2, 
    0x2, 0x55, 0x57, 0x7, 0x26, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x59, 0x7, 0x9, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x26, 0x2, 0x2, 0x5a, 0x5b, 
    0x7, 0x7, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0x2, 0x2, 0x2, 0x5c, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x60, 0x7, 0x5, 0x2, 0x2, 0x5f, 0x61, 0x7, 0x26, 0x2, 
    0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x64, 0x7, 0xa, 0x2, 0x2, 0x63, 
    0x65, 0x7, 0x26, 0x2, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 
    0x7, 0x2, 0x2, 0x67, 0x7, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x7, 0x5, 
    0x2, 0x2, 0x69, 0x6b, 0x7, 0x26, 0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6d, 0x7, 0xb, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x26, 0x2, 0x2, 0x6e, 
    0x6f, 0x7, 0x23, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x26, 0x2, 0x2, 0x70, 0x71, 
    0x7, 0xc, 0x2, 0x2, 0x71, 0x72, 0x7, 0x26, 0x2, 0x2, 0x72, 0x74, 0x5, 
    0xc, 0x7, 0x2, 0x73, 0x75, 0x7, 0x26, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x77, 0x7, 0x7, 0x2, 0x2, 0x77, 0x78, 0x5, 0x2, 0x2, 0x2, 
    0x78, 0x7a, 0x7, 0x5, 0x2, 0x2, 0x79, 0x7b, 0x7, 0x26, 0x2, 0x2, 0x7a, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0xd, 0x2, 0x2, 0x7d, 0x7f, 0x7, 
    0x26, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x7, 0x2, 
    0x2, 0x81, 0x9, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 0x7, 0x5, 0x2, 0x2, 
    0x83, 0x85, 0x7, 0x26, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
    0x7, 0xe, 0x2, 0x2, 0x87, 0x88, 0x7, 0x26, 0x2, 0x2, 0x88, 0x8a, 0x7, 
    0x23, 0x2, 0x2, 0x89, 0x8b, 0x7, 0x26, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8e, 0x7, 0xf, 0x2, 0x2, 0x8d, 0x8f, 0x7, 0x26, 0x2, 0x2, 
    0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x5, 0xc, 0x7, 0x2, 0x91, 0x93, 
    0x7, 0x26, 0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x7, 
    0x2, 0x2, 0x95, 0xb, 0x3, 0x2, 0x2, 0x2, 0x96, 0x9c, 0x5, 0xe, 0x8, 
    0x2, 0x97, 0x9c, 0x5, 0x14, 0xb, 0x2, 0x98, 0x9c, 0x5, 0x1c, 0xf, 0x2, 
    0x99, 0x9c, 0x5, 0x1e, 0x10, 0x2, 0x9a, 0x9c, 0x7, 0x23, 0x2, 0x2, 0x9b, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa2, 0x5, 0x10, 
    0x9, 0x2, 0x9e, 0x9f, 0x9, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0x10, 0x9, 
    0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xaa, 
    0x5, 0x12, 0xa, 0x2, 0xa6, 0xa7, 0x9, 0x3, 0x2, 0x2, 0xa7, 0xa9, 0x5, 
    0x12, 0xa, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0x11, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xae, 0x7, 0x14, 0x2, 0x2, 0xae, 0xaf, 0x5, 0xe, 0x8, 0x2, 0xaf, 
    0xb0, 0x7, 0x15, 0x2, 0x2, 0xb0, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 
    0x7, 0x21, 0x2, 0x2, 0xb2, 0xb4, 0x7, 0x23, 0x2, 0x2, 0xb3, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xba, 0x5, 0x16, 0xc, 
    0x2, 0xb6, 0xb7, 0x7, 0x16, 0x2, 0x2, 0xb7, 0xb9, 0x5, 0x16, 0xc, 0x2, 
    0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc2, 0x5, 
    0x18, 0xd, 0x2, 0xbe, 0xbf, 0x7, 0x17, 0x2, 0x2, 0xbf, 0xc1, 0x5, 0x18, 
    0xd, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc6, 0x7, 0x18, 0x2, 0x2, 0xc6, 0xcf, 0x5, 0x18, 0xd, 0x2, 0xc7, 0xc8, 
    0x7, 0x14, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x14, 0xb, 0x2, 0xc9, 0xca, 0x7, 
    0x15, 0x2, 0x2, 0xca, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcf, 0x5, 0x1a, 
    0xe, 0x2, 0xcc, 0xcf, 0x7, 0x22, 0x2, 0x2, 0xcd, 0xcf, 0x7, 0x23, 0x2, 
    0x2, 0xce, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xce, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0x19, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 
    0x5, 0xe, 0x8, 0x2, 0xd1, 0xd2, 0x9, 0x4, 0x2, 0x2, 0xd2, 0xd3, 0x5, 
    0xe, 0x8, 0x2, 0xd3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x23, 
    0x2, 0x2, 0xd5, 0xde, 0x7, 0x14, 0x2, 0x2, 0xd6, 0xdb, 0x5, 0xc, 0x7, 
    0x2, 0xd7, 0xd8, 0x7, 0x1f, 0x2, 0x2, 0xd8, 0xda, 0x5, 0xc, 0x7, 0x2, 
    0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xe1, 0x7, 0x15, 0x2, 0x2, 0xe1, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x9, 0x5, 0x2, 0x2, 0xe3, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x24, 0x28, 0x2c, 0x2e, 0x34, 0x38, 0x3e, 0x44, 0x4a, 0x51, 0x56, 
    0x5c, 0x60, 0x64, 0x6a, 0x74, 0x7a, 0x7e, 0x84, 0x8a, 0x8e, 0x92, 0x9b, 
    0xa2, 0xaa, 0xb3, 0xba, 0xc2, 0xce, 0xdb, 0xde, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JinjaParser::Initializer JinjaParser::_init;
