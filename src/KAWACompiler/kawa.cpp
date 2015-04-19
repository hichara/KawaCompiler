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
#include "../implementation_KawaTree/headers.h"
/*
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
*/


using namespace std;




	int yylex();
	extern char* yytext;
	int yyerror(const char* err );
	extern int column;
	extern int lineno;


#line 104 "kawa.cpp" /* yacc.c:339  */

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
    TSTRING = 260,
    TSHORT = 261,
    TINT = 262,
    TLONG = 263,
    TFLOAT = 264,
    TDOUBLE = 265,
    TBYTE = 266,
    TCHAR = 267,
    TBOOLEAN = 268,
    TVOID = 269,
    STRING = 270,
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
    TDECAR = 323,
    TDECALNS = 324,
    THEN = 325,
    TDECALNSEQ = 326,
    TDECAREQ = 327,
    TDECALEQ = 328,
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
#line 113 "kawa.y" /* yacc.c:355  */

	bool vbool;
	int vint;
	float vfloat;
	string* vstring;
	KT_Addition* kt_addition;
	KT_AdditionlEq* kt_tdditionlEq;
	KT_Affectation* kt_affectation;
	KT_AffectOperation* kt_affectOperation;
	KT_AndBinEq* kt_andBinEq;
	KT_ArithmeticExpression* kt_arithmeticExpression;
	KT_ArrayInitilizer* kt_arrayInitilizer;
	KT_Attribute* kt_attribute;
	KT_BinaryExpression* kt_binaryExpression;
	KT_Block* kt_block;
	KT_BlockStatement* kt_blockStatement;
	KT_Bool* kt_bool;
	KT_BooleanExpression* kt_booleanExpression;
	KT_BreakStatement* kt_breakStatement;
	KT_Class* kt_class;
	KT_Constructor* kt_constructor;
	KT_ConstructorCall* kt_constructorCall;
	KT_ContinueStatement* kt_continueStatement;
	KT_Division* kt_division;
	KT_DivisionEq* kt_divisionEq;
	KT_Entier* kt_entier;
	KT_Expression* kt_expression;
	KT_ExpressionAnd* kt_expressionAnd;
	KT_ExpressionAndLogic* kt_expressionAndLogic;
	KT_ExpressionEq* kt_expressionEq;
	KT_ExpressionGE* kt_expressionGE;
	KT_ExpressionGT* kt_expressionGT;
	KT_ExpressionLE* kt_expressionLE;
	KT_ExpressionLT* kt_expressionLT;
	KT_ExpressionNotEq* kt_expressionNotEq;
	KT_ExpressionOr* kt_expressionOr;
	KT_ExpressionOrLogic* kt_expressionOrLogic;
	KT_ExpressionOrXLogic* kt_expressionOrXLogic;
	KT_FactFinal* kt_factFinal;
	KT_ForStatement* kt_forStatement;
	KT_ID* kt_id;
	KT_IDExpression* kt_idExpression;
	KT_ifElseStatement* kt_ifElseStatement;
	KT_IfStatement* kt_ifStatement;
	KT_IndexedArray* kt_indexedArray;
	KT_Interface* kt_interface;
	KT_LinkedMethodOrVarCall* kt_linkedMethodOrVarCall;
	KT_MethodCall* kt_methodCall;
	KT_MethodOrVarCall* kt_methodOrVarCall;
	KT_Minus* kt_minus;
	KT_Modifier* kt_modifier;
	KT_Modulo* kt_modulo;
	KT_ModuloEq* kt_moduloEq;
	KT_Multiplication* kt_multiplication;
	KT_MultiplicationEq* kt_multiplicationEq;
	KT_NBinary* kt_nBinary;
	KT_Negation* kt_negation;
	KT_OrBinEq* kt_orBinEq;
	KT_Package* kt_package;
	KT_Param* kt_param;
	KT_ParamsMethodCall* kt_paramsMethodCall;
	KT_PostDecrement* kt_postDecrement;
	KT_PostIncrement* kt_postIncrement;
	KT_PreDecrement* kt_preDecrement;
	KT_PreIncrement* kt_preIncrement;
	KT_Print* kt_print;
	KT_Program* kt_program;
	KT_Prototype* kt_prototype;
	KT_Reel* kt_reel;
	KT_ReturnStatement* kt_returnStatement;
	KT_SimpleMethod* kt_simpleMethod;
	KT_Statement* kt_statement;
	KT_String* kt_string;
	KT_Substraction* kt_substraction;
	KT_SubstractionEq* kt_substractionEq;
	KT_Super* kt_super;
	KT_SwitchBlockStatement* kt_switchBlockStatement;
	KT_SwitchStatement* kt_switchStatement;
	KT_Type* kt_type;
	KT_UnaryExpression* kt_unaryExpression;
	KT_Variable* kt_variable;
	KT_VarOrAttr* kt_varOrAttr;
	KT_WhileStatement* kt_whileStatement;
	KT_XOrBinEq* kt_xOrBinEq;
	PARSER_Array* parser_array;
	PARSER_Field* parser_field;
	PARSER_ForControl* parser_forControl;
	PARSER_MemberDec* parser_memberDec;

	vector<KT_MethodOrVarCall*>* vectorKT_MethodOrVarCall;
	vector<string*>* vectorString;
	vector<vector<string*>>* vectorVecorString;
	vector<KT_ParamsMethodCall*>* vectorKT_ParamsMethodCall;
	vector<KT_Param*>* vectorKT_Param;
	vector<KT_Prototype*>* vectorKT_Prototype;
	vector<PARSER_MemberDec*>* vectorPARSER_MemberDec;
	vector<KT_Statement*>* vectorKT_Statement;
	vector<KT_FactFinal*>* vectorKT_FactFinal;

