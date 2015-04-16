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
#line 98 "kawa.y" /* yacc.c:355  */

	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;
	KAWATreePrintString* vKAWATreePrintString;
	KAWATreePrintInteger* vKAWATreePrintInteger;
	KAWATreePrintFloat* vKAWATreePrintFloat;
	KAWATreeParam* vKAWATreeParam;

#line 247 "kawa.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 262 "kawa.cpp" /* yacc.c:358  */

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
#define YYLAST   884

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

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
      97,    98,    84,    81,    92,    82,    91,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,    90,
      80,    74,    79,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,    77,     2,     2,     2,     2,     2,
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
       0,   130,   130,   131,   133,   137,   138,   141,   142,   145,
     148,   149,   152,   153,   156,   157,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   172,   173,   174,   175,   176,
     177,   180,   181,   184,   185,   188,   189,   190,   194,   195,
     198,   199,   203,   204,   208,   209,   214,   217,   221,   222,
     223,   226,   227,   228,   229,   233,   235,   236,   239,   240,
     245,   246,   249,   252,   253,   257,   258,   261,   264,   265,
     267,   268,   271,   274,   275,   278,   279,   282,   283,   286,
     287,   290,   294,   297,   298,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   316,   318,
     319,   322,   324,   325,   327,   328,   331,   333,   334,   335,
     338,   340,   341,   342,   345,   347,   348,   349,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   368,   369,   372,   373,   377,   378,   379,   380,   381,
     382,   383,   384,   387,   388,   389,   390,   394,   395,   398,
     399,   400,   405,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   422,   423,   426,   427,   430,
     431,   434,   435,   438,   439,   442,   443,   444,   447,   448,
     449,   450,   451,   454,   455,   456,   457,   460,   461,   462,
     465,   466,   467,   468,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   482,   483,   484,   486,   487,   489,   490,
     491,   492,   493,   496,   499,   502,   503,   506,   507,   508,
     509,   512,   513,   514
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
  "TPRINT", "TPRINTI", "TPRINTF", "TPRINTS", "TPLUSEQ", "TMINUSEQ",
  "TMULEQ", "TDIVEQ", "TMODEQ", "TINC", "TDEC", "TCEQ", "TCNE", "TCLE",
  "TCGE", "TOR", "TAND", "TANDBINEQ", "TORBINEQ", "TXORBINEQ", "TDECAL",
  "TDECALEQ", "TDECAR", "TDECAREQ", "TDECALNS", "TDECALNSEQ", "THEN",
  "'='", "COND", "'|'", "'^'", "'&'", "'>'", "'<'", "'+'", "'-'", "'%'",
  "'*'", "'/'", "NBINAIRE", "NLOGIC", "MOINUS", "PLUS", "';'", "'.'",
  "','", "'['", "']'", "'{'", "'}'", "'('", "')'", "':'", "'~'", "'!'",
  "$accept", "Program", "Package", "Ids", "QList", "ListIds", "Type",
  "Tables", "TablesIndexe", "BasicType", "Modifier", "Modifiers", "Static",
  "All", "Extends", "ExtendsList", "Implements", "ImportDeclaration",
  "ClassDeclaration", "InterfaceDeclaration", "ClassBody", "MemberDecs",
  "MemberDec", "InterfaceBody", "Prototypes", "Prototype",
  "VariableDeclaratorList", "VariableDeclarator", "VariableInitializer",
  "FormalParameters", "VoidFormalParametrs",
  "FormalParametersCalledMethod", "FormalParametersCalledMethodDecls",
  "FormalParameterDecls", "VariableModifiers", "VariableModifier",
  "FormalParameterDeclsRest", "FormalParameterCalledMethodDeclsRest",
  "VariableDeclaratorId", "Block", "BlockStatements", "BlockStatement",
  "Print", "Args", "ArgsRest", "PrintF", "ArgsF", "PrintI", "ArgsI",
  "PrintS", "ArgsS", "Statement", "SwitchBlockStatements",
  "SwitchBlockStatement", "ForControl", "ForVarControl", "ForUpdate",
  "StatementExpressionList", "Expression", "FacteurEffect", "ExpressionOr",
  "ExpressionAnd", "ExpressionOrLogic", "ExpressionOrExLogic",
  "ExpressionAndLogic", "ExpressionEqNeq", "ExpressionCompEq",
  "TermeDecal", "TermePlus", "terme", "facteur", "factFinal",
  "ConstructorCall", "MethodCall", "ArrayInitializer",
  "LinkedMethodVarCall", "LinkedMethodVarCallList", YY_NULLPTR
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
      59,    46,    44,    91,    93,   123,   125,    40,    41,    58,
     126,    33
};
# endif

