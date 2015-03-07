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
#line 1 "kawa.y" /* yacc.c:339  */

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "testClasse.h"
#include "../KAWATree/src/KAWATreeCompiler.h"
#include "../KAWATree/src/KAWATreeMonolithicCompiler.h"
#include "../KAWATree/src/KAWATreeCompilerNode.h"
#include "../KAWATree/src/KAWATreeProgram.h"
#include "../KAWATree/src/KAWATreeClass.h"
#include "../KAWATree/src/KAWATreeMethod.h"
#include "../KAWATree/src/KAWATreeBodyMethod.h"
#include "../KAWATree/src/KAWATreeInstruction.h"
#include "../KAWATree/src/KAWATreeParam.h"
#include "../KAWATree/src/KAWATreeType.h"
#include "../KAWATree/src/KAWATreePrintInteger.h"
#include "../KAWATree/src/KAWATreePrintFloat.h"
#include "../KAWATree/src/KAWATreePrintString.h"

using namespace std;

typedef std::string String;

	int yylex();
	int yyerror( const char* err );
	extern int column;
	extern int lineno;
	KAWATreeProgram* program = new KAWATreeProgram;

#line 98 "kawa.cpp" /* yacc.c:339  */

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
   by #include "kawa.hpp".  */
#ifndef YY_YY_KAWA_HPP_INCLUDED
# define YY_YY_KAWA_HPP_INCLUDED
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
    ENTIER = 258,
    REEL = 259,
    STRING = 260,
    TSTRING = 261,
    TSHORT = 262,
    TINT = 263,
    TLONG = 264,
    TFLOAT = 265,
    TDOUBLE = 266,
    TBYTE = 267,
    TCHAR = 268,
    TBOOLEAN = 269,
    TVOID = 270,
    TIMPORT = 271,
    TPUBLIC = 272,
    TPRIVATE = 273,
    TPROTECTED = 274,
    TFINAL = 275,
    TABSTRACT = 276,
    TSTATIC = 277,
    TVALUE = 278,
    ID = 279,
    TCLASS = 280,
    TINTERFACE = 281,
    TEXTENDS = 282,
    TIMPLEMENTS = 283,
    TSUPER = 284,
    TTHIS = 285,
    TIF = 286,
    TELSE = 287,
    TFALSE = 288,
    TTRUE = 289,
    TSWITCH = 290,
    TCASE = 291,
    TCONTINUE = 292,
    TBREAK = 293,
    TDEFAULT = 294,
    TFOR = 295,
    TWHILE = 296,
    TDO = 297,
    TNEW = 298,
    TNULL = 299,
    TRETURN = 300,
    TPRINT = 301,
    TMAIN = 302,
    TPLUSEQ = 303,
    TMINUSEQ = 304,
    TMULEQ = 305,
    TDIVEQ = 306,
    TMODEQ = 307,
    TINC = 308,
    TDEC = 309,
    TCEQ = 310,
    TCNE = 311,
    TCLE = 312,
    TCGE = 313,
    TOR = 314,
    TAND = 315,
    TANDBINEQ = 316,
    TORBINEQ = 317,
    TXORBINEQ = 318,
    TDECAL = 319,
    TDECALEQ = 320,
    TDECAR = 321,
    TDECAREQ = 322,
    TDECALNS = 323,
    TDECALNSEQ = 324,
    THEN = 325,
    COND = 326,
    NBINAIRE = 327,
    NLOGIC = 328,
    MOINUS = 329,
    PLUS = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 81 "kawa.y" /* yacc.c:355  */

	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;

