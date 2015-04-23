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

using namespace std;



	extern KT_Program* program = new KT_Program; 
	int yylex();
	extern char* yytext;
	int yyerror(const char* err );
	extern int column;
	extern int lineno;


#line 87 "kawa.cpp" /* yacc.c:339  */

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
    TCLASS = 280,
    TINTERFACE = 281,
    TEXTENDS = 282,
    TIMPLEMENTS = 283,
    ID = 284,
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
#line 101 "kawa.y" /* yacc.c:355  */

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
	vector<KT_SwitchBlockStatement*>* vectorKT_SwitchBlockStatement;
	vector<KT_IDExpression*>* vectorKT_IDExpression;

#line 308 "kawa.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 323 "kawa.cpp" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
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
       0,   222,   222,   224,   225,   226,   229,   233,   234,   237,
     242,   245,   252,   253,   259,   260,   263,   264,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   279,   280,   281,
     282,   283,   284,   287,   292,   295,   296,   299,   306,   307,
     311,   318,   321,   322,   326,   327,   331,   339,   344,   347,
     351,   352,   353,   356,   357,   358,   365,   373,   375,   376,
     379,   380,   385,   386,   389,   392,   393,   397,   398,   401,
     404,   405,   407,   416,   426,   433,   434,   437,   438,   441,
     442,   445,   446,   449,   453,   456,   457,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   481,   486,   493,
     494,   495,   496,   499,   501,   506,   508,   513,   516,   518,
     519,   520,   523,   525,   526,   527,   530,   532,   533,   534,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   553,   554,   557,   558,   562,   563,   564,
     565,   566,   567,   568,   569,   572,   575,   580,   586,   596,
     597,   610,   611,   617,   622,   625,   626,   627,   631,   632,
     633,   634,   635,   636,   639,   640,   643,   644,   647,   648,
     651,   652,   655,   656,   659,   660,   661,   664,   665,   666,
     667,   668,   671,   672,   673,   674,   677,   678,   679,   682,
     683,   684,   685,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   711,   714,   717,   719,   722,   723,   724,   725,
     728,   729,   730
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
  "TPROTECTED", "TFINAL", "TABSTRACT", "TSTATIC", "TVALUE", "TCLASS",
  "TINTERFACE", "TEXTENDS", "TIMPLEMENTS", "ID", "TSUPER", "TTHIS", "TIF",
  "TELSE", "TFALSE", "TTRUE", "TSWITCH", "TCASE", "TCONTINUE", "TBREAK",
  "TDEFAULT", "TFOR", "TWHILE", "TDO", "TNEW", "TNULL", "TRETURN",
  "TPRINT", "TPRINTI", "TPRINTF", "TPRINTS", "TPLUSEQ", "TMINUSEQ",
  "TMULEQ", "TDIVEQ", "TMODEQ", "TINC", "TDEC", "TCEQ", "TCNE", "TCLE",
  "TCGE", "TOR", "TAND", "TANDBINEQ", "TORBINEQ", "TXORBINEQ", "TDECAL",
  "TDECAR", "TDECALNS", "THEN", "TDECALNSEQ", "TDECAREQ", "TDECALEQ",
  "'='", "COND", "'|'", "'^'", "'&'", "'>'", "'<'", "'+'", "'-'", "'%'",
  "'*'", "'/'", "NBINAIRE", "NLOGIC", "MOINUS", "PLUS", "';'", "'.'",
  "','", "'['", "']'", "'{'", "'}'", "'('", "')'", "':'", "'~'", "'!'",
  "$accept", "Program", "ProgramUnity", "Package", "Ids", "QList",
  "ListIds", "Type", "Tables", "TablesIndexe", "BasicType", "Modifier",
  "Modifiers", "Static", "All", "Extends", "ExtendsList", "Implements",
  "ImportDeclaration", "ClassDeclaration", "InterfaceDeclaration",
  "ClassBody", "MemberDecs", "MemberDec", "InterfaceBody", "Prototypes",
  "Prototype", "VariableDeclaratorList", "VariableDeclarator",
  "VariableInitializer", "FormalParameters", "VoidFormalParametrs",
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

#define YYPACT_NINF -397

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-397)))

