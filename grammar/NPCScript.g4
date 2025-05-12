grammar NPCScript;

program: (npcDefinition | stateDefinition)* EOF;

npcDefinition: 'npc' STRING 'iniciaEn' STRING;

stateDefinition: '@estado' STRING statement*;

statement
    : ifStatement
    | actionStatement
    ;

ifStatement: 'if' condition 'then' 'goto' STRING;

actionStatement: IDENTIFIER '(' (expr (',' expr)*)? ')' ';'?;

condition: IDENTIFIER '(' (expr (',' expr)*)? ')';

expr: NUMBER | STRING | IDENTIFIER;

STRING: '"' ~["\r\n]* '"';
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]*;
NUMBER: [0-9]+;
WS: [ \t\r\n]+ -> skip;