#line 323 "kawa.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 338 "kawa.cpp" /* yacc.c:358  */

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
#define YYLAST   817

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  220
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  454

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
       0,   233,   233,   234,   236,   240,   241,   244,   245,   248,
     251,   252,   255,   256,   259,   260,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   275,   276,   277,   278,   279,
     280,   283,   284,   287,   288,   291,   292,   293,   297,   298,
     301,   302,   306,   307,   311,   312,   317,   320,   324,   325,
     326,   329,   330,   331,   332,   336,   338,   339,   342,   343,
     348,   349,   352,   355,   356,   360,   361,   364,   367,   368,
     370,   371,   374,   377,   378,   381,   382,   385,   386,   389,
     390,   393,   397,   400,   401,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   422,   424,   425,   427,   428,   431,   433,   434,   435,
     438,   440,   441,   442,   445,   447,   448,   449,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   468,   469,   472,   473,   477,   478,   479,   480,   481,
     482,   483,   484,   487,   488,   489,   490,   494,   495,   498,
     499,   500,   505,   508,   509,   510,   514,   515,   516,   517,
     518,   519,   522,   523,   526,   527,   530,   531,   534,   535,
     538,   539,   542,   543,   544,   547,   548,   549,   550,   551,
     554,   555,   556,   557,   560,   561,   562,   565,   566,   567,
     568,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     582,   583,   584,   585,   586,   587,   588,   589,   590,   591,
     594,   597,   600,   602,   605,   606,   607,   608,   611,   612,
     613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTIER", "REEL", "TSTRING", "TSHORT",
  "TINT", "TLONG", "TFLOAT", "TDOUBLE", "TBYTE", "TCHAR", "TBOOLEAN",
  "TVOID", "STRING", "TIMPORT", "TPACKAGE", "TPUBLIC", "TPRIVATE",
  "TPROTECTED", "TFINAL", "TABSTRACT", "TSTATIC", "TVALUE", "ID", "TCLASS",
  "TINTERFACE", "TEXTENDS", "TIMPLEMENTS", "TSUPER", "TTHIS", "TIF",
  "TELSE", "TFALSE", "TTRUE", "TSWITCH", "TCASE", "TCONTINUE", "TBREAK",
  "TDEFAULT", "TFOR", "TWHILE", "TDO", "TNEW", "TNULL", "TRETURN",
  "TPRINT", "TPRINTI", "TPRINTF", "TPRINTS", "TPLUSEQ", "TMINUSEQ",
  "TMULEQ", "TDIVEQ", "TMODEQ", "TINC", "TDEC", "TCEQ", "TCNE", "TCLE",
  "TCGE", "TOR", "TAND", "TANDBINEQ", "TORBINEQ", "TXORBINEQ", "TDECAL",
  "TDECAR", "TDECALNS", "THEN", "TDECALNSEQ", "TDECAREQ", "TDECALEQ",
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
  "VariableDeclaratorId", "Block", "Statements", "Statement", "Print",
  "Args", "ArgsRest", "PrintF", "ArgsF", "PrintI", "ArgsI", "PrintS",
  "ArgsS", "BlockStatement", "SwitchBlockStatements",
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

#define YYPACT_NINF -385

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-385)))