#define YYTABLE_NINF -64

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    22,    68,  -397,    58,   -14,  -397,    56,  -397,  -397,
    -397,    64,   252,    30,  -397,  -397,  -397,  -397,  -397,  -397,
     106,   116,  -397,    26,    26,    24,    66,    87,   145,  -397,
    -397,    30,  -397,    58,   511,   149,   150,    88,  -397,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,  -397,   108,
    -397,   111,   150,   124,   108,  -397,  -397,  -397,   194,   111,
     135,  -397,  -397,  -397,  -397,   142,   152,   108,  -397,   111,
     155,   217,  -397,  -397,   406,  -397,  -397,  -397,  -397,   785,
    -397,   108,   226,   227,   231,   -55,   233,   142,   166,   166,
     166,   167,   169,  -397,   -43,  -397,   176,   179,   169,  -397,
     181,   817,  -397,  -397,   608,   188,   169,  -397,  -397,  -397,
    -397,  -397,  -397,   253,  -397,   352,  -397,  -397,  -397,    97,
     197,  -397,  -397,   842,  -397,   256,   262,   608,   608,   608,
     608,   608,  -397,   173,   230,   232,   218,   216,   219,    79,
     126,    44,   114,   129,  -397,  -397,  -397,   205,  -397,  -397,
     278,   221,  -397,   111,   229,   851,    53,   211,   228,   212,
     225,     4,    15,   234,   235,   274,   186,   237,   239,   240,
     242,  -397,  -397,   111,  -397,  -397,  -397,  -397,  -397,  -397,
    -397,   236,  -397,  -397,   289,   500,  -397,  -397,  -397,   295,
     108,   247,  -397,  -397,  -397,  -397,   243,  -397,  -397,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,  -397,   254,   188,  -397,
    -397,  -397,  -397,   -20,   111,   300,    12,   278,   268,   255,
     301,   608,   608,   257,  -397,   259,  -397,    90,   608,   302,
    -397,   260,    46,    27,    19,    43,   278,  -397,   -52,   205,
     125,   248,   276,   -52,   205,    62,   349,  -397,   230,   230,
     230,   230,   230,   230,   230,   230,   232,   218,   216,   219,
      79,   126,   126,   114,   114,   114,   114,   114,   114,   114,
     129,   129,  -397,  -397,  -397,  -397,  -397,  -397,   325,   278,
     278,    -5,   272,   188,   608,  -397,   -34,   273,   277,  -397,
    -397,   108,   534,   253,   279,   280,   281,   275,  -397,   -52,
     287,   293,  -397,  -397,   291,  -397,  -397,   294,  -397,  -397,
     305,   188,  -397,  -397,   373,  -397,   647,  -397,  -397,  -397,
     375,  -397,   310,   108,   188,   188,   376,   111,   313,   317,
     320,   418,   348,   274,   328,   117,   681,   340,   -28,   274,
     573,   274,   608,   341,    46,  -397,   342,   346,   347,   350,
     344,  -397,   345,  -397,   111,   351,   353,    -8,   278,  -397,
    -397,  -397,   608,   411,  -397,   608,  -397,    77,  -397,   354,
     681,   608,  -397,  -397,   681,   355,  -397,   367,  -397,   293,
    -397,  -397,  -397,  -397,   313,  -397,   278,  -397,  -397,   188,
     360,   274,   -18,   188,   313,   720,  -397,  -397,   188,  -397,
     681,   361,  -397,   276,   188,   377,  -397,  -397,   608,   369,
    -397,  -397,  -397,   395,    77,   354,  -397,  -397,  -397,  -397,
     380,  -397,   372,  -397,   608,   313,  -397,  -397,  -397,   451,
     354,   399,   451,  -397,   608,   354,  -397
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     2,    47,     0,     1,    36,    34,     6,
      35,     0,     0,    39,    27,    29,    28,    32,    31,    30,
       0,     0,    33,     5,     5,     0,     0,    41,    43,     3,
       4,    39,    38,    47,     0,    45,     0,     0,    37,    46,
      26,    19,    21,    22,    23,    24,    18,    20,    25,     8,
      40,    15,     0,     0,     8,    42,    59,    49,     0,    15,
       0,    12,    44,    52,    48,    10,    34,     8,    13,    15,
      34,     0,    11,    57,     0,    58,     7,    14,    50,     0,
      51,     8,     0,     0,     0,     8,     0,    10,     0,     0,
       0,    76,     0,    68,    66,     9,     0,     0,     0,    69,
       0,     0,    86,    56,     0,    63,     0,    61,    60,    55,
      67,    77,    78,     0,    75,     0,   203,   204,   205,   222,
       0,   210,   209,     0,   211,     0,     0,     0,     0,     0,
       0,     0,    65,   154,   163,   165,   167,   169,   171,   173,
     176,   181,   185,   188,   192,   201,   206,   222,   207,   208,
       0,     0,    54,    15,    80,     0,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,    84,    15,   120,    85,    87,    89,    90,    88,
     101,     0,   199,   197,     0,     0,    71,   213,   217,     0,
       8,     0,   200,   198,   196,   195,     0,   193,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,    66,    63,    53,
      83,    76,    74,    15,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,     0,   128,     0,     0,     0,
     132,     0,   105,   115,   111,   119,     0,    99,   222,   222,
     222,     0,    82,   222,   222,     0,     0,   202,   162,   161,
     160,   159,   158,   157,   155,   156,   164,   166,   168,   170,
     172,   175,   174,   179,   177,   178,   180,   184,   183,   182,
     186,   187,   191,   189,   190,    64,    62,    79,     0,     0,
       0,   222,     0,    63,     0,   100,   222,     0,     0,   129,
     127,     8,     0,     0,     0,     0,     0,     0,   131,   222,
       0,   107,   113,   114,     0,   109,   110,     0,   117,   118,
       0,    63,   220,   221,     0,    70,     0,    73,   216,   218,
       0,   212,     0,     8,    63,    63,     0,    15,    17,     0,
       0,     0,     0,     0,     0,    15,   143,     0,    63,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,    81,     0,   214,    15,     0,     0,   222,     0,    16,
      94,    97,     0,   121,   134,     0,   147,   222,   144,   153,
     141,     0,   145,   126,   139,     0,   124,     0,   103,   107,
     112,   108,   116,    95,    17,   215,     0,    93,    96,    63,
       0,     0,     0,    63,    17,     0,   149,   142,    63,   140,
     137,     0,   106,    82,    63,     0,    98,   122,     0,     0,
     123,   133,   148,     0,   222,   153,   146,   138,   125,    72,
       0,    92,     0,    86,     0,    17,   151,    91,    86,   136,
     153,     0,   135,   150,     0,   153,   152
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -397,  -397,   209,  -397,   -54,   387,   423,   -69,   -49,  -288,
    -114,  -397,   105,  -397,   445,  -397,  -397,  -397,   444,  -397,
    -397,  -397,  -397,  -397,  -397,  -397,  -397,  -216,  -230,   251,
      73,   164,  -140,   143,   271,  -397,  -397,  -397,    61,   175,
      60,  -396,  -397,  -397,  -397,    92,  -397,  -397,  -397,  -397,
    -397,  -397,  -161,  -397,  -397,  -397,  -397,  -365,  -286,  -101,
    -397,   567,   298,   303,   297,   299,   314,    28,  -397,    85,
      23,   -93,  -244,  -397,  -173,  -397,  -397,  -141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    59,    72,    55,    50,    68,   238,
      51,    22,    12,    11,    26,    35,    37,    53,     8,    23,
      24,    64,    70,    80,    57,    66,    75,   151,   228,   105,
      92,   186,   187,   261,   100,   101,   114,   232,   337,   154,
     174,   115,   175,   176,   320,   365,   177,   327,   178,   324,
     179,   330,   180,   412,   431,   314,   315,   388,   416,   389,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   188
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,   173,    61,   132,   249,    83,   226,   303,   321,   191,
      86,   259,   296,    76,   181,   302,   264,   239,   352,   428,
      77,    -8,   429,   325,    -8,   417,   331,    87,   196,   419,
     322,   104,   113,   243,   194,   195,    58,   197,   198,   184,
     -17,   234,    91,     1,   245,   185,   391,   449,   326,   116,
     117,     5,   452,    31,    91,   437,   323,   184,   328,   351,
     379,   118,   259,   185,   150,   251,    -8,   264,     6,   344,
     345,   298,   329,    60,     7,   319,     9,   120,   430,    10,
     121,   122,   -15,   346,   262,    -8,   346,   349,    -8,   185,
     123,   124,   185,    13,   244,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   230,   246,    69,   237,    32,   182,
     183,   218,   219,   220,    34,   369,   423,   332,   333,   311,
     399,    25,   338,   339,   256,   341,   433,   -17,   375,   376,
     292,   293,   294,   182,   183,    27,   265,   212,   213,   386,
     307,   308,   392,   129,   235,    28,   236,   316,   409,   446,
     185,    -8,   103,   182,   183,   340,    33,   451,   109,   185,
     332,    96,    97,    98,   453,   338,   152,   106,   346,   456,
      -8,    74,    36,   259,   185,    79,   424,    52,   313,    54,
     312,   182,   183,    56,   299,   300,   214,   215,   184,   116,
     117,   385,   383,   425,   185,   221,   222,   432,   393,    58,
     396,   118,   436,   350,    60,   216,   217,   -63,   440,   150,
      60,   357,   223,   224,   225,   119,   184,   120,   334,    63,
     121,   122,   185,    67,   199,   200,   201,   202,   203,    69,
     123,   124,    29,    30,    71,   262,   332,   204,   205,   206,
     281,   282,   125,   126,   290,   291,    81,   347,    73,    93,
     427,    78,    93,    93,    93,    88,    89,   355,    93,   395,
      90,   397,    94,    91,   102,    99,   107,   127,   128,   108,
      14,    15,    16,    17,    18,    19,   250,    20,    21,   110,
     150,   410,   153,   129,   413,   192,   130,   131,   189,   374,
     418,   193,   207,   210,   209,   208,   184,   211,   378,   283,
     284,   285,   286,   287,   288,   289,   159,   227,   185,   241,
     160,   229,   161,   162,   435,   163,   164,   165,   258,   240,
     166,   231,   242,    76,   263,   406,   257,   442,   104,   301,
     306,   247,   248,   414,   252,   173,   253,   254,   173,   255,
     266,   267,   304,   450,   317,   305,   335,   309,   181,   310,
     318,   181,   342,   455,   343,   116,   117,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   348,   118,   336,   102,
     360,   353,   362,   155,   364,   354,   370,   359,   372,   361,
     445,   156,   157,   158,   159,   363,   121,   122,   160,   366,
     161,   162,   367,   163,   164,   165,   123,   124,   166,   167,
     168,   169,   170,   368,   373,   377,   351,   380,   125,   126,
     381,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      82,   302,   382,   384,    14,    15,    16,    17,    18,    19,
     390,   398,   400,   127,   128,    49,   401,   402,   404,   405,
     403,   407,   171,   408,   411,   420,   415,   102,   172,   129,
     426,   438,   130,   131,   116,   117,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   421,   118,   441,   443,   444,
     447,   448,   155,   454,    95,    62,    38,    39,   295,   371,
     156,   157,   158,   159,   439,   121,   122,   160,   358,   161,
     162,   422,   163,   164,   165,   123,   124,   166,   167,   168,
     169,   170,   297,   116,   117,   276,   278,   125,   126,   279,
       0,   277,     0,     0,     0,   118,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   280,     0,     0,     0,   260,
       0,   120,   127,   128,   121,   122,     0,   116,   117,     0,
      49,   171,     0,     0,   123,   124,   102,     0,   129,   118,
       0,   130,   131,     0,     0,     0,   125,   126,     0,     0,
       0,     0,     0,   119,     0,   120,     0,     0,   121,   122,
       0,     0,     0,     0,     0,     0,   116,   117,   123,   124,
       0,   127,   128,     0,     0,     0,     0,     0,   118,     0,
     125,   126,     0,     0,     0,     0,     0,   129,    99,     0,
     130,   131,   119,     0,   120,     0,     0,   121,   122,     0,
       0,   116,   117,     0,     0,   127,   128,   123,   124,     0,
       0,     0,     0,   118,   356,     0,     0,     0,     0,   125,
     126,   129,     0,     0,   130,   131,     0,   119,     0,   120,
       0,     0,   121,   122,     0,     0,     0,     0,     0,     0,
     116,   117,   123,   124,   127,   128,     0,     0,     0,     0,
       0,     0,   118,   394,   125,   126,     0,     0,     0,     0,
     129,     0,     0,   130,   131,     0,   260,     0,   120,     0,
       0,   121,   122,     0,   116,   117,     0,     0,     0,   127,
     128,   123,   124,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,   125,   126,   129,     0,     0,   130,   131,
     387,     0,   120,     0,     0,   121,   122,     0,     0,     0,
       0,     0,     0,   116,   117,   123,   124,     0,   127,   128,
       0,     0,     0,     0,     0,   118,     0,   125,   126,     0,
       0,     0,     0,     0,   129,     0,     0,   130,   131,   434,
       0,   120,     0,     0,   121,   122,     0,     0,     0,     0,
       0,     0,   127,   128,   123,   124,   268,   269,   270,   271,
     272,   273,   274,   275,     0,     0,   125,   126,   129,     0,
       0,   130,   131,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    84,
       0,   127,   128,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,    85,     0,     0,   129,     0,     0,
     130,   131,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,     0,     0,     0,     0,    49,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,     0,     0,     0,     0,
       0,   190,     0,     0,     0,     0,     0,     0,     0,     0,
     233
};