#line 222 "kawa.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "kawa.cpp" /* yacc.c:358  */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  433

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,     2,     2,     2,    80,    75,     2,
      94,    95,    81,    78,    88,    79,    87,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    96,    91,
      77,    71,    76,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    73,    93,    97,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    72,    83,    84,    85,
      86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   114,   115,   118,   121,   122,   125,
     126,   129,   130,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   145,   146,   147,   148,   149,   150,   153,   154,
     162,   163,   166,   167,   168,   172,   173,   176,   177,   181,
     182,   186,   187,   191,   194,   195,   198,   201,   205,   206,
     207,   210,   211,   215,   217,   218,   221,   225,   226,   227,
     228,   229,   232,   235,   236,   240,   248,   249,   252,   255,
     256,   259,   260,   263,   264,   267,   268,   273,   277,   287,
     290,   291,   292,   293,   296,   299,   300,   303,   305,   306,
     309,   312,   313,   326,   327,   330,   331,   333,   336,   339,
     340,   342,   343,   346,   349,   350,   353,   354,   357,   358,
     361,   362,   365,   369,   372,   373,   376,   377,   378,   379,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   392,
     394,   395,   397,   398,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   456,   457,   460,
     463,   464,   467,   468,   469,   470,   471,   472,   473,   474,
     477,   478,   481,   482,   485,   488,   489,   492,   493,   497,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   512,   520,   521,   524,   525,   528,   529,   532,   533,
     536,   537,   540,   541,   542,   545,   546,   547,   548,   549,
     552,   553,   554,   555,   558,   559,   560,   563,   564,   565,
     566,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
     596,   599
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTIER", "REEL", "STRING", "TSTRING",
  "TSHORT", "TINT", "TLONG", "TFLOAT", "TDOUBLE", "TBYTE", "TCHAR",
  "TBOOLEAN", "TVOID", "TIMPORT", "TPUBLIC", "TPRIVATE", "TPROTECTED",
  "TFINAL", "TABSTRACT", "TSTATIC", "TVALUE", "ID", "TCLASS", "TINTERFACE",
  "TEXTENDS", "TIMPLEMENTS", "TSUPER", "TTHIS", "TIF", "TELSE", "TFALSE",
  "TTRUE", "TSWITCH", "TCASE", "TCONTINUE", "TBREAK", "TDEFAULT", "TFOR",
  "TWHILE", "TDO", "TNEW", "TNULL", "TRETURN", "TPRINT", "TMAIN",
  "TPLUSEQ", "TMINUSEQ", "TMULEQ", "TDIVEQ", "TMODEQ", "TINC", "TDEC",
  "TCEQ", "TCNE", "TCLE", "TCGE", "TOR", "TAND", "TANDBINEQ", "TORBINEQ",
  "TXORBINEQ", "TDECAL", "TDECALEQ", "TDECAR", "TDECAREQ", "TDECALNS",
  "TDECALNSEQ", "THEN", "'='", "COND", "'|'", "'^'", "'&'", "'>'", "'<'",
  "'+'", "'-'", "'%'", "'*'", "'/'", "NBINAIRE", "NLOGIC", "MOINUS",
  "PLUS", "'.'", "','", "'['", "']'", "';'", "'{'", "'}'", "'('", "')'",
  "':'", "'~'", "'!'", "$accept", "Ids", "QList", "ListIds", "Type",
  "Tables", "TablesIndexe", "BasicType", "Modifier", "Modifiers", "Static",
  "All", "Extends", "ExtendsList", "Implements", "ImportDeclaration",
  "TypeDeclaration", "ClassOrInterfaceDeclaration", "ClassDeclaration",
  "InterfaceDeclaration", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "InterfaceBody", "InterfaceBodyDeclarations",
  "InterfaceBodyDeclaration", "MemberDecl", "MethodOrFieldDecl",
  "MethodOrFieldRest", "FieldDeclaratorsRest", "VariableDeclaratorList",
  "VariableDeclarator", "VariableDeclaratorRest", "VariableInitializer",
  "ArrayInitializer", "VariableInitializerList", "MethodDeclaratorRest",
  "MainMethodDeclaratorRest", "ConstructorDeclaratorRest",
  "InterfaceMemberDecl", "InterfaceMethodOrFieldDecl",
  "InterfaceMethodOrFieldRest", "ConstantDeclaratorsRest",
  "ConstantDeclaratorList", "ConstantDeclarator", "ConstantDeclaratorRest",
  "FormalParameters", "MainFormalParametrs", "FormalMainParameterDecls",
  "VoidFormalParametrs", "FormalParametersCalledMethod",
  "FormalParametersCalledMethodDecls", "FormalParameterDecls",
  "VariableModifiers", "VariableModifier", "FormalParameterDeclsRest",
  "FormalParameterCalledMethodDeclsRest", "VariableDeclaratorId", "Block",
  "BlockStatements", "BlockStatement", "Print", "Args", "ArgsRest",
  "Statement", "SwitchBlockStatementGroups", "SwitchBlockStatementGroup",
  "SwitchLabel", "ForControl", "ForVarControl",
  "ForVariableDeclaratorsRest", "ForUpdate", "StatementExpressionList",
  "IDExpression", "Expression", "FacteurEffect", "ExpressionOr",
  "ExpressionAnd", "ExpressionOrLogic", "ExpressionOrExLogic",
  "ExpressionAndLogic", "ExpressionEqNeq", "ExpressionCompEq",
  "TermeDecal", "TermePlus", "terme", "facteur", "factFinal",
  "ObjectInitializer", "MethodeInitializer", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    61,   326,   124,    94,    38,    62,    60,    43,    45,
      37,    42,    47,   327,   328,   329,   330,    46,    44,    91,
      93,    59,   123,   125,    40,    41,    58,   126,    33
};
# endif