#define YYTABLE_NINF -62

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,    18,    59,    57,    -9,  -385,    98,  -385,  -385,  -385,
      75,   283,    42,  -385,  -385,  -385,  -385,  -385,  -385,    87,
     112,  -385,  -385,  -385,    -4,    54,   128,   151,    42,  -385,
      57,   219,   152,   162,    88,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,   100,  -385,    96,   162,
     104,   100,  -385,  -385,  -385,   184,    96,   120,  -385,  -385,
    -385,  -385,   131,   138,   100,  -385,    96,   146,   223,  -385,
    -385,   404,  -385,  -385,  -385,  -385,   739,  -385,   100,   233,
     247,   248,   -20,   251,   131,   183,   183,   183,   185,   187,
    -385,   -43,  -385,   195,   196,   187,  -385,   189,   771,  -385,
    -385,   606,   215,   187,  -385,  -385,  -385,  -385,  -385,  -385,
     263,  -385,   351,  -385,  -385,  -385,   110,   220,  -385,  -385,
     510,  -385,   287,   288,   606,   606,   606,   606,   606,  -385,
     213,   254,   257,   241,   244,   246,   137,   158,   -17,   123,
     156,  -385,  -385,  -385,   231,  -385,  -385,   301,   238,  -385,
      96,   237,   792,    78,   234,   239,   235,   240,    -2,    21,
     242,   243,   174,   218,   245,   249,   250,   252,  -385,  -385,
      96,  -385,  -385,  -385,  -385,  -385,  -385,  -385,   255,  -385,
    -385,   309,   499,  -385,  -385,  -385,   311,   100,   259,  -385,
    -385,  -385,  -385,   267,  -385,  -385,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,  -385,   270,   215,  -385,  -385,  -385,  -385,
      77,    96,   316,    12,   301,   276,   277,   343,   606,   606,
     279,  -385,   280,  -385,    84,   606,   329,  -385,   284,    41,
      33,    36,    49,   301,  -385,    67,   231,    97,   275,   285,
      67,   231,   -14,   372,  -385,   254,   254,   254,   254,   254,
     254,   254,   254,   257,   241,   244,   246,   137,   158,   158,
     123,   123,   123,   123,   123,   123,   123,   156,   156,  -385,
    -385,  -385,  -385,  -385,  -385,   353,   301,   301,    17,   290,
     215,   606,  -385,   -44,   281,   293,  -385,  -385,   100,   533,
     263,   304,   298,   305,   307,  -385,    67,   308,   324,  -385,
    -385,   321,  -385,  -385,   322,  -385,  -385,   323,   215,  -385,
    -385,   425,  -385,   639,  -385,  -385,  -385,   427,  -385,   337,
     100,   215,   215,   409,    96,   342,   346,   347,   435,   365,
     174,   345,    69,   641,   352,   -35,   174,   538,   174,   606,
     354,    41,  -385,   355,   359,   360,   374,   349,  -385,   373,
    -385,    96,   376,   378,     8,   301,  -385,  -385,  -385,   606,
     436,  -385,   606,  -385,    89,  -385,   380,   641,   606,  -385,
    -385,   641,   383,  -385,   379,  -385,   324,  -385,  -385,  -385,
    -385,   342,  -385,   301,  -385,  -385,   215,   384,   174,   -18,
     215,   342,   674,  -385,  -385,   215,  -385,   641,   386,  -385,
     285,   215,   388,  -385,  -385,   606,   371,  -385,  -385,  -385,
     413,    89,   380,  -385,  -385,  -385,  -385,   389,  -385,   391,
    -385,   606,   342,  -385,  -385,  -385,   450,   380,   430,   450,
    -385,   606,   380,  -385
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
       0,    73,     0,   201,   202,   203,   220,     0,   208,   207,
       0,   209,     0,     0,     0,     0,     0,     0,     0,    63,
     152,   161,   163,   165,   167,   169,   171,   174,   179,   183,
     186,   190,   199,   204,   220,   205,   206,     0,     0,    52,
      13,    78,     0,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,    82,
      13,   118,    83,    85,    87,    88,    86,    99,     0,   197,
     195,     0,     0,    69,   211,   215,     0,     6,     0,   198,
     196,   194,   193,     0,   191,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,    64,    61,    51,    81,    74,    72,
      13,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   126,     0,     0,     0,   130,     0,   103,
     113,   109,   117,     0,    97,   220,   220,   220,     0,    80,
     220,   220,     0,     0,   200,   160,   159,   158,   157,   156,
     155,   153,   154,   162,   164,   166,   168,   170,   173,   172,
     177,   175,   176,   178,   182,   181,   180,   184,   185,   189,
     187,   188,    62,    60,    77,     0,     0,     0,   220,     0,
      61,     0,    98,   220,     0,     0,   127,   125,     6,     0,
       0,     0,     0,     0,     0,   129,   220,     0,   105,   111,
     112,     0,   107,   108,     0,   115,   116,     0,    61,   218,
     219,     0,    68,     0,    71,   214,   216,     0,   210,     0,
       6,    61,    61,     0,    13,    15,     0,     0,     0,     0,
       0,     0,    13,   141,     0,    61,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,     0,    79,     0,
     212,    13,     0,     0,   220,     0,    14,    92,    95,     0,
     119,   132,     0,   145,   220,   142,   151,   139,     0,   143,
     124,   137,     0,   122,     0,   101,   105,   110,   106,   114,
      93,    15,   213,     0,    91,    94,    61,     0,     0,     0,
      61,    15,     0,   147,   140,    61,   138,   135,     0,   104,
      80,    61,     0,    96,   120,     0,     0,   121,   131,   146,
       0,   220,   151,   144,   136,   123,    70,     0,    90,     0,
      84,     0,    15,   149,    89,    84,   134,   151,     0,   133,
     148,     0,   151,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -385,  -385,  -385,   -51,   399,   452,   -66,   -46,  -285,  -111,
    -385,    35,  -385,   477,  -385,  -385,  -385,   478,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -213,  -227,   286,    64,
     169,  -137,   176,   297,  -385,  -385,  -385,    91,   202,    24,
    -268,  -385,  -385,  -385,   117,  -385,  -385,  -385,  -385,  -385,
    -385,  -158,  -385,  -385,  -385,  -385,  -362,  -384,   -98,  -385,
     405,   325,   333,   320,   332,   319,    61,  -385,    80,    27,
     -90,  -241,  -385,  -170,  -385,  -385,  -138
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    56,    69,    52,    47,    65,   235,    48,
      21,    11,    10,    25,    32,    34,    50,     7,    22,    23,
      61,    67,    77,    54,    63,    72,   148,   225,   102,    89,
     183,   184,   258,    97,    98,   111,   229,   334,   151,   171,
     112,   172,   173,   317,   362,   174,   324,   175,   321,   176,
     327,   177,   409,   428,   311,   312,   385,   413,   386,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   185
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   170,    58,   129,   246,    80,   223,   300,   318,   188,
      83,   256,   293,    73,   178,   299,   261,   236,   349,   425,
      74,    28,   426,   240,     1,   414,   328,    84,   193,   416,
     -15,   101,   110,    -6,   191,   192,   319,   194,   195,   388,
     322,   231,    -6,     4,   113,   114,   242,   181,   443,   348,
     215,   216,   217,   182,    88,   434,   115,   147,   320,     5,
     376,   323,   256,   450,   325,   248,   316,   261,   453,   341,
     342,    55,   117,     6,   326,   118,   119,    88,   427,   337,
      29,     8,    -6,   182,   259,   120,   121,   346,   241,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    71,   343,
      12,    -6,    76,   -13,   227,   182,    66,   234,   343,   308,
      -6,   243,    26,   100,   182,   366,   420,   329,   330,   106,
     396,     9,   335,   336,   253,   338,   430,   149,   372,   373,
     289,   290,   291,    24,   179,   180,   262,    27,   126,   383,
     304,   305,   389,   382,    30,   179,   180,   313,   406,    93,
      94,    95,   -15,   179,   180,   103,    31,   448,   181,   -61,
     329,   147,    57,    -6,   182,   335,   179,   180,   295,   232,
      57,   233,   446,   256,   309,   182,   421,   449,   310,    33,
     343,    49,    -6,    53,   296,   297,   182,    51,   181,    57,
     331,    55,   380,   422,   182,   209,   210,   429,   390,    60,
     393,   181,   433,   347,   218,   219,   156,   182,   437,    64,
     157,   354,   158,   159,    66,   160,   161,   162,   211,   212,
     163,   113,   114,    68,    37,    38,    39,    40,    41,    42,
      43,    44,    45,   115,    70,   259,   329,   213,   214,   220,
     221,   222,    75,   116,    46,   287,   288,   344,    78,   117,
     424,    90,   118,   119,    90,    90,    90,   352,    85,   392,
      90,   394,   120,   121,   196,   197,   198,   199,   200,    99,
     278,   279,    86,    87,   122,   123,    91,   201,   202,   203,
      88,   407,    99,    96,   410,   104,   105,   107,   150,   371,
     415,   280,   281,   282,   283,   284,   285,   286,   375,   124,
     125,    13,    14,    15,    16,    17,    18,   147,   247,    19,
      20,   186,   189,   190,   432,   126,   204,   206,   127,   128,
     205,   207,   181,    73,   208,   403,   224,   439,   226,   228,
     237,   182,   238,   411,   255,   170,   260,   239,   170,   244,
     245,   298,   249,   447,   101,   254,   250,   251,   178,   252,
     301,   178,   263,   452,   113,   114,    37,    38,    39,    40,
      41,    42,    43,    44,    45,   264,   115,   302,   303,   306,
     307,   314,   152,   332,   315,   339,   153,   333,   340,   350,
     442,   154,   155,   156,   345,   118,   119,   157,   357,   158,
     159,   351,   160,   161,   162,   120,   121,   163,   164,   165,
     166,   167,   356,   358,   359,   361,   360,   122,   123,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    79,   363,
     364,   365,    13,    14,    15,    16,    17,    18,   367,    46,
     369,   370,   124,   125,   374,   348,   377,   378,   299,   379,
     381,   168,   387,   401,   395,   397,    99,   169,   126,   398,
     399,   127,   128,   113,   114,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   400,   115,   404,   402,   405,   408,
     440,   152,   412,   417,   423,   153,   435,   418,   438,   444,
     154,   155,   156,    92,   118,   119,   157,   441,   158,   159,
     445,   160,   161,   162,   120,   121,   163,   164,   165,   166,
     167,    59,   113,   114,   451,    35,   122,   123,    36,   368,
     292,   436,   355,   419,   115,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   257,   294,   275,   277,     0,   273,
     117,   124,   125,   118,   119,   187,   113,   114,   274,   276,
     168,   113,   114,   120,   121,    99,     0,   126,   115,     0,
     127,   128,     0,   115,     0,   122,   123,     0,   116,     0,
       0,     0,     0,   116,   117,     0,     0,   118,   119,   117,
       0,     0,   118,   119,     0,     0,     0,   120,   121,     0,
     124,   125,   120,   121,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,   122,   123,   126,    96,     0,   127,
     128,   265,   266,   267,   268,   269,   270,   271,   272,   113,
     114,     0,     0,     0,   124,   125,     0,     0,     0,   124,
     125,   115,     0,   353,     0,     0,     0,     0,   391,     0,
     126,   116,     0,   127,   128,   126,     0,   117,   127,   128,
     118,   119,   113,   114,   113,   114,     0,     0,     0,     0,
     120,   121,     0,     0,   115,     0,   115,     0,     0,     0,
       0,     0,   122,   123,   257,     0,   384,     0,     0,     0,
     117,     0,   117,   118,   119,   118,   119,   113,   114,     0,
       0,     0,     0,   120,   121,   120,   121,   124,   125,   115,
       0,     0,     0,     0,     0,   122,   123,   122,   123,   431,
       0,     0,     0,   126,     0,   117,   127,   128,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,   120,   121,
     124,   125,   124,   125,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,     0,     0,   126,     0,   126,   127,
     128,   127,   128,     0,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    81,     0,   124,   125,    13,    14,    15,
      16,    17,    18,     0,    82,     0,     0,     0,     0,     0,
       0,   126,     0,     0,   127,   128,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,   109,    46,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230
};

