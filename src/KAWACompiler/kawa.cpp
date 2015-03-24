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
#define YYLAST   787

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  462

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
     210,   214,   215,   219,   220,   224,   227,   228,   231,   234,
     238,   239,   240,   243,   244,   248,   250,   251,   254,   258,
     259,   260,   261,   262,   265,   268,   269,   273,   281,   282,
     285,   288,   289,   292,   293,   296,   297,   300,   301,   306,
     310,   320,   323,   324,   325,   326,   329,   332,   333,   336,
     338,   339,   342,   345,   346,   359,   360,   363,   364,   366,
     369,   372,   373,   375,   376,   379,   382,   383,   386,   387,
     390,   391,   394,   395,   398,   402,   405,   406,   409,   410,
     411,   412,   413,   414,   415,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   428,   430,   431,   433,   434,   437,
     439,   440,   441,   444,   446,   447,   448,   451,   453,   454,
     455,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   514,   515,   518,   521,   522,   525,
     526,   527,   528,   529,   530,   531,   532,   535,   536,   539,
     540,   543,   546,   547,   550,   551,   555,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   570,   578,
     579,   582,   583,   586,   587,   590,   591,   594,   595,   598,
     599,   600,   603,   604,   605,   606,   607,   610,   611,   612,
     613,   616,   617,   618,   621,   622,   623,   624,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   654,   657
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
  "ImportDeclaration", "TypeDeclaration", "ClassOrInterfaceDeclaration",
  "ClassDeclaration", "InterfaceDeclaration", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration", "InterfaceBody",
  "InterfaceBodyDeclarations", "InterfaceBodyDeclaration", "MemberDecl",
  "MethodOrFieldDecl", "MethodOrFieldRest", "FieldDeclaratorsRest",
  "VariableDeclaratorList", "VariableDeclarator", "VariableDeclaratorRest",
  "VariableInitializer", "ArrayInitializer", "VariableInitializerList",
  "MethodDeclaratorRest", "MainMethodDeclaratorRest",
  "ConstructorDeclaratorRest", "InterfaceMemberDecl",
  "InterfaceMethodOrFieldDecl", "InterfaceMethodOrFieldRest",
  "ConstantDeclaratorsRest", "ConstantDeclaratorList",
  "ConstantDeclarator", "ConstantDeclaratorRest", "FormalParameters",
  "MainFormalParametrs", "FormalMainParameterDecls", "VoidFormalParametrs",
  "FormalParametersCalledMethod", "FormalParametersCalledMethodDecls",
  "FormalParameterDecls", "VariableModifiers", "VariableModifier",
  "FormalParameterDeclsRest", "FormalParameterCalledMethodDeclsRest",
  "VariableDeclaratorId", "Block", "BlockStatements", "BlockStatement",
  "Print", "Args", "ArgsRest", "PrintF", "ArgsF", "PrintI", "ArgsI",
  "PrintS", "ArgsS", "Statement", "SwitchBlockStatementGroups",
  "SwitchBlockStatementGroup", "SwitchLabel", "ForControl",
  "ForVarControl", "ForVariableDeclaratorsRest", "ForUpdate",
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
     325,   326,   327,   328,   329,    61,   330,   124,    94,    38,
      62,    60,    43,    45,    37,    42,    47,   331,   332,   333,
     334,    59,    46,    44,    91,    93,   123,   125,    40,    41,
      58,   126,    33
};
# endif

#define YYPACT_NINF -369

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-369)))