#define YYPACT_NINF -380

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-380)))

#define YYTABLE_NINF -62

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    60,   103,   100,    45,  -380,   124,  -380,  -380,  -380,
     132,   225,    71,  -380,  -380,  -380,  -380,  -380,  -380,   147,
     152,  -380,  -380,  -380,    26,    92,   158,   162,    71,  -380,
     100,   819,   168,   174,   113,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,   119,  -380,   120,   174,
     128,   119,  -380,  -380,  -380,   213,   120,   146,  -380,  -380,
    -380,  -380,   165,   154,   119,  -380,   120,   163,   233,  -380,
    -380,   409,  -380,  -380,  -380,  -380,   788,  -380,   119,   235,
     239,   244,    48,   248,   165,   177,   177,   177,   173,   181,
    -380,   -44,  -380,   185,   188,   181,  -380,   184,   508,  -380,
    -380,   622,   187,   181,  -380,  -380,  -380,  -380,  -380,  -380,
     258,  -380,   357,  -380,  -380,  -380,    77,   193,  -380,  -380,
     828,  -380,   260,   261,   622,   622,   622,   622,   622,  -380,
     246,   226,   228,   216,   212,   215,    17,   115,   122,   -21,
     144,  -380,  -380,  -380,   203,  -380,  -380,   277,   217,  -380,
     120,   211,   848,    55,   208,   218,   209,   220,    -2,    19,
     222,   231,   117,   180,   237,   238,   240,   241,  -380,  -380,
     120,  -380,  -380,  -380,  -380,  -380,  -380,  -380,   223,  -380,
    -380,   283,   505,  -380,  -380,  -380,   290,   119,   243,  -380,
    -380,  -380,  -380,   232,  -380,  -380,   622,   622,   622,   622,
     622,   622,   622,   622,   622,   622,   622,   622,   622,   622,
     622,   622,   622,   622,   622,   622,   622,   622,   622,   622,
     622,   622,   622,   622,   622,   622,  -380,   266,   187,  -380,
    -380,  -380,  -380,    49,   120,   307,    21,   277,   268,   253,
     320,   622,   622,   256,  -380,   257,  -380,    83,   622,   306,
    -380,   262,    33,    37,    31,    38,   277,  -380,    70,   203,
     -10,   252,   259,    70,   203,   -48,   350,  -380,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   228,
     216,   212,   215,    17,   115,   115,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   144,   144,  -380,  -380,  -380,  -380,  -380,
    -380,   330,   277,   277,     9,   264,   187,   622,  -380,   -43,
     274,   275,  -380,  -380,   119,   538,   258,   276,   285,   278,
     280,  -380,    70,   281,   299,  -380,  -380,   286,  -380,  -380,
     287,  -380,  -380,   292,   187,  -380,  -380,   353,  -380,   655,
    -380,  -380,  -380,   378,  -380,   289,   119,   187,   187,   369,
     120,   304,   318,   319,   407,   337,   117,   317,   126,   690,
     335,   -22,   117,   573,   117,   622,   336,    33,  -380,   343,
     345,   346,   347,   348,  -380,   349,  -380,   120,   351,   354,
       8,   277,  -380,  -380,  -380,   622,   412,  -380,   622,  -380,
     175,  -380,   356,   690,   622,  -380,  -380,   690,   359,  -380,
     342,  -380,   299,  -380,  -380,  -380,  -380,   304,  -380,   277,
    -380,  -380,   187,   360,   117,     2,   187,   304,   723,  -380,
    -380,   187,  -380,   690,   361,  -380,   259,   187,   365,  -380,
    -380,   622,   372,  -380,  -380,  -380,   382,   175,   356,  -380,
    -380,  -380,  -380,   383,  -380,   373,  -380,   622,   304,  -380,
    -380,  -380,   456,   356,   400,   456,  -380,   622,   356,  -380
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    45,     0,     1,    34,    32,     4,    33,
       0,     0,    37,    25,    27,    26,    30,    29,    28,     0,
       0,    31,     2,     3,     0,     0,    39,    41,    37,    36,
      45,     0,    43,     0,     0,    35,    44,    24,    17,    19,
      20,    21,    22,    16,    18,    23,     6,    38,    13,     0,
       0,     6,    40,    57,    47,     0,    13,     0,    10,    42,
      50,    46,     8,    32,     6,    11,    13,    32,     0,     9,
      55,     0,    56,     5,    12,    48,     0,    49,     6,     0,
       0,     0,     6,     0,     8,     0,     0,     0,    74,     0,
      66,    64,     7,     0,     0,     0,    67,     0,     0,    84,
      54,     0,    61,     0,    59,    58,    53,    65,    75,    76,
       0,    73,     0,   204,   205,   206,   223,     0,   211,   210,
       0,   212,     0,     0,     0,     0,     0,     0,     0,    63,
     152,   164,   166,   168,   170,   172,   174,   177,   182,   186,
     189,   193,   202,   207,   223,   208,   209,     0,     0,    52,
      13,    78,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,    82,
      13,   118,    83,    85,    87,    88,    86,    99,     0,   200,
     198,     0,     0,    69,   214,   218,     0,     6,     0,   201,
     199,   197,   196,     0,   194,   195,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   220,    64,    61,    51,
      81,    74,    72,    13,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,     0,   126,     0,     0,     0,
     130,     0,   103,   113,   109,   117,     0,    97,   223,   223,
     223,     0,    80,   223,   223,     0,     0,   203,   163,   162,
     161,   160,   159,   155,   153,   154,   158,   157,   156,   165,
     167,   169,   171,   173,   176,   175,   180,   178,   179,   181,
     185,   184,   183,   187,   188,   192,   190,   191,    62,    60,
      77,     0,     0,     0,   223,     0,    61,     0,    98,   223,
       0,     0,   127,   125,     6,     0,     0,     0,     0,     0,
       0,   129,   223,     0,   105,   111,   112,     0,   107,   108,
       0,   115,   116,     0,    61,   221,   222,     0,    68,     0,
      71,   217,   219,     0,   213,     0,     6,    61,    61,     0,
      13,    15,     0,     0,     0,     0,     0,     0,    13,   141,
       0,    61,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,     0,    79,     0,   215,    13,     0,     0,
     223,     0,    14,    92,    95,     0,   119,   132,     0,   145,
     223,   142,   151,   139,     0,   143,   124,   137,     0,   122,
       0,   101,   105,   110,   106,   114,    93,    15,   216,     0,
      91,    94,    61,     0,     0,     0,    61,    15,     0,   147,
     140,    61,   138,   135,     0,   104,    80,    61,     0,    96,
     120,     0,     0,   121,   131,   146,     0,   223,   151,   144,
     136,   123,    70,     0,    90,     0,    84,     0,    15,   149,
      89,    84,   134,   151,     0,   133,   148,     0,   151,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -380,  -380,  -380,   -51,   362,   426,   -66,   -46,  -294,  -111,
    -380,   102,  -380,   448,  -380,  -380,  -380,   449,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -220,  -230,   251,   135,
     148,  -143,   141,   254,  -380,  -380,  -380,    56,   167,    75,
    -314,  -380,  -380,  -380,    82,  -380,  -380,  -380,  -380,  -380,
    -380,  -158,  -380,  -380,  -380,  -380,  -368,  -379,   -98,  -380,
     678,   282,   288,   284,   297,   300,    42,  -380,   107,   -19,
    -106,  -236,  -380,  -169,  -380,  -380,  -138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    56,    69,    52,    47,    65,   238,    48,
      21,    11,    10,    25,    32,    34,    50,     7,    22,    23,
      61,    67,    77,    54,    63,    72,   148,   228,   102,    89,
     183,   184,   261,    97,    98,   111,   232,   340,   151,   171,
     112,   172,   173,   323,   368,   174,   330,   175,   327,   176,
     333,   177,   415,   434,   317,   318,   391,   419,   392,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   185
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   170,    58,   129,   249,    80,   226,   306,   299,   188,
      83,   239,   259,    73,   178,   355,   324,   264,   191,   192,
      74,   194,   195,   243,   305,   420,   334,    84,   193,   422,
     101,   -15,   110,    -6,    -6,   328,   113,   114,   115,   431,
     325,   234,   432,   331,   245,   343,   179,   180,   181,   182,
     354,    28,   394,    88,   182,   440,   329,   382,   322,   449,
     221,   222,   326,   332,   117,   251,   259,   118,   119,     1,
     147,   264,   347,   348,   456,   212,   213,   120,   121,   459,
     -13,   181,    -6,   337,   262,     4,   352,   182,   244,    37,
      38,    39,    40,    41,    42,    43,    44,    45,   433,   349,
     349,    -6,    -6,     5,   230,   182,   182,   237,   314,   246,
      29,   179,   180,   426,   372,    66,     6,   295,   296,   297,
     335,   336,   344,   436,   256,   341,   342,   378,   379,   -15,
     126,   402,   452,   179,   180,     8,   265,   455,   389,    55,
     301,   395,    57,   310,   311,    88,   235,     9,   236,   156,
     319,   412,   182,   157,   454,   158,   159,    12,   160,   161,
     162,   181,    24,   163,   100,    71,   335,   182,   181,    76,
     106,   341,    26,   315,   182,   214,   215,    27,   149,   427,
     259,   316,    30,   113,   114,   115,    31,   302,   303,   218,
      33,   219,   428,   220,   216,   217,   435,    49,   386,    51,
     388,   439,   293,   294,   396,   116,   399,   443,    53,   353,
      55,   117,    99,    57,   118,   119,   -61,   360,   147,    57,
      93,    94,    95,    60,   120,   121,   103,   223,   224,   225,
      90,   179,   180,    90,    90,    90,   122,   123,    64,    90,
      66,   262,   335,    13,    14,    15,    16,    17,    18,    -6,
      70,    19,    20,   350,   284,   285,   430,    68,    78,    75,
      85,   124,   125,   358,    86,   398,   349,   400,    -6,    87,
     250,    96,   182,    91,    88,   104,    99,   126,   105,   147,
     127,   128,   107,   150,   186,   189,   190,   413,   207,   210,
     416,   208,   209,   211,   181,   377,   421,   196,   197,   198,
     199,   200,   227,   231,   381,   182,   241,   229,   258,   240,
     201,   202,   203,   257,   204,   263,   205,   242,   206,   247,
     438,   286,   287,   288,   289,   290,   291,   292,   248,    73,
     267,   409,   304,   445,   252,   253,   266,   254,   255,   417,
     101,   170,   307,   308,   170,   309,   312,   313,   320,   453,
     338,   339,   321,   345,   178,   346,   373,   178,   351,   458,
     113,   114,   115,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   356,   357,   362,   363,   364,   365,   152,   366,
     367,   375,   153,   376,   369,   370,   448,   154,   155,   156,
     371,   118,   119,   157,   380,   158,   159,   354,   160,   161,
     162,   120,   121,   163,   164,   165,   166,   167,   383,   384,
     305,   385,   387,   122,   123,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    79,   393,   401,    13,    14,    15,
      16,    17,    18,   403,    46,   404,   405,   406,   124,   125,
     424,   410,   407,   408,   411,   414,    92,   168,   418,   423,
     429,   441,    99,   169,   126,   444,   447,   127,   128,   113,
     114,   115,    37,    38,    39,    40,    41,    42,    43,    44,
      45,   446,   451,   450,   457,    59,    35,   152,   298,    36,
     374,   153,   442,   361,   425,   300,   154,   155,   156,   279,
     118,   119,   157,   281,   158,   159,   280,   160,   161,   162,
     120,   121,   163,   164,   165,   166,   167,   282,   113,   114,
     115,   283,   122,   123,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,   108,
     260,     0,   109,    46,     0,     0,   117,   124,   125,   118,
     119,   113,   114,   115,     0,     0,   168,     0,     0,   120,
     121,    99,     0,   126,     0,     0,   127,   128,     0,     0,
       0,   122,   123,   116,     0,     0,     0,     0,     0,   117,
       0,     0,   118,   119,     0,     0,   113,   114,   115,     0,
       0,     0,   120,   121,     0,     0,   124,   125,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,   116,     0,
       0,     0,   126,    96,   117,   127,   128,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,   124,
     125,     0,     0,     0,     0,   113,   114,   115,   359,   122,
     123,     0,     0,     0,     0,   126,     0,     0,   127,   128,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,   117,   124,   125,   118,   119,   113,   114,
     115,     0,     0,   397,     0,     0,   120,   121,     0,     0,
     126,     0,     0,   127,   128,     0,     0,     0,   122,   123,
     260,     0,     0,     0,     0,     0,   117,     0,     0,   118,
     119,     0,     0,   113,   114,   115,     0,     0,     0,   120,
     121,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,   122,   123,     0,     0,   390,     0,     0,     0,   126,
       0,   117,   127,   128,   118,   119,   113,   114,   115,     0,
       0,     0,     0,     0,   120,   121,   124,   125,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   437,     0,
       0,     0,   126,     0,   117,   127,   128,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,     0,     0,     0,   126,     0,     0,
     127,   128,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    81,   124,   125,    13,    14,    15,    16,
      17,    18,     0,    82,     0,     0,     0,     0,     0,     0,
     126,     0,     0,   127,   128,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,   187,    37,    38,    39,    40,    41,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278
};