static const yytype_int16 yycheck[] =
{
      51,   112,    48,   101,   162,    71,   144,   234,   249,   120,
      76,   181,   225,    64,   112,     3,   186,   154,   303,    37,
      66,    25,    40,    25,    17,   387,   253,    78,   126,   391,
      74,    74,    98,    25,   124,   125,     3,   127,   128,    74,
       4,   152,    25,    25,     3,     4,    25,    91,   432,    93,
      67,    68,    69,    97,    97,   417,    15,    92,    25,     0,
     345,    25,   232,   447,    15,   163,    25,   237,   452,   296,
     297,    91,    31,    16,    25,    34,    35,    97,    96,    93,
      84,    90,    74,    97,   182,    44,    45,   300,    90,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    63,    91,
      25,    93,    67,    25,   150,    97,    94,   153,    91,    25,
      93,    90,    25,    89,    97,   328,   401,   255,   256,    95,
     361,    23,   260,   261,   170,   262,   411,   103,   341,   342,
     220,   221,   222,    91,    56,    57,   187,    25,    97,   352,
     238,   239,   355,    74,    90,    56,    57,   245,   375,    85,
      86,    87,    74,    56,    57,    91,    28,   442,    91,    90,
     298,    92,    93,    74,    97,   303,    56,    57,    91,    91,
      93,    93,   440,   343,    90,    97,   403,   445,   244,    28,
      91,    29,    93,    95,   230,   231,    97,    25,    91,    93,
      93,    91,   350,   406,    97,    58,    59,   410,   356,    95,
     358,    91,   415,   301,    81,    82,    32,    97,   421,    25,
      36,   309,    38,    39,    94,    41,    42,    43,    60,    61,
      46,     3,     4,    92,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    15,    96,   333,   374,    79,    80,    83,
      84,    85,    96,    25,    25,   218,   219,   298,    25,    31,
     408,    82,    34,    35,    85,    86,    87,   308,    25,   357,
      91,   359,    44,    45,    51,    52,    53,    54,    55,    95,
     209,   210,    25,    25,    56,    57,    25,    64,    65,    66,
      97,   379,    95,    98,   382,    90,    90,    98,    25,   340,
     388,   211,   212,   213,   214,   215,   216,   217,   344,    81,
      82,    18,    19,    20,    21,    22,    23,    92,    90,    26,
      27,    91,    25,    25,   412,    97,    62,    76,   100,   101,
      63,    77,    91,   374,    78,   371,    25,   425,    90,    92,
      91,    97,    97,   384,    25,   446,    25,    97,   449,    97,
      97,    25,    97,   441,    74,    90,    97,    97,   446,    97,
      74,   449,    93,   451,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    98,    15,    90,    25,    90,
      90,    42,    21,    98,    90,     3,    25,    92,    25,    98,
     431,    30,    31,    32,    94,    34,    35,    36,    90,    38,
      39,    98,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    98,    98,    97,    81,    98,    56,    57,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    98,
      98,    98,    18,    19,    20,    21,    22,    23,     3,    25,
       3,    94,    81,    82,    25,    93,    90,    90,     3,    74,
      95,    90,    90,    94,    90,    90,    95,    96,    97,    90,
      90,   100,   101,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    90,    15,    90,    94,    90,    33,
      99,    21,    92,    90,    90,    25,    90,    98,    90,    90,
      30,    31,    32,    84,    34,    35,    36,    74,    38,    39,
      99,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    49,     3,     4,    74,    28,    56,    57,    30,   333,
     224,   420,   310,   396,    15,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    25,   228,   206,   208,    -1,   204,
      31,    81,    82,    34,    35,    25,     3,     4,   205,   207,
      90,     3,     4,    44,    45,    95,    -1,    97,    15,    -1,
     100,   101,    -1,    15,    -1,    56,    57,    -1,    25,    -1,
      -1,    -1,    -1,    25,    31,    -1,    -1,    34,    35,    31,
      -1,    -1,    34,    35,    -1,    -1,    -1,    44,    45,    -1,
      81,    82,    44,    45,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    56,    57,    97,    98,    -1,   100,
     101,   196,   197,   198,   199,   200,   201,   202,   203,     3,
       4,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    81,
      82,    15,    -1,    90,    -1,    -1,    -1,    -1,    90,    -1,
      97,    25,    -1,   100,   101,    97,    -1,    31,   100,   101,
      34,    35,     3,     4,     3,     4,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    15,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    56,    57,    25,    -1,    25,    -1,    -1,    -1,
      31,    -1,    31,    34,    35,    34,    35,     3,     4,    -1,
      -1,    -1,    -1,    44,    45,    44,    45,    81,    82,    15,
      -1,    -1,    -1,    -1,    -1,    56,    57,    56,    57,    25,
      -1,    -1,    -1,    97,    -1,    31,   100,   101,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      81,    82,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    97,    -1,    97,   100,
     101,   100,   101,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    81,    82,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,   100,   101,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    24,    25,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,   103,   104,    25,     0,    16,   119,    90,    23,
     114,   113,    25,    18,    19,    20,    21,    22,    23,    26,
      27,   112,   120,   121,    91,   115,    25,    25,    25,    84,
      90,    28,   116,    28,   117,   115,   119,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    25,   108,   111,    29,
     118,    25,   107,    95,   125,    91,   105,    93,   109,   107,
      95,   122,   105,   126,    25,   109,    94,   123,    92,   106,
      96,   113,   127,   105,   109,    96,   113,   124,    25,    14,
     108,    14,    25,   108,   105,    25,    25,    25,    97,   131,
     132,    25,   106,   131,   131,   131,    98,   135,   136,    95,
     141,    74,   130,   131,    90,    90,   141,    98,    21,    24,
     108,   137,   142,     3,     4,    15,    25,    31,    34,    35,
      44,    45,    56,    57,    81,    82,    97,   100,   101,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,    92,   128,   141,
      25,   140,    21,    25,    30,    31,    32,    36,    38,    39,
      41,    42,    43,    46,    47,    48,    49,    50,    90,    96,
     111,   141,   143,   144,   147,   149,   151,   153,   160,    56,
      57,    91,    97,   132,   133,   178,    91,    25,   111,    25,
      25,   172,   172,   160,   172,   172,    51,    52,    53,    54,
      55,    64,    65,    66,    62,    63,    76,    77,    78,    58,
      59,    60,    61,    79,    80,    67,    68,    69,    81,    82,
      83,    84,    85,   178,    25,   129,    90,   109,    92,   138,
      25,   111,    91,    93,   109,   110,   133,    91,    97,    97,
      25,    90,    25,    90,    97,    97,   153,    90,   160,    97,
      97,    97,    97,   109,    90,    25,   175,    25,   134,   160,
      25,   175,   105,    93,    98,   162,   162,   162,   162,   162,
     162,   162,   162,   163,   164,   165,   166,   167,   168,   168,
     170,   170,   170,   170,   170,   170,   170,   171,   171,   172,
     172,   172,   130,   128,   135,    91,   109,   109,    25,     3,
     129,    74,    90,    25,   160,   160,    90,    90,    25,    90,
     108,   156,   157,   160,    42,    90,    25,   145,   173,     3,
      25,   150,     4,    25,   148,    15,    25,   152,   129,   178,
     178,    93,    98,    92,   139,   178,   178,    93,   133,     3,
      25,   129,   129,    91,   105,    94,   128,   160,    93,   110,
      98,    98,   105,    90,   160,   140,    98,    90,    98,    97,
      98,    81,   146,    98,    98,    98,   128,     3,   134,     3,
      94,   105,   128,   128,    25,   109,   110,    90,    90,    74,
     153,    95,    74,   128,    25,   158,   160,    90,    74,   128,
     153,    90,   160,   153,   160,    90,   173,    90,    90,    90,
      90,    94,    94,   109,    90,    90,   129,   160,    33,   154,
     160,   105,    92,   159,   158,   160,   158,    90,    98,   146,
     110,   129,   128,    90,   153,    37,    40,    96,   155,   128,
     110,    25,   160,   128,   158,    90,   139,   128,    90,   160,
      99,    74,   105,   159,    90,    99,   142,   160,   110,   142,
     159,    74,   160,   159
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
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   167,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   170,   170,   170,   171,   171,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     174,   175,   176,   176,   177,   177,   177,   177,   178,   178,
     178
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
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     5,     6,     4,     2,     4,     2,     3,     3,
       0
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
#line 233 "kawa.y" /* yacc.c:1646  */
    { (yyval.kt_program)= new KT_Program; (yyvsp[0].kt_class)->setModifier((yyvsp[-1].kt_modifier)); (yyvsp[0].kt_class)->setImports(*(yyvsp[-2].vectorVecorString)); (yyval.kt_program)->addPackageWithClass((yyvsp[-3].kt_package), (yyvsp[0].kt_class));}
#line 1830 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 234 "kawa.y" /* yacc.c:1646  */
    { (yyval.kt_program)= new KT_Program; (yyvsp[0].kt_interface)->setModifier((yyvsp[-1].kt_modifier)); (yyvsp[0].kt_interface)->setImports(*(yyvsp[-2].vectorVecorString));(yyval.kt_program)->addPackageWithInterface((yyvsp[-3].kt_package), (yyvsp[0].kt_interface));}
#line 1836 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 236 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_package)= new KT_Package; (yyval.kt_package)->setName((yyvsp[-1].vstring));}
#line 1842 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 240 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorString)->push_back((yyvsp[-1].vstring)); (yyval.vectorString)=(yyvsp[0].vectorString);}
#line 1848 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 241 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 1854 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 244 "kawa.y" /* yacc.c:1646  */
    {string* name=(yyvsp[-2].vstring); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); listName.push_back(n);} (yyval.vectorString)=&listName;}
