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
#include "../AST/AST.h"
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
    TPRINTI = 303,
    TPRINTF = 304,
    TPRINTS = 305,
    TPLUSEQ = 306,
    TMINUSEQ = 307,
    TMULEQ = 308,
    TDIVEQ = 309,
    TMODEQ = 310,
    TINC = 311,
    TDEC = 312,
    TCEQ = 313,
    TCNE = 314,
    TCLE = 315,
    TCGE = 316,
    TOR = 317,
    TAND = 318,
    TANDBINEQ = 319,
    TORBINEQ = 320,
    TXORBINEQ = 321,
    TDECAL = 322,
    TDECALEQ = 323,
    TDECAR = 324,
    TDECAREQ = 325,
    TDECALNS = 326,
    TDECALNSEQ = 327,
    THEN = 328,
    COND = 329,
    NBINAIRE = 330,
    NLOGIC = 331,
    MOINUS = 332,
    PLUS = 333
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

#line 225 "kawa.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "kawa.cpp" /* yacc.c:358  */

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
#define YYLAST   774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  457

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,     2,     2,     2,    83,    78,     2,
      97,    98,    84,    81,    91,    82,    90,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    94,
      80,    74,    79,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    93,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,    76,    96,   100,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    75,
      86,    87,    88,    89
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
     380,   381,   382,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   395,   397,   398,   400,   401,   404,   406,   407,
     408,   411,   413,   414,   415,   418,   420,   421,   422,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   481,   482,   485,   488,   489,   492,   493,   494,
     495,   496,   497,   498,   499,   502,   503,   506,   507,   510,
     513,   514,   517,   518,   522,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   537,   545,   546,   549,
     550,   553,   554,   557,   558,   561,   562,   565,   566,   567,
     570,   571,   572,   573,   574,   577,   578,   579,   580,   583,
     584,   585,   588,   589,   590,   591,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   621,   624
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
  "TPRINTI", "TPRINTF", "TPRINTS", "TPLUSEQ", "TMINUSEQ", "TMULEQ",
  "TDIVEQ", "TMODEQ", "TINC", "TDEC", "TCEQ", "TCNE", "TCLE", "TCGE",
  "TOR", "TAND", "TANDBINEQ", "TORBINEQ", "TXORBINEQ", "TDECAL",
  "TDECALEQ", "TDECAR", "TDECAREQ", "TDECALNS", "TDECALNSEQ", "THEN",
  "'='", "COND", "'|'", "'^'", "'&'", "'>'", "'<'", "'+'", "'-'", "'%'",
  "'*'", "'/'", "NBINAIRE", "NLOGIC", "MOINUS", "PLUS", "'.'", "','",
  "'['", "']'", "';'", "'{'", "'}'", "'('", "')'", "':'", "'~'", "'!'",
  "$accept", "Ids", "QList", "ListIds", "Type", "Tables", "TablesIndexe",
  "BasicType", "Modifier", "Modifiers", "Static", "All", "Extends",
  "ExtendsList", "Implements", "ImportDeclaration", "TypeDeclaration",
  "ClassOrInterfaceDeclaration", "ClassDeclaration",
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
  "PrintF", "ArgsF", "PrintI", "ArgsI", "PrintS", "ArgsS", "Statement",
  "SwitchBlockStatementGroups", "SwitchBlockStatementGroup", "SwitchLabel",
  "ForControl", "ForVarControl", "ForVariableDeclaratorsRest", "ForUpdate",
  "StatementExpressionList", "IDExpression", "Expression", "FacteurEffect",
  "ExpressionOr", "ExpressionAnd", "ExpressionOrLogic",
  "ExpressionOrExLogic", "ExpressionAndLogic", "ExpressionEqNeq",
  "ExpressionCompEq", "TermeDecal", "TermePlus", "terme", "facteur",
  "factFinal", "ObjectInitializer", "MethodeInitializer", YY_NULLPTR
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
     325,   326,   327,   328,    61,   329,   124,    94,    38,    62,
      60,    43,    45,    37,    42,    47,   330,   331,   332,   333,
      46,    44,    91,    93,    59,   123,   125,    40,    41,    58,
     126,    33
};
# endif