static const yytype_int16 yycheck[] =
{
      54,   115,    51,   104,   165,    74,   147,   237,   252,   123,
      79,   184,   228,    67,   115,     3,   189,   157,   306,    37,
      69,    29,    40,     4,    29,   390,   256,    81,   129,   394,
       3,    74,   101,    29,   127,   128,    91,   130,   131,    91,
      74,   155,    97,    17,    29,    97,    74,   443,    29,     3,
       4,    29,   448,    29,    97,   420,    29,    91,    15,    93,
     348,    15,   235,    97,    92,   166,    74,   240,     0,   299,
     300,    91,    29,    93,    16,    29,    90,    31,    96,    23,
      34,    35,    29,    91,   185,    93,    91,   303,    93,    97,
      44,    45,    97,    29,    90,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   153,    90,    94,   156,    84,    56,
      57,    67,    68,    69,    27,   331,   404,   258,   259,    29,
     364,    91,   263,   264,   173,   265,   414,    74,   344,   345,
     223,   224,   225,    56,    57,    29,   190,    58,    59,   355,
     241,   242,   358,    97,    91,    29,    93,   248,   378,   435,
      97,    74,    92,    56,    57,    93,    90,   445,    98,    97,
     301,    88,    89,    90,   450,   306,   106,    94,    91,   455,
      93,    66,    27,   346,    97,    70,   406,    28,   247,    29,
      90,    56,    57,    95,   233,   234,    60,    61,    91,     3,
       4,    74,   353,   409,    97,    81,    82,   413,   359,    91,
     361,    15,   418,   304,    93,    79,    80,    90,   424,    92,
      93,   312,    83,    84,    85,    29,    91,    31,    93,    95,
      34,    35,    97,    29,    51,    52,    53,    54,    55,    94,
      44,    45,    23,    24,    92,   336,   377,    64,    65,    66,
     212,   213,    56,    57,   221,   222,    29,   301,    96,    85,
     411,    96,    88,    89,    90,    29,    29,   311,    94,   360,
      29,   362,    29,    97,    95,    98,    90,    81,    82,    90,
      18,    19,    20,    21,    22,    23,    90,    25,    26,    98,
      92,   382,    29,    97,   385,    29,   100,   101,    91,   343,
     391,    29,    62,    77,    76,    63,    91,    78,   347,   214,
     215,   216,   217,   218,   219,   220,    32,    29,    97,    97,
      36,    90,    38,    39,   415,    41,    42,    43,    29,    91,
      46,    92,    97,   377,    29,   374,    90,   428,    74,    29,
      29,    97,    97,   387,    97,   449,    97,    97,   452,    97,
      93,    98,    74,   444,    42,    90,    98,    90,   449,    90,
      90,   452,     3,   454,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    94,    15,    92,    95,
      90,    98,    97,    21,    81,    98,     3,    98,     3,    98,
     434,    29,    30,    31,    32,    98,    34,    35,    36,    98,
      38,    39,    98,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    98,    94,    29,    93,    90,    56,    57,
      90,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     3,    74,    95,    18,    19,    20,    21,    22,    23,
      90,    90,    90,    81,    82,    29,    90,    90,    94,    94,
      90,    90,    90,    90,    33,    90,    92,    95,    96,    97,
      90,    90,   100,   101,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    98,    15,    90,    99,    74,
      90,    99,    21,    74,    87,    52,    31,    33,   227,   336,
      29,    30,    31,    32,   423,    34,    35,    36,   313,    38,
      39,   399,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   231,     3,     4,   207,   209,    56,    57,   210,
      -1,   208,    -1,    -1,    -1,    15,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   211,    -1,    -1,    -1,    29,
      -1,    31,    81,    82,    34,    35,    -1,     3,     4,    -1,
      29,    90,    -1,    -1,    44,    45,    95,    -1,    97,    15,
      -1,   100,   101,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    44,    45,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,
     100,   101,    29,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,     3,     4,    -1,    -1,    81,    82,    44,    45,    -1,
      -1,    -1,    -1,    15,    90,    -1,    -1,    -1,    -1,    56,
      57,    97,    -1,    -1,   100,   101,    -1,    29,    -1,    31,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    44,    45,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    90,    56,    57,    -1,    -1,    -1,    -1,
      97,    -1,    -1,   100,   101,    -1,    29,    -1,    31,    -1,
      -1,    34,    35,    -1,     3,     4,    -1,    -1,    -1,    81,
      82,    44,    45,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    97,    -1,    -1,   100,   101,
      29,    -1,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    44,    45,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    97,    -1,    -1,   100,   101,    29,
      -1,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    44,    45,   199,   200,   201,   202,
     203,   204,   205,   206,    -1,    -1,    56,    57,    97,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    81,    82,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    97,    -1,    -1,
     100,   101,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,   103,   104,   105,    29,     0,    16,   120,    90,
      23,   115,   114,    29,    18,    19,    20,    21,    22,    23,
      25,    26,   113,   121,   122,    91,   116,    29,    29,   104,
     104,    29,    84,    90,    27,   117,    27,   118,   116,   120,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    29,
     109,   112,    28,   119,    29,   108,    95,   126,    91,   106,
      93,   110,   108,    95,   123,   106,   127,    29,   110,    94,
     124,    92,   107,    96,   114,   128,   106,   110,    96,   114,
     125,    29,    14,   109,    14,    29,   109,   106,    29,    29,
      29,    97,   132,   133,    29,   107,   132,   132,   132,    98,
     136,   137,    95,   142,    74,   131,   132,    90,    90,   142,
      98,    21,    24,   109,   138,   143,     3,     4,    15,    29,
      31,    34,    35,    44,    45,    56,    57,    81,    82,    97,
     100,   101,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
      92,   129,   142,    29,   141,    21,    29,    30,    31,    32,
      36,    38,    39,    41,    42,    43,    46,    47,    48,    49,
      50,    90,    96,   112,   142,   144,   145,   148,   150,   152,
     154,   161,    56,    57,    91,    97,   133,   134,   179,    91,
      29,   112,    29,    29,   173,   173,   161,   173,   173,    51,
      52,    53,    54,    55,    64,    65,    66,    62,    63,    76,
      77,    78,    58,    59,    60,    61,    79,    80,    67,    68,
      69,    81,    82,    83,    84,    85,   179,    29,   130,    90,
     110,    92,   139,    29,   112,    91,    93,   110,   111,   134,
      91,    97,    97,    29,    90,    29,    90,    97,    97,   154,
      90,   161,    97,    97,    97,    97,   110,    90,    29,   176,
      29,   135,   161,    29,   176,   106,    93,    98,   163,   163,
     163,   163,   163,   163,   163,   163,   164,   165,   166,   167,
     168,   169,   169,   171,   171,   171,   171,   171,   171,   171,
     172,   172,   173,   173,   173,   131,   129,   136,    91,   110,
     110,    29,     3,   130,    74,    90,    29,   161,   161,    90,
      90,    29,    90,   109,   157,   158,   161,    42,    90,    29,
     146,   174,     3,    29,   151,     4,    29,   149,    15,    29,
     153,   130,   179,   179,    93,    98,    92,   140,   179,   179,
      93,   134,     3,    29,   130,   130,    91,   106,    94,   129,
     161,    93,   111,    98,    98,   106,    90,   161,   141,    98,
      90,    98,    97,    98,    81,   147,    98,    98,    98,   129,
       3,   135,     3,    94,   106,   129,   129,    29,   110,   111,
      90,    90,    74,   154,    95,    74,   129,    29,   159,   161,
      90,    74,   129,   154,    90,   161,   154,   161,    90,   174,
      90,    90,    90,    90,    94,    94,   110,    90,    90,   130,
     161,    33,   155,   161,   106,    92,   160,   159,   161,   159,
      90,    98,   147,   111,   130,   129,    90,   154,    37,    40,
      96,   156,   129,   111,    29,   161,   129,   159,    90,   140,
     129,    90,   161,    99,    74,   106,   160,    90,    99,   143,
     161,   111,   143,   160,    74,   161,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   104,   104,   104,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     113,   113,   113,   114,   114,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   122,
     123,   124,   124,   125,   125,   125,   125,   126,   127,   127,
     128,   128,   129,   129,   130,   131,   131,   132,   132,   133,
     134,   134,   135,   135,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   142,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   146,   146,   147,   147,   148,   149,
     149,   149,   150,   151,   151,   151,   152,   153,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   158,   158,   158,   158,   159,
     159,   160,   160,   160,   161,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   168,   169,   169,   169,
     169,   169,   170,   170,   170,   170,   171,   171,   171,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   176,   177,   177,   178,   178,   178,   178,
     179,   179,   179
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,     5,     0,     3,     3,     0,     4,
       0,     3,     2,     3,     3,     0,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     0,     3,     2,     0,
       2,     0,     2,     0,     2,     0,     6,     0,     5,     4,
       3,     2,     0,     6,     5,     5,     4,     3,     2,     0,
       5,     5,     3,     0,     2,     2,     0,     3,     1,     2,
       3,     1,     6,     2,     4,     2,     0,     1,     1,     2,
       0,     2,     0,     2,     3,     2,     0,     1,     1,     1,
       1,     9,     8,     6,     5,     5,     6,     5,     7,     2,
       3,     1,     1,     5,     2,     0,     3,     0,     5,     1,
       1,     0,     5,     1,     1,     0,     5,     1,     1,     0,
       1,     5,     7,     7,     5,     7,     5,     3,     2,     3,
       2,     3,     2,     2,     0,     4,     3,     4,     5,     3,
       4,     3,     4,     2,     3,     3,     5,     3,     5,     2,
       6,     3,     7,     0,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     5,     6,     4,     2,     4,     2,
       3,     3,     0
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
#line 222 "kawa.y" /* yacc.c:1646  */
    { }
#line 1829 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 224 "kawa.y" /* yacc.c:1646  */
    { (yyvsp[-1].kt_class)->setModifier((yyvsp[-2].kt_modifier)); (yyvsp[-1].kt_class)->setImports(*(yyvsp[-3].vectorVecorString)); program->addPackageWithClass((yyvsp[-4].kt_package), (yyvsp[-1].kt_class)); (yyval.kt_program)=program;}
#line 1835 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 225 "kawa.y" /* yacc.c:1646  */
    {  (yyvsp[-1].kt_interface)->setModifier((yyvsp[-2].kt_modifier)); (yyvsp[-1].kt_interface)->setImports(*(yyvsp[-3].vectorVecorString));program->addPackageWithInterface((yyvsp[-4].kt_package), (yyvsp[-1].kt_interface)); (yyval.kt_program)=program;}
#line 1841 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 226 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_program)= program;}
#line 1847 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 229 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_package)= new KT_Package; (yyval.kt_package)->setName((yyvsp[-1].vstring));}
#line 1853 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 233 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorString)->push_back((yyvsp[-1].vstring)); (yyval.vectorString)=(yyvsp[0].vectorString);}
#line 1859 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 234 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var = new vector<string*>; (yyval.vectorString)=var;}
#line 1865 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 237 "kawa.y" /* yacc.c:1646  */
    {string* name=(yyvsp[-2].vstring); 
							for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}
							vector<string*>* listName = new vector<string*>; listName->push_back(name); 
						    for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); listName->push_back(n);}
						    (yyval.vectorString)=listName;}