#line 1860 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 245 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 1866 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 248 "kawa.y" /* yacc.c:1646  */
    {string* name=(yyvsp[-2].vstring); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); listName.push_back(n);} (yyval.vectorString)=&listName; }
#line 1872 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 251 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_type)=new KT_Type; (yyval.kt_type)->setBasicType(true); (yyval.kt_type)->setArray((yyvsp[0].parser_array)); vector<string*> name; name.push_back((yyvsp[-1].vstring)); (yyval.kt_type)->setTypeName(name); }
#line 1878 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 252 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_type)=new KT_Type; (yyval.kt_type)->setBasicType(false); (yyval.kt_type)->setArray((yyvsp[0].parser_array)); vector<string*> name; name.push_back((yyvsp[-2].vstring)); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} (yyval.kt_type)->setTypeName(name);}
#line 1884 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 255 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].parser_array)->setArray(true); (yyval.parser_array)->setArrayDim((yyval.parser_array)->getArrayDim()+1);}
#line 1890 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 256 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_array)=new PARSER_Array; (yyval.parser_array)->setArray(false); (yyval.parser_array)->setArrayDim(0);}
#line 1896 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].kt_indexedArray)->setIndexAddIntAtFirstPosition((yyvsp[-2].vint)); (yyval.kt_indexedArray)=(yyvsp[0].kt_indexedArray);}
#line 1902 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 260 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* var; (yyval.kt_indexedArray)=var;}
#line 1908 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 263 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1914 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 264 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1920 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 265 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1926 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 266 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1932 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1938 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1944 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1950 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 270 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1956 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 271 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1962 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 275 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(1);}
#line 1968 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 276 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(2);}
#line 1974 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 277 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(3);}
#line 1980 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 278 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setStatic(true);}
#line 1986 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 279 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setAbstract(true);}
#line 1992 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 280 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setFinal(true);}
#line 1998 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 283 "kawa.y" /* yacc.c:1646  */
    {if((yyvsp[0].kt_modifier)->isStatic()){(yyvsp[-1].kt_modifier)->setStatic(true);} if((yyvsp[0].kt_modifier)->isAbstract()){(yyvsp[-1].kt_modifier)->setAbstract(true);} if((yyvsp[0].kt_modifier)->isFinal()){(yyvsp[-1].kt_modifier)->setFinal(true);} if((yyvsp[0].kt_modifier)->getVisibility()>0) (yyvsp[-1].kt_modifier)->setVisibility((yyvsp[0].kt_modifier)->getVisibility());}
#line 2004 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 284 "kawa.y" /* yacc.c:1646  */
    {KT_Modifier* modifier; (yyval.kt_modifier)=modifier;}
#line 2010 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 287 "kawa.y" /* yacc.c:1646  */
    {(yyval.vbool)=true;}
#line 2016 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 288 "kawa.y" /* yacc.c:1646  */
    {(yyval.vbool)=false;}
#line 2022 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 291 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-1].vstring)); for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} (yyval.vectorString)=&name;}
#line 2028 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 292 "kawa.y" /* yacc.c:1646  */
    {string name="*"; (yyval.vectorString)->push_back(&name);}
#line 2034 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 293 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 2040 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 297 "kawa.y" /* yacc.c:1646  */
    {vector<string*> typeName =(yyvsp[0].kt_type)->getTypeName(); string* name=new string; for (vector<string*>::iterator it = typeName.begin(); it != typeName.end(); ++it){ string* n = (*it); if(it!=typeName.begin()){*name = *name + "." +*n;}else{name=n;}}  (yyval.vstring)=name;}
#line 2046 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 298 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=new string;}
#line 2052 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 301 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorString)=(yyvsp[0].vectorString);}
#line 2058 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 302 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 2064 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 306 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorString)=(yyvsp[0].vectorString);}
#line 2070 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 307 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 2076 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 311 "kawa.y" /* yacc.c:1646  */
    {vector<string*> importvar; if((yyvsp[-4].vbool)==true){string* s=new string("static"); importvar.push_back(s);} importvar.push_back((yyvsp[-3].vstring)); for (vector<string*>::iterator it = (yyvsp[-2].vectorString)->begin(); it != (yyvsp[-2].vectorString)->end(); ++it){ string* n = (*it); importvar.push_back(n);} (yyvsp[0].vectorVecorString)->push_back(importvar); (yyval.vectorVecorString)=(yyvsp[0].vectorVecorString); }
#line 2082 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 312 "kawa.y" /* yacc.c:1646  */
    {vector<vector<string*>>* var; (yyval.vectorVecorString)=var; }
#line 2088 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 317 "kawa.y" /* yacc.c:1646  */
    { (yyval.kt_class)=new KT_Class; (yyval.kt_class)->setName((yyvsp[-3].vstring)); (yyval.kt_class)->setParentClass((yyvsp[-2].vstring)); (yyval.kt_class)->setParentInterfaces(*(yyvsp[-1].vectorString)); (yyval.kt_class)->setMemberDec(*(yyvsp[0].vectorPARSER_MemberDec));}