#define YYPACT_NINF -350

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-350)))

#define YYTABLE_NINF -150

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      47,    58,  -350,    71,  -350,    78,   303,  -350,  -350,     4,
    -350,  -350,  -350,  -350,  -350,  -350,    87,    94,  -350,  -350,
    -350,     0,    53,   123,   138,     4,  -350,    47,   710,   146,
     153,    86,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -350,  -350,  -350,    92,  -350,    91,   153,    90,    92,  -350,
    -350,  -350,   160,    91,    99,  -350,  -350,  -350,  -350,   102,
      98,    92,  -350,    91,   101,   168,  -350,  -350,   649,  -350,
    -350,  -350,  -350,   670,  -350,    92,   176,   178,  -350,  -350,
    -350,  -350,     1,   -34,   179,  -350,  -350,  -350,  -350,   102,
     107,   -40,   107,   111,   115,   114,  -350,  -350,   -40,  -350,
     120,   141,  -350,   122,   126,   124,   114,  -350,     8,   114,
    -350,  -350,  -350,   127,   691,  -350,  -350,   152,  -350,   133,
     137,   114,  -350,   164,  -350,   202,  -350,  -350,  -350,   140,
     135,  -350,  -350,  -350,  -350,   211,  -350,   398,   164,  -350,
     213,  -350,  -350,  -350,  -350,  -350,   -15,  -350,  -350,   217,
    -350,   220,   231,   533,   533,    63,   533,   533,   533,  -350,
    -350,  -350,   321,   200,   204,   187,   194,   195,    49,    -7,
      85,    36,    82,  -350,  -350,  -350,  -350,    91,   126,   182,
    -350,    91,   181,    23,   180,   186,   183,   184,    -8,    -5,
     185,   190,   322,   142,   191,  -350,  -350,    91,  -350,  -350,
    -350,  -350,  -350,   196,  -350,    91,   137,  -350,  -350,   180,
      92,  -350,  -350,  -350,  -350,  -350,   188,   193,  -350,  -350,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
    -350,  -350,   265,  -350,  -350,  -350,   266,    19,   322,   213,
     221,   421,  -350,   205,   267,   533,   533,   206,  -350,   207,
    -350,   239,   533,   259,  -350,   226,    31,   213,  -350,  -350,
    -350,  -350,   180,   164,   209,  -350,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   204,   187,   194,
     195,    49,    -7,    -7,    36,    36,    36,    36,    36,    36,
      36,    82,    82,  -350,  -350,  -350,  -350,  -350,    92,   228,
    -350,   137,   533,     3,   224,   246,  -350,    40,   236,   254,
     255,  -350,  -350,    -9,   454,   211,   256,   261,   263,   260,
    -350,    92,   270,   283,   137,  -350,   188,  -350,    -4,    91,
     275,   277,   371,  -350,   539,  -350,   284,  -350,   322,   285,
     164,  -350,  -350,   556,   287,   -29,   322,   477,   322,   533,
     288,    31,  -350,   294,  -350,   213,  -350,  -350,  -350,   286,
    -350,  -350,   355,  -350,   137,   212,  -350,   301,  -350,   556,
    -350,  -350,   556,   300,  -350,   297,  -350,   283,  -350,   137,
     308,   322,     5,  -350,   395,   342,   533,  -350,  -350,  -350,
     556,   332,  -350,   339,   246,  -350,   533,   338,  -350,  -350,
    -350,   533,   301,  -350,  -350,  -350,  -350,   341,  -350,   302,
    -350,  -350,  -350
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      42,    31,    29,     0,    30,     0,     0,    43,     1,    34,
      22,    24,    23,    27,    26,    25,     0,     0,    28,    44,
      45,     0,     0,    36,    38,    34,    33,    42,     0,    40,
       0,     0,    32,    41,    21,    14,    16,    17,    18,    19,
      13,    15,    20,     3,    35,    10,     0,     0,     3,    37,
      55,    47,     0,    10,     0,     7,    39,    50,    46,     5,
      29,     3,     8,    10,    29,     0,     6,    53,     0,    54,
       2,     9,    48,     0,    49,     3,     0,     0,    82,    83,
      56,    80,     0,     3,     0,    60,    61,    51,    57,     5,
       0,    10,     0,     0,   105,     0,    79,    94,    10,     4,
       0,    92,    84,     0,    89,     0,     0,    77,     0,     0,
      78,    96,    98,     0,     0,   115,    59,    70,    62,     0,
      67,     0,    81,     0,    85,     0,    87,    86,    58,     0,
       0,    52,    93,   106,   107,     0,   104,    29,     0,    63,
       0,    65,    64,   221,   222,   224,     3,   228,   227,     0,
     229,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      71,    72,   169,   181,   183,   185,   187,   189,   191,   194,
     199,   203,   206,   210,   219,   225,   226,    10,    89,     0,
      95,    10,   109,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   113,    10,   125,   134,
     114,   116,   127,     0,    69,    10,    67,   217,   215,   223,
       3,   218,   216,   214,   213,    74,    76,     0,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    88,     0,   112,   105,   103,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,   144,     0,
     142,     0,     0,     0,   146,     0,   131,     0,   121,    68,
      66,   231,     0,     0,     0,   220,   180,   179,   178,   177,
     176,   172,   170,   171,   175,   174,   173,   182,   184,   186,
     188,   190,   193,   192,   197,   195,   196,   198,   202,   201,
     200,   204,   205,   209,   207,   208,    97,   108,     3,     0,
     126,    67,     0,     3,     0,   111,   124,    10,     0,     0,
       0,   143,   141,     3,     0,     0,     0,     0,     0,     0,
     145,     3,     0,   133,    67,   230,    76,    73,     2,    10,
       0,     0,     0,    99,     0,   102,     0,   122,     0,     0,
       0,   162,   161,   158,     0,    67,     0,     0,     0,     0,
       0,     0,   130,     0,    75,     0,    11,   118,   120,     0,
     110,   123,   135,   148,    67,     3,   159,   166,   167,   156,
     160,   140,   154,     0,   138,     0,   129,   133,   119,    67,
      12,     0,     0,   163,     0,     0,     0,   164,   157,   155,
     152,     0,   132,     0,   111,   136,     0,     0,   137,   147,
     115,     0,   166,   153,   139,   117,   101,     0,   151,    29,
     168,   165,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -350,   -38,   357,   401,   -62,   -45,  -301,  -136,  -350,   -31,
    -350,   423,  -350,  -350,  -350,   422,  -350,   448,    67,    75,
    -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,  -350,
    -117,  -247,   358,  -129,  -350,   116,   362,  -350,  -350,  -350,
    -350,  -350,  -350,   289,  -350,   276,    10,  -350,  -350,   -89,
    -194,   109,   214,  -350,  -350,  -350,    52,   134,    18,    41,
    -350,  -350,  -350,    73,  -185,  -350,  -350,  -350,  -350,  -350,
     106,  -349,    50,  -350,  -135,  -350,   418,   242,   247,   250,
     251,   249,   -78,  -350,   177,   -75,  -126,  -263,  -350,  -350
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   209,    66,    49,    44,   117,   260,    45,    18,     6,
       5,    22,    29,    31,    47,     2,     3,   198,    19,    20,
      58,    64,    74,    51,    60,    69,    87,    88,   118,   119,
     361,   206,   279,   159,   160,   284,   106,   109,    95,    80,
      81,   102,   103,   126,   178,   104,   107,   110,   130,    97,
     263,   324,   113,   114,   136,   255,   355,   182,   199,   137,
     200,   201,   342,   372,   202,   402,   419,   420,   336,   337,
     362,   386,   407,   387,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   197,   203,   141,   111,    53,    77,   273,    62,   204,
      59,    84,   321,   343,   129,   281,   267,   328,    71,   269,
     -10,   217,   319,    70,    25,    92,   216,   213,   214,    68,
     344,   218,   219,    73,   143,   144,   145,    89,   207,   208,
     408,   416,   360,   409,   417,    53,   101,   -10,    93,    54,
     238,   239,   135,    52,    94,   341,   207,   208,   275,   140,
      94,   423,   360,     1,   147,   148,   143,   144,   145,   240,
     241,     8,    52,   320,   149,   150,   207,   208,    52,   140,
       4,    26,   -67,   268,   405,    54,   270,   146,   345,   280,
      52,    21,   352,    96,   -12,   262,   147,   148,   418,   414,
     100,   105,     9,   112,   236,   237,   149,   150,   397,    63,
     256,    23,   257,   116,   245,   246,   151,   152,    24,   258,
     262,   313,   314,   315,   128,   156,   325,   131,   399,    54,
     329,   330,   101,   356,   261,    78,   253,   338,   259,   142,
      85,   153,   154,    79,    27,   143,   144,   145,    86,   242,
      28,   243,   277,   244,   346,   155,   215,   156,   302,   303,
     157,   158,   247,   248,   249,    30,   146,   143,   144,   145,
     311,   312,   282,   382,    46,   147,   148,    48,    50,    52,
      54,   391,    57,   394,    61,   149,   150,   351,   146,    63,
      65,    67,    75,   262,    72,   151,   152,   147,   148,   364,
      90,    94,    91,    98,   350,   108,   115,   149,   150,   335,
     112,   122,   123,   124,   125,   127,   415,   151,   152,   325,
     153,   154,   132,   138,   139,   140,   177,   373,   388,   179,
     180,   384,   393,   274,   395,   181,   156,   205,   262,   157,
     158,   210,   153,   154,   211,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   388,   212,   155,   388,   156,   231,
     233,   157,   158,   333,   232,   207,   208,   403,   234,   254,
     235,   422,   252,   264,   261,   388,   283,   265,   266,   271,
     348,   427,   413,   -12,   272,   276,   430,   278,   285,   316,
     318,   327,   322,   197,   203,    53,   326,   331,   332,    52,
     339,   404,   347,   375,   376,   143,   144,   145,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   340,   349,   353,
      10,    11,    12,    13,    14,    15,   183,   357,    16,    17,
     334,   184,   185,   186,   354,   147,   148,   187,  -149,   188,
     189,  -149,   190,   191,   192,   149,   150,   193,   194,   358,
     359,   366,   367,   186,   369,   151,   152,   187,   368,   188,
     189,   371,   190,   191,   192,   370,   377,   193,   378,   220,
     221,   222,   223,   224,   379,   381,   400,   383,   389,   396,
     153,   154,   225,   226,   227,   398,   228,   401,   229,   406,
     230,   410,   411,   195,   115,  -149,   156,   404,   319,   157,
     158,   143,   144,   145,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   421,   115,   304,   305,   306,   307,   308,
     309,   310,   183,   424,   143,   144,   145,   184,   185,   186,
     425,   147,   148,   187,   428,   188,   189,   432,   190,   191,
     192,   149,   150,   193,   194,   323,    99,    56,    32,    33,
       7,   151,   152,   250,   147,   148,   120,   143,   144,   145,
     121,   429,   374,   380,   149,   150,   426,   251,   317,   365,
     412,   390,   431,   297,   151,   152,   153,   154,   146,   298,
     143,   144,   145,   299,   301,   300,     0,   147,   148,   195,
     115,   196,   156,     0,     0,   157,   158,   149,   150,   153,
     154,   146,     0,     0,     0,     0,     0,   151,   152,     0,
     147,   148,     0,     0,     0,   156,   112,     0,   157,   158,
     149,   150,     0,     0,     0,     0,     0,     0,     0,     0,
     151,   152,   153,   154,     0,     0,   143,   144,   145,     0,
       0,     0,   143,   144,   145,   363,     0,     0,   156,     0,
       0,   157,   158,     0,     0,   153,   154,   146,     0,   143,
     144,   145,     0,   323,     0,     0,   147,   148,   392,     0,
       0,   156,   147,   148,   157,   158,   149,   150,     0,     0,
     385,     0,   149,   150,     0,     0,   151,   152,     0,   147,
     148,     0,   151,   152,     0,     0,     0,     0,     0,   149,
     150,     0,     0,     0,     0,     0,     0,     0,     0,   151,
     152,   153,   154,     0,     0,     0,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,   156,     0,     0,
     157,   158,     0,   156,   153,   154,   157,   158,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,     0,
     156,     0,     0,   157,   158,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    76,     0,    10,    11,    12,    13,
      14,    15,     0,    43,    16,    17,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    82,     0,    10,    11,    12,
      13,    14,    15,     0,    83,    16,    17,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     0,     0,     0,     0,
       0,   133,     0,     0,   134,    43,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43
};