#define YYPACT_NINF -377

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-377)))

#define YYTABLE_NINF -165

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    39,  -377,   107,  -377,    92,   256,  -377,  -377,    45,
    -377,  -377,  -377,  -377,  -377,  -377,   105,   136,  -377,  -377,
    -377,     6,    76,   145,   158,    45,  -377,     7,   285,   163,
     173,   104,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,  -377,  -377,   121,  -377,   126,   173,   125,   121,  -377,
    -377,  -377,   197,   126,   109,  -377,  -377,  -377,  -377,   131,
     127,   121,  -377,   126,   129,   200,  -377,  -377,   373,  -377,
    -377,  -377,  -377,   748,  -377,   121,   205,   207,  -377,  -377,
    -377,  -377,    21,    -9,   210,  -377,  -377,  -377,  -377,   131,
     141,    17,   141,   144,   147,   151,  -377,  -377,    17,  -377,
     153,   176,  -377,   160,   165,   175,   151,  -377,    10,   151,
    -377,  -377,  -377,   167,   480,  -377,  -377,   193,  -377,   185,
     179,   151,  -377,   171,  -377,   260,  -377,  -377,  -377,   194,
     187,  -377,  -377,  -377,  -377,   265,  -377,   420,   171,  -377,
     277,  -377,  -377,  -377,  -377,  -377,   -14,  -377,  -377,   278,
    -377,   282,   283,   617,   617,    49,   617,   617,   617,  -377,
    -377,  -377,    47,   246,   248,   236,   237,   235,    64,    79,
     115,   112,   123,  -377,  -377,  -377,  -377,   126,   165,   223,
    -377,   126,   227,    97,   222,   230,   239,   240,    -3,     3,
     241,   242,   195,   475,   243,   244,   245,   247,  -377,  -377,
     126,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,   249,
    -377,   126,   179,  -377,  -377,   222,   121,  -377,  -377,  -377,
    -377,  -377,   255,   250,  -377,  -377,   617,   617,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   617,   617,   617,   617,  -377,  -377,   323,  -377,
    -377,  -377,   325,    11,   195,   277,   279,   502,  -377,   274,
     348,   617,   617,   280,  -377,   281,  -377,   155,   617,   332,
    -377,   295,    36,    61,    53,    42,   277,  -377,  -377,  -377,
    -377,   222,   171,   300,  -377,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   248,   236,   237,   235,
      64,    79,    79,   112,   112,   112,   112,   112,   112,   112,
     123,   123,  -377,  -377,  -377,  -377,  -377,   121,   307,  -377,
     179,   617,    -6,   303,   328,  -377,    55,   326,   337,   338,
    -377,  -377,   -19,   537,   265,   339,   344,   341,   343,  -377,
     121,   345,   360,  -377,  -377,   347,  -377,  -377,   349,  -377,
    -377,   350,   179,  -377,   255,  -377,    -5,   126,   352,   358,
     439,  -377,   625,  -377,   362,  -377,   195,   364,   171,  -377,
    -377,   652,   377,    29,   195,   583,   195,   617,   378,    36,
    -377,   379,   380,   381,   387,  -377,   277,  -377,  -377,  -377,
     374,  -377,  -377,   450,  -377,   179,   -25,  -377,   392,  -377,
     652,  -377,  -377,   652,   390,  -377,   397,  -377,   360,  -377,
    -377,  -377,  -377,   179,   284,   195,    -1,  -377,   482,   422,
     617,  -377,  -377,  -377,   652,   403,  -377,   404,   328,  -377,
     617,   411,  -377,  -377,  -377,   617,   392,  -377,  -377,  -377,
    -377,   412,  -377,   321,  -377,  -377,  -377
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
       0,    65,    64,   236,   237,   239,     3,   243,   242,     0,
     244,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      71,    72,   184,   196,   198,   200,   202,   204,   206,   209,
     214,   218,   221,   225,   234,   240,   241,    10,    89,     0,
      95,    10,   109,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   113,
      10,   128,   149,   114,   116,   118,   119,   117,   130,     0,
      69,    10,    67,   232,   230,   238,     3,   233,   231,   229,
     228,    74,    76,     0,   226,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    88,     0,   112,
     105,   103,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,   159,     0,   157,     0,     0,     0,
     161,     0,   134,   144,   140,   148,     0,   124,    68,    66,
     246,     0,     0,     0,   235,   195,   194,   193,   192,   191,
     187,   185,   186,   190,   189,   188,   197,   199,   201,   203,
     205,   208,   207,   212,   210,   211,   213,   217,   216,   215,
     219,   220,   224,   222,   223,    97,   108,     3,     0,   129,
      67,     0,     3,     0,   111,   127,    10,     0,     0,     0,
     158,   156,     3,     0,     0,     0,     0,     0,     0,   160,
       3,     0,   136,   142,   143,     0,   138,   139,     0,   146,
     147,     0,    67,   245,    76,    73,     2,    10,     0,     0,
       0,    99,     0,   102,     0,   125,     0,     0,     0,   177,
     176,   173,     0,    67,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,    75,     0,    11,   121,   123,
       0,   110,   126,   150,   163,    67,     3,   174,   181,   182,
     171,   175,   155,   169,     0,   153,     0,   132,   136,   141,
     137,   145,   122,    67,    12,     0,     0,   178,     0,     0,
       0,   179,   172,   170,   167,     0,   135,     0,   111,   151,
       0,     0,   152,   162,   115,     0,   181,   168,   154,   120,
     101,     0,   166,    29,   183,   180,   165
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -377,   -39,   423,   467,   -58,   -45,  -296,  -136,  -377,   128,
    -377,   497,  -377,  -377,  -377,   496,  -377,   522,    83,   110,
    -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -118,  -253,   427,  -135,  -377,   164,   429,  -377,  -377,  -377,
    -377,  -377,  -377,   351,  -377,   353,    90,  -377,  -377,   -88,
    -202,   161,   287,  -377,  -377,  -377,    96,   199,   -47,    93,
    -377,  -377,  -377,   120,  -377,  -377,  -377,  -377,  -377,  -377,
    -186,  -377,  -377,  -377,  -377,  -377,   156,  -376,    98,  -377,
    -130,  -377,   178,   311,   312,   310,   313,   314,   -33,  -377,
      14,   -35,  -129,  -271,  -377,  -377
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   215,    66,    49,    44,   117,   266,    45,    18,     6,
       5,    22,    29,    31,    47,     2,     3,   201,    19,    20,
      58,    64,    74,    51,    60,    69,    87,    88,   118,   119,
     379,   212,   288,   159,   160,   293,   106,   109,    95,    80,
      81,   102,   103,   126,   178,   104,   107,   110,   130,    97,
     269,   333,   113,   114,   136,   261,   373,   182,   202,   137,
     203,   204,   351,   390,   205,   358,   206,   355,   207,   361,
     208,   426,   443,   444,   345,   346,   380,   407,   431,   408,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   200,   141,   210,    53,   111,   279,   209,    62,    59,
      77,   352,   330,   290,   328,    84,   129,   337,    71,   -10,
     222,   273,    70,     1,   219,   220,   223,   275,   224,   225,
      25,   213,   214,   362,   432,   440,    89,   433,   441,   143,
     144,   145,   213,   214,    53,    92,   101,   359,   116,   -12,
     213,   214,   143,   144,   145,   378,   135,   356,   447,   128,
     350,     4,   131,   281,   353,    52,   360,   428,    93,   147,
     148,    52,   140,   146,   142,   -67,    52,   357,   329,   149,
     150,    52,   147,   148,    52,   354,   370,    54,    94,   363,
      26,   274,   149,   150,   289,   442,   268,   276,   226,   227,
     228,   229,   230,   378,    63,   151,   152,     8,   112,    54,
     429,   231,   232,   233,    94,   234,     9,   235,   418,   236,
     140,   -10,   242,   243,   322,   323,   324,   268,   438,    23,
     153,   154,   101,   156,   374,    21,   259,   334,   265,   244,
     245,   338,   339,   423,   155,   221,   156,    54,   347,   157,
     158,    78,   267,   213,   214,   286,    85,   364,   246,   247,
      24,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,   -12,    28,    96,   143,   144,   145,   291,    79,   342,
     100,   105,   248,    86,   249,    30,   250,   262,    68,   263,
     403,    46,    73,   251,   252,   146,   264,    48,   412,    50,
     415,   369,    63,   268,   147,   148,   253,   254,   255,   311,
     312,    52,   368,   382,   149,   150,   320,   321,    54,   344,
      57,    61,    65,    67,    75,    72,   186,   151,   152,    90,
     187,    91,   188,   189,    98,   190,   191,   192,    94,   439,
     193,   108,   334,   405,   394,   112,   115,   122,   268,   343,
     123,   409,   153,   154,   124,   414,   125,   416,   313,   314,
     315,   316,   317,   318,   319,   132,   155,   138,   156,   127,
     140,   157,   158,    10,    11,    12,    13,    14,    15,   139,
     409,    16,    17,   409,   177,   180,   179,   427,   366,   181,
     115,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     446,   211,   216,    53,   409,   437,   217,   218,   237,    43,
     451,   238,   239,   241,   240,   454,   258,   200,   260,   267,
     270,   396,   397,   209,   143,   144,   145,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   271,   272,   277,   278,
     282,   283,   284,   287,   285,   183,   292,   325,   294,   327,
     184,   185,   186,   331,   147,   148,   187,  -164,   188,   189,
    -164,   190,   191,   192,   149,   150,   193,   194,   335,   195,
     196,   197,   336,   348,   340,   341,   428,   151,   152,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    76,   349,
      10,    11,    12,    13,    14,    15,   365,    43,    16,    17,
     367,   371,   153,   154,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   198,   115,  -164,   156,   372,
     375,   157,   158,   143,   144,   145,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   376,   377,   384,   385,   386,
     387,   389,   400,   388,   183,   391,   398,   392,   393,   184,
     185,   186,   399,   147,   148,   187,   402,   188,   189,   404,
     190,   191,   192,   149,   150,   193,   194,   424,   195,   196,
     197,   410,   417,   419,   420,   421,   151,   152,   143,   144,
     145,   422,   425,   430,   434,   328,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   435,   445,   448,   449,   146,
     133,   153,   154,   134,    43,   143,   144,   145,   147,   148,
     452,   456,    99,    56,   198,   115,   199,   156,   149,   150,
     157,   158,    32,    33,     7,   120,   332,   121,   395,   257,
     256,   151,   152,   401,   450,   147,   148,   453,   436,   411,
     143,   144,   145,   383,   455,   149,   150,   326,   306,   308,
     307,     0,     0,   309,     0,   310,   153,   154,   151,   152,
       0,   146,     0,     0,     0,     0,     0,     0,     0,   280,
     147,   148,   156,     0,     0,   157,   158,     0,     0,     0,
     149,   150,     0,   153,   154,     0,   143,   144,   145,     0,
       0,     0,     0,   151,   152,     0,     0,     0,     0,   156,
     112,     0,   157,   158,     0,     0,     0,   146,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   148,   153,   154,
     143,   144,   145,     0,     0,     0,   149,   150,   143,   144,
     145,   381,     0,     0,   156,     0,     0,   157,   158,   151,
     152,   146,     0,     0,     0,     0,     0,     0,     0,   332,
     147,   148,     0,     0,     0,   143,   144,   145,   147,   148,
     149,   150,     0,     0,   153,   154,     0,     0,   149,   150,
       0,     0,     0,   151,   152,     0,   406,   413,     0,     0,
     156,   151,   152,   157,   158,   147,   148,     0,     0,     0,
       0,     0,     0,     0,     0,   149,   150,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   153,   154,   151,   152,
       0,     0,     0,     0,   156,     0,     0,   157,   158,     0,
       0,     0,   156,     0,     0,   157,   158,     0,     0,     0,
       0,     0,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,   157,   158,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    82,     0,    10,    11,    12,    13,    14,
      15,     0,    83,    16,    17
};

