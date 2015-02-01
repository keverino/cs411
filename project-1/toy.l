%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"

	#define MAX 150
	#define LENGTH(x) (sizeof(x)/sizeof(*(x)))
	#define true 1 
	#define false 0

  	struct 
	{
		int dispatch[52];
		char symbol[MAX];
 		int next[MAX];
  	}	symbol_table;

	void init_symbol_table(void);
	int next_symbol(char *);
	int find_first_empty(char *, int);
	void print_switch(int *, int);    
	void print_symbol(char *, int);  
	void print_next(int *, int);  
	void insert(char *);
%}


letter      [a-zA-Z]
digit       [0-9]
newline     [\n]
ws          [ \t]+
strConst    "\""([^\"]*)*"\""
doubConst   ({digit}+\.{digit}+|{digit}+\.{digit}+[eE]\+[0-9]+)
intConst    ({digit}+|0[xX][0-9a-fA-F]+|{digit}+[eE]\+[0-9]+)
id  			{letter}({letter}|{digit}|"_")*
   
%%


"/*"(([^*]|(("*"+)[^*/]))*)("*"+)"/"\n {; /* block comment */ }
"//"((.)*)\n                           {; /* single line comment */ }

bool        { printf("%s ", yytext); insert(yytext); return (t_bool); } 
break       { printf("%s ", yytext); insert(yytext); return (t_break); }
class       { printf("%s ", yytext); insert(yytext); return (t_class); } 
double      { printf("%s ", yytext); insert(yytext); return (t_double); }
else        { printf("%s ", yytext); insert(yytext); return (t_else); } 
extends     { printf("%s ", yytext); insert(yytext); return (t_extends); } 
for         { printf("%s ", yytext); insert(yytext); return (t_for); } 
if          { printf("%s ", yytext); insert(yytext); return (t_if); }
implements  { printf("%s ", yytext); insert(yytext); return (t_implements); } 
int         { printf("%s ", yytext); insert(yytext); return (t_int); } 
interface   { printf("%s ", yytext); insert(yytext); return (t_interface); } 
newArray    { printf("%s ", yytext); insert(yytext); return (t_newarray); } 
println     { printf("%s ", yytext); insert(yytext); return (t_println); } 
readln      { printf("%s ", yytext); insert(yytext); return (t_readln); }
return      { printf("%s ", yytext); insert(yytext); return (t_return); }
string      { printf("%s ", yytext); insert(yytext); return (t_string); }
void        { printf("%s ", yytext); insert(yytext); return (t_void); } 
while       { printf("%s ", yytext); insert(yytext); return (t_while); }
true|false  { printf("boolconstant "); 		return(t_boolconstant); } 
"+"         { printf("plus "); 					return(t_plus); }
"-"         { printf("minus "); 					return(t_minus); }
"*"         { printf("multiplication "); 		return(t_multiplication); }
"/"         { printf("division "); 				return(t_division); }
"%"			{ printf("mod "); 					return(t_mod);}
"<="        { printf("lessequal "); 			return(t_lessequal); }
">"         { printf("greater "); 				return(t_greater); }
">="        { printf("greaterequal "); 		return(t_greaterequal); }
"=="        { printf("equal "); 					return(t_equal); }
"!="        { printf("notequal "); 				return(t_notequal); }
"&&"			{ printf("and "); 					return(t_and);}
"||"			{ printf("or "); 						return(t_or);}
"!"			{ printf("not "); 					return(t_not);}
"="         { printf("assignop "); 				return(t_assignop); }
";"         { printf("semicolon "); 			return(t_semicolon); }
","         { printf("comma "); 					return(t_comma); }
"."         { printf("period "); 				return(t_period); }
"("         { printf("leftparen "); 			return(t_leftparen); }
")"         { printf("rightparen "); 			return(t_rightparen); }
"["         { printf("leftbracket "); 			return(t_leftbracket); }
"]"         { printf("rightbracket ");			return(t_rightbracket); }
"{"         { printf("leftbrace "); 			return(t_leftbrace); }
"}"         { printf("rightbrace "); 			return(t_rightbrace); }
{newline}	{ printf("\n"); }
{intConst}	{ printf("intconstant "); 			return(t_intconstant); }
{doubConst}	{ printf("doubleconstant "); 		return(t_doubleconstant); }
{strConst}	{ printf("stringconstant "); 		return(t_stringconstant); }
{id}			{ printf("id "); insert(yytext); return(t_id); }
{ws}			{; /* ignore whitespace */ }
. 				{; }

%%

int yywrap(void) { return (1); }
int main(int argc, char *argv[]) 
{

  init_symbol_table();
  
  printf("\n----------Output----------\n");
  while(yylex()) {}
  
  printf("\n----------Switch Table----------\n");
  print_switch(symbol_table.dispatch, LENGTH(symbol_table.dispatch));
   
  printf("\n----------Symbol Table----------\n");
  print_symbol(symbol_table.symbol, LENGTH(symbol_table.symbol));
  
  printf("\n----------Next Table----------\n");
  print_next(symbol_table.next, LENGTH(symbol_table.next));
  
  printf("\n");
  return 0;
}

//Initialize the symbol table
void init_symbol_table(void) 
{
  int i;
  for (i = 0; i < 52; i++) symbol_table.dispatch[i] = -1;
  for (i = 0; i < MAX; i++) symbol_table.symbol[i] = '\0';
  for (i = 0; i < MAX; i++) symbol_table.next[i] = -1;
}

//A-Za-Z0-51
int next_symbol (char *s) 
{
  int p = s[0];
  if (p >= 97) return p - 97 + 26; 
  return p - 65;
}

void insert (char *s) 
{
  	int value = next_symbol(s); 
  	int ptr = symbol_table.dispatch[ value ];
  
  	// pointer is the first prefix string[0] previously stored in the symbol table
  	// if pointer is undefined, create.
  	if (ptr == -1) 
	{
    
    	// find the location of prefix in dispatch table
    	int slot = find_first_empty(symbol_table.symbol, LENGTH(symbol_table.symbol));
    	symbol_table.dispatch[value] = slot;    // update the pointer
    
    	// store the rest of characters to symbol table
    	int i = 1;
    	while (i < strlen(s)) symbol_table.symbol[slot++] = s[i++];
    	symbol_table.symbol[slot] = '@';
  	} 
	else 
	{ 
  		// pointer is defined, there are same prefixes. First char is skipped
   	int exit = false;

    	// keep traversing as long as prefix is same
    	int i = 1;      // start with second character of input string
    	int p = ptr;    // start index of same prefix in the symbol table
		while (i < strlen(s)) 
		{
      	if (s[i] == symbol_table.symbol[p]) 
			{
        		i++;
        		p++;
      	} 
			else 
			{
        		exit = true; 
				break;
			}
		}//end while
    
		//either reached delimiter or character does not match
		if (exit == true) 
		{
      	// use the next table to jump to the correct position to store data.
      	int next;
      	if (symbol_table.next[p] == -1)
        		next = find_first_empty(symbol_table.symbol, LENGTH(symbol_table.symbol));
      	else
        		next = symbol_table.next[p];
          
      	// update the next table
      	symbol_table.next[p] = next;
      
      	while (i < strlen(s)) symbol_table.symbol[next++] = s[i++];
			symbol_table.symbol[next] = '@';
    	}//end if
  }//end else
}//insert

//Search for the first empty slot in the symbol table
int find_first_empty(char *array, int size) 
{
	int i; 
	for (i = 0; i < size; i++) 
		if (array[i] == '\0') return i;
}

//Print switch array to console
void print_switch(int *table, int size) 
{
  char alphabets[52] = { 'A', 'B', 'C', 'D', 'E', 'F','G','H',
                         'I','J','K','L','M','N','O','P','Q',
                         'R','S','T','U','V','W','X','Y','Z', 
                         'a','b','c','d','e','f','g','h',
                         'i','j','k','l','m','n','o','p','q',
                         'r','s','t','u','v','w','x','y','z'};
  int i;
  printf(" ");
  for (i = 0; i < 52; i++) printf("%1c  ", alphabets[i]);
  printf("\n"); 
  for (i = 0; i < size; i++) printf("%1d ", table[i]);
}

//Print symbol array to console
void print_symbol(char *table, int size) 
{
  int i; 
 
  for (i = 0; i < size; i++) printf("%1d ", i); 
  printf("\n");
  for (i = 0; i < size; i++) printf("%1c ", table[i]);
}

//Print next array to console
void print_next(int *table, int size) 
{
	int i; 
	printf("Array Indices\n");
  for (i = 0; i < size; i++) printf("%1d ", i);
  printf("\nContent:\n");
  for (i = 0; i < size; i++) printf("%1d ", table[i]);
}
