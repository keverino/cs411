#include <stdio.h>
#include <ctype.h>

//Global variables
int charClass;
char lexeme [100];
char nextChar;
int lexLen;
int token;
int nextToken;
FILE *in_fp, *fopen();

// Function Declarations
void addChar();
void getChar();
void getNonBlank();
int lex();

//Character classes
#define LETTER 98
#define DIGIT 97
#define UNKNOWN 99

//Token codes
#define _boolean          1
#define _break            2
#define _class            3
#define _double           4
#define _else             5
#define _extends          6
#define _for              7
#define _if               8
#define _implements       9
#define _int              10
#define _interface        11
#define _newarray         12
#define _println          13
#define _readln           14
#define _return           15
#define _string           16
#define _void             17
#define _while            18
#define _plus             19
#define _minus            20
#define _multiplication   21
#define _division         22
#define _mod              23
#define _less             24
#define _lessequal        25
#define _greater          26
#define _greaterqual      27
#define _equal            28
#define _notequal         29
#define _and              30
#define _or               31
#define _not              32
#define _assignop         33
#define _semicolon        34
#define _comma            35
#define _period           36
#define _leftparen        37
#define _rightparen       38
#define _leftbracket      39
#define _rightbracket     40
#define _leftbrace        41
#define _rightbrace       42
#define _intconstant      43
#define _doubleconstant   44
#define _stringconstant   45
#define _booleanconstant  46
#define _id               47



#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20

//----------------------------------------------------------------------------------------------------
int main()
{
  if ((in_fp = fopen("exToy.txt", "r")) == NULL) printf("ERROR: Cannot open file. \n");
  else
  {
    getChar();
    do { lex(); } while (nextToken != EOF);
  }
}
//----------------------------------------------------------------------------------------------------
int lookup(char ch)
{
  switch(ch)
	{
    case '(':
      addChar();
      nextToken = _leftparen;
      break;
    
    case ')':
      addChar();
      nextToken = _rightparen;
      break;

    case '+':
      addChar();
      nextToken = _plus;
      break;

    case'-':
      addChar();
      nextToken = _minus;
      break;

    case'*':
      addChar();
      nextToken = _multiplication;
      break;

    case'/':
      addChar();
      nextToken = _division;
      break;

    default:
      addChar();
      nextToken = EOF;
      break;
  }// end of switch
  return nextToken;
}
//----------------------------------------------------------------------------------------------------
void addChar()
{
  if (lexLen <= 98) 
  {
    lexeme[lexLen++] = nextChar;
    lexeme[lexLen] = 0;
  }
  else printf("Error - lexeme is too long \n");
}
//----------------------------------------------------------------------------------------------------
void getChar()
{
  if ((nextChar = getc(in_fp)) != EOF) 
  {
    if (isalpha(nextChar)) charClass = LETTER;
    else if (isdigit(nextChar)) charClass = DIGIT;
    else charClass = UNKNOWN;
  }
  else charClass = EOF;
}
//----------------------------------------------------------------------------------------------------
void getNonBlank() { while (isspace(nextChar)) getChar(); }
//----------------------------------------------------------------------------------------------------
int lex()
{
  lexLen = 0;
  getNonBlank();
  switch (charClass)
  {
    case LETTER:
      addChar();
      getChar();
      while (charClass == LETTER || charClass == DIGIT)
      {
        addChar();
        getChar();
      }
      nextToken = IDENT;
      break;
                   
    // parse ints lits
    case DIGIT:
      addChar();
      getChar();
      while (charClass == DIGIT)
      {
        addChar();
        getChar();
      }
      nextToken = INT_LIT;
      break;

    // pares and ops
    case UNKNOWN:
      lookup(nextChar);
      getChar();
      break;

    // end of file
    case EOF:
      nextToken = EOF;
      lexeme[0] = 'E';
      lexeme[1] = 'O';
      lexeme[2] = 'F';
      lexeme[3] = 0;
      break;
  }// end of switch
  printf("Next token is: %d, next lexeme is %s\n", nextToken, lexeme);
  return nextToken;
}
//----------------------------------------------------------------------------------------------------