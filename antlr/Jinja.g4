grammar Jinja;

jinjaTemplate: (TEXT | statement | '{{' WS? expression WS? '}}')*;

statement: ifStatement | forStatement | setStatement;

ifStatement:
	'{%' WS? 'if' WS expression WS? '%}' jinjaTemplate (
		'{%' WS? 'elif' WS expression WS? '%}' jinjaTemplate
	)* ('{%' WS? 'else' WS '%}' jinjaTemplate)? '{%' WS? 'endif' WS? '%}';

forStatement:
	'{%' WS? 'for' WS ID WS 'in' WS expression WS? '%}' jinjaTemplate '{%' WS? 'endfor' WS? '%}';

setStatement:
	'{%' WS? 'set' WS ID WS? '=' WS? expression WS? '%}';

expression:
	arithmeticExpression
	| logicalExpression
	| functionCall
	| literalExpression
	| ID;

arithmeticExpression:
	arithmeticTerm (( '+' | '-') arithmeticTerm)*;
arithmeticTerm:
	arithmeticFactor (('*' | '/') arithmeticFactor)*;
arithmeticFactor: '(' arithmeticExpression ')' | NUMBER | ID;

logicalExpression: logicalTerm ('or' logicalTerm)*;
logicalTerm: logicalFactor ('and' logicalFactor)*;
logicalFactor:
	'not' logicalFactor
	| '(' logicalExpression ')'
	| comparisonExpression
	| BOOL
	| ID;

comparisonExpression:
	arithmeticExpression ('==' | '!=' | '<' | '>' | '<=' | '>=') arithmeticExpression;

functionCall: ID '(' (expression (',' expression)*)? ')';

literalExpression: STRING | NUMBER | BOOL;

STRING: '"' ~["\\]* '"';
NUMBER: '-'? INTEGER ('.' [0-9]+)? EXPONENT?;
fragment INTEGER: '0' | [1-9] [0-9]*;
fragment EXPONENT: [eE] [+\-]? INTEGER;
BOOL: 'true' | 'false';
ID: [a-zA-Z_][a-zA-Z0-9_]*;
TEXT: ( ~[{] | '{' ~[{%#])+;
COMMENT: '{#' .*? '#}' -> skip;
WS: [ \t\r\n]+;