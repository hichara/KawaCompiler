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

KAWATreeClass* mainClass;
KAWATreeMethod* mainMethod;
KAWATreeBodyMethod* bodyMain = new KAWATreeBodyMethod;

KAWATreePrintString* printString;
KAWATreeType* typeString;
KAWATreeParam* paramStr;

KAWATreePrintInteger* printInteger;
KAWATreeType* typeInteger;
KAWATreeParam* paramInteger;

KAWATreePrintFloat* printFloat;
KAWATreeType* typeFloat;
KAWATreeParam* paramFloat;	




	int yylex();
	extern char* yytext;
	int yyerror(const char* err );
	extern int column;
	extern int lineno;
	KAWATreeProgram* program = new KAWATreeProgram;

#line 116 "kawa.cpp" /* yacc.c:339  */

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
    TPACKAGE = 272,
    TPUBLIC = 273,
    TPRIVATE = 274,
    TPROTECTED = 275,
    TFINAL = 276,
    TABSTRACT = 277,
    TSTATIC = 278,
    TVALUE = 279,
    ID = 280,
    TCLASS = 281,
    TINTERFACE = 282,
    TEXTENDS = 283,
    TIMPLEMENTS = 284,
    TSUPER = 285,
    TTHIS = 286,
    TIF = 287,
    TELSE = 288,
    TFALSE = 289,
    TTRUE = 290,
    TSWITCH = 291,
    TCASE = 292,
    TCONTINUE = 293,
    TBREAK = 294,
    TDEFAULT = 295,
    TFOR = 296,
    TWHILE = 297,
    TDO = 298,
    TNEW = 299,
    TNULL = 300,
    TRETURN = 301,
    TPRINT = 302,
    TPRINTI = 303,
    TPRINTF = 304,
    TPRINTS = 305,
    TMAIN = 306,
    TPLUSEQ = 307,
    TMINUSEQ = 308,
    TMULEQ = 309,
    TDIVEQ = 310,
    TMODEQ = 311,
    TINC = 312,
    TDEC = 313,
    TCEQ = 314,
    TCNE = 315,
    TCLE = 316,
    TCGE = 317,
    TOR = 318,
    TAND = 319,
    TANDBINEQ = 320,
    TORBINEQ = 321,
    TXORBINEQ = 322,
    TDECAL = 323,
    TDECALEQ = 324,
    TDECAR = 325,
    TDECAREQ = 326,
    TDECALNS = 327,
    TDECALNSEQ = 328,
    THEN = 329,
    COND = 330,
    NBINAIRE = 331,
    NLOGIC = 332,
    MOINUS = 333,
    PLUS = 334
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 105 "kawa.y" /* yacc.c:355  */

	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;
	KAWATreePrintString* vKAWATreePrintString;
	KAWATreePrintInteger* vKAWATreePrintInteger;
	KAWATreePrintFloat* vKAWATreePrintFloat;
	KAWATreeParam* vKAWATreeParam;