#line 1875 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 242 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var = new vector<string*>; (yyval.vectorString)=var;}
#line 1881 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 245 "kawa.y" /* yacc.c:1646  */
    {string* name=(yyvsp[-2].vstring); 
					    for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}
					    vector<string*>* listName = new vector<string*>; listName->push_back(name);
					    for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); listName->push_back(n);}
					    (yyval.vectorString)=listName; }
#line 1891 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 252 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_type)=new KT_Type; (yyval.kt_type)->setBasicType(true); (yyval.kt_type)->setArray((yyvsp[0].parser_array)); vector<string*> name; name.push_back((yyvsp[-1].vstring)); (yyval.kt_type)->setTypeName(name); }
#line 1897 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 253 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_type)=new KT_Type; (yyval.kt_type)->setBasicType(false); (yyval.kt_type)->setArray((yyvsp[0].parser_array)); vector<string*> name; name.push_back((yyvsp[-2].vstring));
	 					 for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);}
	 					 (yyval.kt_type)->setTypeName(name);
	 				 }
#line 1906 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].parser_array)->setArray(true); (yyval.parser_array)->setArrayDim((yyval.parser_array)->getArrayDim()+1);}
#line 1912 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 260 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_array)=new PARSER_Array; (yyval.parser_array)->setArray(false); (yyval.parser_array)->setArrayDim(0);}
#line 1918 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 263 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].kt_indexedArray)->setIndexAddIntAtFirstPosition((yyvsp[-2].vint)); (yyval.kt_indexedArray)=(yyvsp[0].kt_indexedArray);}
#line 1924 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 264 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* var = new KT_IndexedArray; (yyval.kt_indexedArray)=var;}
#line 1930 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1936 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1942 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 269 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1948 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 270 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1954 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 271 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1960 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 272 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1966 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 273 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1972 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 274 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1978 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 275 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1984 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 279 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(1);}
#line 1990 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 280 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(2);}
#line 1996 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 281 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(3);}
#line 2002 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 282 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setStatic(true);}
#line 2008 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 283 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setAbstract(true);}
#line 2014 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 284 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setFinal(true);}
#line 2020 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 287 "kawa.y" /* yacc.c:1646  */
    {if((yyvsp[0].kt_modifier)->isStatic()){(yyvsp[-1].kt_modifier)->setStatic(true);}
							    if((yyvsp[0].kt_modifier)->isAbstract()){(yyvsp[-1].kt_modifier)->setAbstract(true);} 
							    if((yyvsp[0].kt_modifier)->isFinal()){(yyvsp[-1].kt_modifier)->setFinal(true);} 
							    if((yyvsp[0].kt_modifier)->getVisibility()>0) (yyvsp[-1].kt_modifier)->setVisibility((yyvsp[0].kt_modifier)->getVisibility());
							}
#line 2030 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 292 "kawa.y" /* yacc.c:1646  */
    {KT_Modifier* modifier = new KT_Modifier; (yyval.kt_modifier)=modifier;}
#line 2036 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 295 "kawa.y" /* yacc.c:1646  */
    {(yyval.vbool)=true;}
#line 2042 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 296 "kawa.y" /* yacc.c:1646  */
    {(yyval.vbool)=false;}
#line 2048 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 299 "kawa.y" /* yacc.c:1646  */
    {  
					vector<string*>* name = new vector<string*>; name->push_back((yyvsp[-1].vstring));
 					for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it)	
 						{ string* n = (*it); name->push_back(n);}
 					(yyval.vectorString)=name;
 				 }
#line 2059 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 306 "kawa.y" /* yacc.c:1646  */
    {string* name=new string("*"); vector<string*>* var = new vector<string*> ; var->push_back(name); (yyval.vectorString)=var;}
