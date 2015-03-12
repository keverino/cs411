%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	extern int yylval;

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

	void initializeSymbolTable(void);
	int nextSymbol(char *);
	int searchForEmpty(char *, int);
	void printSwitch(int *, int);    
	void printSymbol(char *, int);  
	void printNext(int *, int);  
	void insert(char *);
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

bool        { printf("\n%s ", yytext); insert(yytext); return (t_bool); } 
break       { printf("\n%s ", yytext); insert(yytext); return (t_break); }
class       { printf("\n%s ", yytext); insert(yytext); return (t_class); } 
double      { printf("\n%s ", yytext); insert(yytext); return (t_double); }
else        { printf("\n%s ", yytext); insert(yytext); return (t_else); } 
extends     { printf("\n%s ", yytext); insert(yytext); return (t_extends); } 
for         { printf("\n%s ", yytext); insert(yytext); return (t_for); } 
if          { printf("\n%s ", yytext); insert(yytext); return (t_if); }
implements  { printf("\n%s ", yytext); insert(yytext); return (t_implements); } 
int         { printf("\n%s ", yytext); insert(yytext); return (t_int); } 
interface   { printf("\n%s ", yytext); insert(yytext); return (t_interface); } 
newArray    { printf("\n%s ", yytext); insert(yytext); return (t_newarray); } 
println     { printf("\n%s ", yytext); insert(yytext); return (t_println); } 
readln      { printf("\n%s ", yytext); insert(yytext); return (t_readln); }
return      { printf("\n%s ", yytext); insert(yytext); return (t_return); }
string      { printf("\n%s ", yytext); insert(yytext); return (t_string); }
void        { printf("\n%s ", yytext); insert(yytext); return (t_void); } 
while       { printf("\n%s ", yytext); insert(yytext); return (t_while); }
true|false  { printf("\n%s ", yytext); return(t_boolconstant); } 
"+"         { printf("\n%s ", yytext); return(t_plus); }
"-"         { printf("\n%s ", yytext); return(t_minus); }
"*"         { printf("\n%s ", yytext); return(t_multiplication); }
"/"         { printf("\n%s ", yytext); return(t_division); }
"%"	    { printf("\n%s ", yytext); return(t_mod);}
"<="        { printf("\n%s ", yytext); return(t_lessequal); }
">"         { printf("\n%s ", yytext); return(t_greater); }
"<"         { printf("\n%s ", yytext); return(t_less);}
">="        { printf("\n%s ", yytext); return(t_greaterequal); }
"=="        { printf("\n%s ", yytext); return(t_equal); }
"!="        { printf("\n%s ", yytext); return(t_notequal); }
"&&"	    { printf("\n%s ", yytext); return(t_and);}
"||"	    { printf("\n%s ", yytext); return(t_or);}
"!"	    { printf("\n%s ", yytext); return(t_not);}
"="         { printf("\n%s ", yytext); return(t_assignop); }
";"         { printf("\n%s ", yytext); return(t_semicolon); }
","         { printf("\n%s ", yytext); return(t_comma); }
"."         { printf("\n%s ", yytext); return(t_period); }
"("         { printf("\n%s ", yytext); return(t_leftparen); }
")"         { printf("\n%s ", yytext); return(t_rightparen); }
"["         { printf("\n%s ", yytext); return(t_leftbracket); }
"]"         { printf("\n%s ", yytext); return(t_rightbracket); }
"{"         { printf("\n%s ", yytext); return(t_leftbrace); }
"}"         { printf("\n%s ", yytext); return(t_rightbrace); }

{newline}   { printf("\n"); }
{integer}       { printf("\n%s ", yytext); return(t_intconstant); }
{double}        { printf("\n%s ", yytext); return(t_doubleconstant); }
{string}        { printf("\n%s ", yytext); return(t_stringconstant); }
{identifier}   	{ printf("\n%s ", "t_id"); insert(yytext); return(t_id); }
{ws}            {; /* ignore whitespace */ }
.               {; /* ignore characters that are not defined*/ }

%%


int main(int argc, char *argv[]) 
{

  initializeSymbolTable();
    
  int retval = parse(); 

  if(retval == 0)
  { printf("\nParser: Input accepted."); }
  else 
  { printf("\nParser: Input rejected."); }

 
  printf("\n");
  return 0;
}

//Initialize the symbol table
void initializeSymbolTable(void) 
{
  int i;
  for (i = 0; i < 52; i++) symbol_table.dispatch[i] = -1;
  for (i = 0; i < MAX; i++) symbol_table.symbol[i] = '\0';
  for (i = 0; i < MAX; i++) symbol_table.next[i] = -1;
}

//A-Za-Z0-51
int nextSymbol (char *s) 
{
  int p = s[0];
  if (p >= 97) return p - 97 + 26; 
  return p - 65;
}

void insert (char *s) 
{
  	int value = nextSymbol(s); 
  	int ptr = symbol_table.dispatch[ value ];
  
  	// pointer is the first prefix string[0] previously stored in the symbol table
  	// if pointer is undefined, create.
  	if (ptr == -1) 
	{
    
    	// find the location of prefix in dispatch table
    	int slot = searchForEmpty(symbol_table.symbol, LENGTH(symbol_table.symbol));
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
        		next = searchForEmpty(symbol_table.symbol, LENGTH(symbol_table.symbol));
      	else
        		next = symbol_table.next[p];
          
      	// update the next table
      	symbol_table.next[p] = next;
      
      	while (i < strlen(s)) symbol_table.symbol[next++] = s[i++];
			symbol_table.symbol[next] = '@';
    	}//end if
  }//end else

 printf("[Shift]"); 
}//insert

//Search for the first empty slot in the symbol table
int searchForEmpty(char *array, int size) 
{
	int i; 
	for (i = 0; i < size; i++) 
		if (array[i] == '\0') return i;
}

//Print switch array to console
void printSwitch(int *table, int size) 
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
void printSymbol(char *table, int size) 
{
  int i; 
 
  for (i = 0; i < size; i++) printf("%1d ", i); 
  printf("\n");
  for (i = 0; i < size; i++) printf("%1c ", table[i]);
}

//Print next array to console
void printNext(int *table, int size) 
{
	int i; 
	printf("Array Indices\n");
  for (i = 0; i < size; i++) printf("%1d ", i);
  printf("\nContent:\n");
  for (i = 0; i < size; i++) printf("%1d ", table[i]);
}