#define YYTABLE_NINF -167

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      47,    49,    30,    60,     0,  -369,    99,  -369,  -369,  -369,
    -369,   115,   162,  -369,    61,  -369,  -369,  -369,  -369,  -369,
    -369,   145,   151,  -369,  -369,  -369,    -4,   100,    57,   165,
      61,  -369,    60,   224,   168,   174,   133,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,   110,  -369,
     156,   174,   158,   110,  -369,  -369,  -369,   231,   156,   172,
    -369,  -369,  -369,  -369,   176,   173,   110,  -369,   156,   179,
     240,  -369,  -369,   374,  -369,  -369,  -369,  -369,   760,  -369,
     110,   253,   257,  -369,  -369,  -369,  -369,    10,   -30,   259,
    -369,  -369,  -369,  -369,   176,   187,    41,   187,   188,   202,
     206,  -369,  -369,    41,  -369,   215,   232,  -369,   217,   216,
     220,   206,  -369,     8,   206,  -369,  -369,  -369,   213,   474,
    -369,  -369,   238,  -369,   223,   225,   206,  -369,   170,  -369,
     291,  -369,  -369,  -369,   226,   237,  -369,  -369,  -369,  -369,
     294,  -369,   421,   170,  -369,   312,  -369,  -369,  -369,  -369,
    -369,    62,  -369,  -369,   313,  -369,   314,   315,   598,   598,
      48,   598,   598,   598,  -369,  -369,  -369,   208,   278,   279,
     265,   266,   268,   119,   106,   139,    17,   161,  -369,  -369,
    -369,  -369,   156,   216,   250,  -369,   156,   255,    29,   251,
     258,   256,   274,     6,     7,   275,   276,   120,   471,   277,
     292,   293,   300,  -369,  -369,   156,  -369,  -369,  -369,  -369,
    -369,  -369,  -369,  -369,   285,  -369,   156,   225,  -369,  -369,
     251,   110,  -369,  -369,  -369,  -369,  -369,   284,   303,  -369,
    -369,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,  -369,  -369,   380,  -369,  -369,  -369,   381,    13,   120,
     312,   332,   506,  -369,   317,   384,   598,   598,   319,  -369,
     320,  -369,   103,   598,   371,  -369,   323,    35,    40,    23,
      50,   312,  -369,  -369,  -369,  -369,   251,   170,   318,  -369,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   279,   265,   266,   268,   119,   106,   106,    17,    17,
      17,    17,    17,    17,    17,   161,   161,  -369,  -369,  -369,
    -369,  -369,   110,   325,  -369,   225,   598,   114,   322,   343,
    -369,    53,   346,   339,   340,  -369,  -369,   -34,   533,   294,
     341,   350,   344,   347,  -369,   110,   345,   334,  -369,  -369,
     348,  -369,  -369,   349,  -369,  -369,   351,   225,  -369,   284,
    -369,    -6,   156,   358,   363,   439,  -369,   657,  -369,   367,
    -369,   120,   365,   170,  -369,  -369,   663,   382,    -3,   120,
     592,   120,   598,   386,    35,  -369,   398,   399,   400,   401,
    -369,   312,  -369,  -369,  -369,   377,  -369,  -369,   460,  -369,
     225,     9,  -369,   404,  -369,   663,  -369,  -369,   663,   403,
    -369,   402,  -369,   334,  -369,  -369,  -369,  -369,   225,   406,
     120,     5,  -369,   499,   432,   598,  -369,  -369,  -369,   663,
     417,  -369,   422,   343,  -369,   598,   414,  -369,  -369,  -369,
     598,   404,  -369,  -369,  -369,  -369,   420,  -369,   321,  -369,
    -369,  -369
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    44,     0,     1,    33,    31,     2,     3,
      32,     0,     0,    45,    36,    24,    26,    25,    29,    28,
      27,     0,     0,    30,    46,    47,     0,     0,    38,    40,
      36,    35,    44,     0,    42,     0,     0,    34,    43,    23,
      16,    18,    19,    20,    21,    15,    17,    22,     5,    37,
      12,     0,     0,     5,    39,    57,    49,     0,    12,     0,
       9,    41,    52,    48,     7,    31,     5,    10,    12,    31,
       0,     8,    55,     0,    56,     4,    11,    50,     0,    51,
       5,     0,     0,    84,    85,    58,    82,     0,     5,     0,
      62,    63,    53,    59,     7,     0,    12,     0,     0,   107,
       0,    81,    96,    12,     6,     0,    94,    86,     0,    91,
       0,     0,    79,     0,     0,    80,    98,   100,     0,     0,
     117,    61,    72,    64,     0,    69,     0,    83,     0,    87,
       0,    89,    88,    60,     0,     0,    54,    95,   108,   109,
       0,   106,    31,     0,    65,     0,    67,    66,   238,   239,
     241,     5,   245,   244,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    73,    74,   186,   198,   200,
     202,   204,   206,   208,   211,   216,   220,   223,   227,   236,
     242,   243,    12,    91,     0,    97,    12,   111,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   115,    12,   130,   151,   116,   118,
     120,   121,   119,   132,     0,    71,    12,    69,   234,   232,
     240,     5,   235,   233,   231,   230,    76,    78,     0,   228,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    90,     0,   114,   107,   105,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,   161,
       0,   159,     0,     0,     0,   163,     0,   136,   146,   142,
     150,     0,   126,    70,    68,   248,     0,     0,     0,   237,
     197,   196,   195,   194,   193,   189,   187,   188,   192,   191,
     190,   199,   201,   203,   205,   207,   210,   209,   214,   212,
     213,   215,   219,   218,   217,   221,   222,   226,   224,   225,
      99,   110,     5,     0,   131,    69,     0,     5,     0,   113,
     129,    12,     0,     0,     0,   160,   158,     5,     0,     0,
       0,     0,     0,     0,   162,     5,     0,   138,   144,   145,
       0,   140,   141,     0,   148,   149,     0,    69,   247,    78,
      75,     4,    12,     0,     0,     0,   101,     0,   104,     0,
     127,     0,     0,     0,   179,   178,   175,     0,    69,     0,
       0,     0,     0,     0,     0,   135,     0,     0,     0,     0,
      77,     0,    13,   123,   125,     0,   112,   128,   152,   165,
      69,     5,   176,   183,   184,   173,   177,   157,   171,     0,
     155,     0,   134,   138,   143,   139,   147,   124,    69,    14,
       0,     0,   180,     0,     0,     0,   181,   174,   172,   169,
       0,   137,     0,   113,   153,     0,     0,   154,   164,   117,
       0,   183,   170,   156,   122,   103,     0,   168,    31,   185,
     182,   167
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,  -369,   -44,   427,   473,   -63,   -50,  -334,  -141,
    -369,   127,  -369,   495,  -369,  -369,  -369,   494,  -369,   520,
      87,    91,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,  -123,  -258,   429,  -140,  -369,   164,   431,  -369,
    -369,  -369,  -369,  -369,  -369,   352,  -369,   357,   122,  -369,
    -369,   -93,  -207,   153,   280,  -369,  -369,  -369,   101,   193,
     -77,    94,  -369,  -369,  -369,   123,  -369,  -369,  -369,  -369,
    -369,  -369,  -191,  -369,  -369,  -369,  -369,  -369,   159,  -368,
      97,  -369,  -135,  -369,    58,   307,   309,   311,   316,   310,
      -7,  -369,   -29,     2,  -134,  -276,  -369,  -369
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   220,    71,    54,    49,   122,   271,    50,
      23,    12,    11,    27,    34,    36,    52,     7,     8,   206,
      24,    25,    63,    69,    79,    56,    65,    74,    92,    93,
     123,   124,   384,   217,   293,   164,   165,   298,   111,   114,
     100,    85,    86,   107,   108,   131,   183,   109,   112,   115,
     135,   102,   274,   338,   118,   119,   141,   266,   378,   187,
     207,   142,   208,   209,   356,   395,   210,   363,   211,   360,
     212,   366,   213,   431,   448,   449,   350,   351,   385,   412,
     436,   413,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,   205,   146,   215,    58,   116,   284,   214,    67,    64,
      82,   357,   335,   295,   134,    89,   333,   342,    76,   -12,
     227,    30,    75,   121,   224,   225,   228,   361,   229,   230,
       5,   278,   280,   367,   133,    97,    94,   136,   148,   149,
     150,   383,   445,   358,    58,   446,   106,   437,   362,   147,
     438,   148,   149,   150,   -12,   364,   140,   -69,    57,   145,
     355,    98,    57,   286,     1,   359,   218,   219,    99,   152,
     153,   452,   383,   151,     4,   365,     6,   434,   334,   154,
     155,    31,   152,   153,   -14,    33,   218,   219,    59,   368,
     145,     9,   154,   155,   294,   443,   273,   279,   281,   256,
     257,    57,   447,   433,   -14,   156,   157,   117,    68,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   423,   218,
     219,   267,    10,   268,   327,   328,   329,   273,   347,   269,
     158,   159,   106,   161,   379,    59,   264,   339,   270,    99,
      14,   343,   344,   428,   160,   226,   161,    59,   352,   162,
     163,   272,   191,    26,    57,   291,   192,   369,   193,   194,
      83,   195,   196,   197,    84,    90,   198,   249,   250,    91,
      28,   218,   219,   148,   149,   150,    29,   296,   247,   248,
      15,    16,    17,    18,    19,    20,   251,   252,    21,    22,
     408,    32,    73,    35,   348,   151,    78,    51,   417,    53,
     420,   374,    57,   273,   152,   153,    57,   253,   375,   254,
     101,   255,   373,   387,   154,   155,   120,   105,   110,   349,
     318,   319,   320,   321,   322,   323,   324,   156,   157,    55,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   444,
     316,   317,   339,   410,   399,   258,   259,   260,   273,    48,
      59,   414,   158,   159,    62,   419,    66,   421,   325,   326,
     231,   232,   233,   234,   235,    80,   160,    68,   161,    70,
      72,   162,   163,   236,   237,   238,    77,   239,    95,   240,
     414,   241,    96,   414,   103,    99,   113,   432,   371,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     451,   117,   120,    58,   414,   442,   127,   128,   129,   130,
     456,   132,   137,   143,   144,   459,   182,   205,   145,   186,
     184,   401,   402,   214,   148,   149,   150,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   185,   216,   221,   222,
     223,   242,   244,   243,   245,   263,   188,   246,   265,   272,
     275,   189,   190,   191,   276,   152,   153,   192,  -166,   193,
     194,  -166,   195,   196,   197,   154,   155,   198,   199,   200,
     201,   202,   277,   282,   283,   287,   292,   297,   156,   157,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    81,
     288,   289,    15,    16,    17,    18,    19,    20,   290,    48,
      21,    22,   299,   158,   159,   330,   332,   336,   340,   341,
     345,   346,   203,   353,   354,   370,   394,   120,  -166,   161,
     372,   376,   162,   163,   148,   149,   150,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   377,   380,   381,   382,
     389,   390,   405,   391,   393,   392,   188,   396,   397,   403,
     398,   189,   190,   191,   404,   152,   153,   192,   407,   193,
     194,   409,   195,   196,   197,   154,   155,   198,   199,   200,
     201,   202,   429,   415,   148,   149,   150,   422,   156,   157,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   424,
     425,   426,   427,   430,   439,   138,   151,   435,   139,    48,
     433,   440,   333,   158,   159,   152,   153,   450,   453,   148,
     149,   150,   203,   454,   457,   154,   155,   120,   204,   161,
     461,   104,   162,   163,    61,    37,    38,    13,   156,   157,
     406,   337,   125,   400,   126,   262,   148,   149,   150,   261,
     152,   153,   388,   458,   455,   331,   441,   416,   460,   311,
     154,   155,   312,   158,   159,   313,   315,     0,   151,     0,
       0,   314,   285,   156,   157,     0,     0,   152,   153,   161,
       0,     0,   162,   163,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   159,
     156,   157,     0,     0,     0,   148,   149,   150,     0,     0,
       0,   148,   149,   150,   161,   117,     0,   162,   163,     0,
       0,     0,     0,     0,     0,   158,   159,   151,     0,     0,
       0,     0,     0,   151,   386,     0,   152,   153,     0,     0,
       0,   161,   152,   153,   162,   163,   154,   155,     0,     0,
       0,     0,   154,   155,     0,     0,     0,     0,     0,   156,
     157,     0,     0,     0,     0,   156,   157,     0,     0,     0,
     148,   149,   150,     0,     0,     0,   148,   149,   150,     0,
       0,     0,     0,     0,   158,   159,     0,     0,     0,     0,
     158,   159,   337,   418,     0,     0,     0,     0,   411,     0,
     161,   152,   153,   162,   163,     0,   161,   152,   153,   162,
     163,   154,   155,     0,     0,     0,     0,   154,   155,     0,
       0,     0,     0,     0,   156,   157,     0,     0,     0,     0,
     156,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   158,
     159,     0,     0,     0,     0,   158,   159,     0,     0,     0,
       0,     0,     0,     0,     0,   161,     0,     0,   162,   163,
       0,   161,     0,     0,   162,   163,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    87,     0,     0,    15,    16,
      17,    18,    19,    20,     0,    88,    21,    22
};