static const yytype_int16 yycheck[] =
{
      51,   112,    48,   101,   162,    71,   144,   237,   228,   120,
      76,   154,   181,    64,   112,   309,   252,   186,   124,   125,
      66,   127,   128,    25,     3,   393,   256,    78,   126,   397,
      74,    74,    98,    25,    25,     4,     3,     4,     5,    37,
       3,   152,    40,     5,    25,    93,    56,    57,    91,    97,
      93,    25,    74,    97,    97,   423,    25,   351,    25,   438,
      81,    82,    25,    25,    31,   163,   235,    34,    35,    17,
      92,   240,   302,   303,   453,    58,    59,    44,    45,   458,
      25,    91,    74,    93,   182,    25,   306,    97,    90,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    96,    91,
      91,    93,    93,     0,   150,    97,    97,   153,    25,    90,
      84,    56,    57,   407,   334,    94,    16,   223,   224,   225,
     258,   259,   265,   417,   170,   263,   264,   347,   348,    74,
      97,   367,   446,    56,    57,    90,   187,   451,   358,    91,
      91,   361,    93,   241,   242,    97,    91,    23,    93,    32,
     248,   381,    97,    36,   448,    38,    39,    25,    41,    42,
      43,    91,    91,    46,    89,    63,   304,    97,    91,    67,
      95,   309,    25,    90,    97,    60,    61,    25,   103,   409,
     349,   247,    90,     3,     4,     5,    28,   233,   234,    67,
      28,    69,   412,    71,    79,    80,   416,    29,   356,    25,
      74,   421,   221,   222,   362,    25,   364,   427,    95,   307,
      91,    31,    95,    93,    34,    35,    90,   315,    92,    93,
      85,    86,    87,    95,    44,    45,    91,    83,    84,    85,
      82,    56,    57,    85,    86,    87,    56,    57,    25,    91,
      94,   339,   380,    18,    19,    20,    21,    22,    23,    74,
      96,    26,    27,   304,   212,   213,   414,    92,    25,    96,
      25,    81,    82,   314,    25,   363,    91,   365,    93,    25,
      90,    98,    97,    25,    97,    90,    95,    97,    90,    92,
     100,   101,    98,    25,    91,    25,    25,   385,    62,    77,
     388,    63,    76,    78,    91,   346,   394,    51,    52,    53,
      54,    55,    25,    92,   350,    97,    97,    90,    25,    91,
      64,    65,    66,    90,    68,    25,    70,    97,    72,    97,
     418,   214,   215,   216,   217,   218,   219,   220,    97,   380,
      98,   377,    25,   431,    97,    97,    93,    97,    97,   390,
      74,   452,    74,    90,   455,    25,    90,    90,    42,   447,
      98,    92,    90,     3,   452,    25,     3,   455,    94,   457,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    98,    98,    98,    90,    98,    97,    21,    98,
      81,     3,    25,    94,    98,    98,   437,    30,    31,    32,
      98,    34,    35,    36,    25,    38,    39,    93,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    90,    90,
       3,    74,    95,    56,    57,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    90,    90,    18,    19,    20,
      21,    22,    23,    90,    25,    90,    90,    90,    81,    82,
      98,    90,    94,    94,    90,    33,    84,    90,    92,    90,
      90,    90,    95,    96,    97,    90,    74,   100,   101,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    99,    99,    90,    74,    49,    28,    21,   227,    30,
     339,    25,   426,   316,   402,   231,    30,    31,    32,   207,
      34,    35,    36,   209,    38,    39,   208,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   210,     3,     4,
       5,   211,    56,    57,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      25,    -1,    24,    25,    -1,    -1,    31,    81,    82,    34,
      35,     3,     4,     5,    -1,    -1,    90,    -1,    -1,    44,
      45,    95,    -1,    97,    -1,    -1,   100,   101,    -1,    -1,
      -1,    56,    57,    25,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    44,    45,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    25,    -1,
      -1,    -1,    97,    98,    31,   100,   101,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    81,
      82,    -1,    -1,    -1,    -1,     3,     4,     5,    90,    56,
      57,    -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    81,    82,    34,    35,     3,     4,
       5,    -1,    -1,    90,    -1,    -1,    44,    45,    -1,    -1,
      97,    -1,    -1,   100,   101,    -1,    -1,    -1,    56,    57,
      25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    44,
      45,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    -1,    -1,    25,    -1,    -1,    -1,    97,
      -1,    31,   100,   101,    34,    35,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    44,    45,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    25,    -1,
      -1,    -1,    97,    -1,    31,   100,   101,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    -1,
     100,   101,    -1,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    81,    82,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,   101,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,   103,   104,    25,     0,    16,   119,    90,    23,
     114,   113,    25,    18,    19,    20,    21,    22,    23,    26,
      27,   112,   120,   121,    91,   115,    25,    25,    25,    84,
      90,    28,   116,    28,   117,   115,   119,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    25,   108,   111,    29,
     118,    25,   107,    95,   125,    91,   105,    93,   109,   107,
      95,   122,   105,   126,    25,   109,    94,   123,    92,   106,
      96,   113,   127,   105,   109,    96,   113,   124,    25,    15,
     108,    15,    25,   108,   105,    25,    25,    25,    97,   131,
     132,    25,   106,   131,   131,   131,    98,   135,   136,    95,
     141,    74,   130,   131,    90,    90,   141,    98,    21,    24,
     108,   137,   142,     3,     4,     5,    25,    31,    34,    35,
      44,    45,    56,    57,    81,    82,    97,   100,   101,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,    92,   128,   141,
      25,   140,    21,    25,    30,    31,    32,    36,    38,    39,
      41,    42,    43,    46,    47,    48,    49,    50,    90,    96,
     111,   141,   143,   144,   147,   149,   151,   153,   160,    56,
      57,    91,    97,   132,   133,   178,    91,    25,   111,    25,
      25,   172,   172,   160,   172,   172,    51,    52,    53,    54,
      55,    64,    65,    66,    68,    70,    72,    62,    63,    76,
      77,    78,    58,    59,    60,    61,    79,    80,    67,    69,
      71,    81,    82,    83,    84,    85,   178,    25,   129,    90,
     109,    92,   138,    25,   111,    91,    93,   109,   110,   133,
      91,    97,    97,    25,    90,    25,    90,    97,    97,   153,
      90,   160,    97,    97,    97,    97,   109,    90,    25,   175,
      25,   134,   160,    25,   175,   105,    93,    98,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   163,
     164,   165,   166,   167,   168,   168,   170,   170,   170,   170,
     170,   170,   170,   171,   171,   172,   172,   172,   130,   128,
     135,    91,   109,   109,    25,     3,   129,    74,    90,    25,
     160,   160,    90,    90,    25,    90,   108,   156,   157,   160,
      42,    90,    25,   145,   173,     3,    25,   150,     4,    25,
     148,     5,    25,   152,   129,   178,   178,    93,    98,    92,
     139,   178,   178,    93,   133,     3,    25,   129,   129,    91,
     105,    94,   128,   160,    93,   110,    98,    98,   105,    90,
     160,   140,    98,    90,    98,    97,    98,    81,   146,    98,
      98,    98,   128,     3,   134,     3,    94,   105,   128,   128,
      25,   109,   110,    90,    90,    74,   153,    95,    74,   128,
      25,   158,   160,    90,    74,   128,   153,    90,   160,   153,
     160,    90,   173,    90,    90,    90,    90,    94,    94,   109,
      90,    90,   129,   160,    33,   154,   160,   105,    92,   159,
     158,   160,   158,    90,    98,   146,   110,   129,   128,    90,
     153,    37,    40,    96,   155,   128,   110,    25,   160,   128,
     158,    90,   139,   128,    90,   160,    99,    74,   105,   159,
      90,    99,   142,   160,   110,   142,   159,    74,   160,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   104,   105,   105,   106,   106,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   121,   122,   123,
     123,   124,   124,   124,   124,   125,   126,   126,   127,   127,
     128,   128,   129,   130,   130,   131,   131,   132,   133,   133,
     134,   134,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   141,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   144,   145,   145,   146,   146,   147,   148,   148,   148,
     149,   150,   150,   150,   151,   152,   152,   152,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   156,   157,   157,   157,   157,   158,   158,   159,
     159,   159,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   168,   168,
     168,   168,   168,   169,   169,   169,   169,   170,   170,   170,
     171,   171,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   175,   176,   176,   177,   177,   177,
     177,   178,   178,   178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     3,     3,     0,     4,     0,     3,
       2,     3,     3,     0,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     1,     0,     3,     2,     0,     2,     0,
       2,     0,     2,     0,     6,     0,     5,     4,     3,     2,
       0,     6,     5,     5,     4,     3,     2,     0,     5,     5,
       3,     0,     2,     2,     0,     3,     1,     2,     3,     1,
       6,     2,     4,     2,     0,     1,     1,     2,     0,     2,
       0,     2,     3,     2,     0,     1,     1,     1,     1,     9,
       8,     6,     5,     5,     6,     5,     7,     2,     3,     1,
       1,     5,     2,     0,     3,     0,     5,     1,     1,     0,
       5,     1,     1,     0,     5,     1,     1,     0,     1,     5,
       7,     7,     5,     7,     5,     3,     2,     3,     2,     3,
       2,     2,     0,     4,     3,     4,     5,     3,     4,     3,
       4,     2,     3,     3,     5,     3,     5,     2,     6,     3,
       7,     0,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     5,     6,     4,     2,     4,
       2,     3,     3,     0
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
#line 130 "kawa.y" /* yacc.c:1646  */
    { (yyval.vint)=0; cout<<"Program ---> Package ImportDeclaration Modifiers ClassDeclaration"<< endl;}
#line 1768 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 131 "kawa.y" /* yacc.c:1646  */
    { (yyval.vint)=0; /*cout<<"Program ---> Package ImportDeclaration Modifiers InterfaceDeclaration"<< endl;*/}
#line 1774 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 137 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1780 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 138 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1786 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1792 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 142 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1798 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 145 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1804 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1810 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1816 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 152 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1822 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 153 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1828 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 156 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1834 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1840 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1846 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 161 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1852 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1858 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1864 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 164 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1870 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 165 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1876 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 166 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1882 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 167 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1888 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 168 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1894 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 172 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout << " Modifier --> TPUBLIC "<<endl;*/}
#line 1900 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 173 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1906 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 174 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1912 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 175 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout << " Modifier --> TSTATIC "<<endl;*/}
#line 1918 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 176 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1924 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 177 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1930 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 180 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout << " Modifiers --> Modifiers Modifier "<<endl;*/}
#line 1936 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 181 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout << " Modifiers --> Epsilone "<<endl;*/}
#line 1942 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1948 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 185 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1954 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 188 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1960 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 189 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1966 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 190 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1972 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 194 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1978 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 195 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<<"Extends->epsilon\n";*/}
#line 1984 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 198 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1990 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 199 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 1996 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 203 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2002 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 204 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<<"Implements->epsilon\n";*/}
#line 2008 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 208 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<<"ImportDeclaration --> import Static ID All"<< endl;*/ }
#line 2014 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 209 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<<"ImportDeclaration --> epsilon"<< endl;*/ }
#line 2020 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 214 "kawa.y" /* yacc.c:1646  */
    { KAWATreeClass* c = new KAWATreeClass(*(yyvsp[-3].vstring)); /*$$->addMain(c); $$ = c; cout << "CLASS NAME: " << *$2 << endl; */}
#line 2026 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 217 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2032 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 221 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<< "ClassBody --> '{' MemberDecs '}'  "<< endl;*/ }
#line 2038 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 222 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<< " MemberDecs --> MemberDecs MemberDec "<< endl;*/ }
#line 2044 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 223 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<< " MemberDecs --> Epsilone "<< endl;*/}
#line 2050 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 226 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2056 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 227 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2062 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 228 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2068 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 229 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2074 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 233 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2080 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 235 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2086 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 236 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2092 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 240 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2098 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 245 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2104 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 246 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2110 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 249 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2116 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 252 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2122 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 253 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2128 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 257 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2134 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 258 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2140 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 261 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<< "VoidFormalParametrs --> '(' ')' "<<endl;*/}
#line 2146 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 264 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint);}
#line 2152 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 265 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2158 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2164 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2170 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 271 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2176 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 274 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2182 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 275 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2188 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 278 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2194 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 279 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2200 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 282 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2206 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 283 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2212 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 286 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[0].vint);}
#line 2218 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 287 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2224 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 290 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2230 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 294 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=(yyvsp[-1].vint); /*cout<< " Block --> '{' BlockStatements '}' "<< endl;*/}
#line 2236 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 297 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2242 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 298 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; /*cout<< " BlockStatements --> Epsilone "<< endl; */}
#line 2248 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 301 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; }
#line 2254 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 302 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintString)); /*cout<< " BlockStatement --> PrintS "<< endl;*/ }
#line 2260 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 303 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintFloat)); /*cout<< " BlockStatement --> PrintF "<< endl;*/ }
#line 2266 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 304 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; bodyMain->addInstruction((yyvsp[0].vKAWATreePrintInteger)); /*cout<< " BlockStatement --> PrintI "<< endl;*/}
#line 2272 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 305 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2278 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 306 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2284 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 307 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2290 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 308 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2296 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 309 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2302 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 310 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2308 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 311 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2314 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 312 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2320 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 313 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0; cout<< "blockStatement --> Expression "<<endl;}
#line 2326 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 316 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2332 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 318 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2338 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 319 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2344 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 322 "kawa.y" /* yacc.c:1646  */
    {/*cout << "Print: " << $1 << endl;*/ (yyval.vint)=0;}
#line 2350 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 324 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2356 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 325 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2362 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 327 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2368 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 328 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2374 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 331 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintFloat)=0; printFloat = new KAWATreePrintFloat; printFloat->addParam(paramFloat); /*cout << " PrintF --> TPRINTF '(' ArgsF ')' ';'" <<endl;*/}
#line 2380 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 333 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeFloat = new KAWATreeType("float"); float* doubleVal = (float*) malloc(sizeof(float)); *doubleVal = (yyvsp[0].vint); void* valueDouble = (void*) doubleVal; paramFloat = new KAWATreeParam(typeFloat, valueDouble);/*cout << " ArgsF --> REEL" <<endl;*/}
#line 2386 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 334 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2392 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 335 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2398 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 338 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintInteger) = new KAWATreePrintInteger; (yyval.vKAWATreePrintInteger)->addParam(paramInteger); /*cout << " PrintI --> TPRINTI '(' ArgsI ')' ';'" <<endl;*/}
#line 2404 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 340 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeInteger = new KAWATreeType("int"); int* integer = (int*) malloc(sizeof(int)); *integer = (yyvsp[0].vint); void* valueInt = (void*) integer; paramInteger = new KAWATreeParam(typeInteger, valueInt); /*cout << " ArgsI --> ENTIER " <<endl;*/}
#line 2410 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 341 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2416 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 342 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2422 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 345 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreePrintString)=0; printString = new KAWATreePrintString; printString->addParam(paramStr); /*cout<< " PrintS --> TPRINTS '(' ArgsS ')' ';'"<< endl;*/}
#line 2428 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 347 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0; typeString = new KAWATreeType("string"); paramStr = new KAWATreeParam(typeString, (void*) (yyvsp[0].vint));/*cout<< " ArgsS --> STRING "<< endl;*/}
#line 2434 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 348 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2440 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 349 "kawa.y" /* yacc.c:1646  */
    {(yyval.vKAWATreeParam)=0;}
#line 2446 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 352 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2452 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 353 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2458 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 354 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2464 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 355 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2470 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 356 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2476 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 357 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2482 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 358 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2488 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 359 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2494 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 360 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2500 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 361 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2506 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 362 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2512 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 363 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2518 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 364 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2524 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 368 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2530 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 369 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2536 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 372 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2542 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 377 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2548 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 378 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2554 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 379 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2560 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 380 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2566 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 381 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2572 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 382 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2578 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 383 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2584 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 384 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2590 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 387 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2596 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 388 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2602 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 389 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2608 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 390 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2614 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 394 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2620 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 395 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2626 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 398 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2632 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 399 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2638 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 400 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2644 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 405 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2650 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 408 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2656 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 409 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2662 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2668 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 411 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2674 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 412 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2680 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2686 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 414 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2692 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 415 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2698 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 416 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2704 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 417 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2710 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 418 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2716 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 419 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2722 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 422 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2728 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 423 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2734 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 426 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2740 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 427 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2746 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 430 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2752 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 431 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2758 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 434 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2764 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 435 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2770 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 438 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2776 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 439 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2782 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 442 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2788 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 443 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2794 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 444 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2800 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 447 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2806 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 448 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2812 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 449 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2818 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 450 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2824 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 451 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2830 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 454 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2836 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 455 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2842 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 456 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2848 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 457 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2854 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 460 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2860 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 461 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2866 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 462 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2872 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 465 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2878 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 466 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2884 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 467 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2890 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 468 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2896 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 471 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2902 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 472 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2908 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 473 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2914 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 474 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2920 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 475 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2926 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 476 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2932 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 477 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2938 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 478 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2944 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 479 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2950 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 482 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2956 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 483 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2962 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 484 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2968 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 486 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2974 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 487 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2980 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 489 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2986 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 490 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2992 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 491 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2998 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 492 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3004 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 493 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3010 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 496 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3016 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 499 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3022 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 502 "kawa.y" /* yacc.c:1646  */
    {/*cout << "NEW BasicType [ Entier ]"<<endl;*/}
#line 3028 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 503 "kawa.y" /* yacc.c:1646  */
    {/*cout << "NEW ID IDs [ Entier ]"<<endl;*/}
#line 3034 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 506 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3040 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 507 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3046 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 508 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3052 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 509 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3058 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 512 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3064 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 513 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3070 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 514 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 3076 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3080 "kawa.cpp" /* yacc.c:1646  */
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
#line 518 "kawa.y" /* yacc.c:1906  */


int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d] colonne [%d]\n", yytext, lineno, column-strlen(yytext));
  return 0;
}