#line 248 "kawa.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 263 "kawa.cpp" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   780

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  447

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   334

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   102,     2,     2,     2,    84,    79,     2,
      98,    99,    85,    82,    93,    83,    92,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,    91,
      81,    75,    80,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    96,    77,    97,   101,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      76,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   139,   143,   144,   147,   148,   151,   154,
     155,   158,   159,   162,   163,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   178,   179,   180,   181,   182,   183,
     186,   187,   195,   196,   199,   200,   201,   205,   206,   209,
     210,   214,   215,   219,   220,   225,   226,   229,   232,   236,
     237,   238,   241,   242,   246,   248,   249,   252,   256,   257,
     258,   259,   260,   263,   266,   267,   271,   279,   280,   283,
     286,   287,   290,   291,   294,   295,   298,   299,   304,   308,
     318,   321,   322,   326,   327,   330,   331,   333,   336,   339,
     340,   342,   343,   346,   349,   350,   353,   354,   357,   358,
     361,   362,   365,   369,   372,   373,   376,   377,   378,   379,
     380,   381,   382,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   395,   397,   398,   400,   401,   404,   406,   407,
     408,   411,   413,   414,   415,   418,   420,   421,   422,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   481,   482,   485,   488,   489,   492,   493,   494,
     495,   496,   497,   498,   499,   502,   503,   504,   505,   513,
     516,   517,   520,   521,   525,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   540,   548,   549,   552,
     553,   556,   557,   560,   561,   564,   565,   568,   569,   570,
     573,   574,   575,   576,   577,   580,   581,   582,   583,   586,
     587,   588,   591,   592,   593,   594,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   624,   627
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTIER", "REEL", "STRING", "TSTRING",
  "TSHORT", "TINT", "TLONG", "TFLOAT", "TDOUBLE", "TBYTE", "TCHAR",
  "TBOOLEAN", "TVOID", "TIMPORT", "TPACKAGE", "TPUBLIC", "TPRIVATE",
  "TPROTECTED", "TFINAL", "TABSTRACT", "TSTATIC", "TVALUE", "ID", "TCLASS",
  "TINTERFACE", "TEXTENDS", "TIMPLEMENTS", "TSUPER", "TTHIS", "TIF",
  "TELSE", "TFALSE", "TTRUE", "TSWITCH", "TCASE", "TCONTINUE", "TBREAK",
  "TDEFAULT", "TFOR", "TWHILE", "TDO", "TNEW", "TNULL", "TRETURN",
  "TPRINT", "TPRINTI", "TPRINTF", "TPRINTS", "TMAIN", "TPLUSEQ",
  "TMINUSEQ", "TMULEQ", "TDIVEQ", "TMODEQ", "TINC", "TDEC", "TCEQ", "TCNE",
  "TCLE", "TCGE", "TOR", "TAND", "TANDBINEQ", "TORBINEQ", "TXORBINEQ",
  "TDECAL", "TDECALEQ", "TDECAR", "TDECAREQ", "TDECALNS", "TDECALNSEQ",
  "THEN", "'='", "COND", "'|'", "'^'", "'&'", "'>'", "'<'", "'+'", "'-'",
  "'%'", "'*'", "'/'", "NBINAIRE", "NLOGIC", "MOINUS", "PLUS", "';'",
  "'.'", "','", "'['", "']'", "'{'", "'}'", "'('", "')'", "':'", "'~'",
  "'!'", "$accept", "Program", "Package", "Ids", "QList", "ListIds",
  "Type", "Tables", "TablesIndexe", "BasicType", "Modifier", "Modifiers",
  "Static", "All", "Extends", "ExtendsList", "Implements",
  "ImportDeclaration", "ClassOrInterfaceDeclaration", "ClassDeclaration",
  "InterfaceDeclaration", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "InterfaceBody", "InterfaceBodyDeclarations",
  "InterfaceBodyDeclaration", "MemberDecl", "MethodOrFieldDecl",
  "MethodOrFieldRest", "FieldDeclaratorsRest", "VariableDeclaratorList",
  "VariableDeclarator", "VariableDeclaratorRest", "VariableInitializer",
  "ArrayInitializer", "VariableInitializerList", "MethodDeclaratorRest",
  "MainMethodDeclaratorRest", "ConstructorDeclaratorRest",
  "InterfaceMemberDecl", "FormalParameters", "MainFormalParametrs",
  "FormalMainParameterDecls", "VoidFormalParametrs",
  "FormalParametersCalledMethod", "FormalParametersCalledMethodDecls",
  "FormalParameterDecls", "VariableModifiers", "VariableModifier",
  "FormalParameterDeclsRest", "FormalParameterCalledMethodDeclsRest",
  "VariableDeclaratorId", "Block", "BlockStatements", "BlockStatement",
  "Print", "Args", "ArgsRest", "PrintF", "ArgsF", "PrintI", "ArgsI",
  "PrintS", "ArgsS", "Statement", "SwitchBlockStatementGroups",
  "SwitchBlockStatementGroup", "SwitchLabel", "ForControl",
  "ForVarControl", "ForUpdate", "StatementExpressionList", "IDExpression",
  "Expression", "FacteurEffect", "ExpressionOr", "ExpressionAnd",
  "ExpressionOrLogic", "ExpressionOrExLogic", "ExpressionAndLogic",
  "ExpressionEqNeq", "ExpressionCompEq", "TermeDecal", "TermePlus",
  "terme", "facteur", "factFinal", "ObjectInitializer",
  "MethodeInitializer", YY_NULLPTR
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
     325,   326,   327,   328,   329,    61,   330,   124,    94,    38,
      62,    60,    43,    45,    37,    42,    47,   331,   332,   333,
     334,    59,    46,    44,    91,    93,   123,   125,    40,    41,
      58,   126,    33
};
# endif

#define YYPACT_NINF -349

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-349)))

