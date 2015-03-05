%{
#include <stdio.h>
%}

%token t_bool
%token t_break
%token t_class
%token t_double
%token t_else
%token t_extends
%token t_for
%token t_if
%token t_implements
%token t_int
%token t_interface
%token t_newarray
%token t_println
%token t_readln
%token t_return
%token t_string
%token t_void
%token t_while
%token t_plus
%token t_minus
%token t_multiplication
%token t_division
%token t_mod
%token t_less
%token t_lessequal
%token t_greater
%token t_greaterequal
%token t_equal
%token t_notequal
%token t_assignop
%token t_semicolon
%token t_comma
%token t_period
%token t_leftparen
%token t_rightparen
%token t_leftbracket
%token t_rightbracket
%token t_leftbrace
%token t_rightbrace
%token t_boolconstant
%token t_intconstant
%token t_doubleconstant
%token t_stringconstant
%token t_id

%right t_assignop
%left t_or
%left t_and
%right t_equal t_notequal
%nonassoc t_less t_greater t_lessequal t_greaterequal
%left t_plus t_minus
%left t_multiplication t_division

%%

%%

int main() { yyparse(); }
yyerror(s)
char *s; { printf("bison error: %s\n", s); }
yywrap() { return(0); }