#line 2094 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 320 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_interface)=new KT_Interface; (yyval.kt_interface)->setName((yyvsp[-2].vstring)); (yyval.kt_interface)->setInterfacesparent(*(yyvsp[-1].vectorString)); (yyval.kt_interface)->setPrototypes(*(yyvsp[0].vectorKT_Prototype));}
#line 2100 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 324 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorPARSER_MemberDec)=(yyvsp[-1].vectorPARSER_MemberDec);}
#line 2106 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 325 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorPARSER_MemberDec)->push_back((yyvsp[0].parser_memberDec)); (yyval.vectorPARSER_MemberDec)=(yyvsp[-1].vectorPARSER_MemberDec);}
#line 2112 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 326 "kawa.y" /* yacc.c:1646  */
    {vector<PARSER_MemberDec*>* var; (yyval.vectorPARSER_MemberDec)=var;}
#line 2118 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 329 "kawa.y" /* yacc.c:1646  */
    {/*PARSER_MemeberDec*/(yyval.parser_memberDec)=new PARSER_MemberDec;}
#line 2124 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 330 "kawa.y" /* yacc.c:1646  */
    {KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName((yyvsp[-2].vstring)); methode->setModifier((yyvsp[-4].kt_modifier)) ; methode->setParams(*(yyvsp[-1].vectorKT_Param)); methode->setType((yyvsp[-3].kt_type)); methode->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=methode;}
#line 2130 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 331 "kawa.y" /* yacc.c:1646  */
    {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName((yyvsp[-2].vstring)); methode->setModifier((yyvsp[-4].kt_modifier)) ; methode->setParams(*(yyvsp[-1].vectorKT_Param)); methode->setType(type); methode->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=methode;}
#line 2136 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 332 "kawa.y" /* yacc.c:1646  */
    {KT_Constructor* constructor =new KT_Constructor; constructor->setIndexParser(1); constructor->setName((yyvsp[-2].vstring)); constructor->setModifier((yyvsp[-3].kt_modifier)) ; constructor->setParams(*(yyvsp[-1].vectorKT_Param)) ; constructor->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=constructor;}
#line 2142 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 336 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Prototype)=(yyvsp[-1].vectorKT_Prototype);}
#line 2148 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 338 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_Prototype)->push_back((yyvsp[0].kt_prototype)); (yyval.vectorKT_Prototype)=(yyvsp[-1].vectorKT_Prototype);}
#line 2154 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 339 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Prototype*>* var; (yyval.vectorKT_Prototype)=var;}
#line 2160 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 342 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_prototype) = new KT_Prototype; (yyval.kt_prototype)->setName((yyvsp[-2].vstring)); (yyval.kt_prototype)->setReturnType((yyvsp[-3].kt_type)); (yyval.kt_prototype)->setModifier((yyvsp[-4].kt_modifier)); (yyval.kt_prototype)->setParams(*(yyvsp[-1].vectorKT_Param));}
#line 2166 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 343 "kawa.y" /* yacc.c:1646  */
    {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); (yyval.kt_prototype) = new KT_Prototype; (yyval.kt_prototype)->setName((yyvsp[-2].vstring)); (yyval.kt_prototype)->setReturnType(type); (yyval.kt_prototype)->setModifier((yyvsp[-4].kt_modifier)); (yyval.kt_prototype)->setParams(*(yyvsp[-1].vectorKT_Param));}
#line 2172 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 348 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2178 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 349 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=0;}
#line 2184 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 352 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_variable)=new KT_Variable; vector<string*> name; name.push_back((yyvsp[-1].vstring)); (yyval.kt_variable)->setName(name); (yyval.kt_variable)->setValue((yyvsp[0].kt_expression));}
#line 2190 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 355 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2196 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 356 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=new KT_Expression;}
#line 2202 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 360 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Param)=(yyvsp[-1].vectorKT_Param);}
#line 2208 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 361 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Param*>* vect; (yyval.vectorKT_Param)=vect;}
#line 2214 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 364 "kawa.y" /* yacc.c:1646  */
    {vector<KT_ParamsMethodCall*>* vect; (yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2220 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 367 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[-1].vectorKT_ParamsMethodCall);}
#line 2226 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 368 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[0].vectorKT_ParamsMethodCall);}
#line 2232 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 370 "kawa.y" /* yacc.c:1646  */
    {KT_ID* id = new KT_ID; vector<string*> name; name.push_back((yyvsp[-5].vstring)); id->setValue(name); (yyvsp[-1].kt_indexedArray)->setIndexAddIntAtFirstPosition((yyvsp[-3].vint)); KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setIndexedArray((yyvsp[-1].kt_indexedArray)); param->setExpression(id); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = (yyvsp[0].vectorKT_ParamsMethodCall)->begin(); it != (yyvsp[0].vectorKT_ParamsMethodCall)->end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} (yyval.vectorKT_ParamsMethodCall)=&vect;}
#line 2238 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 371 "kawa.y" /* yacc.c:1646  */
    {KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setExpression((yyvsp[-1].kt_expression)); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = (yyvsp[0].vectorKT_ParamsMethodCall)->begin(); it != (yyvsp[0].vectorKT_ParamsMethodCall)->end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} (yyval.vectorKT_ParamsMethodCall)=&vect;}
#line 2244 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 374 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-2].kt_type)->setArrayDim((yyvsp[-1].kt_param)->getParamType()->getArrayDim()); (yyvsp[-1].kt_param)->setParamType((yyvsp[-2].kt_type)); (yyvsp[-1].kt_param)->setParamModifier((yyvsp[-3].kt_modifier)); vector<KT_Param*> vect; vect.push_back((yyvsp[-1].kt_param)); for (vector<KT_Param*>::iterator it = (yyvsp[0].vectorKT_Param)->begin(); it != (yyvsp[0].vectorKT_Param)->end(); ++it){ KT_Param* n = (*it); vect.push_back(n);} (yyval.vectorKT_Param)=&vect;}
#line 2250 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 377 "kawa.y" /* yacc.c:1646  */
    {if((yyvsp[0].kt_modifier)->isStatic()){(yyvsp[-1].kt_modifier)->setStatic(true);} if((yyvsp[0].kt_modifier)->isAbstract()){(yyvsp[-1].kt_modifier)->setAbstract(true);} if((yyvsp[0].kt_modifier)->isFinal()){(yyvsp[-1].kt_modifier)->setFinal(true);} if((yyvsp[0].kt_modifier)->getVisibility()>0) (yyvsp[-1].kt_modifier)->setVisibility((yyvsp[0].kt_modifier)->getVisibility());}
#line 2256 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 378 "kawa.y" /* yacc.c:1646  */
    {KT_Modifier* modifier; (yyval.kt_modifier)=modifier;}