#line 2065 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 307 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var = new vector<string*>; (yyval.vectorString)=var; }
#line 2071 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 311 "kawa.y" /* yacc.c:1646  */
    {vector<string*> typeName =(yyvsp[0].kt_type)->getTypeName(); string* name=new string;
						 for (vector<string*>::iterator it = typeName.begin(); it != typeName.end(); ++it)
						 	{ string* n = (*it); 
						 		if(it!=typeName.begin()){*name = *name + "." +*n;}
						 		else{name=n;}
						 	}
						  (yyval.vstring)=name;}
#line 2083 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 318 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=new string;}
#line 2089 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 321 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorString)=(yyvsp[0].vectorString);}
#line 2095 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 322 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var = new vector<string*>; (yyval.vectorString)=var;}
#line 2101 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 326 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorString)=(yyvsp[0].vectorString);}
#line 2107 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 327 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var = new vector<string*>; (yyval.vectorString)=var;}
#line 2113 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 331 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* importvar = new vector<string*>;
																 if((yyvsp[-4].vbool)==true){string* s=new string("static"); importvar->push_back(s);}
																 importvar->push_back((yyvsp[-3].vstring));
																 for (vector<string*>::iterator it = (yyvsp[-2].vectorString)->begin(); it != (yyvsp[-2].vectorString)->end(); ++it)
																 	{ string* n = (*it); importvar->push_back(n);}

																  (yyvsp[0].vectorVecorString)->push_back(*importvar); 
																  (yyval.vectorVecorString)=(yyvsp[0].vectorVecorString); }
#line 2126 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 339 "kawa.y" /* yacc.c:1646  */
    {vector<vector<string*>>* var = new vector<vector<string*>>; (yyval.vectorVecorString)=var; }
#line 2132 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 344 "kawa.y" /* yacc.c:1646  */
    { (yyval.kt_class)=new KT_Class; (yyval.kt_class)->setName((yyvsp[-3].vstring)); (yyval.kt_class)->setParentClass((yyvsp[-2].vstring)); (yyval.kt_class)->setParentInterfaces(*(yyvsp[-1].vectorString)); (yyval.kt_class)->setMemberDec(*(yyvsp[0].vectorPARSER_MemberDec));cout<<"MemberDec : "<<(yyval.kt_class)->getSimpleMethods().size()<<endl;}
#line 2138 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 347 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_interface)=new KT_Interface; (yyval.kt_interface)->setName((yyvsp[-2].vstring)); (yyval.kt_interface)->setInterfacesparent(*(yyvsp[-1].vectorString)); (yyval.kt_interface)->setPrototypes(*(yyvsp[0].vectorKT_Prototype));}
#line 2144 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 351 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorPARSER_MemberDec)=(yyvsp[-1].vectorPARSER_MemberDec); }
#line 2150 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 352 "kawa.y" /* yacc.c:1646  */
    { (yyvsp[-1].vectorPARSER_MemberDec)->push_back((yyvsp[0].parser_memberDec)); (yyval.vectorPARSER_MemberDec)=(yyvsp[-1].vectorPARSER_MemberDec);}
#line 2156 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 353 "kawa.y" /* yacc.c:1646  */
    { vector<PARSER_MemberDec*>* var = new vector<PARSER_MemberDec*>; (yyval.vectorPARSER_MemberDec)=var; cout<<"epsilon  :";}
#line 2162 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 356 "kawa.y" /* yacc.c:1646  */
    {/*PARSER_MemeberDec*/(yyval.parser_memberDec)=new PARSER_MemberDec;}
#line 2168 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 357 "kawa.y" /* yacc.c:1646  */
    {KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName((yyvsp[-2].vstring)); methode->setModifier((yyvsp[-4].kt_modifier)) ; methode->setParams(*(yyvsp[-1].vectorKT_Param)); methode->setType((yyvsp[-3].kt_type)); methode->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=methode;}
#line 2174 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 358 "kawa.y" /* yacc.c:1646  */
    {KT_Type* type = new KT_Type; vector<string*>* typeName = new vector<string*>;
		  											   string* svoid = new string("void"); typeName->push_back(svoid); type->setTypeName(*typeName);
		  											   type->setBasicType(false); type->setArrayDim(0);
		  											   KT_SimpleMethod* methode =new KT_SimpleMethod;
		  											   methode->setIndexParser(2); methode->setName((yyvsp[-2].vstring)); methode->setModifier((yyvsp[-4].kt_modifier));
		  											   methode->setParams(*(yyvsp[-1].vectorKT_Param)); methode->setType(type); methode->setBlock((yyvsp[0].kt_block)); (yyval.parser_memberDec)=methode;
		  											   }
#line 2186 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 365 "kawa.y" /* yacc.c:1646  */
    { KT_Constructor* constructor =new KT_Constructor;
		  										  constructor->setIndexParser(1); constructor->setName((yyvsp[-2].vstring)); constructor->setModifier((yyvsp[-3].kt_modifier));
		  										  constructor->setParams(*(yyvsp[-1].vectorKT_Param)) ;
		  										  constructor->setBlock((yyvsp[0].kt_block)) ;
		  										  (yyval.parser_memberDec)=constructor;}
#line 2196 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 373 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Prototype)=(yyvsp[-1].vectorKT_Prototype);}
#line 2202 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 375 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_Prototype)->push_back((yyvsp[0].kt_prototype)); (yyval.vectorKT_Prototype)=(yyvsp[-1].vectorKT_Prototype);}
#line 2208 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 376 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Prototype*>* var = new vector<KT_Prototype*>; (yyval.vectorKT_Prototype)=var;}
#line 2214 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 379 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_prototype) = new KT_Prototype; (yyval.kt_prototype)->setName((yyvsp[-2].vstring)); (yyval.kt_prototype)->setReturnType((yyvsp[-3].kt_type)); (yyval.kt_prototype)->setModifier((yyvsp[-4].kt_modifier)); (yyval.kt_prototype)->setParams(*(yyvsp[-1].vectorKT_Param));}
#line 2220 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 380 "kawa.y" /* yacc.c:1646  */
    {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); (yyval.kt_prototype) = new KT_Prototype; (yyval.kt_prototype)->setName((yyvsp[-2].vstring)); (yyval.kt_prototype)->setReturnType(type); (yyval.kt_prototype)->setModifier((yyvsp[-4].kt_modifier)); (yyval.kt_prototype)->setParams(*(yyvsp[-1].vectorKT_Param));}
#line 2226 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 385 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].parser_field)->AddVariableAtFirstPosition((yyvsp[-1].kt_variable)); (yyval.parser_field)=(yyvsp[0].parser_field);}
#line 2232 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 386 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_field)=new PARSER_Field;}
#line 2238 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 389 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_variable)=new KT_Variable; vector<string*> name; name.push_back((yyvsp[-1].vstring)); (yyval.kt_variable)->setName(name); (yyval.kt_variable)->setValue((yyvsp[0].kt_expression));}
#line 2244 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 392 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2250 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 393 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=new KT_Expression;}
#line 2256 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 397 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Param)=(yyvsp[-1].vectorKT_Param);}
#line 2262 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 398 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Param*>* vect = new vector<KT_Param*>; (yyval.vectorKT_Param)=vect;}
#line 2268 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 401 "kawa.y" /* yacc.c:1646  */
    {vector<KT_ParamsMethodCall*>* vect = new vector<KT_ParamsMethodCall*>; (yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2274 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 404 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[-1].vectorKT_ParamsMethodCall);}
