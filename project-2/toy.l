%{
  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h> 
  #include "y.tab.h"
  extern int yylval;
%}

hex         (0x|0X)[0-9A-Fa-f]*+
letter      [a-zA-Z]
digit       [0-9]
newline     [\n]
ws          [ \t]+
string      \"[^"\n]*\"
exponent    ((E|e)("+"|"-")?({digit}+))
float1      {digit}+"."{digit}+{exponent}?
float2      {digit}+{exponent}
double      ({float1}|{float2})
integer     {hex}|{digit}+
identifier  {letter}({letter}|{digit}|"_")*   
newArray		(\[\]|\[[0-9]+\])+

%%

\/\/.*$ ;   //ignore line comment
\/\*[A-Za-z0-9=_\+\-\*\\\/\%\<\{\}\(\)\[\]\!\.\;\,\ \t\n\r\#]*\*\/ ;    //ignore block comment

bool        { printf("\n%s ", yytext); return (t_bool); } 
break       { printf("\n%s ", yytext); return (t_break); }
class       { printf("\n%s ", yytext); return (t_class); } 
double      { printf("\n%s ", yytext); return (t_double); }
else        { printf("\n%s ", yytext); return (t_else); } 
extends     { printf("\n%s ", yytext); return (t_extends); } 
for         { printf("\n%s ", yytext); return (t_for); } 
if          { printf("\n%s ", yytext); return (t_if); }
implements  { printf("\n%s ", yytext); return (t_implements); } 
int         { printf("\n%s ", yytext); return (t_int); } 
interface   { printf("\n%s ", yytext); return (t_interface); } 
newarray    { printf("\n%s ", yytext); return (t_newarray); } 
println     { printf("\n%s ", yytext); return (t_println); } 
readln      { printf("\n%s ", yytext); return (t_readln); }
return      { printf("\n%s ", yytext); return (t_return); }
string      { printf("\n%s ", yytext); return (t_string); }
void        { printf("\n%s ", yytext); return (t_void); } 
while       { printf("\n%s ", yytext); return (t_while); }
true|false  { printf("\nboolConstant "); return (t_boolconstant); } 
"+"         { printf("\nplus "); return(t_plus); }
"-"         { printf("\nminus "); return(t_minus); }
"*"         { printf("\nmultiplication "); return(t_multiplication); }
"/"         { printf("\ndivision "); return(t_division); }
"%"         { printf("\nmod "); return(t_mod); }
"<="        { printf("\nlessequal "); return(t_lessequal); }
">"         { printf("\ngreater "); return (t_greater); }
"<"         { printf("\nless "); return (t_less); }
">="        { printf("\ngreaterequal "); return(t_greaterequal); }
"=="        { printf("\nequal "); return (t_equal); }
"!="        { printf("\nnotequal "); return (t_notequal); }
"&&"        { printf("\nand "); return (t_and); }
"||"        { printf("\nor "); return (t_or); }
"!"         { printf("\nnot "); return (t_not); }
"="         { printf("\nassignop "); return (t_assignop); }
";"         { printf("\nsemicolon "); return(t_semicolon); }
","         { printf("\ncomma "); return(t_comma); }
"."         { printf("\nperiod "); return(t_period); }
"("         { printf("\nleftparen "); return(t_leftparen); }
")"         { printf("\nrightparen "); return(t_rightparen); }
"["         { printf("\nleftbracket "); return(t_leftbracket); }
"]"         { printf("\nrightbracket "); return(t_rightbracket); }
"{"         { printf("\nleftbrace "); return(t_leftbrace); }
"}"         { printf("\nrightbrace "); return(t_rightbrace); }

{newline}       { printf("\n"); }
{integer}       { printf("\nintConst "); return(t_intconstant); }
{double}        { printf("\ndoubleConst "); return(t_doubleconstant); }
{string}        { printf("\nstringConst "); return(t_stringconstant); }
{identifier}    { printf("\nid "); return(t_id); }
{ws}            {; /* ignore whitespace */ }
.               {; /* ignore characters that are not defined*/ }

%%