#line 2262 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 381 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setFinal(true);}
#line 2268 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 382 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier;}
#line 2274 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 385 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Param)=(yyvsp[0].vectorKT_Param);}
#line 2280 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 386 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Param*>* vect; (yyval.vectorKT_Param)=vect;}
#line 2286 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 389 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[0].vectorKT_ParamsMethodCall);}
#line 2292 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 390 "kawa.y" /* yacc.c:1646  */
    {vector<KT_ParamsMethodCall*>* vect; (yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2298 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 393 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_param)=new KT_Param; (yyval.kt_param)->setName((yyvsp[-1].vstring)); KT_Type* type= new KT_Type; type->setArray((yyvsp[0].parser_array)); (yyval.kt_param)->setParamType(type); }
#line 2304 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 397 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_block)=new KT_Block; (yyval.kt_block)->setStatements(*(yyvsp[-1].vectorKT_Statement));}
#line 2310 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 400 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_Statement)->push_back((yyvsp[0].kt_statement)); (yyval.vectorKT_Statement)=(yyvsp[-1].vectorKT_Statement);}
#line 2316 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 401 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Statement*>* var; (yyval.vectorKT_Statement)=var;}
#line 2322 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 404 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2328 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 405 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2334 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 406 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2340 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 407 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2346 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 408 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2352 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 409 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2358 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 410 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2364 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 411 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2370 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 412 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2376 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2382 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 414 "kawa.y" /* yacc.c:1646  */
    { KT_ID* id; vector<string*> name; name.push_back((yyvsp[-4].vstring)); id->setValue(name); KT_Affectation* affectation; affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); (yyval.kt_statement)=affectation;}
#line 2388 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 415 "kawa.y" /* yacc.c:1646  */
    {string name = "this"+(*(yyvsp[-4].vstring)); vector<string*> fullname; fullname.push_back(&name); KT_ID* id; id->setValue(fullname); KT_Affectation* affectation; affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); (yyval.kt_statement)=affectation;}
#line 2394 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 416 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[-1].kt_expression);}
#line 2400 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 417 "kawa.y" /* yacc.c:1646  */
    {KT_Super* s = new KT_Super; s->setParams(*(yyvsp[-1].vectorKT_ParamsMethodCall));}
#line 2406 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 418 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_blockStatement);}
#line 2412 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 419 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2418 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 422 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; (yyval.kt_print)->setArgs(*(yyvsp[-2].vectorKT_FactFinal));}
#line 2424 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 424 "kawa.y" /* yacc.c:1646  */
    {KT_FactFinal* factFinal = static_cast<KT_FactFinal*>((yyvsp[-1].kt_expression)); vector<KT_FactFinal*> args; args.push_back(factFinal); for (vector<KT_FactFinal*>::iterator it = (yyvsp[0].vectorKT_FactFinal)->begin(); it != (yyvsp[0].vectorKT_FactFinal)->end(); ++it){ KT_FactFinal* n = (*it); args.push_back(n);} (yyval.vectorKT_FactFinal)=&args;}
#line 2430 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 425 "kawa.y" /* yacc.c:1646  */
    {vector<KT_FactFinal*>* var; (yyval.vectorKT_FactFinal)=var;}
#line 2436 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 427 "kawa.y" /* yacc.c:1646  */
    {KT_FactFinal* factFinal= static_cast<KT_FactFinal*>((yyvsp[-1].kt_expression)); vector<KT_FactFinal*> args; args.push_back(factFinal); for (vector<KT_FactFinal*>::iterator it = (yyvsp[0].vectorKT_FactFinal)->begin(); it != (yyvsp[0].vectorKT_FactFinal)->end(); ++it){ KT_FactFinal* n = (*it); args.push_back(n);} (yyval.vectorKT_FactFinal)=&args;}
#line 2442 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 428 "kawa.y" /* yacc.c:1646  */
    {vector<KT_FactFinal*>* var; (yyval.vectorKT_FactFinal)=var;}
#line 2448 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 431 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2454 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 433 "kawa.y" /* yacc.c:1646  */
    {KT_Reel* reel = new KT_Reel; reel->setValue((yyvsp[0].vfloat)); (yyval.kt_factFinal)=reel;}
#line 2460 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 434 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2466 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 435 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2472 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 438 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2478 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 440 "kawa.y" /* yacc.c:1646  */
    {KT_Entier* entier = new KT_Entier; entier->setValue((yyvsp[0].vint)); (yyval.kt_factFinal)=entier;}
#line 2484 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 441 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2490 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 442 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2496 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 445 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2502 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 447 "kawa.y" /* yacc.c:1646  */
    {KT_String* s = new KT_String; s->setValue((yyvsp[0].vstring)); (yyval.kt_factFinal)=s;}
#line 2508 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 448 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2514 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 449 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2520 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 452 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_blockStatement)=new KT_BlockStatement;}
#line 2526 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 453 "kawa.y" /* yacc.c:1646  */
    {KT_IfStatement* ifstatement; (yyval.kt_blockStatement)=ifstatement;}
#line 2532 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 454 "kawa.y" /* yacc.c:1646  */
    {KT_ifElseStatement* ifelseStatement; (yyval.kt_blockStatement)=ifelseStatement;}
#line 2538 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 455 "kawa.y" /* yacc.c:1646  */
    {KT_SwitchStatement* switchStatement; (yyval.kt_blockStatement)=switchStatement;}
#line 2544 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 456 "kawa.y" /* yacc.c:1646  */
    {KT_WhileStatement* whileStatement; (yyval.kt_blockStatement)=whileStatement;}
#line 2550 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 457 "kawa.y" /* yacc.c:1646  */
    {KT_WhileStatement* whileStatement; (yyval.kt_blockStatement)=whileStatement;}
#line 2556 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 458 "kawa.y" /* yacc.c:1646  */
    {KT_ForStatement* forStatement; (yyval.kt_blockStatement)=forStatement;}
#line 2562 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 459 "kawa.y" /* yacc.c:1646  */
    {KT_BreakStatement* breakStatement; (yyval.kt_blockStatement)=breakStatement;}
#line 2568 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 460 "kawa.y" /* yacc.c:1646  */
    {KT_BreakStatement* breakStatement; (yyval.kt_blockStatement)=breakStatement;}
#line 2574 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 461 "kawa.y" /* yacc.c:1646  */
    {KT_ContinueStatement* continueStatement; (yyval.kt_blockStatement)=continueStatement;}
#line 2580 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 462 "kawa.y" /* yacc.c:1646  */
    {KT_ContinueStatement* continueStatement; (yyval.kt_blockStatement)=continueStatement;}
#line 2586 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 463 "kawa.y" /* yacc.c:1646  */
    {KT_ReturnStatement* returnStatement; (yyval.kt_blockStatement)=returnStatement;}
#line 2592 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 464 "kawa.y" /* yacc.c:1646  */
    {KT_ReturnStatement* returnStatement; (yyval.kt_blockStatement)=returnStatement;}
#line 2598 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 468 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2604 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 469 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2610 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 472 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2616 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 473 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2622 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 477 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2628 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 478 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2634 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 479 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2640 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 480 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2646 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 481 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2652 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 482 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2658 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 483 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2664 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 484 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2670 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 487 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2676 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 488 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2682 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 489 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2688 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 490 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2694 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 494 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2700 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 495 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2706 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 498 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2712 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 499 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2718 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 500 "kawa.y" /* yacc.c:1646  */
    {(yyval.vint)=0;}