static const yytype_int16 yycheck[] =
{
      50,   142,   125,   143,    48,    98,   197,   142,    58,    53,
      73,   287,   270,   220,     6,    78,     3,   275,    68,    25,
     160,    25,    66,   100,   158,   159,   161,     4,   162,   163,
       0,    25,    25,   291,   111,    25,    80,   114,     3,     4,
       5,    75,    37,     3,    88,    40,    96,   415,    25,   126,
     418,     3,     4,     5,    25,     5,   119,    91,    92,    93,
      25,    51,    92,   198,    17,    25,    57,    58,    98,    34,
      35,   439,    75,    25,    25,    25,    16,   411,   269,    44,
      45,    85,    34,    35,    75,    28,    57,    58,    94,   296,
      93,    91,    44,    45,   217,   429,   189,    91,    91,    82,
      83,    92,    97,    94,    75,    57,    58,    99,    95,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   394,    57,
      58,    92,    23,    94,   258,   259,   260,   220,    25,   100,
      82,    83,   182,    98,   341,    94,   186,   272,   188,    98,
      25,   276,   277,   401,    96,    97,    98,    94,   283,   101,
     102,    98,    32,    92,    92,   205,    36,   297,    38,    39,
      73,    41,    42,    43,    73,    78,    46,    61,    62,    78,
      25,    57,    58,     3,     4,     5,    25,   221,    59,    60,
      18,    19,    20,    21,    22,    23,    80,    81,    26,    27,
     381,    91,    65,    28,    91,    25,    69,    29,   389,    25,
     391,   336,    92,   296,    34,    35,    92,    68,    94,    70,
      88,    72,   335,   348,    44,    45,    96,    95,    96,   282,
     249,   250,   251,   252,   253,   254,   255,    57,    58,    96,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   430,
     247,   248,   377,   383,   367,    84,    85,    86,   341,    25,
      94,   386,    82,    83,    96,   390,    25,   392,   256,   257,
      52,    53,    54,    55,    56,    25,    96,    95,    98,    93,
      97,   101,   102,    65,    66,    67,    97,    69,    25,    71,
     415,    73,    25,   418,    25,    98,    98,   410,   332,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     435,    99,    96,   347,   439,   428,    91,    75,    91,    93,
     445,    91,    99,    75,    91,   450,    25,   458,    93,    25,
      94,   371,   372,   458,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    99,    25,    25,    25,
      25,    63,    77,    64,    78,    95,    25,    79,    93,    98,
      92,    30,    31,    32,    98,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    98,    98,    98,    98,    91,    93,    57,    58,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      98,    98,    18,    19,    20,    21,    22,    23,    98,    25,
      26,    27,    99,    82,    83,    25,    25,    75,    91,    25,
      91,    91,    91,    42,    91,    97,    82,    96,    97,    98,
      95,    99,   101,   102,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    93,    91,    99,    99,
      99,    91,     3,    99,    99,    98,    25,    99,    99,    91,
      99,    30,    31,    32,    91,    34,    35,    36,    91,    38,
      39,    96,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    95,    91,     3,     4,     5,    91,    57,    58,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    91,
      91,    91,    91,    33,    91,    21,    25,    93,    24,    25,
      94,    99,     3,    82,    83,    34,    35,    75,    91,     3,
       4,     5,    91,    91,   100,    44,    45,    96,    97,    98,
     100,    94,   101,   102,    51,    30,    32,     7,    57,    58,
     377,    25,   103,   369,   103,   183,     3,     4,     5,   182,
      34,    35,   349,   449,   443,   265,   423,   388,   451,   242,
      44,    45,   243,    82,    83,   244,   246,    -1,    25,    -1,
      -1,   245,    91,    57,    58,    -1,    -1,    34,    35,    98,
      -1,    -1,   101,   102,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      57,    58,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,     3,     4,     5,    98,    99,    -1,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    25,    -1,    -1,
      -1,    -1,    -1,    25,    91,    -1,    34,    35,    -1,    -1,
      -1,    98,    34,    35,   101,   102,    44,    45,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      82,    83,    25,    91,    -1,    -1,    -1,    -1,    25,    -1,
      98,    34,    35,   101,   102,    -1,    98,    34,    35,   101,
     102,    44,    45,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,   101,   102,
      -1,    98,    -1,    -1,   101,   102,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,   104,   105,    25,     0,    16,   120,   121,    91,
      23,   115,   114,   122,    25,    18,    19,    20,    21,    22,
      23,    26,    27,   113,   123,   124,    92,   116,    25,    25,
      25,    85,    91,    28,   117,    28,   118,   116,   120,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    25,   109,
     112,    29,   119,    25,   108,    96,   128,    92,   106,    94,
     110,   108,    96,   125,   106,   129,    25,   110,    95,   126,
      93,   107,    97,   114,   130,   106,   110,    97,   114,   127,
      25,    15,   109,   123,   124,   144,   145,    15,    25,   109,
     123,   124,   131,   132,   106,    25,    25,    25,    51,    98,
     143,   151,   154,    25,   107,   151,   110,   146,   147,   150,
     151,   141,   151,    98,   142,   152,   154,    99,   157,   158,
      96,   163,   110,   133,   134,   137,   141,    91,    75,    91,
      93,   148,    91,   163,     6,   153,   163,    99,    21,    24,
     109,   159,   164,    75,    91,    93,   135,   163,     3,     4,
       5,    25,    34,    35,    44,    45,    57,    58,    82,    83,
      96,    98,   101,   102,   138,   139,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,    25,   149,    94,    99,    25,   162,    25,    30,
      31,    32,    36,    38,    39,    41,    42,    43,    46,    47,
      48,    49,    50,    91,    97,   112,   122,   163,   165,   166,
     169,   171,   173,   175,   185,   138,    25,   136,    57,    58,
     106,    25,    25,    25,   197,   197,    97,   138,   185,   197,
     197,    52,    53,    54,    55,    56,    65,    66,    67,    69,
      71,    73,    63,    64,    77,    78,    79,    59,    60,    61,
      62,    80,    81,    68,    70,    72,    82,    83,    84,    85,
      86,   150,   148,    95,   110,    93,   160,    92,    94,   100,
     110,   111,    98,   154,   155,    92,    98,    98,    25,    91,
      25,    91,    98,    98,   175,    91,   185,    98,    98,    98,
      98,   110,    91,   137,   135,   155,   106,    93,   140,    99,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   188,   189,   190,   191,   192,   193,   193,   195,   195,
     195,   195,   195,   195,   195,   196,   196,   197,   197,   197,
      25,   157,    25,     3,   175,   136,    75,    25,   156,   185,
      91,    25,   136,   185,   185,    91,    91,    25,    91,   109,
     179,   180,   185,    42,    91,    25,   167,   198,     3,    25,
     172,     4,    25,   170,     5,    25,   174,   136,   155,   138,
      97,   106,    95,   135,   185,    94,    99,    93,   161,   155,
      91,    99,    99,    75,   135,   181,    91,   185,   162,    99,
      91,    99,    98,    99,    82,   168,    99,    99,    99,   135,
     140,   110,   110,    91,    91,     3,   156,    91,   175,    96,
     138,    25,   182,   184,   185,    91,   181,   175,    91,   185,
     175,   185,    91,   198,    91,    91,    91,    91,   136,    95,
      33,   176,   135,    94,   111,    93,   183,   182,   182,    91,
      99,   168,   135,   111,   175,    37,    40,    97,   177,   178,
      75,   185,   182,    91,    91,   161,   185,   100,   164,   185,
     183,   100
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   122,   122,   123,   124,
     125,   126,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   131,   131,   131,   132,   133,   133,   134,   135,   135,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     142,   143,   144,   144,   144,   144,   145,   146,   146,   147,
     148,   148,   149,   150,   150,   151,   151,   152,   152,   153,
     154,   155,   155,   156,   156,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   163,   164,   164,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   166,   167,   167,   168,   168,   169,
     170,   170,   170,   171,   172,   172,   172,   173,   174,   174,
     174,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   177,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   179,   180,   180,   181,
     181,   182,   183,   183,   184,   184,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   192,   193,   193,   193,   193,   193,   194,   194,   194,
     194,   195,   195,   195,   196,   196,   196,   196,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   199,   200
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     3,     0,     4,     0,     3,     2,
       3,     3,     0,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     1,     0,     3,     2,     0,     2,     0,     2,
       0,     2,     0,     6,     0,     2,     2,     2,     5,     4,
       3,     2,     0,     2,     5,     3,     2,     0,     2,     1,
       4,     3,     1,     1,     3,     2,     2,     2,     3,     0,
       2,     3,     1,     1,     1,     4,     2,     3,     0,     1,
       1,     1,     1,     4,     1,     1,     3,     2,     2,     2,
       3,     0,     2,     3,     1,     3,     1,     3,     1,     4,
       2,     3,     1,     6,     2,     4,     2,     0,     1,     1,
       2,     0,     2,     0,     2,     3,     2,     0,     1,     1,
       1,     1,     8,     5,     5,     5,     2,     4,     5,     3,
       1,     3,     1,     1,     5,     2,     0,     3,     0,     5,
       1,     1,     0,     5,     1,     1,     0,     5,     1,     1,
       0,     1,     5,     7,     7,     5,     7,     5,     3,     2,
       3,     2,     3,     2,     2,     0,     2,     3,     2,     4,
       5,     3,     4,     3,     4,     2,     3,     3,     2,     1,
       3,     2,     3,     0,     1,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     4,     3
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
        case 4:
#line 143 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1771 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1777 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 147 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1783 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 148 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1789 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 151 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1795 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1801 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1807 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 158 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1813 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1819 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1825 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 163 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1831 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 166 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1837 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 167 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1843 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 168 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1849 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 169 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1855 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 170 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1861 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 171 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1867 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 172 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1873 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 173 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1879 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 174 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1885 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 178 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout << " Modifier --> TPUBLIC "<<endl;}
#line 1891 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 179 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1897 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1903 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 181 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout << " Modifier --> TSTATIC "<<endl;}
#line 1909 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 182 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1915 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 183 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1921 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 186 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout << " Modifiers --> Modifiers Modifier "<<endl;}
#line 1927 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 187 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout << " Modifiers --> Epsilone "<<endl;}
#line 1933 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 195 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1939 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 196 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1945 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 199 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1951 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 200 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1957 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1963 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1969 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 206 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout<<"Extends->epsilon\n";}
#line 1975 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 209 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1981 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 210 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1987 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 214 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1993 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<<"Implements->epsilon\n";}
#line 1999 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 219 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2005 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 220 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout<<"TypeDeclaration-->ImportDeclaration ClassOrInterfaceDeclaration"<< endl; }
#line 2011 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 224 "kawa.y" /* yacc.c:1646  */
    { (yyval.vint)=0; cout<<"ImportDeclaration-->Epsilone "<< endl;  }
#line 2017 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 227 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; program->addClass(mainClass); cout<< "ClassOrInterfaceDeclaration -->Modifiers ClassDeclaration "<< endl;}
#line 2023 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 228 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2029 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 231 "kawa.y" /* yacc.c:1646  */
    { KAWATreeClass* c = new KAWATreeClass(*(yyvsp[-3].vstring)); /*$$->addMain(c); $$ = c*/; cout << "CLASS NAME: " << *(yyvsp[-3].vstring) << endl; }
#line 2035 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 234 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2041 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 238 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout<< "ClassBody --> '{' ClassBodyDeclarations '}'  "<< endl; }
#line 2047 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 239 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< " ClassBodyDeclarations --> ClassBodyDeclarations ClassBodyDeclaration "<< endl; }
#line 2053 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 240 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< " ClassBodyDeclarations --> Epsilone "<< endl;}
#line 2059 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 243 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2065 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 244 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; mainMethod = new KAWATreeMethod(*(yyvsp[-2].vstring)); mainMethod->setBody(bodyMain);cout<< " ClassBodyDeclarations --> Modifiers TVOID TMAIN MainMethodDeclaratorRest Block  "<< endl;}
#line 2071 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 248 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2077 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 250 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2083 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 251 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2089 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 258 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2095 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2101 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 260 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2107 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 261 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2113 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 262 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2119 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 265 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2125 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2131 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 269 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2137 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 273 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2143 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 281 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2149 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 282 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2155 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 285 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2161 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 288 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2167 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 289 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2173 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 292 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2179 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 293 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2185 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 296 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-2].vint);}
#line 2191 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 297 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2197 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 300 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2203 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 301 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2209 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 306 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2215 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 310 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;cout <<" MainMethodDeclaratorRest --> MainFormalParametrs" <<endl;}
#line 2221 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 320 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2227 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 323 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2233 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 324 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2239 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 325 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2245 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 326 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2251 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 329 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2257 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 332 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2263 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 333 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2269 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 336 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2275 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 338 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2281 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 339 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2287 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 342 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2293 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 345 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2299 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 346 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2305 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 359 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2311 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 360 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2317 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 363 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2323 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 364 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< "MainFormalParametrs --> VoidFormalParametrs"<<endl;}
#line 2329 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 366 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2335 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 369 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< "VoidFormalParametrs --> '(' ')' "<<endl;}
#line 2341 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 372 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2347 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 373 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2353 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 375 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2359 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 376 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2365 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 379 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2371 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 382 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2377 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 383 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2383 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 386 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2389 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 387 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2395 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 390 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2401 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 391 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2407 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 394 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2413 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 395 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2419 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 398 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2425 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 402 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);cout<< " Block --> '{' BlockStatements '}' "<< endl;}
#line 2431 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 405 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2437 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 406 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< " BlockStatements --> Epsilone "<< endl; }
#line 2443 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 409 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; }
#line 2449 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 410 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintString)); cout<< " BlockStatement --> PrintS "<< endl; }
#line 2455 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 411 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintFloat)); cout<< " BlockStatement --> PrintF "<< endl; }
#line 2461 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 412 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintInteger)); cout<< " BlockStatement --> PrintI "<< endl;}
#line 2467 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2473 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 414 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2479 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 415 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2485 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 417 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2491 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 418 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2497 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 419 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2503 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 420 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2509 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 421 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2515 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 422 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2521 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 423 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2527 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 424 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2533 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 425 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2539 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 428 "kawa.y" /* yacc.c:1646  */
    {cout << "Print: " << (yyvsp[-4].vint) << endl; (yyval.vint)=0;}
#line 2545 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 430 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2551 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 431 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2557 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 433 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2563 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 434 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2569 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 437 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintFloat)=0; printFloat = new KAWATreePrintFloat; printFloat->addParam(paramFloat); cout << " PrintF --> TPRINTF '(' ArgsF ')' ';'" <<endl;}
#line 2575 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 439 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeFloat = new KAWATreeType("float"); float* doubleVal = (float*) malloc(sizeof(float)); *doubleVal = (yyvsp[0].vint); void* valueDouble = (void*) doubleVal; paramFloat = new KAWATreeParam(typeFloat, valueDouble);cout << " ArgsF --> REEL" <<endl;}
#line 2581 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 440 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2587 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 441 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2593 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 444 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintInteger) = new KAWATreePrintInteger; (yyval.vKAWATreePrintInteger)->addParam(paramInteger); cout << " PrintI --> TPRINTI '(' ArgsI ')' ';'" <<endl;}
#line 2599 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 446 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeInteger = new KAWATreeType("int"); int* integer = (int*) malloc(sizeof(int)); *integer = (yyvsp[0].vint); void* valueInt = (void*) integer; paramInteger = new KAWATreeParam(typeInteger, valueInt); cout << " ArgsI --> ENTIER " <<endl;}
#line 2605 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 447 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2611 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 448 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2617 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 451 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintString)=0; printString = new KAWATreePrintString; printString->addParam(paramStr);cout<< " PrintS --> TPRINTS '(' ArgsS ')' ';'"<< endl;}
#line 2623 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 453 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeString = new KAWATreeType("string"); paramStr = new KAWATreeParam(typeString, (void*) (yyvsp[0].vint));cout<< " ArgsS --> STRING "<< endl;}
#line 2629 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 454 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2635 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 455 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2641 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 462 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2647 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 463 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2653 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 464 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2659 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 465 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2665 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 466 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2671 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 467 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2677 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 468 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2683 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 469 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2689 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 470 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2695 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 471 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2701 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 472 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2707 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 473 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2713 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 474 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2719 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 514 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2725 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 515 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2731 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 518 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2737 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 521 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2743 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 522 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2749 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 525 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2755 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 526 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2761 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 527 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2767 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 528 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2773 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 529 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2779 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 530 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2785 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 531 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2791 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 532 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2797 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 535 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2803 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 536 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2809 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 539 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2815 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 540 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2821 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 543 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2827 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 546 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2833 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 547 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2839 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 550 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2845 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 551 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2851 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 555 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2857 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 558 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2863 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 559 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2869 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 560 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2875 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 561 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2881 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 562 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2887 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 563 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2893 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 564 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2899 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 565 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2905 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 566 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2911 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 567 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2917 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 568 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2923 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 570 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2929 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 578 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2935 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 579 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2941 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 582 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2947 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 583 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2953 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 586 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2959 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 587 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2965 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 590 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2971 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 591 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2977 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 594 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2983 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 595 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2989 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 598 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2995 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 599 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3001 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 600 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3007 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 603 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3013 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 604 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3019 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 605 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3025 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 606 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3031 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 607 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3037 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 610 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3043 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 611 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3049 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 612 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3055 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 613 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3061 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 616 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3067 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 617 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3073 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 618 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3079 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 621 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3085 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 622 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3091 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 623 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3097 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 624 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3103 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 627 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3109 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 628 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3115 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 629 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3121 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 630 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3127 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 631 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3133 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 632 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3139 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 633 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3145 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 634 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3151 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 635 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3157 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 642 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3163 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 643 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3169 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 644 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3175 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 645 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3181 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 646 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3187 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 647 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3193 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 648 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3199 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 649 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3205 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 650 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3211 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 651 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3217 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 654 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3223 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 657 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3229 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3233 "kawa.cpp" /* yacc.c:1646  */
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
#line 661 "kawa.y" /* yacc.c:1906  */


/*#include "lex.yy.c"*/

int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d] colonne [%d]\n", yytext, lineno, column-strlen(yytext));
  return 0;
}

