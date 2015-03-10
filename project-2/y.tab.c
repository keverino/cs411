/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "toy.y"

#include <stdio.h>
int yylex();


/* Line 268 of yacc.c  */
#line 77 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     t_id = 304,
     UMINUS = 305
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
#define UMINUS 305




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 219 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      21,    22,    25,    28,    30,    32,    34,    36,    40,    42,
      49,    56,    60,    62,    63,    71,    74,    75,    78,    79,
      83,    85,    87,    89,    90,    96,   101,   104,   105,   112,
     119,   124,   127,   129,   130,   133,   135,   137,   139,   141,
     143,   145,   147,   153,   161,   167,   177,   180,   184,   190,
     194,   196,   198,   199,   203,   205,   207,   209,   213,   217,
     221,   225,   229,   233,   237,   241,   245,   248,   252,   256,
     260,   264,   268,   272,   276,   283,   285,   290,   294,   299,
     306,   308,   312,   313,   315,   317,   319
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    53,    54,    -1,    54,    -1,
      56,    -1,    59,    -1,    61,    -1,    66,    -1,    56,    55,
      -1,    -1,    57,    36,    -1,    58,    49,    -1,     3,    -1,
      12,    -1,     6,    -1,    18,    -1,    58,    41,    42,    -1,
      49,    -1,    58,    49,    39,    60,    40,    69,    -1,    19,
      49,    39,    60,    40,    69,    -1,    60,    37,    57,    -1,
      57,    -1,    -1,     5,    49,    62,    63,    43,    65,    44,
      -1,     8,    49,    -1,    -1,    11,    64,    -1,    -1,    49,
      37,    64,    -1,    49,    -1,    56,    -1,    59,    -1,    -1,
      13,    49,    43,    67,    44,    -1,    13,    49,    43,    44,
      -1,    68,    67,    -1,    -1,    58,    49,    39,    60,    40,
      36,    -1,    19,    49,    39,    60,    40,    36,    -1,    43,
      55,    70,    44,    -1,    70,    71,    -1,    71,    -1,    -1,
      79,    36,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    69,    -1,    10,    39,    80,
      40,    71,    -1,    10,    39,    80,    40,    71,     7,    71,
      -1,    20,    39,    80,    40,    71,    -1,     9,    39,    79,
      36,    80,    36,    79,    40,    71,    -1,     4,    36,    -1,
      17,    79,    36,    -1,    15,    39,    78,    40,    36,    -1,
      78,    37,    80,    -1,    80,    -1,    80,    -1,    -1,    81,
      35,    80,    -1,    84,    -1,    81,    -1,    82,    -1,    39,
      80,    40,    -1,    80,    21,    80,    -1,    80,    22,    80,
      -1,    80,    23,    80,    -1,    80,    24,    80,    -1,    80,
      25,    80,    -1,    80,    33,    80,    -1,    80,    32,    80,
      -1,    80,    34,    80,    -1,    22,    80,    -1,    80,    26,
      80,    -1,    80,    27,    80,    -1,    80,    28,    80,    -1,
      80,    29,    80,    -1,    80,    30,    80,    -1,    80,    31,
      80,    -1,    16,    39,    40,    -1,    14,    39,    46,    37,
      58,    40,    -1,    49,    -1,    80,    41,    80,    42,    -1,
      80,    38,    49,    -1,    49,    39,    83,    40,    -1,    49,
      38,    49,    39,    83,    40,    -1,    80,    -1,    80,    37,
      83,    -1,    -1,    46,    -1,    47,    -1,    48,    -1,    45,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    68,    69,    72,    73,    74,    75,    78,
      79,    82,    85,    88,    89,    90,    91,    92,    93,    96,
      97,   100,   101,   102,   105,   108,   109,   112,   113,   116,
     117,   120,   121,   122,   125,   126,   129,   130,   133,   134,
     137,   140,   141,   142,   145,   146,   147,   148,   149,   150,
     151,   152,   155,   156,   159,   162,   165,   168,   171,   174,
     175,   178,   179,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   206,   207,   208,   211,   212,
     215,   216,   217,   220,   221,   222,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "t_bool", "t_break", "t_class",
  "t_double", "t_else", "t_extends", "t_for", "t_if", "t_implements",
  "t_int", "t_interface", "t_newarray", "t_println", "t_readln",
  "t_return", "t_string", "t_void", "t_while", "t_plus", "t_minus",
  "t_multiplication", "t_division", "t_mod", "t_less", "t_lessequal",
  "t_greater", "t_greaterequal", "t_equal", "t_notequal", "t_and", "t_or",
  "t_not", "t_assignop", "t_semicolon", "t_comma", "t_period",
  "t_leftparen", "t_rightparen", "t_leftbracket", "t_rightbracket",
  "t_leftbrace", "t_rightbrace", "t_boolconstant", "t_intconstant",
  "t_doubleconstant", "t_stringconstant", "t_id", "UMINUS", "$accept",
  "Program", "Dec", "Decl", "VariableDecls", "VariableDecl", "Variable",
  "Type", "FunctionDecl", "Formals", "ClassDecl", "Extends", "Implements",
  "IDList", "Field", "InterfaceDecl", "Prototypes", "Prototype",
  "StmtBlock", "Stmts", "Stmt", "IfStmt", "WhileStmt", "ForStmt",
  "BreakStmt", "ReturnStmt", "PrintStmt", "ExprList", "ExprOrEmpty",
  "Expr", "Lvalue", "Call", "Actuals", "Constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    55,
      55,    56,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    60,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    73,    74,    75,    76,    77,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      83,    83,    83,    84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       0,     2,     2,     1,     1,     1,     1,     3,     1,     6,
       6,     3,     1,     0,     7,     2,     0,     2,     0,     3,
       1,     1,     1,     0,     5,     4,     2,     0,     6,     6,
       4,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     9,     2,     3,     5,     3,
       1,     1,     0,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     6,     1,     4,     3,     4,     6,
       1,     3,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    13,     0,    15,    14,     0,    16,     0,    18,     0,
       2,     4,     5,     0,     0,     6,     7,     8,    26,     0,
       0,     1,     3,    11,     0,    12,     0,    28,     0,    23,
      17,    23,    25,     0,     0,     0,    35,     0,     0,    37,
      22,     0,     0,     0,    30,    27,    33,     0,     0,    34,
      36,    12,     0,     0,     0,     0,    31,    32,     0,    23,
      23,    21,    10,    20,    19,    29,    24,     0,     0,    43,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,    96,    93,    94,    95,    85,    51,    62,
      42,    45,    46,    47,    48,    49,    50,     0,    61,    65,
      66,    64,     9,    39,    38,    56,    62,     0,     0,     0,
       0,     0,     0,    76,     0,     0,    92,    40,    41,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    83,    57,     0,    67,     0,    90,     0,    68,
      69,    70,    71,    72,    77,    78,    79,    80,    81,    82,
      74,    73,    75,    87,     0,    63,     0,    62,     0,     0,
       0,    62,    92,    92,    88,    86,     0,    52,     0,    59,
      58,    54,     0,    91,    62,    62,    84,    89,     0,    53,
      62,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    69,    12,    13,    41,    15,    42,
      16,    27,    34,    45,    58,    17,    38,    39,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   140,    97,    98,
      99,   100,   148,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
       1,   -89,   -31,   -89,   -89,   -24,   -89,    -6,   -89,    41,
       1,   -89,   -89,    12,   -14,   -89,   -89,   -89,    45,    16,
      46,   -89,   -89,   -89,    13,    50,    29,   111,    74,    78,
     -89,    78,   -89,    77,    85,    93,   -89,    -5,    67,     5,
     -89,    33,   -25,    58,   106,   -89,    39,   109,   126,   -89,
     -89,   -89,    78,   112,   112,    77,   -89,   -89,   122,    78,
      78,   -89,    78,   -89,   -89,   -89,   -89,    68,    96,   130,
      78,   131,   134,   136,   132,   160,   161,   162,   165,   135,
     182,   135,   135,   -89,   -89,   -89,   -89,    -8,   -89,   115,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   167,   291,   187,
     -89,   -89,   -89,   -89,   -89,   -89,   135,   135,   177,   135,
     185,   206,   135,   100,   186,   194,   135,   -89,   -89,   -89,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   195,   135,   135,   210,   207,   226,
     116,   291,   -89,   -89,   228,   -89,   225,   249,   227,    76,
      76,    53,    53,    53,   354,   354,   354,   354,   333,   333,
     333,   312,   100,   -89,   164,   291,   135,   130,    78,   135,
     229,   130,   135,   135,   -89,   -89,   270,   277,    63,   291,
     -89,   -89,   245,   -89,   135,   130,   -89,   -89,   248,   -89,
     130,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   279,   235,   -30,   -26,     0,   261,   -22,
     -89,   -89,   -89,   254,   -89,   -89,   271,   -89,    62,   -89,
     -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -77,   -60,
     -89,   -89,   -52,   -89
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      14,   118,   111,    40,     1,    40,     2,     3,     1,    43,
      14,     3,    52,     4,     5,    53,    56,     4,    18,     6,
       7,   113,   114,     6,    35,    19,    61,    24,    37,   137,
     115,   116,    70,    40,    40,    25,    24,    67,    68,    37,
      70,    21,     1,    20,    48,     3,    14,   138,    23,   141,
       8,     4,   144,    26,     8,    30,   147,     6,     7,    28,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    24,   164,   165,     1,    32,   177,
       3,     1,    51,   181,     3,    29,     4,   133,     8,    31,
       4,   134,     6,    35,   135,    52,     6,   189,    54,   122,
     123,   124,   191,   186,    24,    52,   176,   188,    71,   179,
     133,    49,   147,   147,   134,    63,    64,   135,    36,    73,
     182,   183,    33,     8,    74,    75,    44,     8,    46,    76,
      77,    78,    79,    52,    73,    80,    72,    81,   134,    74,
      75,   135,    47,    55,    76,    77,    78,    79,    59,    76,
      80,    78,    81,   169,    82,    62,   170,    81,    62,   117,
      83,    84,    85,    86,    87,    60,    66,   103,   178,    82,
     104,   106,   105,    62,    82,    83,    84,    85,    86,    87,
      83,    84,    85,    86,    87,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   107,
     108,   109,   134,   119,   110,   135,   175,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   112,   136,   139,   134,   142,   145,   135,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   143,   146,   163,   134,   166,   167,   135,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   168,   172,   180,   134,   174,   171,   135,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   185,   187,   173,   134,   190,    22,
     135,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   102,   184,    57,   134,    65,
      50,   135,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,     0,     0,   134,
       0,     0,   135,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,   133,     0,     0,     0,
     134,     0,     0,   135,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,     0,     0,   133,     0,     0,
       0,   134,     0,     0,   135,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,     0,     0,     0,     0,   133,     0,
       0,     0,   134,     0,     0,   135
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-89))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-1))

