/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    t_bool = 258,
    t_break = 259,
    t_class = 260,
    t_double = 261,
    t_else = 262,
    t_extends = 263,
    t_for = 264,
    t_if = 265,
    t_implements = 266,
    t_int = 267,
    t_interface = 268,
    t_newarray = 269,
    t_println = 270,
    t_readln = 271,
    t_return = 272,
    t_string = 273,
    t_void = 274,
    t_while = 275,
    t_plus = 276,
    t_minus = 277,
    t_multiplication = 278,
    t_division = 279,
    t_mod = 280,
    t_less = 281,
    t_lessequal = 282,
    t_greater = 283,
    t_greaterequal = 284,
    t_equal = 285,
    t_notequal = 286,
    t_and = 287,
    t_or = 288,
    t_not = 289,
    t_assignop = 290,
    t_semicolon = 291,
    t_comma = 292,
    t_period = 293,
    t_leftparen = 294,
    t_rightparen = 295,
    t_leftbracket = 296,
    t_rightbracket = 297,
    t_leftbrace = 298,
    t_rightbrace = 299,
    t_boolconstant = 300,
    t_intconstant = 301,
    t_doubleconstant = 302,
    t_stringconstant = 303,
    t_id = 304
  };
#endif
/* Tokens.  */
#define t_bool 258
#define t_break 259
#define t_class 260
#define t_double 261
#define t_else 262
#define t_extends 263
#define t_for 264
#define t_if 265
#define t_implements 266
#define t_int 267
#define t_interface 268
#define t_newarray 269
#define t_println 270
#define t_readln 271
#define t_return 272
#define t_string 273
#define t_void 274
#define t_while 275
#define t_plus 276
#define t_minus 277
#define t_multiplication 278
#define t_division 279
#define t_mod 280
#define t_less 281
#define t_lessequal 282
#define t_greater 283
#define t_greaterequal 284
#define t_equal 285
#define t_notequal 286
#define t_and 287
#define t_or 288
#define t_not 289
#define t_assignop 290
#define t_semicolon 291
#define t_comma 292
#define t_period 293
#define t_leftparen 294
#define t_rightparen 295
#define t_leftbracket 296
#define t_rightbracket 297
#define t_leftbrace 298
#define t_rightbrace 299
#define t_boolconstant 300
#define t_intconstant 301
#define t_doubleconstant 302
#define t_stringconstant 303
#define t_id 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
