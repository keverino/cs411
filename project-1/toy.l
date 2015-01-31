%{
#define MAX_LENGTH 10
#define MAX 100
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"

struct
{
	char name[MAX_LENGTH];
	int type;
}

table[MAX];
int t_index = 0;
int t_flag = 0;
%}

letter 				[a-zA-Z]
digit				[0-9]
id 				{letter}({letter}|{digit})*
doubleConst			{digit}+\.{digit}+
intConst			({digit}+|0[xX][0-9a-fA-F]+|{digit}+[eE]\+[0-9]+)
ws				[ \t]+
newline				[\n]
stringConst			"\""({letter}*|{digit}*|[ ]*|"!"*)*"\""	

%%

"/*"((\*+[^/*])|([^*]))*\**"*/"[\n] 	{}
"//"[^\n]*[\n]				{}

{ws}					{}
{newline}				{printf("\n");}

boolean				{printf("boolean "); 		return (_boolean); }
break				{printf("break ");		return (_break);}
class				{printf("class ");		return (_class);}
double				{printf("double "); 		return (_double);}
else				{printf("else "); 		return (_else);}
extends				{printf("extends "); 		return (_extends);}
for 				{printf("for "); 		return (_for);}
if 				{printf("if "); 		return (_if);}
implements			{printf("implements "); 	return (_implements);}
int 				{t_flag = _int; printf("int "); return (_int);}
interface			{printf("interface "); 		return (_interface);}
"[]"				{printf("newarray ");		return (_newarray);}
"println"			{printf("println "); 		return (_println);}
"readln"			{printf("readln "); 		return (_readln);}
return				{printf("return "); 		return (_return);}
string				{printf("string "); 		return (_string);}
void				{printf("void "); 		return (_void);}
while				{printf("while "); 		return (_while);}
"+"				{printf("plus "); 		return (_plus);}
"-"				{printf("minus "); 		return (_minus);}
"*"				{printf("multiplication "); 	return (_multiplication);}
"/"				{printf("division "); 		return (_division);}
"%"				{printf("mod "); 		return (_mod);}
"<"				{printf("less "); 		return (_less);}
"<="				{printf("lessqual ");		return (_lessequal);}
">"				{printf("greater "); 		return (_greater);}
">="				{printf("greaterequal "); 	return (_greaterequal);}
"=="				{printf("equal "); 		return (_equal);}
"!="				{printf("notequal "); 		return (_notequal);}
"&&"				{printf("and "); 		return (_and);}
"||"				{printf("or "); 		return (_or);}
"!"				{printf("not "); 		return (_not);}
"="				{printf("assignop "); 		return (_assignop);}
";"				{printf("semicolon "); 		return (_semicolon);}
","				{printf("comma "); 		return (_comma);}
"."				{printf("period"); 		return (_period);}
"("				{printf("leftparen ");		return (_leftparen);}
")"				{printf("rightparen "); 	return (_rightparen);}	
"{"				{printf("leftbrace "); 		return (_leftbrace);}
"}"				{printf("rightbrace "); 	return (_rightbrace);}

{doubleConst}			{printf("doubleconstant "); 	return (_doubleconstant);}
{stringConst}			{printf("stringconstant ");	return (_stringconstant);}
{intConst}			{printf("intconstant "); 	return (_intconstant);}
{id}				{yytext[yyleng]='\0'; yylval=insert(yytext); printf("id "); return(_id);}
.				{printf("error!\n"); 		return (0);}


%%

int insert(char *s)
{
	int i = 0;
	while(i < t_index)
	{
		if (strcmp(s, table[i].name) == 0) return i;
		i++;
	}

	strcpy(table[t_index].name, s);
	table[t_index].type = t_flag;
	t_index++;
	return t_index-1;
}//end of insert

int main(int argc, char *argv[]) 
{ 
	//check for cmd/terminal arguments
	if(argc != 2)
	{
		printf("ERROR: you must specify a text file to read from!\n");
		return 1;
	}
	
	//read the file
	yyin = fopen(argv[1], "r");
	while( yylex() );
}//end of main
