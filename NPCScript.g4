grammar NPCScript;

program: (npcDefinition | stateDefinition | onEvent)* EOF;

npcDefinition: 'npc' STRING 'iniciaEn' STRING;

stateDefinition: '@estado' STRING statement*;

onEvent: 'on' STRING statement* 'end';

statement
    : ifStatement
    | whileStatement
    | actionStatement
    | assignment
    | sayStatement
    | choiceStatement
    | waitStatement
    | transitionStatement
    | emotionStatement
    | animationStatement
    ;

ifStatement: 'if' condition 'then' 'goto' STRING;

whileStatement: 'while' condition 'do' statement* 'end';

transitionStatement: 'goto' STRING ';'?;

assignment: IDENTIFIER '=' expr ';'?;

sayStatement: 'say' STRING ';'?;

choiceStatement: 'choice' '{' choiceOption+ '}';

choiceOption: STRING '->' 'goto' STRING ';'?;

emotionStatement: 'emotion' '(' STRING ')' ';'?;

animationStatement: 'playAnimation' '(' STRING ')' ';'?;

waitStatement: 'wait' NUMBER ('seconds' | 'ms') ';'?;

actionStatement: IDENTIFIER '(' (expr (',' expr)*)? ')' ';'?;

condition
    : IDENTIFIER '(' (expr (',' expr)*)? ')'
    | expr comparator expr
    ;
    
comparator: EQ | NEQ | LT | GT | LEQ | GEQ;

EQ: '==';
NEQ: '!=';
LT: '<';
GT: '>';
LEQ: '<=';
GEQ: '>=';

expr : expr PLUS expr
     | expr MINUS expr
     | expr STAR expr
     | expr SLASH expr
     | '(' expr ')'
     | NUMBER
     | IDENTIFIER
     ;

PLUS: '+';
MINUS: '-';
STAR: '*';
SLASH: '/';
STRING: '"' ~["\r\n]* '"';
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;
NUMBER: [0-9]+;
COMMENT: '//' ~[\r\n]* -> skip;
WS: [ \t\r\n]+ -> skip;
