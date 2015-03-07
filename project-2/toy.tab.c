/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "toy.y" /* yacc.c:339  */

#include <stdio.h>

#line 70 "toy.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "toy.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 170 "toy.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    63,    64,    67,    68,    69,    70,    73,
      74,    77,    80,    83,    84,    85,    86,    87,    88,    91,
      92,    95,    96,    97,   100,   103,   104,   107,   108,   111,
     112,   115,   116,   117,   120,   121,   124,   125,   128,   129,
     132,   135,   136,   137,   140,   141,   142,   143,   144,   145,
     146,   147,   150,   151,   154,   157,   160,   163,   166,   169,
     170,   173,   174,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   200,   201,   202,   205,   206,   209,
     210,   211,   214,   215,   216,   217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "t_bool", "t_break", "t_class",
  "t_double", "t_else", "t_extends", "t_for", "t_if", "t_implements",
  "t_int", "t_interface", "t_newarray", "t_println", "t_readln",
  "t_return", "t_string", "t_void", "t_while", "t_plus", "t_minus",
  "t_multiplication", "t_division", "t_mod", "t_less", "t_lessequal",
  "t_greater", "t_greaterequal", "t_equal", "t_notequal", "t_assignop",
  "t_semicolon", "t_comma", "t_period", "t_leftparen", "t_rightparen",
  "t_leftbracket", "t_rightbracket", "t_leftbrace", "t_rightbrace",
  "t_boolconstant", "t_intconstant", "t_doubleconstant",
  "t_stringconstant", "t_id", "t_or", "t_and", "$accept", "Program", "Dec",
  "Decl", "VariableDecls", "VariableDecl", "Variable", "Type",
  "FunctionDecl", "Formals", "ClassDecl", "Extends", "Implements",
  "IDList", "Field", "InterfaceDecl", "Prototypes", "Prototype",
  "StmtBlock", "Stmts", "Stmt", "IfStmt", "WhileStmt", "ForStmt",
  "BreakStmt", "ReturnStmt", "PrintStmt", "ExprList", "ExprOrEmpty",
  "Expr", "Lvalue", "Call", "Actuals", "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -89

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-89)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -89,   -39,   -89,   -89,   -23,   -89,   -10,   -89,    19,
      12,   -89,   -89,   -21,    -4,   -89,   -89,   -89,    33,     3,
      17,   -89,   -89,   -89,    16,    21,    13,    77,    73,    81,
     -89,    81,   -89,    25,    50,    69,   -89,    -1,    55,     8,
     -89,     2,   -29,   -28,    92,   -89,    32,    95,   102,   -89,
     -89,   -89,    81,   103,   103,    25,   -89,   -89,   105,    81,
      81,   -89,    81,   -89,   -89,   -89,   -89,    46,    52,   125,
      81,   123,   126,   131,   136,   137,   138,   139,   140,   141,
     142,   141,   141,   -89,   -89,   -89,   -89,    85,   -89,   108,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   146,   337,   130,
     -89,   -89,   -89,   -89,   -89,   -89,   141,   141,   158,   141,
     143,   149,   141,    78,   169,   156,   141,   -89,   -89,   -89,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   157,   141,   141,   141,   141,   172,   197,   174,    60,
     337,   -89,   -89,   225,   -89,   173,   253,   175,    78,    78,
     -22,   -22,   337,   411,   411,   411,   411,   393,   393,   -89,
     281,   365,   393,   337,   141,   125,    81,   141,   177,   125,
     141,   141,   -89,   -89,   309,   204,    71,   337,   -89,   -89,
     176,   -89,   141,   125,   -89,   -89,   178,   -89,   125,   -89
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
       0,     0,     0,    95,    92,    93,    94,    84,    51,    62,
      42,    45,    46,    47,    48,    49,    50,     0,    61,    65,
      66,    64,     9,    39,    38,    56,    62,     0,     0,     0,
       0,     0,     0,    75,     0,     0,    91,    40,    41,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    82,    57,     0,    67,     0,    89,     0,    68,    69,
      70,    71,    72,    76,    77,    78,    79,    80,    81,    86,
       0,    73,    74,    63,     0,    62,     0,     0,     0,    62,
      91,    91,    87,    85,     0,    52,     0,    59,    58,    54,
       0,    90,    62,    62,    83,    88,     0,    53,    62,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   -89,   219,   144,    36,   129,     0,   184,   -27,
     -89,   -89,   -89,   181,   -89,   -89,   192,   -89,    79,   -89,
     -88,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -77,   -60,
     -89,   -89,   -34,   -89
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    69,    12,    13,    41,    15,    42,
      16,    27,    34,    45,    58,    17,    38,    39,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   139,    97,    98,
      99,   100,   147,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   118,   111,   124,    43,    52,    52,    18,    53,    54,
      14,     1,    23,   131,     3,     1,   132,     2,     3,    21,
       4,   113,   114,    19,     4,     5,     6,    35,    37,   136,
       6,     7,    67,    68,    24,     1,    20,    24,     3,    37,
      24,    26,    25,    28,     4,    48,    14,   137,    51,   140,
       6,     7,   143,    29,     8,    30,   146,    31,     8,    32,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    44,   160,   161,   162,   163,     1,   175,     8,     3,
      52,   179,    56,    71,     1,     4,    52,     3,    33,    72,
      46,     6,    35,     4,   167,   187,    49,   168,    70,     6,
     189,   122,   123,   124,   174,   186,    70,   177,   184,    24,
     146,   146,    73,   131,    36,    47,   132,    74,    75,     8,
     115,   116,    76,    77,    78,    79,    55,     8,    80,    73,
      81,    59,    63,    64,    74,    75,   180,   181,    60,    76,
      77,    78,    79,    62,    82,    80,    66,    81,    62,   117,
      83,    84,    85,    86,    87,    76,   103,    78,    40,   104,
      40,    82,   135,    81,   105,    62,   176,    83,    84,    85,
      86,    87,   106,   107,   108,   109,   110,    82,   112,   119,
     141,    61,   142,    83,    84,    85,    86,    87,    40,    40,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   138,   145,   159,   131,   164,   144,   132,   166,   170,
     178,   183,   172,   185,   102,   188,   133,   134,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    22,
      57,    50,   131,     0,   165,   132,    65,     0,     0,     0,
       0,     0,     0,     0,   133,   134,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
     131,     0,   169,   132,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,     0,     0,   171,   131,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,     0,     0,     0,   131,     0,     0,   132,
     173,     0,     0,     0,     0,     0,     0,     0,   133,   134,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,     0,   182,     0,   131,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,   133,   134,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,     0,
       0,     0,   131,     0,     0,   132,     0,     0,     0,     0,
       0,     0,     0,     0,   133,   134,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,     0,     0,     0,
     131,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,     0,     0,     0,   131,     0,
       0,   132,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,     0,     0,     0,     0,     0,   131,     0,     0,   132
};