#line 2280 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 405 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[0].vectorKT_ParamsMethodCall);}
#line 2286 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 407 "kawa.y" /* yacc.c:1646  */
    {KT_ID* id = new KT_ID; 
											vector<string*> name; name.push_back((yyvsp[-5].vstring)); id->setValue(name); (yyvsp[-1].kt_indexedArray)->setIndexAddIntAtFirstPosition((yyvsp[-3].vint)); 
											KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setIndexedArray((yyvsp[-1].kt_indexedArray)); 
											param->setExpression(id);
											vector<KT_ParamsMethodCall*>* vect= new vector<KT_ParamsMethodCall*>; 
											vect->push_back(param); 
											for (vector<KT_ParamsMethodCall*>::iterator it = (yyvsp[0].vectorKT_ParamsMethodCall)->begin(); it != (yyvsp[0].vectorKT_ParamsMethodCall)->end(); ++it)
												{ KT_ParamsMethodCall* n = (*it); vect->push_back(n);}
											(yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2300 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 416 "kawa.y" /* yacc.c:1646  */
    {KT_ParamsMethodCall* param = new KT_ParamsMethodCall;
								  													 param->setExpression((yyvsp[-1].kt_expression));
								  													 vector<KT_ParamsMethodCall*>* vect = new vector<KT_ParamsMethodCall*>;
								  													 vect->push_back(param);
								  													 for (vector<KT_ParamsMethodCall*>::iterator it = (yyvsp[0].vectorKT_ParamsMethodCall)->begin(); it != (yyvsp[0].vectorKT_ParamsMethodCall)->end(); ++it)
								  													 { KT_ParamsMethodCall* n = (*it); vect->push_back(n);}
								  													 (yyval.vectorKT_ParamsMethodCall)=vect;
								  													}
#line 2313 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 426 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-2].kt_type)->setArrayDim((yyvsp[-1].kt_param)->getParamType()->getArrayDim());
								 (yyvsp[-1].kt_param)->setParamType((yyvsp[-2].kt_type)); (yyvsp[-1].kt_param)->setParamModifier((yyvsp[-3].kt_modifier));
								 vector<KT_Param*>* vect = new vector<KT_Param*>; vect->push_back((yyvsp[-1].kt_param));
								 for (vector<KT_Param*>::iterator it = (yyvsp[0].vectorKT_Param)->begin(); it != (yyvsp[0].vectorKT_Param)->end(); ++it){ KT_Param* n = (*it); vect->push_back(n);}
								 (yyval.vectorKT_Param)=vect;}
#line 2323 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 433 "kawa.y" /* yacc.c:1646  */
    {if((yyvsp[0].kt_modifier)->isStatic()){(yyvsp[-1].kt_modifier)->setStatic(true);} if((yyvsp[0].kt_modifier)->isAbstract()){(yyvsp[-1].kt_modifier)->setAbstract(true);} if((yyvsp[0].kt_modifier)->isFinal()){(yyvsp[-1].kt_modifier)->setFinal(true);} if((yyvsp[0].kt_modifier)->getVisibility()>0) (yyvsp[-1].kt_modifier)->setVisibility((yyvsp[0].kt_modifier)->getVisibility());}
#line 2329 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 434 "kawa.y" /* yacc.c:1646  */
    {KT_Modifier* modifier= new KT_Modifier; (yyval.kt_modifier)=modifier;}
#line 2335 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 437 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setFinal(true);}
#line 2341 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 438 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier;}
#line 2347 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 441 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Param)=(yyvsp[0].vectorKT_Param);}
#line 2353 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 442 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Param*>* vect = new vector<KT_Param*>; (yyval.vectorKT_Param)=vect;}
#line 2359 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 445 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[0].vectorKT_ParamsMethodCall);}
#line 2365 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 446 "kawa.y" /* yacc.c:1646  */
    {vector<KT_ParamsMethodCall*>* vect = new vector<KT_ParamsMethodCall*>; (yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2371 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 449 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_param)=new KT_Param; (yyval.kt_param)->setName((yyvsp[-1].vstring)); KT_Type* type= new KT_Type; type->setArray((yyvsp[0].parser_array)); (yyval.kt_param)->setParamType(type); }
#line 2377 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 453 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_block)=new KT_Block; (yyval.kt_block)->setStatements(*(yyvsp[-1].vectorKT_Statement));}
#line 2383 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 456 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_Statement)->push_back((yyvsp[0].kt_statement)); (yyval.vectorKT_Statement)=(yyvsp[-1].vectorKT_Statement);}
#line 2389 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 457 "kawa.y" /* yacc.c:1646  */
    { vector<KT_Statement*>* var = new vector<KT_Statement*>; (yyval.vectorKT_Statement)=var;}
#line 2395 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 460 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2401 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 461 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2407 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 462 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2413 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 463 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2419 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 464 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-7].vstring)); name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); pf->setFinal(true); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2425 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 465 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-7].vstring)); name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2431 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 466 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); pf->setFinal(true); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2437 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 467 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2443 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 468 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(true); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2449 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 469 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring));
			  																			 KT_Type* type=new KT_Type; type->setBasicType(true);
			  																			 type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name);
			  																			 PARSER_Field* pf =new PARSER_Field;
			  																			 pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field));
			  																			 pf->upDateType(type); pf->setFinal(true);
			  																			 vector<KT_Variable*> vars = pf->getVariables();
			  																			 vector<KT_Statement*> stats;
			  																			 for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it)
			  																			 { KT_Statement* n = (*it); stats.push_back(n);}
			  																			 KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;
			  																			}
#line 2466 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 481 "kawa.y" /* yacc.c:1646  */
    { KT_ID* id = new KT_ID; vector<string*> name;
    		  										 name.push_back((yyvsp[-4].vstring)); id->setValue(name);
    		  										 KT_Affectation* affectation = new KT_Affectation;
    		  										 affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id);
    		  										 affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); (yyval.kt_statement)=affectation;}
#line 2476 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 486 "kawa.y" /* yacc.c:1646  */
    {string* thisname = new string("this");
    		  												  vector<string*> fullname; fullname.push_back(thisname); fullname.push_back((yyvsp[-4].vstring));
    		  												  KT_ID* id =new KT_ID;
    		  												  id->setValue(fullname);
    		  												  KT_Affectation* affectation = new KT_Affectation;
    		  												  affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id);
    		  												  affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); (yyval.kt_statement)=affectation;}
#line 2488 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 493 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[-1].kt_expression);}
#line 2494 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 494 "kawa.y" /* yacc.c:1646  */
    {KT_Super* s = new KT_Super; s->setParams(*(yyvsp[-1].vectorKT_ParamsMethodCall));}
#line 2500 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 495 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_blockStatement);}
#line 2506 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 496 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2512 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 499 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; (yyval.kt_print)->setArgs(*(yyvsp[-2].vectorKT_FactFinal));}
#line 2518 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 501 "kawa.y" /* yacc.c:1646  */
    {KT_FactFinal* factFinal = static_cast<KT_FactFinal*>((yyvsp[-1].kt_expression));
						  vector<KT_FactFinal*>* args =new vector<KT_FactFinal*>; args->push_back(factFinal);
						  for (vector<KT_FactFinal*>::iterator it = (yyvsp[0].vectorKT_FactFinal)->begin(); it != (yyvsp[0].vectorKT_FactFinal)->end(); ++it){
						   KT_FactFinal* n = (*it); args->push_back(n);}
						   (yyval.vectorKT_FactFinal)=args;}
#line 2528 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 506 "kawa.y" /* yacc.c:1646  */
    {vector<KT_FactFinal*>* var = new vector<KT_FactFinal*>; (yyval.vectorKT_FactFinal)=var;}
#line 2534 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 508 "kawa.y" /* yacc.c:1646  */
    {KT_FactFinal* factFinal= static_cast<KT_FactFinal*>((yyvsp[-1].kt_expression));
									 vector<KT_FactFinal*>* args=new vector<KT_FactFinal*>; args->push_back(factFinal);
									 for (vector<KT_FactFinal*>::iterator it = (yyvsp[0].vectorKT_FactFinal)->begin(); it != (yyvsp[0].vectorKT_FactFinal)->end(); ++it)
									 	{ KT_FactFinal* n = (*it); args->push_back(n);}
									  (yyval.vectorKT_FactFinal)=args;}
#line 2544 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 513 "kawa.y" /* yacc.c:1646  */
    {vector<KT_FactFinal*>* var = new vector<KT_FactFinal*>; (yyval.vectorKT_FactFinal)=var;}
#line 2550 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 516 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2556 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 518 "kawa.y" /* yacc.c:1646  */
    {KT_Reel* reel = new KT_Reel; reel->setValue((yyvsp[0].vfloat)); (yyval.kt_factFinal)=reel;}
#line 2562 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 519 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2568 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 520 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2574 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 523 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2580 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 525 "kawa.y" /* yacc.c:1646  */
    {KT_Entier* entier = new KT_Entier; entier->setValue((yyvsp[0].vint)); (yyval.kt_factFinal)=entier;}
#line 2586 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 526 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2592 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 527 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2598 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 530 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2604 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 532 "kawa.y" /* yacc.c:1646  */
    {KT_String* s = new KT_String; s->setValue((yyvsp[0].vstring)); (yyval.kt_factFinal)=s;}
