%{
#define MAX_LENGTH 10
#define MAX 100
#include <stdio.h>
#include <string.h>
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
digit					[0-9]
id 					{letter}({letter}|{digit})*
number				{digit}+
ws						[ \t]+
newline				[\n]
%x BLOCKCOMMENT

%%

"/*"						{BEGIN(BLOCKCOMMENT);}
<BLOCKCOMMENT>"*/"	{BEGIN(INITIAL);}
<BLOCKCOMMENT>.		{}

{ws}				{printf("");}
newline        {printf("\n");}
boolean			{printf("boolean "); return (_boolean); }
break				{printf("break "); return (_break);}
class				{printf("class "); return (_class);}
double			{printf("double "); return (_double);}
else				{printf("else "); return (_else);}
extends			{printf("extends "); return (_extends);}
for 				{printf("for "); return (_for);}
if 				{printf("if "); return (_if);}
implements		{printf("implements "); return (_implements);}
int 				{t_flag = _int; printf("int "); return (_int);}
interface		{printf("interface "); return (_interface);}
"+"				{printf("plus "); return (_plus);}
"-"				{printf("minus "); return (_minus);}
"*"				{printf("multiplication "); return (_multiplication);}
","				{printf("comma "); return (_comma);}
";"				{printf("semicolon "); return (_semicolon);}
"."				{printf("%s", yytext); return (_period);}
"("				{printf("leftparen "); return (_leftparen);}
")"				{printf("rightparen "); return (_rightparen);}	
"{"				{printf("leftbrace "); return (_leftbrace);}
"}"				{printf("rightbrace "); return (_rightbrace);}
{number}			{printf("intconstant "); return (_intconstant);}
{id}				{yytext[yyleng]='\0'; yylval=insert(yytext); printf("id "); return(_id);}
.					{printf("error "); return (0);}

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
}
int main() 
{ 
	while(1) yylex(); 
}