static const yytype_int16 yycheck[] =
{
       0,    89,    79,    25,    31,    34,    34,    46,    37,    37,
      10,     3,    33,    35,     6,     3,    38,     5,     6,     0,
      12,    81,    82,    46,    12,    13,    18,    19,    28,   106,
      18,    19,    59,    60,    38,     3,    46,    38,     6,    39,
      38,     8,    46,    40,    12,    46,    46,   107,    46,   109,
      18,    19,   112,    36,    46,    39,   116,    36,    46,    46,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,    46,   132,   133,   134,   135,     3,   165,    46,     6,
      34,   169,    46,    37,     3,    12,    34,     6,    11,    37,
      40,    18,    19,    12,    34,   183,    41,    37,    62,    18,
     188,    23,    24,    25,   164,   182,    70,   167,    37,    38,
     170,   171,     4,    35,    41,    46,    38,     9,    10,    46,
      35,    36,    14,    15,    16,    17,    34,    46,    20,     4,
      22,    36,    53,    54,     9,    10,   170,   171,    36,    14,
      15,    16,    17,    40,    36,    20,    41,    22,    40,    41,
      42,    43,    44,    45,    46,    14,    33,    16,    29,    33,
      31,    36,    32,    22,    33,    40,   166,    42,    43,    44,
      45,    46,    36,    36,    36,    36,    36,    36,    36,    33,
      37,    52,    33,    42,    43,    44,    45,    46,    59,    60,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    43,    46,    46,    35,    33,    37,    38,    34,    36,
      33,     7,    37,    37,    70,    37,    47,    48,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    10,
      46,    39,    35,    -1,    37,    38,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    35,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,    35,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,    12,    13,    18,    19,    46,    50,
      51,    52,    54,    55,    56,    57,    59,    64,    46,    46,
      46,     0,    52,    33,    38,    46,     8,    60,    40,    36,
      39,    36,    46,    11,    61,    19,    41,    56,    65,    66,
      55,    56,    58,    58,    46,    62,    40,    46,    46,    41,
      65,    46,    34,    37,    37,    34,    54,    57,    63,    36,
      36,    55,    40,    67,    67,    62,    41,    58,    58,    53,
      54,    37,    37,     4,     9,    10,    14,    15,    16,    17,
      20,    22,    36,    42,    43,    44,    45,    46,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    77,    78,    79,
      80,    82,    53,    33,    33,    33,    36,    36,    36,    36,
      36,    77,    36,    78,    78,    35,    36,    41,    69,    33,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    35,    38,    47,    48,    32,    77,    78,    43,    76,
      78,    37,    33,    78,    37,    46,    78,    81,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    46,
      78,    78,    78,    78,    33,    37,    34,    34,    37,    37,
      36,    34,    37,    39,    78,    69,    56,    78,    33,    69,
      81,    81,    33,     7,    37,    37,    77,    69,    37,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    53,
      53,    54,    55,    56,    56,    56,    56,    56,    56,    57,
      57,    58,    58,    58,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    68,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    71,    72,    73,    74,    75,    76,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    81,
      81,    81,    82,    82,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       0,     2,     2,     1,     1,     1,     1,     3,     1,     6,
       6,     3,     1,     0,     7,     2,     0,     2,     0,     3,
       1,     1,     1,     0,     5,     4,     2,     0,     6,     6,
       4,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     9,     2,     3,     5,     3,
       1,     1,     0,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     6,     1,     4,     3,     4,     6,     1,
       3,     0,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 60 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1433 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1439 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1445 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1451 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 68 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1457 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1463 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1469 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 73 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1475 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 74 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1481 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 77 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); printf("[Reduce %i%s",yyn,"]");}