#line 2610 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 533 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2616 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 534 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2622 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 537 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_blockStatement)=new KT_BlockStatement;}
#line 2628 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 538 "kawa.y" /* yacc.c:1646  */
    {KT_IfStatement* ifstatement= new KT_IfStatement; ifstatement->setCondition((yyvsp[-2].kt_expression)); ifstatement->setBStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=ifstatement;}
#line 2634 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 539 "kawa.y" /* yacc.c:1646  */
    {KT_ifElseStatement* ifelseStatement= new KT_ifElseStatement; ifelseStatement->setCondition((yyvsp[-4].kt_expression)); ifelseStatement->setIfBStatement((yyvsp[-2].kt_blockStatement)); ifelseStatement->setElseBStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=ifelseStatement;}
#line 2640 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 540 "kawa.y" /* yacc.c:1646  */
    {KT_SwitchStatement* switchStatement = new KT_SwitchStatement; switchStatement->setCondition((yyvsp[-4].kt_expression)); switchStatement->setSwitchBStatements(*(yyvsp[-1].vectorKT_SwitchBlockStatement)); (yyval.kt_blockStatement)=switchStatement;}
#line 2646 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 541 "kawa.y" /* yacc.c:1646  */
    {KT_WhileStatement* whileStatement= new KT_WhileStatement ; whileStatement->setCondition((yyvsp[-2].kt_expression)); whileStatement->setWBStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=whileStatement;}
#line 2652 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 542 "kawa.y" /* yacc.c:1646  */
    {KT_WhileStatement* whileStatement= new KT_WhileStatement; whileStatement->setCondition((yyvsp[-2].kt_expression)); whileStatement->setWBStatement((yyvsp[-5].kt_blockStatement)); (yyval.kt_blockStatement)=whileStatement;}
#line 2658 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 543 "kawa.y" /* yacc.c:1646  */
    {KT_ForStatement* forStatement= new KT_ForStatement ; forStatement->setForControl((yyvsp[-2].parser_forControl)); forStatement->setBlockStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=forStatement;}
#line 2664 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 544 "kawa.y" /* yacc.c:1646  */
    {KT_BreakStatement* breakStatement= new KT_BreakStatement ; breakStatement->setIdExist(true); breakStatement->setId((yyvsp[-1].vstring)); (yyval.kt_blockStatement)=breakStatement;}
#line 2670 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 545 "kawa.y" /* yacc.c:1646  */
    {KT_BreakStatement* breakStatement= new KT_BreakStatement ; breakStatement->setIdExist(false); (yyval.kt_blockStatement)=breakStatement;}
#line 2676 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 546 "kawa.y" /* yacc.c:1646  */
    {KT_ContinueStatement* continueStatement= new KT_ContinueStatement; continueStatement->setIdExist(true); continueStatement->setId((yyvsp[-1].vstring)); (yyval.kt_blockStatement)=continueStatement;}
#line 2682 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 547 "kawa.y" /* yacc.c:1646  */
    {KT_ContinueStatement* continueStatement= new KT_ContinueStatement ; continueStatement->setIdExist(false); (yyval.kt_blockStatement)=continueStatement;}
#line 2688 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 548 "kawa.y" /* yacc.c:1646  */
    {KT_ReturnStatement* returnStatement= new KT_ReturnStatement; returnStatement->setIsVoidReturn(false); returnStatement->setReturnExpression((yyvsp[-1].kt_expression)); (yyval.kt_blockStatement)=returnStatement;}
#line 2694 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 549 "kawa.y" /* yacc.c:1646  */
    {KT_ReturnStatement* returnStatement= new KT_ReturnStatement ; returnStatement->setIsVoidReturn(true); (yyval.kt_blockStatement)=returnStatement;}
#line 2700 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 553 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_SwitchBlockStatement)->push_back((yyvsp[0].kt_switchBlockStatement)); (yyval.vectorKT_SwitchBlockStatement)=(yyvsp[-1].vectorKT_SwitchBlockStatement);}
#line 2706 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 554 "kawa.y" /* yacc.c:1646  */
    {vector<KT_SwitchBlockStatement*>* var = new vector<KT_SwitchBlockStatement*>; (yyval.vectorKT_SwitchBlockStatement)=var;}
#line 2712 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 557 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_switchBlockStatement)=new KT_SwitchBlockStatement; (yyval.kt_switchBlockStatement)->setCaseExist(true); KT_Block* block =new KT_Block; block->setStatements(*(yyvsp[0].vectorKT_Statement)); (yyval.kt_switchBlockStatement)->setBlock(block); (yyval.kt_switchBlockStatement)->setExpression((yyvsp[-2].kt_expression));}
#line 2718 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 558 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_switchBlockStatement)=new KT_SwitchBlockStatement; (yyval.kt_switchBlockStatement)->setCaseExist(false); KT_Block* block =new KT_Block; block->setStatements(*(yyvsp[0].vectorKT_Statement)); (yyval.kt_switchBlockStatement)->setBlock(block);}
#line 2724 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 562 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-1].kt_expression)); (yyval.parser_forControl)->setInitFor((yyvsp[-3].parser_field)); }
#line 2730 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 563 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-2].kt_expression)); (yyval.parser_forControl)->setInitFor((yyvsp[-4].parser_field)); (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression));}
#line 2736 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 564 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setInitFor((yyvsp[-2].parser_field));}
#line 2742 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 565 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setInitFor((yyvsp[-3].parser_field)); (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression)); }
#line 2748 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 566 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-1].kt_expression)); PARSER_Field* initFor = new PARSER_Field; (yyval.parser_forControl)->setInitFor(initFor);}
#line 2754 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 567 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; PARSER_Field* initFor = new PARSER_Field; (yyval.parser_forControl)->setInitFor(initFor);  (yyval.parser_forControl)->setCondition((yyvsp[-2].kt_expression)); (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression));}
#line 2760 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 568 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; PARSER_Field* initFor = new PARSER_Field; (yyval.parser_forControl)->setInitFor(initFor);}
#line 2766 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 569 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression)); PARSER_Field* initFor = new PARSER_Field; (yyval.parser_forControl)->setInitFor(initFor);}
#line 2772 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 572 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_field)=new PARSER_Field; KT_Variable* var= (yyvsp[-1].kt_param)->toVariable();
																 (yyval.parser_field)->AddVariableAtFirstPosition(var); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field));
																 (yyval.parser_field)->upDateType((yyvsp[-2].kt_type)); }
#line 2780 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 575 "kawa.y" /* yacc.c:1646  */
    {
			 																	 KT_Variable* variable = (yyvsp[-3].kt_param)->toVariable(); variable->setValue((yyvsp[-1].kt_expression));
			 																	 (yyval.parser_field)=new PARSER_Field; (yyval.parser_field)->AddVariableAtFirstPosition(variable); 
			 																	 (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field)); (yyval.parser_field)->upDateType((yyvsp[-4].kt_type));
			 																	}
#line 2790 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 580 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-2].vstring));
			 								 for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it)
			 								 	{ string* n = (*it); name.push_back(n);} 
			 								 KT_Variable* var = new KT_Variable; var->setName(name); var->setFinal(false);
			 								 (yyval.parser_field)=new PARSER_Field; (yyval.parser_field)->AddVariableAtFirstPosition(var); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field));
			 								  }
#line 2801 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 586 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); 
			 													for (vector<string*>::iterator it = (yyvsp[-3].vectorString)->begin(); it != (yyvsp[-3].vectorString)->end(); ++it)
			 														{ string* n = (*it); name.push_back(n);}
			 												   KT_Variable* var = new KT_Variable; var->setName(name); var->setFinal(false);
			 												   var->setValue((yyvsp[-1].kt_expression));
			 												   (yyval.parser_field)=new PARSER_Field; (yyval.parser_field)->AddVariableAtFirstPosition(var); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field));
			 												}