static const yytype_int16 yycheck[] =
{
      45,   137,   137,   120,    93,    43,    68,   192,    53,   138,
      48,    73,   259,   276,     6,   209,    24,   264,    63,    24,
      24,   156,     3,    61,    24,    24,   155,   153,   154,    60,
     277,   157,   158,    64,     3,     4,     5,    75,    53,    54,
     389,    36,    71,   392,    39,    83,    91,    24,    47,    89,
      57,    58,   114,    87,    94,    24,    53,    54,   193,    88,
      94,   410,    71,    16,    33,    34,     3,     4,     5,    76,
      77,     0,    87,   258,    43,    44,    53,    54,    87,    88,
      22,    81,    91,    91,   385,    89,    91,    24,   282,   206,
      87,    87,    89,    83,    71,   184,    33,    34,    93,   400,
      90,    91,    24,    95,    55,    56,    43,    44,   371,    90,
      87,    24,    89,    95,    78,    79,    53,    54,    24,    96,
     209,   247,   248,   249,   106,    94,   261,   109,   375,    89,
     265,   266,   177,   327,    94,    68,   181,   272,   183,   121,
      73,    78,    79,    68,    91,     3,     4,     5,    73,    64,
      27,    66,   197,    68,   283,    92,    93,    94,   236,   237,
      97,    98,    80,    81,    82,    27,    24,     3,     4,     5,
     245,   246,   210,   358,    28,    33,    34,    24,    92,    87,
      89,   366,    92,   368,    24,    43,    44,   322,    24,    90,
      88,    93,    24,   282,    93,    53,    54,    33,    34,   334,
      24,    94,    24,    24,   321,    94,    92,    43,    44,   271,
      95,    91,    71,    91,    88,    91,   401,    53,    54,   354,
      78,    79,    95,    71,    91,    88,    24,   344,   363,    89,
      95,   360,   367,    91,   369,    24,    94,    24,   327,    97,
      98,    24,    78,    79,    24,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   389,    24,    92,   392,    94,    59,
      73,    97,    98,    24,    60,    53,    54,   384,    74,    88,
      75,   406,    90,    87,    94,   410,    88,    94,    94,    94,
     318,   416,   399,    71,    94,    94,   421,    91,    95,    24,
      24,    24,    71,   429,   429,   333,    91,    91,    91,    87,
      41,    89,    93,   348,   349,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    91,    90,    95,
      17,    18,    19,    20,    21,    22,    24,    91,    25,    26,
      91,    29,    30,    31,    88,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    95,
      95,    95,    91,    31,    94,    53,    54,    35,    95,    37,
      38,    78,    40,    41,    42,    95,    91,    45,    91,    48,
      49,    50,    51,    52,     3,    91,    90,    92,    91,    91,
      78,    79,    61,    62,    63,    91,    65,    32,    67,    88,
      69,    91,    95,    91,    92,    93,    94,    89,     3,    97,
      98,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    71,    92,   238,   239,   240,   241,   242,
     243,   244,    24,    91,     3,     4,     5,    29,    30,    31,
      91,    33,    34,    35,    96,    37,    38,    96,    40,    41,
      42,    43,    44,    45,    46,    24,    89,    46,    25,    27,
       2,    53,    54,   177,    33,    34,    98,     3,     4,     5,
      98,   420,   346,   354,    43,    44,   414,   178,   254,   335,
     397,   365,   422,   231,    53,    54,    78,    79,    24,   232,
       3,     4,     5,   233,   235,   234,    -1,    33,    34,    91,
      92,    93,    94,    -1,    -1,    97,    98,    43,    44,    78,
      79,    24,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      33,    34,    -1,    -1,    -1,    94,    95,    -1,    97,    98,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    78,    79,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,     3,     4,     5,    91,    -1,    -1,    94,    -1,
      -1,    97,    98,    -1,    -1,    78,    79,    24,    -1,     3,
       4,     5,    -1,    24,    -1,    -1,    33,    34,    91,    -1,
      -1,    94,    33,    34,    97,    98,    43,    44,    -1,    -1,
      24,    -1,    43,    44,    -1,    -1,    53,    54,    -1,    33,
      34,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    78,    79,    -1,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      97,    98,    -1,    94,    78,    79,    97,    98,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,    -1,
      94,    -1,    -1,    97,    98,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    23,    24,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,   114,   115,    22,   109,   108,   116,     0,    24,
      17,    18,    19,    20,    21,    22,    25,    26,   107,   117,
     118,    87,   110,    24,    24,    24,    81,    91,    27,   111,
      27,   112,   110,   114,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    24,   103,   106,    28,   113,    24,   102,
      92,   122,    87,   100,    89,   104,   102,    92,   119,   100,
     123,    24,   104,    90,   120,    88,   101,    93,   108,   124,
     100,   104,    93,   108,   121,    24,    15,   103,   117,   118,
     138,   139,    15,    24,   103,   117,   118,   125,   126,   100,
      24,    24,    24,    47,    94,   137,   145,   148,    24,   101,
     145,   104,   140,   141,   144,   145,   135,   145,    94,   136,
     146,   148,    95,   151,   152,    92,   157,   104,   127,   128,
     131,   135,    91,    71,    91,    88,   142,    91,   157,     6,
     147,   157,    95,    20,    23,   103,   153,   158,    71,    91,
      88,   129,   157,     3,     4,     5,    24,    33,    34,    43,
      44,    53,    54,    78,    79,    92,    94,    97,    98,   132,
     133,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    24,   143,    89,
      95,    24,   156,    24,    29,    30,    31,    35,    37,    38,
      40,    41,    42,    45,    46,    91,    93,   106,   116,   157,
     159,   160,   163,   173,   132,    24,   130,    53,    54,   100,
      24,    24,    24,   185,   185,    93,   132,   173,   185,   185,
      48,    49,    50,    51,    52,    61,    62,    63,    65,    67,
      69,    59,    60,    73,    74,    75,    55,    56,    57,    58,
      76,    77,    64,    66,    68,    78,    79,    80,    81,    82,
     144,   142,    90,   104,    88,   154,    87,    89,    96,   104,
     105,    94,   148,   149,    87,    94,    94,    24,    91,    24,
      91,    94,    94,   163,    91,   173,    94,   104,    91,   131,
     129,   149,   100,    88,   134,    95,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   176,   177,   178,
     179,   180,   181,   181,   183,   183,   183,   183,   183,   183,
     183,   184,   184,   185,   185,   185,    24,   151,    24,     3,
     163,   130,    71,    24,   150,   173,    91,    24,   130,   173,
     173,    91,    91,    24,    91,   103,   167,   168,   173,    41,
      91,    24,   161,   186,   130,   149,   132,    93,   100,    90,
     129,   173,    89,    95,    88,   155,   149,    91,    95,    95,
      71,   129,   169,    91,   173,   156,    95,    91,    95,    94,
      95,    78,   162,   129,   134,   104,   104,    91,    91,     3,
     150,    91,   163,    92,   132,    24,   170,   172,   173,    91,
     169,   163,    91,   173,   163,   173,    91,   186,    91,   130,
      90,    32,   164,   129,    89,   105,    88,   171,   170,   170,
      91,    95,   162,   129,   105,   163,    36,    39,    93,   165,
     166,    71,   173,   170,    91,    91,   155,   173,    96,   158,
     173,   171,    96
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   101,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   116,   116,   117,   118,   119,   120,
     120,   121,   121,   122,   123,   123,   124,   125,   125,   125,
     125,   125,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   136,   137,
     138,   138,   138,   138,   139,   140,   140,   141,   142,   142,
     143,   144,   144,   145,   145,   146,   146,   147,   148,   149,
     149,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   157,   158,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   160,
     161,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   164,   164,   165,
     166,   166,   167,   167,   167,   167,   167,   167,   167,   167,
     168,   168,   169,   169,   170,   171,   171,   172,   172,   173,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   179,   180,   180,   180,   181,   181,   181,   181,   181,
     182,   182,   182,   182,   183,   183,   183,   184,   184,   184,
     184,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     187,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     4,     0,     3,     2,     3,     3,
       0,     4,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     0,     3,     2,     0,     2,     0,     2,     0,     2,
       0,     6,     0,     2,     2,     2,     5,     4,     3,     2,
       0,     2,     5,     3,     2,     0,     2,     1,     4,     3,
       1,     1,     3,     2,     2,     2,     3,     0,     2,     3,
       1,     1,     1,     4,     2,     3,     0,     1,     1,     1,
       1,     4,     1,     1,     3,     2,     2,     2,     3,     0,
       2,     3,     1,     3,     1,     3,     1,     4,     2,     3,
       1,     6,     2,     4,     2,     0,     1,     1,     2,     0,
       2,     0,     2,     3,     2,     0,     1,     8,     5,     5,
       5,     2,     4,     5,     3,     1,     3,     1,     1,     5,
       2,     0,     3,     0,     1,     5,     7,     7,     5,     7,
       5,     3,     2,     3,     2,     3,     2,     2,     0,     2,
       3,     2,     4,     5,     3,     4,     3,     4,     2,     3,
       3,     2,     1,     3,     2,     3,     0,     1,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       4,     3
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
#line 110 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1718 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1724 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 114 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1730 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 115 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1736 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1742 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1748 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1754 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1760 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 126 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1766 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 129 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1772 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 130 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1778 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1784 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 134 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1790 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 135 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1796 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1802 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1808 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 138 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1814 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 139 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1820 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1826 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1832 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1838 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 146 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1844 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 147 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1850 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1856 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 149 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1862 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 150 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1868 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 153 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1874 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 154 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1880 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 162 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1886 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 163 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1892 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 166 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1898 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 167 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1904 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 168 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1910 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 172 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1916 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 173 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1922 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1928 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1934 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 181 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1940 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 182 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1946 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1952 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 187 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1958 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "kawa.y" /* yacc.c:1646  */
    { (yyval.vint)=0; }
#line 1964 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 194 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1970 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 195 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1976 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 198 "kawa.y" /* yacc.c:1646  */
    { cout << "CLASS NAME: " << *(yyvsp[-3].vstring) << endl; }
#line 1982 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 201 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1988 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 205 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1994 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2000 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2006 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2012 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 211 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2018 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 215 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2024 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2030 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2036 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2042 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 226 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2048 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 227 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2054 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 228 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2060 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 229 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2066 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2072 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 235 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2078 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 236 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2084 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 240 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2090 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 248 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2096 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 249 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2102 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 252 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2108 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 255 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2114 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 256 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2120 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2126 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 260 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2132 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 263 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-2].vint);}
#line 2138 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 264 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2144 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2150 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2156 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 273 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2162 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 277 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2168 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 287 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2174 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 290 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2180 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 291 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2186 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 292 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2192 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 293 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2198 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 296 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2204 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 299 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2210 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 300 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2216 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 303 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2222 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 305 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2228 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 306 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2234 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 309 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2240 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 312 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2246 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 313 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2252 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 326 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2258 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 327 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2264 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 330 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2270 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 331 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2276 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 333 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2282 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 336 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2288 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 339 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2294 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 340 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2300 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 342 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2306 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 343 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2312 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 346 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2318 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 349 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2324 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 350 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2330 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 353 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2336 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 354 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2342 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 357 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2348 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 358 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2354 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 361 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2360 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 362 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2366 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 365 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2372 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 369 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2378 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 372 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2384 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 373 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2390 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 376 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2396 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 377 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2402 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 378 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2408 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 379 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2414 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 381 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2420 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 382 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2426 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 383 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2432 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 384 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2438 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 385 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2444 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 386 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2450 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 387 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2456 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 388 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2462 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 389 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2468 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 392 "kawa.y" /* yacc.c:1646  */
    {cout << "Print: " << (yyvsp[-4].vint) << endl; (yyval.vint)=0;}
#line 2474 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 394 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2480 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 395 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2486 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 397 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2492 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 398 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2498 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 404 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2504 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 405 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2510 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 406 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2516 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 407 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2522 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 408 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2528 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 409 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2534 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 410 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2540 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 411 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2546 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 412 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2552 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2558 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 414 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2564 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 415 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2570 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 416 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2576 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 456 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2582 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 457 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2588 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 460 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2594 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 463 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2600 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 464 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2606 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 467 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2612 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 468 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2618 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 469 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2624 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 470 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2630 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 471 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2636 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 472 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2642 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 473 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2648 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 474 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2654 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 477 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2660 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 478 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2666 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 481 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2672 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 482 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2678 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 485 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2684 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 488 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2690 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 489 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2696 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 492 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2702 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 493 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2708 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 497 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2714 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 500 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2720 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 501 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2726 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 502 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2732 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 503 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2738 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 504 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2744 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 505 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2750 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 506 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2756 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 507 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2762 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 508 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2768 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 509 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2774 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 510 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2780 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 512 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2786 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 520 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2792 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 521 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2798 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 524 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2804 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 525 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2810 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 528 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2816 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 529 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2822 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 532 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2828 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 533 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2834 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 536 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2840 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 537 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2846 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 540 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2852 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 541 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2858 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 542 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2864 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 545 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2870 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 546 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2876 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 547 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2882 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 548 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2888 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 549 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2894 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 552 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2900 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 553 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2906 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 554 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2912 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 555 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2918 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 558 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2924 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 559 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2930 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 560 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2936 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 563 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2942 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 564 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2948 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 565 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2954 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 566 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2960 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 569 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2966 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 570 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2972 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 571 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2978 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 572 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2984 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 573 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2990 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 574 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2996 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 575 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3002 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 576 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3008 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 577 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3014 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 584 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3020 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 585 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3026 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 586 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3032 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 587 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3038 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 588 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3044 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 589 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3050 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 590 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3056 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 591 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3062 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 592 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3068 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 593 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3074 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 596 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3080 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 599 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3086 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3090 "kawa.cpp" /* yacc.c:1646  */
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
#line 603 "kawa.y" /* yacc.c:1906  */


/*#include "lex.yy.c"*/

int yyerror( const char* err )
{
  printf("Erreur syntaxique: '%s' est imprévu dans la ligne [%d] colonne [%d]\n", err, lineno, column);
  return 0;
}