#define YYTABLE_NINF -155

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,    -7,    50,    46,   -21,  -349,    57,  -349,  -349,  -349,
      78,   582,  -349,    26,  -349,  -349,  -349,  -349,  -349,  -349,
      80,   141,  -349,  -349,  -349,    -8,     2,   150,   162,    26,
    -349,    46,   465,   165,   178,   112,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,   129,  -349,   128,
     178,   130,   129,  -349,  -349,  -349,   200,   128,   133,  -349,
    -349,  -349,  -349,   136,   139,   129,  -349,   128,   143,   213,
    -349,  -349,   744,  -349,  -349,  -349,  -349,   713,  -349,   129,
     217,   218,  -349,    17,   -32,   220,  -349,  -349,  -349,  -349,
     136,   149,   149,   149,   153,   156,   152,  -349,  -349,    56,
    -349,   161,   166,   152,  -349,     8,   152,  -349,  -349,  -349,
     157,   376,  -349,  -349,   183,  -349,   168,   167,   152,  -349,
    -349,  -349,   171,   169,  -349,  -349,  -349,  -349,   236,  -349,
     412,   148,  -349,   241,  -349,  -349,   174,  -349,   128,   177,
    -349,  -349,  -349,    -6,   184,   180,   185,  -349,  -349,   186,
       0,    10,   187,   191,   335,   250,  -349,   462,   197,   199,
     202,   203,   251,   277,   586,   586,  -349,  -349,   586,   586,
     586,   128,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
     212,   225,   243,   244,   230,   231,   253,    89,    48,   119,
      33,   126,  -349,  -349,  -349,  -349,    14,    79,  -349,  -349,
    -349,   128,   167,   285,  -349,  -349,  -349,  -349,  -349,   304,
      13,   335,   184,   241,   258,   229,  -349,   245,   309,   586,
     586,   247,  -349,   248,  -349,   132,   586,   293,   129,  -349,
     249,    29,    53,    51,    32,  -349,  -349,  -349,  -349,   242,
    -349,  -349,   241,  -349,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,   586,   586,   586,   586,   586,   586,
     586,   586,   586,   586,  -349,   252,  -349,  -349,  -349,  -349,
     129,   268,  -349,  -349,   167,   586,   -13,   265,   272,  -349,
      65,   275,   269,   273,  -349,  -349,    42,   497,   236,   276,
     288,   281,   294,   184,  -349,   129,   292,   311,  -349,  -349,
     297,  -349,  -349,   299,  -349,  -349,   300,  -349,   167,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     244,  -349,   231,   253,    89,    48,    48,    33,    33,    33,
      33,    33,    33,    33,   126,   126,  -349,  -349,  -349,   148,
     305,     1,   310,   314,   315,   404,  -349,   613,  -349,   320,
    -349,   335,   316,   148,  -349,   647,   336,    72,   335,   524,
     335,   586,  -349,   337,    29,  -349,   338,   339,   341,   342,
     252,  -349,   241,   431,  -349,  -349,  -349,   340,  -349,  -349,
     403,  -349,   167,   -27,  -349,   345,  -349,   647,   148,  -349,
    -349,   647,   348,  -349,   346,  -349,   311,  -349,  -349,  -349,
    -349,  -349,   167,   310,   335,     3,  -349,   365,   647,  -349,
    -349,   167,  -349,   647,   350,  -349,   358,   272,  -349,   586,
     352,  -349,  -349,  -349,   586,   345,  -349,  -349,  -349,  -349,
    -349,   363,  -349,   312,  -349,  -349,  -349
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    44,     0,     1,    33,    31,     3,    32,
       0,     0,     2,    36,    24,    26,    25,    29,    28,    27,
       0,     0,    30,    45,    46,     0,     0,    38,    40,    36,
      35,    44,     0,    42,     0,     0,    34,    43,    23,    16,
      18,    19,    20,    21,    15,    17,    22,     5,    37,    12,
       0,     0,     5,    39,    56,    48,     0,    12,     0,     9,
      41,    51,    47,     7,    31,     5,    10,    12,    31,     0,
       8,    54,     0,    55,     4,    11,    49,     0,    50,     5,
       0,     0,    57,     0,     5,     0,    61,    62,    52,    58,
       7,     0,     0,     0,     0,    95,     0,    80,    84,    12,
       6,     0,     0,     0,    78,     0,     0,    79,    86,    88,
       0,     0,   105,    60,    71,    63,     0,    68,     0,    82,
      81,    59,     0,     0,    53,    83,    96,    97,     0,    94,
      31,     0,    64,     0,    66,    65,     0,    85,    12,    99,
     226,   227,   229,     5,     0,     0,     0,   233,   232,     0,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   103,     0,     0,
       0,    12,   118,   139,   104,   106,   108,   109,   107,   120,
       0,   174,   186,   188,   190,   192,   194,   196,   199,   204,
     208,   211,   215,   224,   230,   231,     5,     0,    70,    72,
      73,    12,    68,     0,   102,    95,    93,   222,   220,     0,
       0,     0,   228,     0,     0,     0,    90,     0,     0,     0,
       0,     0,   149,     0,   147,     0,     0,     0,     5,   151,
       0,   124,   134,   130,   138,   223,   221,   219,   218,     0,
     216,   217,     0,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    77,    69,    67,    87,    98,
       5,     0,   119,   236,    68,     0,     5,     0,   101,   117,
      12,     0,     0,     0,   148,   146,     5,     0,     0,     0,
       0,     0,     0,     0,   150,     5,     0,   126,   132,   133,
       0,   128,   129,     0,   136,   137,     0,   225,    68,   185,
     184,   183,   182,   181,   177,   175,   176,   180,   179,   178,
     187,   189,   191,   193,   195,   198,   197,   202,   200,   201,
     203,   207,   206,   205,   209,   210,   214,   212,   213,     0,
       0,     4,    14,     0,     0,     0,    89,     0,    92,     0,
     115,     0,     0,     0,   167,   163,     0,    68,     0,     0,
       0,     0,   235,     0,     0,   123,     0,     0,     0,     0,
      77,    74,     0,     0,    13,   111,   113,     0,   100,   116,
     140,   153,    68,     5,   164,   171,   172,   161,     0,   165,
     145,   159,     0,   143,     0,   122,   126,   131,   127,   135,
     112,    76,    68,    14,     0,     0,   168,     0,     0,   169,
     162,    68,   160,   157,     0,   125,     0,   101,   141,     0,
       0,   142,   152,   105,     0,   171,   166,   158,   144,   110,
      91,     0,   156,    31,   173,   170,   155
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -349,  -349,  -349,   -43,   374,   418,   -65,   -46,  -291,  -129,
    -349,   120,  -349,   451,  -349,  -349,  -349,   450,   475,   406,
     407,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,  -197,  -203,   386,  -191,  -349,   106,   389,  -349,  -349,
    -349,    28,  -349,  -349,   -86,  -192,   134,   284,  -349,  -349,
    -349,    66,   194,    68,    71,  -349,  -349,  -349,    92,  -349,
    -349,  -349,  -349,  -349,  -349,  -152,  -349,  -349,  -349,  -349,
    -349,  -348,    64,    87,  -130,  -349,   526,   -87,  -349,   254,
     257,   259,   -47,  -349,   -66,   -50,  -141,  -218,  -349,  -349
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   212,    70,    53,    48,   114,   214,    49,
      22,    11,    10,    26,    33,    35,    51,     7,   172,    23,
      24,    62,    68,    78,    55,    64,    73,    88,    89,   115,
     116,   134,   202,   276,   198,   199,   350,   103,   106,    96,
      82,   104,   107,   123,    98,   217,   287,   110,   111,   129,
     206,   358,   139,   173,   130,   174,   175,   306,   375,   176,
     313,   177,   310,   178,   316,   179,   415,   432,   433,   299,
     300,   394,   419,   395,   200,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     180,   171,   227,    59,    57,   277,   275,    81,   108,    63,
     284,    66,    85,   307,   122,   291,   281,    29,     4,   -12,
     283,    75,    74,   237,   238,   221,   -12,   230,   240,   241,
     207,   208,   140,   141,   142,   223,    90,   314,   239,   318,
     429,    57,    93,   430,   207,   208,   128,     1,   -14,   420,
       5,   207,   208,   422,   305,   311,   308,   315,   216,   282,
      56,   384,     6,   147,   148,    56,    95,   383,    94,   -14,
       8,   207,   208,   155,   156,   437,   312,    30,   309,    56,
       9,   355,   140,   141,   142,   288,   209,   353,   210,   292,
     293,   222,   204,    31,   211,    58,   301,   213,   359,   364,
     431,   224,   417,    13,   196,    27,    56,   109,    67,   262,
     263,   372,    97,   147,   148,   269,   270,   363,    25,   101,
     102,   379,   427,   155,   156,   242,   216,   168,   264,   265,
     346,   347,   348,   -68,    56,   133,   162,   163,    38,    39,
      40,    41,    42,    43,    44,    45,    46,   398,   260,   261,
      58,   140,   141,   142,    95,   354,   406,   296,   380,    58,
     298,   164,   165,   215,   113,   133,    28,   366,   330,   331,
     399,   121,   392,   196,   124,   197,   274,   168,    32,   412,
     169,   170,   147,   148,    72,   303,   135,   266,    77,   267,
      34,   268,   155,   156,    50,   416,   337,   338,   339,   340,
     341,   342,   343,    52,   216,   162,   163,   421,    54,   390,
     271,   272,   273,   335,   336,   426,   400,   216,   403,   344,
     345,    56,    58,   297,   436,    65,    61,   288,    67,    69,
     164,   165,   140,   141,   142,   396,    71,   351,    79,   402,
      76,   404,    91,    92,   197,    99,   168,    95,   112,   169,
     170,   105,   119,    57,   286,   109,   125,   120,   131,   132,
     133,   138,   428,   147,   148,   136,   201,   396,   137,   203,
     205,   396,   218,   155,   156,   228,   235,   244,   245,   246,
     247,   248,   215,   219,   220,   225,   162,   163,   396,   226,
     249,   250,   251,   396,   252,   231,   253,   232,   254,   441,
     233,   234,   236,   243,   444,   382,   255,   257,   256,   258,
     278,   164,   165,   180,   171,   140,   141,   142,    38,    39,
      40,    41,    42,    43,    44,    45,    46,   168,   109,   280,
     169,   170,   259,   285,   290,   302,   289,   143,   294,   295,
     304,   317,   144,   145,   146,   349,   147,   148,   149,  -154,
     150,   151,  -154,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   352,   356,   357,   360,   146,   361,   162,
     163,   149,   362,   150,   151,   368,   152,   153,   154,   369,
     370,   157,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   373,   371,   374,   164,   165,   376,   126,   377,   378,
     127,    47,   381,   166,   383,   385,   386,   387,   112,  -154,
     168,   389,   391,   169,   170,   140,   141,   142,    38,    39,
      40,    41,    42,    43,    44,    45,    46,   397,   405,   407,
     408,   112,   409,   410,   281,   413,   414,   143,   418,   423,
     434,   438,   144,   145,   146,   424,   147,   148,   149,   439,
     150,   151,   442,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   446,   100,   140,   141,   142,    60,   162,
     163,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      36,    37,    12,    86,    87,   117,   411,   196,   118,   279,
      47,   388,   367,   440,   164,   165,   147,   148,   425,   445,
     140,   141,   142,   166,   443,   435,   155,   156,   112,   167,
     168,   332,     0,   169,   170,   333,     0,     0,   334,   162,
     163,     0,   196,     0,     0,     0,     0,   140,   141,   142,
       0,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,   155,   156,     0,   164,   165,     0,     0,     0,   196,
       0,     0,     0,   229,   162,   163,     0,     0,   147,   148,
     168,     0,     0,   169,   170,     0,     0,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   162,   163,     0,     0,     0,     0,     0,   365,   140,
     141,   142,     0,     0,     0,   168,     0,     0,   169,   170,
      14,    15,    16,    17,    18,    19,   164,   165,    20,    21,
       0,   196,     0,     0,     0,   401,   140,   141,   142,     0,
     147,   148,   168,     0,     0,   169,   170,     0,     0,     0,
     155,   156,     0,     0,     0,     0,     0,     0,   286,     0,
       0,     0,     0,   162,   163,     0,     0,   147,   148,     0,
     140,   141,   142,     0,     0,     0,     0,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   164,   165,
     162,   163,   393,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   148,     0,   168,     0,     0,   169,   170,     0,
       0,   155,   156,     0,     0,   164,   165,     0,     0,     0,
       0,     0,     0,     0,   162,   163,     0,     0,     0,     0,
       0,   168,     0,     0,   169,   170,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    83,   164,
     165,    14,    15,    16,    17,    18,    19,     0,    84,    20,
      21,     0,     0,     0,     0,   168,     0,     0,   169,   170,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    80,
       0,     0,    14,    15,    16,    17,    18,    19,     0,    47,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329
};