#line 2813 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 596 "kawa.y" /* yacc.c:1646  */
    {vector<KT_IDExpression*>* update= new vector<KT_IDExpression*>; update->push_back((yyvsp[-1].kt_expression)); for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2819 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 597 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); 
		 																it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);}
		 																 KT_ID* id= new KT_ID ; id->setValue(name);
		 																 KT_Affectation* affectation= new KT_Affectation ; affectation->setRExpression((yyvsp[-1].kt_expression)); 
		 																 affectation->setLExpression(id);
		 																 affectation->setIndexedArray((yyvsp[-3].kt_indexedArray));
		 																 vector<KT_IDExpression*>* update= new vector<KT_IDExpression*>; 
		 																 update->push_back(affectation);
		 																 for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); 
		 																 it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); 
		 																 update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2835 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 610 "kawa.y" /* yacc.c:1646  */
    {vector<KT_IDExpression*>* update= new vector<KT_IDExpression*>; update->push_back((yyvsp[-1].kt_expression)); for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2841 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 611 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_ID* id= new KT_ID ; id->setValue(name); KT_Affectation* affectation= new KT_Affectation;
																							 affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray));
																							 vector<KT_IDExpression*>* update =new vector<KT_IDExpression*> ; 
																		update->push_back(affectation); 
																		for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin();
																		 it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2852 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 617 "kawa.y" /* yacc.c:1646  */
    {vector<KT_IDExpression*>* var = new vector<KT_IDExpression*>; (yyval.vectorKT_IDExpression)=var;}
#line 2858 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 622 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2864 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 625 "kawa.y" /* yacc.c:1646  */
    {KT_OrBinEq* expression = new KT_OrBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2870 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 626 "kawa.y" /* yacc.c:1646  */
    {KT_XOrBinEq* expression = new KT_XOrBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2876 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 627 "kawa.y" /* yacc.c:1646  */
    {KT_AndBinEq* expression = new KT_AndBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2882 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 631 "kawa.y" /* yacc.c:1646  */
    {KT_ModuloEq* expression = new KT_ModuloEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2888 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 632 "kawa.y" /* yacc.c:1646  */
    {KT_DivisionEq* expression = new KT_DivisionEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2894 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 633 "kawa.y" /* yacc.c:1646  */
    {KT_MultiplicationEq* expression = new KT_MultiplicationEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2900 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 634 "kawa.y" /* yacc.c:1646  */
    {KT_SubstractionEq* expression = new KT_SubstractionEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2906 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 635 "kawa.y" /* yacc.c:1646  */
    {KT_AdditionlEq* expression = new KT_AdditionlEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2912 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 636 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2918 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 639 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOr* expression= new KT_ExpressionOr; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2924 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 640 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2930 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 643 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionAnd* expression =new KT_ExpressionAnd; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2936 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 644 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2942 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 647 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOrLogic* expression= new KT_ExpressionOrLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2948 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 648 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2954 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 651 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOrXLogic* expression= new KT_ExpressionOrXLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2960 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 652 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2966 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 655 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionAndLogic* expression =new KT_ExpressionAndLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2972 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 656 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2978 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 659 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2984 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 660 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2990 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 661 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2996 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 664 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionGE* expression=new KT_ExpressionGE; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3002 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 665 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionGT* expression=new KT_ExpressionGT; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3008 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 666 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionLE* expression=new KT_ExpressionLE; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3014 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 667 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionLT* expression=new KT_ExpressionLT; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3020 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 668 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3026 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 671 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3032 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 672 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3038 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 673 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3044 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 674 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3050 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 677 "kawa.y" /* yacc.c:1646  */
    {KT_Addition* expression=new KT_Addition; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3056 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 678 "kawa.y" /* yacc.c:1646  */
    {KT_Substraction* expression=new KT_Substraction; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3062 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 679 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3068 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 682 "kawa.y" /* yacc.c:1646  */
    {KT_Multiplication* expression=new KT_Multiplication; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3074 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 683 "kawa.y" /* yacc.c:1646  */
    {KT_Division* expression =new KT_Division; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3080 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 684 "kawa.y" /* yacc.c:1646  */
    {KT_Modulo* expression= new KT_Modulo; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3086 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 685 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3092 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 688 "kawa.y" /* yacc.c:1646  */
    {KT_NBinary* expression = new KT_NBinary; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3098 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 689 "kawa.y" /* yacc.c:1646  */
    {KT_Negation* expression= new KT_Negation; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3104 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 690 "kawa.y" /* yacc.c:1646  */
    {KT_Minus* expression= new KT_Minus; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 3110 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 691 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3116 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 692 "kawa.y" /* yacc.c:1646  */
    {KT_PostDecrement* expression =new KT_PostDecrement; vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 3122 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 693 "kawa.y" /* yacc.c:1646  */
    {KT_PreDecrement* expression =new KT_PreDecrement; vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 3128 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 694 "kawa.y" /* yacc.c:1646  */
    {KT_PostIncrement* expression =new KT_PostIncrement; vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 3134 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 695 "kawa.y" /* yacc.c:1646  */
    {KT_PreIncrement* expression=new KT_PreIncrement; vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 3140 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 696 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3146 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 699 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)= (yyvsp[-1].kt_expression);}
#line 3152 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 700 "kawa.y" /* yacc.c:1646  */
    {KT_Entier* expression= new KT_Entier; expression->setValue((yyvsp[0].vint)); (yyval.kt_expression)=expression;}
#line 3158 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 701 "kawa.y" /* yacc.c:1646  */
    {KT_Reel* expression = new KT_Reel; expression->setValue((yyvsp[0].vfloat)); (yyval.kt_expression)=expression;}
#line 3164 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 702 "kawa.y" /* yacc.c:1646  */
    {KT_String* expression = new KT_String; expression->setValue((yyvsp[0].vstring)); (yyval.kt_expression)=expression;}
#line 3170 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 703 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3176 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 704 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3182 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 705 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_linkedMethodOrVarCall);}
#line 3188 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 706 "kawa.y" /* yacc.c:1646  */
    {KT_Bool* expression= new KT_Bool; expression->setValue(true); (yyval.kt_expression)=expression; }
#line 3194 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 707 "kawa.y" /* yacc.c:1646  */
    {KT_Bool* expression= new KT_Bool; expression->setValue(false); (yyval.kt_expression)=expression;}
#line 3200 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 708 "kawa.y" /* yacc.c:1646  */
    {KT_Null* expression = new KT_Null; (yyval.kt_expression)=expression;}
#line 3206 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 711 "kawa.y" /* yacc.c:1646  */
    {KT_ConstructorCall* expression =new KT_ConstructorCall; expression->addString((yyvsp[-2].vstring)); expression->addVectorString(*(yyvsp[-1].vectorString)); expression->setParams(*(yyvsp[0].vectorKT_ParamsMethodCall)); (yyval.kt_expression)=expression;}
#line 3212 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 714 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_MethodCall* expression =new KT_MethodCall; expression->setName(name); expression->setParams(*(yyvsp[0].vectorKT_ParamsMethodCall)); (yyval.kt_methodCall)=expression;}
#line 3218 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 717 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back((yyvsp[-1].vint)); KT_Type* type = new KT_Type; type->setBasicType(true); vector<string*> typeName; typeName.push_back((yyvsp[-3].vstring)); type->setTypeName(typeName); type->setArrayDim(0); KT_ArrayInitilizer* expression = new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); (yyval.kt_expression)=expression;}
#line 3224 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 719 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back((yyvsp[-1].vint)); KT_Type* type = new KT_Type; type->setBasicType(false); type->addString((yyvsp[-4].vstring)); type->addVectorString(*(yyvsp[-3].vectorString)); type->setArrayDim(0); KT_ArrayInitilizer* expression =new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); (yyval.kt_expression)=expression;}
#line 3230 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 722 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-3].vstring)); ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3236 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 723 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3242 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 724 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].kt_methodCall)->setNameAddStringAtFirstPosition((yyvsp[-3].vstring));  (yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3248 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 725 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3254 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 728 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); (yyval.vectorKT_MethodOrVarCall)=(yyvsp[0].vectorKT_MethodOrVarCall); }
#line 3260 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 729 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); (yyval.vectorKT_MethodOrVarCall)=(yyvsp[0].vectorKT_MethodOrVarCall);}
#line 3266 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 730 "kawa.y" /* yacc.c:1646  */
    { vector<KT_MethodOrVarCall*>* vect= new vector<KT_MethodOrVarCall*>; (yyval.vectorKT_MethodOrVarCall)=vect; }
#line 3272 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3276 "kawa.cpp" /* yacc.c:1646  */
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
#line 734 "kawa.y" /* yacc.c:1906  */


int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d]\n", yytext, lineno/*, column-strlen(yytext)*/);
  return 0;
}