static const yytype_int16 yycheck[] =
{
      45,   137,   120,   138,    43,    93,   192,   137,    53,    48,
      68,   282,   265,   215,     3,    73,     6,   270,    63,    24,
     155,    24,    61,    16,   153,   154,   156,    24,   157,   158,
      24,    56,    57,   286,   410,    36,    75,   413,    39,     3,
       4,     5,    56,    57,    83,    24,    91,     5,    95,    74,
      56,    57,     3,     4,     5,    74,   114,     4,   434,   106,
      24,    22,   109,   193,     3,    90,    24,    92,    47,    33,
      34,    90,    91,    24,   121,    94,    90,    24,   264,    43,
      44,    90,    33,    34,    90,    24,    92,    92,    97,   291,
      84,    94,    43,    44,   212,    96,   184,    94,    51,    52,
      53,    54,    55,    74,    93,    56,    57,     0,    98,    92,
     406,    64,    65,    66,    97,    68,    24,    70,   389,    72,
      91,    24,    58,    59,   253,   254,   255,   215,   424,    24,
      81,    82,   177,    97,   336,    90,   181,   267,   183,    60,
      61,   271,   272,   396,    95,    96,    97,    92,   278,   100,
     101,    68,    97,    56,    57,   200,    73,   292,    79,    80,
      24,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      94,    74,    27,    83,     3,     4,     5,   216,    68,    24,
      90,    91,    67,    73,    69,    27,    71,    90,    60,    92,
     376,    28,    64,    81,    82,    24,    99,    24,   384,    95,
     386,   331,    93,   291,    33,    34,    83,    84,    85,   242,
     243,    90,   330,   343,    43,    44,   251,   252,    92,   277,
      95,    24,    91,    96,    24,    96,    31,    56,    57,    24,
      35,    24,    37,    38,    24,    40,    41,    42,    97,   425,
      45,    97,   372,   378,   362,    98,    95,    94,   336,    94,
      74,   381,    81,    82,    94,   385,    91,   387,   244,   245,
     246,   247,   248,   249,   250,    98,    95,    74,    97,    94,
      91,   100,   101,    17,    18,    19,    20,    21,    22,    94,
     410,    25,    26,   413,    24,    98,    92,   405,   327,    24,
      95,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     430,    24,    24,   342,   434,   423,    24,    24,    62,    24,
     440,    63,    76,    78,    77,   445,    93,   453,    91,    97,
      90,   366,   367,   453,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    97,    97,    97,    97,
      97,    97,    97,    94,    97,    24,    91,    24,    98,    24,
      29,    30,    31,    74,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    94,    48,
      49,    50,    24,    41,    94,    94,    92,    56,    57,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    94,
      17,    18,    19,    20,    21,    22,    96,    24,    25,    26,
      93,    98,    81,    82,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,    94,    95,    96,    97,    91,
      94,   100,   101,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    98,    98,    98,    94,    98,
      97,    81,     3,    98,    24,    98,    94,    98,    98,    29,
      30,    31,    94,    33,    34,    35,    94,    37,    38,    95,
      40,    41,    42,    43,    44,    45,    46,    93,    48,    49,
      50,    94,    94,    94,    94,    94,    56,    57,     3,     4,
       5,    94,    32,    91,    94,     3,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    98,    74,    94,    94,    24,
      20,    81,    82,    23,    24,     3,     4,     5,    33,    34,
      99,    99,    89,    46,    94,    95,    96,    97,    43,    44,
     100,   101,    25,    27,     2,    98,    24,    98,   364,   178,
     177,    56,    57,   372,   438,    33,    34,   444,   418,   383,
       3,     4,     5,   344,   446,    43,    44,   260,   237,   239,
     238,    -1,    -1,   240,    -1,   241,    81,    82,    56,    57,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      33,    34,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,
      43,    44,    -1,    81,    82,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    97,
      98,    -1,   100,   101,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    81,    82,
       3,     4,     5,    -1,    -1,    -1,    43,    44,     3,     4,
       5,    94,    -1,    -1,    97,    -1,    -1,   100,   101,    56,
      57,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      33,    34,    -1,    -1,    -1,     3,     4,     5,    33,    34,
      43,    44,    -1,    -1,    81,    82,    -1,    -1,    43,    44,
      -1,    -1,    -1,    56,    57,    -1,    24,    94,    -1,    -1,
      97,    56,    57,   100,   101,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    56,    57,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    -1,
      -1,    -1,    97,    -1,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,   100,   101,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,   117,   118,    22,   112,   111,   119,     0,    24,
      17,    18,    19,    20,    21,    22,    25,    26,   110,   120,
     121,    90,   113,    24,    24,    24,    84,    94,    27,   114,
      27,   115,   113,   117,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    24,   106,   109,    28,   116,    24,   105,
      95,   125,    90,   103,    92,   107,   105,    95,   122,   103,
     126,    24,   107,    93,   123,    91,   104,    96,   111,   127,
     103,   107,    96,   111,   124,    24,    15,   106,   120,   121,
     141,   142,    15,    24,   106,   120,   121,   128,   129,   103,
      24,    24,    24,    47,    97,   140,   148,   151,    24,   104,
     148,   107,   143,   144,   147,   148,   138,   148,    97,   139,
     149,   151,    98,   154,   155,    95,   160,   107,   130,   131,
     134,   138,    94,    74,    94,    91,   145,    94,   160,     6,
     150,   160,    98,    20,    23,   106,   156,   161,    74,    94,
      91,   132,   160,     3,     4,     5,    24,    33,    34,    43,
      44,    56,    57,    81,    82,    95,    97,   100,   101,   135,
     136,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,    24,   146,    92,
      98,    24,   159,    24,    29,    30,    31,    35,    37,    38,
      40,    41,    42,    45,    46,    48,    49,    50,    94,    96,
     109,   119,   160,   162,   163,   166,   168,   170,   172,   182,
     135,    24,   133,    56,    57,   103,    24,    24,    24,   194,
     194,    96,   135,   182,   194,   194,    51,    52,    53,    54,
      55,    64,    65,    66,    68,    70,    72,    62,    63,    76,
      77,    78,    58,    59,    60,    61,    79,    80,    67,    69,
      71,    81,    82,    83,    84,    85,   147,   145,    93,   107,
      91,   157,    90,    92,    99,   107,   108,    97,   151,   152,
      90,    97,    97,    24,    94,    24,    94,    97,    97,   172,
      94,   182,    97,    97,    97,    97,   107,    94,   134,   132,
     152,   103,    91,   137,    98,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   185,   186,   187,   188,
     189,   190,   190,   192,   192,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   194,    24,   154,    24,     3,   172,
     133,    74,    24,   153,   182,    94,    24,   133,   182,   182,
      94,    94,    24,    94,   106,   176,   177,   182,    41,    94,
      24,   164,   195,     3,    24,   169,     4,    24,   167,     5,
      24,   171,   133,   152,   135,    96,   103,    93,   132,   182,
      92,    98,    91,   158,   152,    94,    98,    98,    74,   132,
     178,    94,   182,   159,    98,    94,    98,    97,    98,    81,
     165,    98,    98,    98,   132,   137,   107,   107,    94,    94,
       3,   153,    94,   172,    95,   135,    24,   179,   181,   182,
      94,   178,   172,    94,   182,   172,   182,    94,   195,    94,
      94,    94,    94,   133,    93,    32,   173,   132,    92,   108,
      91,   180,   179,   179,    94,    98,   165,   132,   108,   172,
      36,    39,    96,   174,   175,    74,   182,   179,    94,    94,
     158,   182,    99,   161,   182,   180,    99
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   104,   104,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   111,   111,
     112,   112,   113,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   120,   121,   122,   123,
     123,   124,   124,   125,   126,   126,   127,   128,   128,   128,
     128,   128,   129,   130,   130,   131,   132,   132,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   139,   140,
     141,   141,   141,   141,   142,   143,   143,   144,   145,   145,
     146,   147,   147,   148,   148,   149,   149,   150,   151,   152,
     152,   153,   153,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   163,   164,   164,   165,   165,   166,   167,   167,
     167,   168,   169,   169,   169,   170,   171,   171,   171,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   174,   175,   175,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   178,   178,   179,
     180,   180,   181,   181,   182,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   189,
     190,   190,   190,   190,   190,   191,   191,   191,   191,   192,
     192,   192,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   196,   197
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
       2,     0,     2,     3,     2,     0,     1,     1,     1,     1,
       8,     5,     5,     5,     2,     4,     5,     3,     1,     3,
       1,     1,     5,     2,     0,     3,     0,     5,     1,     1,
       0,     5,     1,     1,     0,     5,     1,     1,     0,     1,
       5,     7,     7,     5,     7,     5,     3,     2,     3,     2,
       3,     2,     2,     0,     2,     3,     2,     4,     5,     3,
       4,     3,     4,     2,     3,     3,     2,     1,     3,     2,
       3,     0,     1,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3
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
#line 1742 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1748 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 114 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1754 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 115 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1760 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1766 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1772 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1778 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1784 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 126 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1790 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 129 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1796 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 130 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1802 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1808 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 134 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1814 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 135 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1820 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1826 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1832 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 138 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1838 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 139 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1844 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1850 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1856 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1862 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 146 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1868 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 147 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1874 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1880 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 149 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1886 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 150 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1892 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 153 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1898 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 154 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1904 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 162 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1910 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 163 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1916 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 166 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1922 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 167 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1928 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 168 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1934 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 172 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1940 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 173 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1946 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1952 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1958 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 181 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1964 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 182 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1970 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 186 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1976 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 187 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1982 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "kawa.y" /* yacc.c:1646  */
    { (yyval.vint)=0; }
#line 1988 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 194 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1994 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 195 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2000 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 198 "kawa.y" /* yacc.c:1646  */
    { cout << "CLASS NAME: " << *(yyvsp[-3].vstring) << endl; }
#line 2006 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 201 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2012 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 205 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2018 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 206 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2024 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 207 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2030 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2036 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 211 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2042 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 215 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2048 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2054 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2060 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 225 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2066 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 226 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2072 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 227 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2078 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 228 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2084 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 229 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2090 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 232 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2096 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 235 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2102 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 236 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2108 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 240 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2114 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 248 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2120 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 249 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2126 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 252 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2132 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 255 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2138 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 256 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2144 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2150 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 260 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2156 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 263 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-2].vint);}
#line 2162 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 264 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2168 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2174 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2180 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 273 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2186 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 277 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2192 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 287 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2198 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 290 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2204 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 291 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2210 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 292 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2216 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 293 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2222 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 296 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2228 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 299 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2234 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 300 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2240 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 303 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2246 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 305 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2252 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 306 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2258 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 309 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2264 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 312 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2270 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 313 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2276 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 326 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2282 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 327 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2288 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 330 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2294 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 331 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2300 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 333 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2306 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 336 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2312 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 339 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2318 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 340 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2324 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 342 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2330 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 343 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2336 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 346 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2342 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 349 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2348 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 350 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2354 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 353 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2360 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 354 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2366 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 357 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2372 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 358 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2378 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 361 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2384 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 362 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2390 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 365 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2396 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 369 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2402 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 372 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2408 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 373 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2414 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 376 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2420 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 377 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< "BlockStatement ---> PrintS\n";}
#line 2426 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 378 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2432 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 379 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2438 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 380 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2444 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 381 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2450 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 382 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2456 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 384 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2462 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 385 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2468 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 386 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2474 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 387 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2480 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 388 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2486 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 389 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2492 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 390 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2498 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 391 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2504 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 392 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2510 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 395 "kawa.y" /* yacc.c:1646  */
    {cout << "Print: " << (yyvsp[-4].vint) << endl; (yyval.vint)=0;}
#line 2516 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 397 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2522 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 398 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2528 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 400 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2534 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 401 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2540 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 406 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2546 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 407 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2552 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 408 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2558 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2564 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 414 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2570 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 415 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2576 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 418 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<<"PrintS-->TPRINTS ( Args ) \n";}
#line 2582 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 420 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;   cout<<"Args ---> STRING \n";}
#line 2588 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 421 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2594 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 422 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2600 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 429 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2606 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 430 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2612 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 431 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2618 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 432 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2624 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 433 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2630 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 434 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2636 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 435 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2642 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 436 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2648 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 437 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2654 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 438 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2660 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 439 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2666 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 440 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2672 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 441 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2678 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 481 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2684 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 482 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2690 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 485 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2696 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 488 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2702 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 489 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2708 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 492 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2714 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 493 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2720 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 494 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2726 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 495 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2732 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 496 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2738 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 497 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2744 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 498 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2750 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 499 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2756 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 502 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2762 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 503 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2768 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 506 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2774 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 507 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2780 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 510 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2786 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 513 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2792 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 514 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2798 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 517 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2804 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 518 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2810 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 522 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2816 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 525 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2822 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 526 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2828 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 527 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2834 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 528 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2840 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 529 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2846 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 530 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2852 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 531 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2858 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 532 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2864 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 533 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2870 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 534 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2876 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 535 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2882 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 537 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2888 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 545 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2894 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 546 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2900 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 549 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2906 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 550 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2912 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 553 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2918 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 554 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2924 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 557 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2930 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 558 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2936 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 561 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2942 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 562 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2948 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 565 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2954 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 566 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2960 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 567 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2966 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 570 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2972 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 571 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2978 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 572 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2984 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 573 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2990 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 574 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2996 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 577 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3002 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 578 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3008 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 579 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3014 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 580 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3020 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 583 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3026 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 584 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3032 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 585 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3038 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 588 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3044 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 589 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3050 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 590 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3056 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 591 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3062 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 594 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3068 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 595 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3074 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 596 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3080 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 597 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3086 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 598 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3092 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 599 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3098 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 600 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3104 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 601 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3110 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 602 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3116 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 609 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3122 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 610 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3128 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 611 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3134 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 612 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3140 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 613 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3146 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 614 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3152 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 615 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3158 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 616 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3164 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 617 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3170 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 618 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3176 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 621 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3182 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 624 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3188 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3192 "kawa.cpp" /* yacc.c:1646  */
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
#line 628 "kawa.y" /* yacc.c:1906  */


/*#include "lex.yy.c"*/

int yyerror( const char* err )
{
  printf("Erreur syntaxique: '%s' est imprévu dans la ligne [%d] colonne [%d]\n", err, lineno, column);
  return 0;
}