static const yytype_int16 yycheck[] =
{
       0,    89,    79,    29,     3,    31,     5,     6,     3,    31,
      10,     6,    37,    12,    13,    40,    46,    12,    49,    18,
      19,    81,    82,    18,    19,    49,    52,    41,    28,   106,
      38,    39,    62,    59,    60,    49,    41,    59,    60,    39,
      70,     0,     3,    49,    49,     6,    46,   107,    36,   109,
      49,    12,   112,     8,    49,    42,   116,    18,    19,    43,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,    41,   135,   136,     3,    49,   167,
       6,     3,    49,   171,     6,    39,    12,    34,    49,    39,
      12,    38,    18,    19,    41,    37,    18,   185,    40,    23,
      24,    25,   190,    40,    41,    37,   166,   184,    40,   169,
      34,    44,   172,   173,    38,    53,    54,    41,    44,     4,
     172,   173,    11,    49,     9,    10,    49,    49,    43,    14,
      15,    16,    17,    37,     4,    20,    40,    22,    38,     9,
      10,    41,    49,    37,    14,    15,    16,    17,    39,    14,
      20,    16,    22,    37,    39,    43,    40,    22,    43,    44,
      45,    46,    47,    48,    49,    39,    44,    36,   168,    39,
      36,    39,    36,    43,    39,    45,    46,    47,    48,    49,
      45,    46,    47,    48,    49,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    39,
      39,    39,    38,    36,    39,    41,    42,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    39,    35,    46,    38,    40,    40,    41,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    36,    49,    49,    38,    36,    40,    41,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    37,    39,    36,    38,    40,    40,    41,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     7,    40,    37,    38,    40,    10,
      41,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    70,    36,    46,    38,    55,
      39,    41,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    38,
      -1,    -1,    41,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    41,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    38,    -1,    -1,    41,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    12,    13,    18,    19,    49,    52,
      53,    54,    56,    57,    58,    59,    61,    66,    49,    49,
      49,     0,    54,    36,    41,    49,     8,    62,    43,    39,
      42,    39,    49,    11,    63,    19,    44,    58,    67,    68,
      57,    58,    60,    60,    49,    64,    43,    49,    49,    44,
      67,    49,    37,    40,    40,    37,    56,    59,    65,    39,
      39,    57,    43,    69,    69,    64,    44,    60,    60,    55,
      56,    40,    40,     4,     9,    10,    14,    15,    16,    17,
      20,    22,    39,    45,    46,    47,    48,    49,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    81,
      82,    84,    55,    36,    36,    36,    39,    39,    39,    39,
      39,    79,    39,    80,    80,    38,    39,    44,    71,    36,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    38,    41,    35,    79,    80,    46,
      78,    80,    40,    36,    80,    40,    49,    80,    83,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    49,    80,    80,    36,    40,    37,    37,
      40,    40,    39,    37,    40,    42,    80,    71,    58,    80,
      36,    71,    83,    83,    36,     7,    40,    40,    79,    71,
      40,    71
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 65 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 68 "toy.y"
    { (yyval) = (yyvsp[(2) - (2)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 69 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 72 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 73 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 74 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 75 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 78 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 79 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 82 "toy.y"
    { (yyval) = (yyvsp[(1) - (2)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 85 "toy.y"
    { (yyval) = (yyvsp[(2) - (2)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 88 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 89 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 90 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 91 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 92 "toy.y"
    { (yyval) = (yyvsp[(1) - (3)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 93 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 96 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 97 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 100 "toy.y"
    { (yyval) = (yyvsp[(1) - (3)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 101 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 102 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 105 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 108 "toy.y"
    { (yyval) = (yyvsp[(2) - (2)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 109 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 112 "toy.y"
    { (yyval)= (yyvsp[(2) - (2)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 113 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 116 "toy.y"
    { (yyval) =(yyvsp[(1) - (3)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 117 "toy.y"
    { (yyval) =(yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 120 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 121 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 122 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 125 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 126 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 129 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 130 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 133 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 134 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 137 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 140 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 141 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 142 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 145 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 146 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 147 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 148 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 149 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 150 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 151 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 152 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 155 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 156 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 162 "toy.y"
    { (yyval) =(yyvsp[(3) - (9)])+(yyvsp[(5) - (9)])+(yyvsp[(7) - (9)])+(yyvsp[(9) - (9)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 168 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 171 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 174 "toy.y"
    { (yyval) = (yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 175 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 178 "toy.y"
    { (yyval)=(yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 179 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 182 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 183 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 184 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 185 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 186 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 187 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 188 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 189 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 190 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 191 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 192 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 193 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 194 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 195 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 196 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 197 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 198 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 199 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 200 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 201 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 202 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 203 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 206 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 207 "toy.y"
    { (yyval) = (yyvsp[(1) - (4)]) + (yyvsp[(3) - (4)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 208 "toy.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 211 "toy.y"
    { (yyval) = (yyvsp[(1) - (4)])+(yyvsp[(3) - (4)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 212 "toy.y"
    { (yyval) = (yyvsp[(1) - (6)])+(yyvsp[(3) - (6)])+(yyvsp[(5) - (6)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 215 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 216 "toy.y"
    { (yyval) = (yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 217 "toy.y"
    { printf("[Reduce %i%s",yyn,"]");}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 220 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 221 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 222 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 223 "toy.y"
    { (yyval) = (yyvsp[(1) - (1)]); printf("[Reduce %i%s",yyn,"]");}
    break;



/* Line 1806 of yacc.c  */
#line 2312 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 226 "toy.y"


int main() { yyparse(); }
yyerror(s)
char *s; { printf("bison error: %s\n", s); }
yywrap() { return(0); }