#line 2724 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 505 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2730 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 508 "kawa.y" /* yacc.c:1646  */
    {KT_OrBinEq* expression = new KT_OrBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2736 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 509 "kawa.y" /* yacc.c:1646  */
    {KT_XOrBinEq* expression = new KT_XOrBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2742 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 510 "kawa.y" /* yacc.c:1646  */
    {KT_AndBinEq* expression = new KT_AndBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2748 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 514 "kawa.y" /* yacc.c:1646  */
    {KT_ModuloEq* expression = new KT_ModuloEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2754 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 515 "kawa.y" /* yacc.c:1646  */
    {KT_DivisionEq* expression = new KT_DivisionEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2760 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 516 "kawa.y" /* yacc.c:1646  */
    {KT_MultiplicationEq* expression = new KT_MultiplicationEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2766 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 517 "kawa.y" /* yacc.c:1646  */
    {KT_SubstractionEq* expression = new KT_SubstractionEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2772 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 518 "kawa.y" /* yacc.c:1646  */
    {KT_AdditionlEq* expression = new KT_AdditionlEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2778 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 519 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2784 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 522 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOr* expression= new KT_ExpressionOr; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2790 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 523 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2796 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 526 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionAnd* expression =new KT_ExpressionAnd; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2802 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 527 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2808 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 530 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOrLogic* expression= new KT_ExpressionOrLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2814 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 531 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2820 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 534 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOrXLogic* expression= new KT_ExpressionOrXLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2826 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 535 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2832 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 538 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionAndLogic* expression =new KT_ExpressionAndLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2838 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 539 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2844 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 542 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2850 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 543 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2856 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 544 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2862 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 547 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionGE* expression=new KT_ExpressionGE; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2868 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 548 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionGT* expression=new KT_ExpressionGT; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2874 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 549 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionLE* expression=new KT_ExpressionLE; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2880 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 550 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionLT* expression=new KT_ExpressionLT; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2886 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 551 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2892 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 554 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2898 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 555 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2904 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 556 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2910 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 557 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2916 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 560 "kawa.y" /* yacc.c:1646  */
    {KT_Addition* expression=new KT_Addition; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2922 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 561 "kawa.y" /* yacc.c:1646  */
    {KT_Substraction* expression=new KT_Substraction; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2928 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 562 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2934 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 565 "kawa.y" /* yacc.c:1646  */
    {KT_Multiplication* expression=new KT_Multiplication; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2940 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 566 "kawa.y" /* yacc.c:1646  */
    {KT_Division* expression =new KT_Division; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2946 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 567 "kawa.y" /* yacc.c:1646  */
    {KT_Modulo* expression= new KT_Modulo; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2952 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 568 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2958 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 571 "kawa.y" /* yacc.c:1646  */
    {KT_NBinary* expression = new KT_NBinary; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2964 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 572 "kawa.y" /* yacc.c:1646  */
    {KT_Negation* expression= new KT_Negation; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2970 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 573 "kawa.y" /* yacc.c:1646  */
    {KT_Minus* expression= new KT_Minus; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2976 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 574 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2982 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 575 "kawa.y" /* yacc.c:1646  */
    {KT_PostDecrement* expression =new KT_PostDecrement; vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 2988 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 576 "kawa.y" /* yacc.c:1646  */
    {KT_PreDecrement* expression =new KT_PreDecrement; vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 2994 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 577 "kawa.y" /* yacc.c:1646  */
    {KT_PostIncrement* expression =new KT_PostIncrement; vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 3000 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 578 "kawa.y" /* yacc.c:1646  */
    {KT_PreIncrement* expression=new KT_PreIncrement; vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 3006 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 579 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3012 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 582 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)= (yyvsp[-1].kt_expression);}
#line 3018 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 583 "kawa.y" /* yacc.c:1646  */
    {KT_Entier* expression= new KT_Entier; expression->setValue((yyvsp[0].vint)); (yyval.kt_expression)=expression;}
#line 3024 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 584 "kawa.y" /* yacc.c:1646  */
    {KT_Reel* expression = new KT_Reel; expression->setValue((yyvsp[0].vfloat)); (yyval.kt_expression)=expression;}
#line 3030 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 585 "kawa.y" /* yacc.c:1646  */
    {KT_String* expression = new KT_String; expression->setValue((yyvsp[0].vstring)); (yyval.kt_expression)=expression;}
#line 3036 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 586 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3042 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 587 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3048 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 588 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_linkedMethodOrVarCall);}
#line 3054 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 589 "kawa.y" /* yacc.c:1646  */
    {KT_Bool* expression= new KT_Bool; expression->setValue(true); (yyval.kt_expression)=expression; }
#line 3060 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 590 "kawa.y" /* yacc.c:1646  */
    {KT_Bool* expression= new KT_Bool; expression->setValue(false); (yyval.kt_expression)=expression;}
#line 3066 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 591 "kawa.y" /* yacc.c:1646  */
    {KT_Null* expression = new KT_Null; (yyval.kt_expression)=expression;}
#line 3072 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 594 "kawa.y" /* yacc.c:1646  */
    {KT_ConstructorCall* expression =new KT_ConstructorCall; expression->addString((yyvsp[-2].vstring)); expression->addVectorString(*(yyvsp[-1].vectorString)); expression->setParams(*(yyvsp[0].vectorKT_ParamsMethodCall)); (yyval.kt_expression)=expression;}
#line 3078 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 597 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_MethodCall* expression =new KT_MethodCall; expression->setName(name); expression->setParams(*(yyvsp[0].vectorKT_ParamsMethodCall)); (yyval.kt_methodCall)=expression;}
#line 3084 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 600 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back((yyvsp[-1].vint)); KT_Type* type = new KT_Type; type->setBasicType(true); vector<string*> typeName; typeName.push_back((yyvsp[-3].vstring)); type->setTypeName(typeName); type->setArrayDim(0); KT_ArrayInitilizer* expression = new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); (yyval.kt_expression)=expression;}
#line 3090 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 602 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back((yyvsp[-1].vint)); KT_Type* type = new KT_Type; type->setBasicType(false); type->addString((yyvsp[-4].vstring)); type->addVectorString(*(yyvsp[-3].vectorString)); type->setArrayDim(0); KT_ArrayInitilizer* expression =new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); (yyval.kt_expression)=expression;}
#line 3096 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 605 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-3].vstring)); ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3102 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 606 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3108 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 607 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].kt_methodCall)->setNameAddStringAtFirstPosition((yyvsp[-3].vstring));  (yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3114 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 608 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3120 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 611 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); (yyval.vectorKT_MethodOrVarCall)=(yyvsp[0].vectorKT_MethodOrVarCall); }
#line 3126 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 612 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); (yyval.vectorKT_MethodOrVarCall)=(yyvsp[0].vectorKT_MethodOrVarCall);}
#line 3132 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 613 "kawa.y" /* yacc.c:1646  */
    { vector<KT_MethodOrVarCall*>* vect; (yyval.vectorKT_MethodOrVarCall)=vect; }
#line 3138 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3142 "kawa.cpp" /* yacc.c:1646  */
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
#line 617 "kawa.y" /* yacc.c:1906  */


int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d]\n", yytext, lineno/*, column-strlen(yytext)*/);
  return 0;
}