static const yytype_int16 yycheck[] =
{
     130,   130,   154,    49,    47,   202,   197,    72,    94,    52,
     213,    57,    77,   231,     6,   218,     3,    25,    25,    25,
     212,    67,    65,   164,   165,    25,    25,   157,   169,   170,
      57,    58,     3,     4,     5,    25,    79,     5,   168,   242,
      37,    84,    25,    40,    57,    58,   111,    17,    75,   397,
       0,    57,    58,   401,    25,     4,     3,    25,   144,   211,
      92,   352,    16,    34,    35,    92,    98,    94,    51,    75,
      91,    57,    58,    44,    45,   423,    25,    85,    25,    92,
      23,    94,     3,     4,     5,   215,    92,   284,    94,   219,
     220,    91,   138,    91,   100,    94,   226,   143,   290,   296,
      97,    91,   393,    25,    25,    25,    92,    99,    95,    61,
      62,   303,    84,    34,    35,    82,    83,    75,    92,    91,
      92,   318,   413,    44,    45,   171,   212,    98,    80,    81,
     271,   272,   273,    91,    92,    93,    57,    58,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    75,    59,    60,
      94,     3,     4,     5,    98,   285,   374,    25,   349,    94,
     225,    82,    83,    98,    96,    93,    25,   297,   255,   256,
     367,   103,   363,    25,   106,    96,    97,    98,    28,   382,
     101,   102,    34,    35,    64,   228,   118,    68,    68,    70,
      28,    72,    44,    45,    29,   392,   262,   263,   264,   265,
     266,   267,   268,    25,   290,    57,    58,   398,    96,   361,
      84,    85,    86,   260,   261,   412,   368,   303,   370,   269,
     270,    92,    94,    91,   421,    25,    96,   357,    95,    93,
      82,    83,     3,     4,     5,   365,    97,   280,    25,   369,
      97,   371,    25,    25,    96,    25,    98,    98,    96,   101,
     102,    98,    91,   296,    25,    99,    99,    91,    75,    91,
      93,    25,   414,    34,    35,    94,    25,   397,    99,    95,
      93,   401,    92,    44,    45,    25,    25,    52,    53,    54,
      55,    56,    98,    98,    98,    98,    57,    58,   418,    98,
      65,    66,    67,   423,    69,    98,    71,    98,    73,   429,
      98,    98,    25,    91,   434,   351,    63,    77,    64,    78,
      25,    82,    83,   443,   443,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    98,    99,    25,
     101,   102,    79,    75,    25,    42,    91,    25,    91,    91,
      91,    99,    30,    31,    32,    93,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    95,    99,    93,    91,    32,    99,    57,
      58,    36,    99,    38,    39,    99,    41,    42,    43,    91,
      99,    46,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    99,    98,    82,    82,    83,    99,    21,    99,    99,
      24,    25,    97,    91,    94,    91,    91,     3,    96,    97,
      98,    91,    96,   101,   102,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    91,    91,    91,
      91,    96,    91,    91,     3,    95,    33,    25,    93,    91,
      75,    91,    30,    31,    32,    99,    34,    35,    36,    91,
      38,    39,   100,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   100,    90,     3,     4,     5,    50,    57,
      58,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      29,    31,     7,    77,    77,    99,   380,    25,    99,   205,
      25,   357,   298,   427,    82,    83,    34,    35,   406,   435,
       3,     4,     5,    91,   433,   418,    44,    45,    96,    97,
      98,   257,    -1,   101,   102,   258,    -1,    -1,   259,    57,
      58,    -1,    25,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    82,    83,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    91,    57,    58,    -1,    -1,    34,    35,
      98,    -1,    -1,   101,   102,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    57,    58,    -1,    -1,    -1,    -1,    -1,    91,     3,
       4,     5,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      18,    19,    20,    21,    22,    23,    82,    83,    26,    27,
      -1,    25,    -1,    -1,    -1,    91,     3,     4,     5,    -1,
      34,    35,    98,    -1,    -1,   101,   102,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    34,    35,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      57,    58,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    -1,    98,    -1,    -1,   101,   102,    -1,
      -1,    44,    45,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    82,
      83,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    18,    19,    20,    21,    22,    23,    -1,    25,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,   104,   105,    25,     0,    16,   120,    91,    23,
     115,   114,   121,    25,    18,    19,    20,    21,    22,    23,
      26,    27,   113,   122,   123,    92,   116,    25,    25,    25,
      85,    91,    28,   117,    28,   118,   116,   120,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    25,   109,   112,
      29,   119,    25,   108,    96,   127,    92,   106,    94,   110,
     108,    96,   124,   106,   128,    25,   110,    95,   125,    93,
     107,    97,   114,   129,   106,   110,    97,   114,   126,    25,
      15,   109,   143,    15,    25,   109,   122,   123,   130,   131,
     106,    25,    25,    25,    51,    98,   142,   144,   147,    25,
     107,   144,   144,   140,   144,    98,   141,   145,   147,    99,
     150,   151,    96,   156,   110,   132,   133,   136,   140,    91,
      91,   156,     6,   146,   156,    99,    21,    24,   109,   152,
     157,    75,    91,    93,   134,   156,    94,    99,    25,   155,
       3,     4,     5,    25,    30,    31,    32,    34,    35,    36,
      38,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    57,    58,    82,    83,    91,    97,    98,   101,
     102,   112,   121,   156,   158,   159,   162,   164,   166,   168,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    25,    96,   137,   138,
     177,    25,   135,    95,   110,    93,   153,    57,    58,    92,
      94,   100,   106,   110,   111,    98,   147,   148,    92,    98,
      98,    25,    91,    25,    91,    98,    98,   168,    25,    91,
     177,    98,    98,    98,    98,    25,    25,   189,   189,   177,
     189,   189,   110,    91,    52,    53,    54,    55,    56,    65,
      66,    67,    69,    71,    73,    63,    64,    77,    78,    79,
      59,    60,    61,    62,    80,    81,    68,    70,    72,    82,
      83,    84,    85,    86,    97,   137,   136,   134,    25,   150,
      25,     3,   168,   148,   135,    75,    25,   149,   177,    91,
      25,   135,   177,   177,    91,    91,    25,    91,   109,   172,
     173,   177,    42,   106,    91,    25,   160,   190,     3,    25,
     165,     4,    25,   163,     5,    25,   167,    99,   135,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     180,   180,   182,   183,   184,   185,   185,   187,   187,   187,
     187,   187,   187,   187,   188,   188,   189,   189,   189,    93,
     139,   106,    95,   134,   177,    94,    99,    93,   154,   148,
      91,    99,    99,    75,   134,    91,   177,   155,    99,    91,
      99,    98,   148,    99,    82,   161,    99,    99,    99,   134,
     137,    97,   110,    94,   111,    91,    91,     3,   149,    91,
     168,    96,   137,    25,   174,   176,   177,    91,    75,   134,
     168,    91,   177,   168,   177,    91,   190,    91,    91,    91,
      91,   139,   135,    95,    33,   169,   134,   111,    93,   175,
     174,   137,   174,    91,    99,   161,   134,   111,   168,    37,
      40,    97,   170,   171,    75,   176,   134,   174,    91,    91,
     154,   177,   100,   157,   177,   175,   100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   123,   124,
     125,   125,   126,   126,   127,   128,   128,   129,   130,   130,
     130,   130,   130,   131,   132,   132,   133,   134,   134,   135,
     136,   136,   137,   137,   138,   138,   139,   139,   140,   141,
     142,   143,   143,   144,   144,   145,   145,   146,   147,   148,
     148,   149,   149,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   156,   157,   157,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   159,   160,   160,   161,   161,   162,   163,   163,
     163,   164,   165,   165,   165,   166,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   169,   169,   170,   171,   171,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   173,   173,   173,   174,
     175,   175,   176,   176,   177,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     185,   185,   185,   185,   185,   186,   186,   186,   186,   187,
     187,   187,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   191,   192
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     0,     4,     0,     3,     2,
       3,     3,     0,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     3,     2,     0,     2,     0,     2,
       0,     2,     0,     6,     0,     2,     2,     5,     4,     3,
       2,     0,     2,     5,     3,     2,     0,     2,     1,     4,
       3,     1,     1,     3,     2,     2,     2,     3,     0,     2,
       3,     1,     1,     1,     4,     2,     3,     0,     1,     1,
       1,     4,     4,     3,     1,     3,     1,     4,     2,     3,
       1,     6,     2,     4,     2,     0,     1,     1,     2,     0,
       2,     0,     2,     3,     2,     0,     1,     1,     1,     1,
       8,     5,     5,     5,     2,     4,     5,     3,     1,     3,
       1,     1,     5,     2,     0,     3,     0,     5,     1,     1,
       0,     5,     1,     1,     0,     5,     1,     1,     0,     1,
       5,     7,     7,     5,     7,     5,     3,     2,     3,     2,
       3,     2,     2,     0,     2,     3,     2,     4,     5,     3,
       4,     3,     4,     2,     3,     3,     5,     2,     4,     2,
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
#line 137 "kawa.y" /* yacc.c:1646  */
    { (yyval.vint)=0; cout<<"Program ---> Package ImportDeclaration ClassOrInterfaceDeclaration"<< endl;}
#line 1757 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 143 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1763 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1769 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 147 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1775 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1781 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 151 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1787 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1793 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1799 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 158 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1805 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1811 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1817 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1823 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 166 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1829 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 167 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1835 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 168 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1841 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 169 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1847 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 170 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1853 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 171 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1859 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 172 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1865 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 173 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1871 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 174 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1877 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 178 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout << " Modifier --> TPUBLIC "<<endl;}
#line 1883 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 179 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1889 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1895 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 181 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout << " Modifier --> TSTATIC "<<endl;}
#line 1901 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 182 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1907 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1913 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 186 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout << " Modifiers --> Modifiers Modifier "<<endl;}
#line 1919 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 187 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout << " Modifiers --> Epsilone "<<endl;}
#line 1925 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 195 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1931 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 196 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1937 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 199 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1943 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 200 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1949 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1955 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1961 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 206 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout<<"Extends->epsilon\n";}
#line 1967 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 209 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1973 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 210 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1979 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 214 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1985 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<<"Implements->epsilon\n";}
#line 1991 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1997 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 220 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout<<"TypeDeclaration-->ImportDeclaration ClassOrInterfaceDeclaration"<< endl; }
#line 2003 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 225 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; program->addClass(mainClass); cout<< "ClassOrInterfaceDeclaration -->Modifiers ClassDeclaration "<< endl;}
#line 2009 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 226 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2015 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 229 "kawa.y" /* yacc.c:1646  */
    { KAWATreeClass* c = new KAWATreeClass(*(yyvsp[-3].vstring)); /*$$->addMain(c); $$ = c*/; cout << "CLASS NAME: " << *(yyvsp[-3].vstring) << endl; }
#line 2021 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 232 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2027 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 236 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout<< "ClassBody --> '{' ClassBodyDeclarations '}'  "<< endl; }
#line 2033 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 237 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< " ClassBodyDeclarations --> ClassBodyDeclarations ClassBodyDeclaration "<< endl; }
#line 2039 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 238 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< " ClassBodyDeclarations --> Epsilone "<< endl;}
#line 2045 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 241 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2051 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 242 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; mainMethod = new KAWATreeMethod(*(yyvsp[-2].vstring)); mainMethod->setBody(bodyMain);cout<< " ClassBodyDeclarations --> Modifiers TVOID TMAIN MainMethodDeclaratorRest Block  "<< endl;}
#line 2057 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 246 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2063 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 248 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2069 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 249 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2075 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 256 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2081 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 257 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2087 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2093 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2099 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 260 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2105 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 263 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2111 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 266 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2117 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2123 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 271 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2129 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 279 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2135 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 280 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2141 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 283 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2147 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 286 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2153 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 287 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2159 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 290 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2165 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 291 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2171 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 294 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-2].vint);}
#line 2177 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 295 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2183 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 298 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2189 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 299 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2195 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 304 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2201 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 308 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout <<" MainMethodDeclaratorRest --> MainFormalParametrs" <<endl;}
#line 2207 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 318 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2213 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 322 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2219 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 326 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2225 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 327 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2231 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 330 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2237 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 331 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< "MainFormalParametrs --> VoidFormalParametrs"<<endl;}
#line 2243 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 333 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2249 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 336 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< "VoidFormalParametrs --> '(' ')' "<<endl;}
#line 2255 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 339 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2261 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 340 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2267 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 342 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2273 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 343 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2279 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 346 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2285 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 349 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2291 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 350 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2297 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 353 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2303 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 354 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2309 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 357 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2315 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 358 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2321 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 361 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2327 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 362 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2333 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 365 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2339 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 369 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);cout<< " Block --> '{' BlockStatements '}' "<< endl;}
#line 2345 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 372 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2351 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 373 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< " BlockStatements --> Epsilone "<< endl; }
#line 2357 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 376 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; }
#line 2363 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 377 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintString)); cout<< " BlockStatement --> PrintS "<< endl; }
#line 2369 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 378 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintFloat)); cout<< " BlockStatement --> PrintF "<< endl; }
#line 2375 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 379 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintInteger)); cout<< " BlockStatement --> PrintI "<< endl;}
#line 2381 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 380 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2387 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 381 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2393 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 382 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2399 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 384 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2405 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 385 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2411 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 386 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2417 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 387 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2423 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 388 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2429 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 389 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2435 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 390 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2441 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 391 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2447 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 392 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2453 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 395 "kawa.y" /* yacc.c:1646  */
    {cout << "Print: " << (yyvsp[-4].vint) << endl; (yyval.vint)=0;}
#line 2459 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 397 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2465 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 398 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2471 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 400 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2477 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 401 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2483 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 404 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintFloat)=0; printFloat = new KAWATreePrintFloat; printFloat->addParam(paramFloat); cout << " PrintF --> TPRINTF '(' ArgsF ')' ';'" <<endl;}
#line 2489 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 406 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeFloat = new KAWATreeType("float"); float* doubleVal = (float*) malloc(sizeof(float)); *doubleVal = (yyvsp[0].vint); void* valueDouble = (void*) doubleVal; paramFloat = new KAWATreeParam(typeFloat, valueDouble);cout << " ArgsF --> REEL" <<endl;}
#line 2495 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 407 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2501 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 408 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2507 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 411 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintInteger) = new KAWATreePrintInteger; (yyval.vKAWATreePrintInteger)->addParam(paramInteger); cout << " PrintI --> TPRINTI '(' ArgsI ')' ';'" <<endl;}
#line 2513 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeInteger = new KAWATreeType("int"); int* integer = (int*) malloc(sizeof(int)); *integer = (yyvsp[0].vint); void* valueInt = (void*) integer; paramInteger = new KAWATreeParam(typeInteger, valueInt); cout << " ArgsI --> ENTIER " <<endl;}
#line 2519 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 414 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2525 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 415 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2531 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 418 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintString)=0; printString = new KAWATreePrintString; printString->addParam(paramStr);cout<< " PrintS --> TPRINTS '(' ArgsS ')' ';'"<< endl;}
#line 2537 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 420 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeString = new KAWATreeType("string"); paramStr = new KAWATreeParam(typeString, (void*) (yyvsp[0].vint));cout<< " ArgsS --> STRING "<< endl;}
#line 2543 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 421 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2549 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 422 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2555 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 429 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2561 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 430 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2567 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 431 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2573 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 432 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2579 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 433 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2585 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 434 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2591 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 435 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2597 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 436 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2603 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 437 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2609 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 438 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2615 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 439 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2621 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 440 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2627 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 441 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2633 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 481 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2639 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 482 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2645 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 485 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2651 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 488 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2657 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 489 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2663 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 492 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2669 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 493 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2675 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 494 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2681 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 495 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2687 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 496 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2693 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 497 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2699 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 498 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2705 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 499 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2711 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 502 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2717 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 503 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2723 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 504 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2729 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 505 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2735 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 513 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2741 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 516 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2747 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 517 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2753 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 520 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2759 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 521 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2765 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 525 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2771 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 528 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2777 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 529 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2783 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 530 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2789 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 531 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2795 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 532 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2801 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 533 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2807 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 534 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2813 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 535 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2819 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 536 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2825 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 537 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2831 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 538 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2837 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 540 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2843 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 548 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2849 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 549 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2855 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 552 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2861 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 553 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2867 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 556 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2873 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 557 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2879 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 560 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2885 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 561 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2891 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 564 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2897 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 565 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2903 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 568 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2909 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 569 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2915 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 570 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2921 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 573 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2927 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 574 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2933 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 575 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2939 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 576 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2945 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 577 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2951 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 580 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2957 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 581 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2963 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 582 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2969 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 583 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2975 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 586 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2981 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 587 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2987 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 588 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2993 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 591 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2999 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 592 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3005 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 593 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3011 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 594 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3017 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 597 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3023 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 598 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3029 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 599 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3035 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 600 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3041 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 601 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3047 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 602 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3053 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 603 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3059 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 604 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3065 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 605 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3071 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 612 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3077 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 613 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3083 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 614 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3089 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 615 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3095 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 616 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3101 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 617 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3107 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 618 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3113 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 619 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3119 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 620 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3125 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 621 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3131 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 624 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3137 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 627 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3143 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3147 "kawa.cpp" /* yacc.c:1646  */
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
#line 631 "kawa.y" /* yacc.c:1906  */


/*#include "lex.yy.c"*/

int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d] colonne [%d]\n", yytext, lineno, column-strlen(yytext));
  return 0;
}

