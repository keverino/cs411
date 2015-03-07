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

#ifndef YY_YY_TOY_TAB_H_INCLUDED
# define YY_YY_TOY_TAB_H_INCLUDED
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
    t_assignop = 287,
    t_semicolon = 288,
    t_comma = 289,
    t_period = 290,
    t_leftparen = 291,
    t_rightparen = 292,
    t_leftbracket = 293,
    t_rightbracket = 294,
    t_leftbrace = 295,
    t_rightbrace = 296,
    t_boolconstant = 297,
    t_intconstant = 298,
    t_doubleconstant = 299,
    t_stringconstant = 300,
    t_id = 301,
    t_or = 302,
    t_and = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOY_TAB_H_INCLUDED  */