#line 1487 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1493 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1499 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 84 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1505 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 85 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1511 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 86 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1517 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 87 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); printf("[Reduce %i%s",yyn,"]");}
#line 1523 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 88 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1529 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 91 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1535 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1541 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); printf("[Reduce %i%s",yyn,"]");}
#line 1547 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1553 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 97 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1559 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 100 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1565 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 103 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1571 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 104 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1577 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 107 "toy.y" /* yacc.c:1646  */
    { (yyval)= (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1583 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 108 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1589 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 111 "toy.y" /* yacc.c:1646  */
    { (yyval) =(yyvsp[-2]); printf("[Reduce %i%s",yyn,"]");}
#line 1595 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 112 "toy.y" /* yacc.c:1646  */
    { (yyval) =(yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1601 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1607 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 116 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1613 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 117 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1619 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1625 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1631 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1637 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1643 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1649 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1655 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 132 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1661 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1667 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 136 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1673 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1679 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1685 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1691 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 142 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1697 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1703 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1709 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1715 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1721 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 147 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1727 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 150 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1733 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 151 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1739 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 157 "toy.y" /* yacc.c:1646  */
    { (yyval) =(yyvsp[-6])+(yyvsp[-4])+(yyvsp[-2])+(yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1745 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 163 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1751 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1757 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 169 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2])+(yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1763 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 170 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1769 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 173 "toy.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1775 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1781 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 177 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1787 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 178 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1793 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 179 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1799 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 180 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1805 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 181 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1811 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 182 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1817 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 183 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1823 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 184 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1829 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 185 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1835 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 186 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1841 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 187 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1847 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 188 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1853 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 189 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1859 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 190 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1865 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 191 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1871 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 192 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1877 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 193 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1883 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 194 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1889 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 195 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1895 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 196 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1901 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 197 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1907 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 200 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1913 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 201 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]) + (yyvsp[-1]); printf("[Reduce %i%s",yyn,"]");}
#line 1919 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 202 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1925 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 205 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3])+(yyvsp[-1]); printf("[Reduce %i%s",yyn,"]");}
#line 1931 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 206 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-5])+(yyvsp[-3])+(yyvsp[-1]); printf("[Reduce %i%s",yyn,"]");}
#line 1937 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 209 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1943 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 210 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2])+(yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1949 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "toy.y" /* yacc.c:1646  */
    { printf("[Reduce %i%s",yyn,"]");}
#line 1955 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 214 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1961 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 215 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1967 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 216 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1973 "toy.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 217 "toy.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); printf("[Reduce %i%s",yyn,"]");}
#line 1979 "toy.tab.c" /* yacc.c:1646  */
    break;


#line 1983 "toy.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 220 "toy.y" /* yacc.c:1906  */


int main() { yyparse(); return 0;}
yyerror(s)
char *s; { printf("bison error: %s\n", s); }
yywrap() { return(0); }
