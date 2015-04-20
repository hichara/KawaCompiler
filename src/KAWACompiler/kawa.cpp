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
#line 100 "kawa.y" /* yacc.c:355  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   817

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  456

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
       0,   222,   222,   223,   224,   227,   231,   232,   235,   236,
     239,   242,   243,   246,   247,   250,   251,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   266,   267,   268,   269,
     270,   271,   274,   275,   278,   279,   282,   283,   284,   288,
     289,   292,   293,   297,   298,   302,   303,   308,   311,   315,
     316,   317,   320,   321,   322,   323,   327,   329,   330,   333,
     334,   339,   340,   343,   346,   347,   351,   352,   355,   358,
     359,   361,   362,   365,   368,   369,   372,   373,   376,   377,
     380,   381,   384,   388,   391,   392,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   413,   415,   416,   418,   419,   422,   424,   425,
     426,   429,   431,   432,   433,   436,   438,   439,   440,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   459,   460,   463,   464,   468,   469,   470,   471,
     472,   473,   474,   475,   478,   479,   480,   481,   485,   486,
     489,   490,   491,   496,   499,   500,   501,   505,   506,   507,
     508,   509,   510,   513,   514,   517,   518,   521,   522,   525,
     526,   529,   530,   533,   534,   535,   538,   539,   540,   541,
     542,   545,   546,   547,   548,   551,   552,   553,   556,   557,
     558,   559,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   585,   588,   591,   593,   596,   597,   598,   599,   602,
     603,   604
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

#define YYPACT_NINF -387

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-387)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    -1,    73,    43,    -9,  -387,    79,  -387,  -387,  -387,
      87,   283,    30,  -387,  -387,  -387,  -387,  -387,  -387,   119,
     131,  -387,    26,    26,    -4,    80,   140,   151,  -387,  -387,
      30,  -387,    43,   219,   152,   162,    88,  -387,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -387,  -387,    98,  -387,
     106,   162,    96,    98,  -387,  -387,  -387,   184,   106,   120,
    -387,  -387,  -387,  -387,   142,   127,    98,  -387,   106,   146,
     233,  -387,  -387,   404,  -387,  -387,  -387,  -387,   739,  -387,
      98,   251,   255,   257,   -20,   258,   142,   188,   188,   188,
     150,   191,  -387,   -43,  -387,   197,   198,   191,  -387,   193,
     771,  -387,  -387,   606,   200,   191,  -387,  -387,  -387,  -387,
    -387,  -387,   268,  -387,   351,  -387,  -387,  -387,   110,   203,
    -387,  -387,   510,  -387,   270,   271,   606,   606,   606,   606,
     606,  -387,   213,   235,   244,   236,   234,   238,   137,   158,
     -17,   123,   156,  -387,  -387,  -387,   222,  -387,  -387,   292,
     230,  -387,   106,   229,   792,    78,   225,   237,   227,   232,
      -2,    21,   239,   240,   174,   218,   242,   243,   245,   247,
    -387,  -387,   106,  -387,  -387,  -387,  -387,  -387,  -387,  -387,
     241,  -387,  -387,   301,   499,  -387,  -387,  -387,   305,    98,
     248,  -387,  -387,  -387,  -387,   249,  -387,  -387,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,  -387,   260,   200,  -387,  -387,
    -387,  -387,     7,   106,   307,    12,   292,   272,   259,   320,
     606,   606,   262,  -387,   275,  -387,    84,   606,   308,  -387,
     277,    41,    33,    36,    49,   292,  -387,    67,   222,    97,
     273,   276,    67,   222,   -14,   366,  -387,   235,   235,   235,
     235,   235,   235,   235,   235,   244,   236,   234,   238,   137,
     158,   158,   123,   123,   123,   123,   123,   123,   123,   156,
     156,  -387,  -387,  -387,  -387,  -387,  -387,   345,   292,   292,
      17,   279,   200,   606,  -387,   -44,   280,   281,  -387,  -387,
      98,   533,   268,   286,   284,   290,   278,  -387,    67,   293,
     296,  -387,  -387,   304,  -387,  -387,   306,  -387,  -387,   321,
     200,  -387,  -387,   400,  -387,   639,  -387,  -387,  -387,   402,
    -387,   312,    98,   200,   200,   395,   106,   328,   338,   340,
     428,   368,   174,   348,    69,   641,   354,   -35,   174,   538,
     174,   606,   355,    41,  -387,   359,   360,   374,   376,   373,
    -387,   375,  -387,   106,   378,   380,     8,   292,  -387,  -387,
    -387,   606,   439,  -387,   606,  -387,    89,  -387,   381,   641,
     606,  -387,  -387,   641,   384,  -387,   379,  -387,   296,  -387,
    -387,  -387,  -387,   328,  -387,   292,  -387,  -387,   200,   386,
     174,   -18,   200,   328,   674,  -387,  -387,   200,  -387,   641,
     388,  -387,   276,   200,   389,  -387,  -387,   606,   391,  -387,
    -387,  -387,   409,    89,   381,  -387,  -387,  -387,  -387,   397,
    -387,   405,  -387,   606,   328,  -387,  -387,  -387,   450,   381,
     427,   450,  -387,   606,   381,  -387
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,    46,     0,     1,    35,    33,     5,    34,
       0,     0,    38,    26,    28,    27,    31,    30,    29,     0,
       0,    32,     4,     4,     0,     0,    40,    42,     2,     3,
      38,    37,    46,     0,    44,     0,     0,    36,    45,    25,
      18,    20,    21,    22,    23,    17,    19,    24,     7,    39,
      14,     0,     0,     7,    41,    58,    48,     0,    14,     0,
      11,    43,    51,    47,     9,    33,     7,    12,    14,    33,
       0,    10,    56,     0,    57,     6,    13,    49,     0,    50,
       7,     0,     0,     0,     7,     0,     9,     0,     0,     0,
      75,     0,    67,    65,     8,     0,     0,     0,    68,     0,
       0,    85,    55,     0,    62,     0,    60,    59,    54,    66,
      76,    77,     0,    74,     0,   202,   203,   204,   221,     0,
     209,   208,     0,   210,     0,     0,     0,     0,     0,     0,
       0,    64,   153,   162,   164,   166,   168,   170,   172,   175,
     180,   184,   187,   191,   200,   205,   221,   206,   207,     0,
       0,    53,    14,    79,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,    83,    14,   119,    84,    86,    88,    89,    87,   100,
       0,   198,   196,     0,     0,    70,   212,   216,     0,     7,
       0,   199,   197,   195,   194,     0,   192,   193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,    65,    62,    52,    82,
      75,    73,    14,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,     0,   127,     0,     0,     0,   131,
       0,   104,   114,   110,   118,     0,    98,   221,   221,   221,
       0,    81,   221,   221,     0,     0,   201,   161,   160,   159,
     158,   157,   156,   154,   155,   163,   165,   167,   169,   171,
     174,   173,   178,   176,   177,   179,   183,   182,   181,   185,
     186,   190,   188,   189,    63,    61,    78,     0,     0,     0,
     221,     0,    62,     0,    99,   221,     0,     0,   128,   126,
       7,     0,     0,     0,     0,     0,     0,   130,   221,     0,
     106,   112,   113,     0,   108,   109,     0,   116,   117,     0,
      62,   219,   220,     0,    69,     0,    72,   215,   217,     0,
     211,     0,     7,    62,    62,     0,    14,    16,     0,     0,
       0,     0,     0,     0,    14,   142,     0,    62,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,     0,     0,
      80,     0,   213,    14,     0,     0,   221,     0,    15,    93,
      96,     0,   120,   133,     0,   146,   221,   143,   152,   140,
       0,   144,   125,   138,     0,   123,     0,   102,   106,   111,
     107,   115,    94,    16,   214,     0,    92,    95,    62,     0,
       0,     0,    62,    16,     0,   148,   141,    62,   139,   136,
       0,   105,    81,    62,     0,    97,   121,     0,     0,   122,
     132,   147,     0,   221,   152,   145,   137,   124,    71,     0,
      91,     0,    85,     0,    16,   150,    90,    85,   135,   152,
       0,   134,   149,     0,   152,   151
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -387,   223,  -387,   -53,   419,   457,   -68,   -48,  -287,  -113,
    -387,    68,  -387,   479,  -387,  -387,  -387,   478,  -387,  -387,
    -387,  -387,  -387,  -387,  -387,  -387,  -215,  -229,   285,    62,
     167,  -139,   177,   295,  -387,  -387,  -387,    91,   214,    22,
    -270,  -387,  -387,  -387,   129,  -387,  -387,  -387,  -387,  -387,
    -387,  -160,  -387,  -387,  -387,  -387,  -364,  -386,  -100,  -387,
     403,   322,   331,   341,   330,   319,    59,  -387,   221,    52,
     -92,  -243,  -387,  -172,  -387,  -387,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    58,    71,    54,    49,    67,   237,    50,
      21,    11,    10,    25,    34,    36,    52,     7,    22,    23,
      63,    69,    79,    56,    65,    74,   150,   227,   104,    91,
     185,   186,   260,    99,   100,   113,   231,   336,   153,   173,
     114,   174,   175,   319,   364,   176,   326,   177,   323,   178,
     329,   179,   411,   430,   313,   314,   387,   415,   388,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   187
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   172,    60,   131,   248,    82,   225,   302,   320,   190,
      85,   258,   295,    75,   180,   301,   263,   238,   351,   427,
      76,    30,   428,   242,     4,   416,   330,    86,   195,   418,
     -16,   103,   112,    -7,   193,   194,   321,   196,   197,   390,
     324,   233,    -7,     1,   115,   116,   244,   183,   445,   350,
     217,   218,   219,   184,    90,   436,   117,   149,   322,     6,
     378,   325,   258,   452,   327,   250,   318,   263,   455,   343,
     344,    57,   119,     5,   328,   120,   121,    90,   429,   339,
      31,     8,    -7,   184,   261,   122,   123,   348,   243,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   297,   345,
      59,    -7,     9,   -14,   229,   184,    68,   236,   345,   310,
      -7,   245,    12,   102,   184,   368,   422,   331,   332,   108,
     398,    24,   337,   338,   255,   340,   432,   151,   374,   375,
     291,   292,   293,    73,   181,   182,   264,    78,   128,   385,
     306,   307,   391,   384,    26,   181,   182,   315,   408,    95,
      96,    97,   -16,   181,   182,   105,    27,   450,   183,   -62,
     331,   149,    59,    -7,   184,   337,   181,   182,    33,   234,
      32,   235,   448,   258,   311,   184,   423,   451,   312,    35,
     345,    51,    -7,    55,   298,   299,   184,    53,   183,    57,
     333,    62,   382,   424,   184,   211,   212,   431,   392,    59,
     395,   183,   435,   349,   220,   221,   158,   184,   439,    66,
     159,   356,   160,   161,    68,   162,   163,   164,   213,   214,
     165,   115,   116,    72,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   117,    70,   261,   331,   215,   216,   222,
     223,   224,    77,   118,    48,    28,    29,   346,    98,   119,
     426,    92,   120,   121,    92,    92,    92,   354,    80,   394,
      92,   396,   122,   123,   198,   199,   200,   201,   202,   101,
     280,   281,   289,   290,   124,   125,    87,   203,   204,   205,
      88,   409,    89,    93,   412,    90,   101,   106,   107,   373,
     417,   109,   149,   152,   188,   191,   192,   206,   377,   126,
     127,    13,    14,    15,    16,    17,    18,   207,   249,    19,
      20,   209,   208,   183,   434,   128,   210,   226,   129,   130,
     228,   230,   184,    75,   240,   405,   257,   441,   239,   241,
     262,   256,   300,   413,   103,   172,   246,   247,   172,   251,
     252,   265,   253,   449,   254,   305,   303,   266,   180,   304,
     316,   180,   308,   454,   115,   116,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   309,   117,   317,   335,   341,
     342,   334,   154,   347,   359,   361,   155,   363,   352,   353,
     444,   156,   157,   158,   358,   120,   121,   159,   360,   160,
     161,   362,   162,   163,   164,   122,   123,   165,   166,   167,
     168,   169,   365,   369,   366,   371,   372,   124,   125,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    81,   367,
     376,   350,    13,    14,    15,    16,    17,    18,   379,    48,
     380,   301,   126,   127,   282,   283,   284,   285,   286,   287,
     288,   170,   381,   383,   389,   397,   101,   171,   128,   399,
     400,   129,   130,   115,   116,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   401,   117,   402,   403,   406,   404,
     407,   154,   410,   414,   419,   155,   425,   420,   437,   440,
     156,   157,   158,   443,   120,   121,   159,   446,   160,   161,
     442,   162,   163,   164,   122,   123,   165,   166,   167,   168,
     169,   453,   115,   116,   447,    94,   124,   125,    61,    37,
      38,   294,   370,   438,   117,    39,    40,    41,    42,    43,
      44,    45,    46,    47,   259,   296,   357,   421,   275,   279,
     119,   126,   127,   120,   121,   189,   115,   116,   276,   278,
     170,   115,   116,   122,   123,   101,     0,   128,   117,   277,
     129,   130,     0,   117,     0,   124,   125,     0,   118,     0,
       0,     0,     0,   118,   119,     0,     0,   120,   121,   119,
       0,     0,   120,   121,     0,     0,     0,   122,   123,     0,
     126,   127,   122,   123,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,   124,   125,   128,    98,     0,   129,
     130,   267,   268,   269,   270,   271,   272,   273,   274,   115,
     116,     0,     0,     0,   126,   127,     0,     0,     0,   126,
     127,   117,     0,   355,     0,     0,     0,     0,   393,     0,
     128,   118,     0,   129,   130,   128,     0,   119,   129,   130,
     120,   121,   115,   116,   115,   116,     0,     0,     0,     0,
     122,   123,     0,     0,   117,     0,   117,     0,     0,     0,
       0,     0,   124,   125,   259,     0,   386,     0,     0,     0,
     119,     0,   119,   120,   121,   120,   121,   115,   116,     0,
       0,     0,     0,   122,   123,   122,   123,   126,   127,   117,
       0,     0,     0,     0,     0,   124,   125,   124,   125,   433,
       0,     0,     0,   128,     0,   119,   129,   130,   120,   121,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     126,   127,   126,   127,     0,     0,     0,     0,     0,     0,
     124,   125,     0,     0,     0,     0,   128,     0,   128,   129,
     130,   129,   130,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    83,     0,   126,   127,    13,    14,    15,
      16,    17,    18,     0,    84,     0,     0,     0,     0,     0,
       0,   128,     0,     0,   129,   130,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,   111,    48,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   232
};

static const yytype_int16 yycheck[] =
{
      53,   114,    50,   103,   164,    73,   146,   236,   251,   122,
      78,   183,   227,    66,   114,     3,   188,   156,   305,    37,
      68,    25,    40,    25,    25,   389,   255,    80,   128,   393,
      74,    74,   100,    25,   126,   127,     3,   129,   130,    74,
       4,   154,    25,    17,     3,     4,    25,    91,   434,    93,
      67,    68,    69,    97,    97,   419,    15,    92,    25,    16,
     347,    25,   234,   449,    15,   165,    25,   239,   454,   298,
     299,    91,    31,     0,    25,    34,    35,    97,    96,    93,
      84,    90,    74,    97,   184,    44,    45,   302,    90,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    91,    91,
      93,    93,    23,    25,   152,    97,    94,   155,    91,    25,
      93,    90,    25,    91,    97,   330,   403,   257,   258,    97,
     363,    91,   262,   263,   172,   264,   413,   105,   343,   344,
     222,   223,   224,    65,    56,    57,   189,    69,    97,   354,
     240,   241,   357,    74,    25,    56,    57,   247,   377,    87,
      88,    89,    74,    56,    57,    93,    25,   444,    91,    90,
     300,    92,    93,    74,    97,   305,    56,    57,    28,    91,
      90,    93,   442,   345,    90,    97,   405,   447,   246,    28,
      91,    29,    93,    95,   232,   233,    97,    25,    91,    91,
      93,    95,   352,   408,    97,    58,    59,   412,   358,    93,
     360,    91,   417,   303,    81,    82,    32,    97,   423,    25,
      36,   311,    38,    39,    94,    41,    42,    43,    60,    61,
      46,     3,     4,    96,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    15,    92,   335,   376,    79,    80,    83,
      84,    85,    96,    25,    25,    22,    23,   300,    98,    31,
     410,    84,    34,    35,    87,    88,    89,   310,    25,   359,
      93,   361,    44,    45,    51,    52,    53,    54,    55,    95,
     211,   212,   220,   221,    56,    57,    25,    64,    65,    66,
      25,   381,    25,    25,   384,    97,    95,    90,    90,   342,
     390,    98,    92,    25,    91,    25,    25,    62,   346,    81,
      82,    18,    19,    20,    21,    22,    23,    63,    90,    26,
      27,    77,    76,    91,   414,    97,    78,    25,   100,   101,
      90,    92,    97,   376,    97,   373,    25,   427,    91,    97,
      25,    90,    25,   386,    74,   448,    97,    97,   451,    97,
      97,    93,    97,   443,    97,    25,    74,    98,   448,    90,
      42,   451,    90,   453,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    90,    15,    90,    92,     3,
      25,    98,    21,    94,    90,    97,    25,    81,    98,    98,
     433,    30,    31,    32,    98,    34,    35,    36,    98,    38,
      39,    98,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    98,     3,    98,     3,    94,    56,    57,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    98,
      25,    93,    18,    19,    20,    21,    22,    23,    90,    25,
      90,     3,    81,    82,   213,   214,   215,   216,   217,   218,
     219,    90,    74,    95,    90,    90,    95,    96,    97,    90,
      90,   100,   101,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    90,    15,    90,    94,    90,    94,
      90,    21,    33,    92,    90,    25,    90,    98,    90,    90,
      30,    31,    32,    74,    34,    35,    36,    90,    38,    39,
      99,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    74,     3,     4,    99,    86,    56,    57,    51,    30,
      32,   226,   335,   422,    15,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    25,   230,   312,   398,   206,   210,
      31,    81,    82,    34,    35,    25,     3,     4,   207,   209,
      90,     3,     4,    44,    45,    95,    -1,    97,    15,   208,
     100,   101,    -1,    15,    -1,    56,    57,    -1,    25,    -1,
      -1,    -1,    -1,    25,    31,    -1,    -1,    34,    35,    31,
      -1,    -1,    34,    35,    -1,    -1,    -1,    44,    45,    -1,
      81,    82,    44,    45,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    56,    57,    97,    98,    -1,   100,
     101,   198,   199,   200,   201,   202,   203,   204,   205,     3,
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
      27,   112,   120,   121,    91,   115,    25,    25,   103,   103,
      25,    84,    90,    28,   116,    28,   117,   115,   119,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    25,   108,
     111,    29,   118,    25,   107,    95,   125,    91,   105,    93,
     109,   107,    95,   122,   105,   126,    25,   109,    94,   123,
      92,   106,    96,   113,   127,   105,   109,    96,   113,   124,
      25,    14,   108,    14,    25,   108,   105,    25,    25,    25,
      97,   131,   132,    25,   106,   131,   131,   131,    98,   135,
     136,    95,   141,    74,   130,   131,    90,    90,   141,    98,
      21,    24,   108,   137,   142,     3,     4,    15,    25,    31,
      34,    35,    44,    45,    56,    57,    81,    82,    97,   100,
     101,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,    92,
     128,   141,    25,   140,    21,    25,    30,    31,    32,    36,
      38,    39,    41,    42,    43,    46,    47,    48,    49,    50,
      90,    96,   111,   141,   143,   144,   147,   149,   151,   153,
     160,    56,    57,    91,    97,   132,   133,   178,    91,    25,
     111,    25,    25,   172,   172,   160,   172,   172,    51,    52,
      53,    54,    55,    64,    65,    66,    62,    63,    76,    77,
      78,    58,    59,    60,    61,    79,    80,    67,    68,    69,
      81,    82,    83,    84,    85,   178,    25,   129,    90,   109,
      92,   138,    25,   111,    91,    93,   109,   110,   133,    91,
      97,    97,    25,    90,    25,    90,    97,    97,   153,    90,
     160,    97,    97,    97,    97,   109,    90,    25,   175,    25,
     134,   160,    25,   175,   105,    93,    98,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   164,   165,   166,   167,
     168,   168,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   172,   172,   172,   130,   128,   135,    91,   109,   109,
      25,     3,   129,    74,    90,    25,   160,   160,    90,    90,
      25,    90,   108,   156,   157,   160,    42,    90,    25,   145,
     173,     3,    25,   150,     4,    25,   148,    15,    25,   152,
     129,   178,   178,    93,    98,    92,   139,   178,   178,    93,
     133,     3,    25,   129,   129,    91,   105,    94,   128,   160,
      93,   110,    98,    98,   105,    90,   160,   140,    98,    90,
      98,    97,    98,    81,   146,    98,    98,    98,   128,     3,
     134,     3,    94,   105,   128,   128,    25,   109,   110,    90,
      90,    74,   153,    95,    74,   128,    25,   158,   160,    90,
      74,   128,   153,    90,   160,   153,   160,    90,   173,    90,
      90,    90,    90,    94,    94,   109,    90,    90,   129,   160,
      33,   154,   160,   105,    92,   159,   158,   160,   158,    90,
      98,   146,   110,   129,   128,    90,   153,    37,    40,    96,
     155,   128,   110,    25,   160,   128,   158,    90,   139,   128,
      90,   160,    99,    74,   105,   159,    90,    99,   142,   160,
     110,   142,   159,    74,   160,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   103,   104,   105,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   121,   122,
     123,   123,   124,   124,   124,   124,   125,   126,   126,   127,
     127,   128,   128,   129,   130,   130,   131,   131,   132,   133,
     133,   134,   134,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   141,   142,   142,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   145,   145,   146,   146,   147,   148,   148,
     148,   149,   150,   150,   150,   151,   152,   152,   152,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   156,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   157,   157,   158,   158,
     159,   159,   159,   160,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   167,   168,   168,   168,   168,
     168,   169,   169,   169,   169,   170,   170,   170,   171,   171,
     171,   171,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   174,   175,   176,   176,   177,   177,   177,   177,   178,
     178,   178
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     0,     3,     3,     0,     4,     0,
       3,     2,     3,     3,     0,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     0,     3,     2,     0,     2,
       0,     2,     0,     2,     0,     6,     0,     5,     4,     3,
       2,     0,     6,     5,     5,     4,     3,     2,     0,     5,
       5,     3,     0,     2,     2,     0,     3,     1,     2,     3,
       1,     6,     2,     4,     2,     0,     1,     1,     2,     0,
       2,     0,     2,     3,     2,     0,     1,     1,     1,     1,
       9,     8,     6,     5,     5,     6,     5,     7,     2,     3,
       1,     1,     5,     2,     0,     3,     0,     5,     1,     1,
       0,     5,     1,     1,     0,     5,     1,     1,     0,     1,
       5,     7,     7,     5,     7,     5,     3,     2,     3,     2,
       3,     2,     2,     0,     4,     3,     4,     5,     3,     4,
       3,     4,     2,     3,     3,     5,     3,     5,     2,     6,
       3,     7,     0,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     5,     6,     4,     2,     4,     2,     3,
       3,     0
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
    { (yyval.kt_program)= new KT_Program; (yyvsp[-1].kt_class)->setModifier((yyvsp[-2].kt_modifier)); (yyvsp[-1].kt_class)->setImports(*(yyvsp[-3].vectorVecorString)); (yyval.kt_program)->addPackageWithClass((yyvsp[-4].kt_package), (yyvsp[-1].kt_class)); string* name = (yyvsp[-1].kt_class)->getName(); cout<<*name<<endl;}
#line 1815 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 223 "kawa.y" /* yacc.c:1646  */
    { (yyval.kt_program)= new KT_Program; (yyvsp[-1].kt_interface)->setModifier((yyvsp[-2].kt_modifier)); (yyvsp[-1].kt_interface)->setImports(*(yyvsp[-3].vectorVecorString));(yyval.kt_program)->addPackageWithInterface((yyvsp[-4].kt_package), (yyvsp[-1].kt_interface));}
#line 1821 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 224 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_program)= new KT_Program;}
#line 1827 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 227 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_package)= new KT_Package; (yyval.kt_package)->setName((yyvsp[-1].vstring));}
#line 1833 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 231 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorString)->push_back((yyvsp[-1].vstring)); (yyval.vectorString)=(yyvsp[0].vectorString);}
#line 1839 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 232 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 1845 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 235 "kawa.y" /* yacc.c:1646  */
    {string* name=(yyvsp[-2].vstring); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); listName.push_back(n);} (yyval.vectorString)=&listName;}
#line 1851 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 236 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 1857 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 239 "kawa.y" /* yacc.c:1646  */
    {string* name=(yyvsp[-2].vstring); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); listName.push_back(n);} (yyval.vectorString)=&listName; }
#line 1863 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 242 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_type)=new KT_Type; (yyval.kt_type)->setBasicType(true); (yyval.kt_type)->setArray((yyvsp[0].parser_array)); vector<string*> name; name.push_back((yyvsp[-1].vstring)); (yyval.kt_type)->setTypeName(name); }
#line 1869 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 243 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_type)=new KT_Type; (yyval.kt_type)->setBasicType(false); (yyval.kt_type)->setArray((yyvsp[0].parser_array)); vector<string*> name; name.push_back((yyvsp[-2].vstring)); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} (yyval.kt_type)->setTypeName(name);}
#line 1875 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 246 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].parser_array)->setArray(true); (yyval.parser_array)->setArrayDim((yyval.parser_array)->getArrayDim()+1);}
#line 1881 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 247 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_array)=new PARSER_Array; (yyval.parser_array)->setArray(false); (yyval.parser_array)->setArrayDim(0);}
#line 1887 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 250 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].kt_indexedArray)->setIndexAddIntAtFirstPosition((yyvsp[-2].vint)); (yyval.kt_indexedArray)=(yyvsp[0].kt_indexedArray);}
#line 1893 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 251 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* var; (yyval.kt_indexedArray)=var;}
#line 1899 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 254 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1905 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 255 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1911 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 256 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1917 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 257 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1923 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 258 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1929 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 259 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1935 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 260 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1941 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 261 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1947 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 262 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=(yyvsp[0].vstring);}
#line 1953 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 266 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(1);}
#line 1959 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 267 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(2);}
#line 1965 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 268 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setVisibility(3);}
#line 1971 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 269 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setStatic(true);}
#line 1977 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 270 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setAbstract(true);}
#line 1983 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 271 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setFinal(true);}
#line 1989 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 274 "kawa.y" /* yacc.c:1646  */
    {if((yyvsp[0].kt_modifier)->isStatic()){(yyvsp[-1].kt_modifier)->setStatic(true);} if((yyvsp[0].kt_modifier)->isAbstract()){(yyvsp[-1].kt_modifier)->setAbstract(true);} if((yyvsp[0].kt_modifier)->isFinal()){(yyvsp[-1].kt_modifier)->setFinal(true);} if((yyvsp[0].kt_modifier)->getVisibility()>0) (yyvsp[-1].kt_modifier)->setVisibility((yyvsp[0].kt_modifier)->getVisibility());}
#line 1995 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 275 "kawa.y" /* yacc.c:1646  */
    {KT_Modifier* modifier; (yyval.kt_modifier)=modifier;}
#line 2001 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 278 "kawa.y" /* yacc.c:1646  */
    {(yyval.vbool)=true;}
#line 2007 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 279 "kawa.y" /* yacc.c:1646  */
    {(yyval.vbool)=false;}
#line 2013 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 282 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-1].vstring)); for (vector<string*>::iterator it = (yyvsp[0].vectorString)->begin(); it != (yyvsp[0].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} (yyval.vectorString)=&name;}
#line 2019 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 283 "kawa.y" /* yacc.c:1646  */
    {string name="*"; (yyval.vectorString)->push_back(&name);}
#line 2025 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 284 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 2031 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 288 "kawa.y" /* yacc.c:1646  */
    {vector<string*> typeName =(yyvsp[0].kt_type)->getTypeName(); string* name=new string; for (vector<string*>::iterator it = typeName.begin(); it != typeName.end(); ++it){ string* n = (*it); if(it!=typeName.begin()){*name = *name + "." +*n;}else{name=n;}}  (yyval.vstring)=name;}
#line 2037 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 289 "kawa.y" /* yacc.c:1646  */
    {(yyval.vstring)=new string;}
#line 2043 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 292 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorString)=(yyvsp[0].vectorString);}
#line 2049 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 293 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 2055 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 297 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorString)=(yyvsp[0].vectorString);}
#line 2061 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 298 "kawa.y" /* yacc.c:1646  */
    {vector<string*>* var; (yyval.vectorString)=var;}
#line 2067 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 302 "kawa.y" /* yacc.c:1646  */
    {vector<string*> importvar; if((yyvsp[-4].vbool)==true){string* s=new string("static"); importvar.push_back(s);} importvar.push_back((yyvsp[-3].vstring)); for (vector<string*>::iterator it = (yyvsp[-2].vectorString)->begin(); it != (yyvsp[-2].vectorString)->end(); ++it){ string* n = (*it); importvar.push_back(n);} (yyvsp[0].vectorVecorString)->push_back(importvar); (yyval.vectorVecorString)=(yyvsp[0].vectorVecorString); }
#line 2073 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 303 "kawa.y" /* yacc.c:1646  */
    {vector<vector<string*>>* var; (yyval.vectorVecorString)=var; }
#line 2079 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 308 "kawa.y" /* yacc.c:1646  */
    { (yyval.kt_class)=new KT_Class; (yyval.kt_class)->setName((yyvsp[-3].vstring)); (yyval.kt_class)->setParentClass((yyvsp[-2].vstring)); (yyval.kt_class)->setParentInterfaces(*(yyvsp[-1].vectorString)); (yyval.kt_class)->setMemberDec(*(yyvsp[0].vectorPARSER_MemberDec));}
#line 2085 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 311 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_interface)=new KT_Interface; (yyval.kt_interface)->setName((yyvsp[-2].vstring)); (yyval.kt_interface)->setInterfacesparent(*(yyvsp[-1].vectorString)); (yyval.kt_interface)->setPrototypes(*(yyvsp[0].vectorKT_Prototype));}
#line 2091 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 315 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorPARSER_MemberDec)=(yyvsp[-1].vectorPARSER_MemberDec);}
#line 2097 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 316 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorPARSER_MemberDec)->push_back((yyvsp[0].parser_memberDec)); (yyval.vectorPARSER_MemberDec)=(yyvsp[-1].vectorPARSER_MemberDec);}
#line 2103 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 317 "kawa.y" /* yacc.c:1646  */
    {vector<PARSER_MemberDec*>* var; (yyval.vectorPARSER_MemberDec)=var;}
#line 2109 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 320 "kawa.y" /* yacc.c:1646  */
    {/*PARSER_MemeberDec*/(yyval.parser_memberDec)=new PARSER_MemberDec;}
#line 2115 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 321 "kawa.y" /* yacc.c:1646  */
    {KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName((yyvsp[-2].vstring)); methode->setModifier((yyvsp[-4].kt_modifier)) ; methode->setParams(*(yyvsp[-1].vectorKT_Param)); methode->setType((yyvsp[-3].kt_type)); methode->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=methode;}
#line 2121 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 322 "kawa.y" /* yacc.c:1646  */
    {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName((yyvsp[-2].vstring)); methode->setModifier((yyvsp[-4].kt_modifier)) ; methode->setParams(*(yyvsp[-1].vectorKT_Param)); methode->setType(type); methode->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=methode;}
#line 2127 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 323 "kawa.y" /* yacc.c:1646  */
    {KT_Constructor* constructor =new KT_Constructor; constructor->setIndexParser(1); constructor->setName((yyvsp[-2].vstring)); constructor->setModifier((yyvsp[-3].kt_modifier)) ; constructor->setParams(*(yyvsp[-1].vectorKT_Param)) ; constructor->setBlock((yyvsp[0].kt_block)) ; (yyval.parser_memberDec)=constructor;}
#line 2133 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 327 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Prototype)=(yyvsp[-1].vectorKT_Prototype);}
#line 2139 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 329 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_Prototype)->push_back((yyvsp[0].kt_prototype)); (yyval.vectorKT_Prototype)=(yyvsp[-1].vectorKT_Prototype);}
#line 2145 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 330 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Prototype*>* var; (yyval.vectorKT_Prototype)=var;}
#line 2151 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 333 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_prototype) = new KT_Prototype; (yyval.kt_prototype)->setName((yyvsp[-2].vstring)); (yyval.kt_prototype)->setReturnType((yyvsp[-3].kt_type)); (yyval.kt_prototype)->setModifier((yyvsp[-4].kt_modifier)); (yyval.kt_prototype)->setParams(*(yyvsp[-1].vectorKT_Param));}
#line 2157 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 334 "kawa.y" /* yacc.c:1646  */
    {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); (yyval.kt_prototype) = new KT_Prototype; (yyval.kt_prototype)->setName((yyvsp[-2].vstring)); (yyval.kt_prototype)->setReturnType(type); (yyval.kt_prototype)->setModifier((yyvsp[-4].kt_modifier)); (yyval.kt_prototype)->setParams(*(yyvsp[-1].vectorKT_Param));}
#line 2163 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 339 "kawa.y" /* yacc.c:1646  */
    { (yyval.parser_field)->AddVariableAtFirstPosition((yyvsp[-1].kt_variable)); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field)); }
#line 2169 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 340 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_field)=new PARSER_Field;}
#line 2175 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 343 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_variable)=new KT_Variable; vector<string*> name; name.push_back((yyvsp[-1].vstring)); (yyval.kt_variable)->setName(name); (yyval.kt_variable)->setValue((yyvsp[0].kt_expression));}
#line 2181 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 346 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2187 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 347 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=new KT_Expression;}
#line 2193 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 351 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Param)=(yyvsp[-1].vectorKT_Param);}
#line 2199 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 352 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Param*>* vect; (yyval.vectorKT_Param)=vect;}
#line 2205 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 355 "kawa.y" /* yacc.c:1646  */
    {vector<KT_ParamsMethodCall*>* vect; (yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2211 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 358 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[-1].vectorKT_ParamsMethodCall);}
#line 2217 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 359 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[0].vectorKT_ParamsMethodCall);}
#line 2223 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 361 "kawa.y" /* yacc.c:1646  */
    {KT_ID* id = new KT_ID; vector<string*> name; name.push_back((yyvsp[-5].vstring)); id->setValue(name); (yyvsp[-1].kt_indexedArray)->setIndexAddIntAtFirstPosition((yyvsp[-3].vint)); KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setIndexedArray((yyvsp[-1].kt_indexedArray)); param->setExpression(id); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = (yyvsp[0].vectorKT_ParamsMethodCall)->begin(); it != (yyvsp[0].vectorKT_ParamsMethodCall)->end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} (yyval.vectorKT_ParamsMethodCall)=&vect;}
#line 2229 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 362 "kawa.y" /* yacc.c:1646  */
    {KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setExpression((yyvsp[-1].kt_expression)); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = (yyvsp[0].vectorKT_ParamsMethodCall)->begin(); it != (yyvsp[0].vectorKT_ParamsMethodCall)->end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} (yyval.vectorKT_ParamsMethodCall)=&vect;}
#line 2235 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 365 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-2].kt_type)->setArrayDim((yyvsp[-1].kt_param)->getParamType()->getArrayDim()); (yyvsp[-1].kt_param)->setParamType((yyvsp[-2].kt_type)); (yyvsp[-1].kt_param)->setParamModifier((yyvsp[-3].kt_modifier)); vector<KT_Param*> vect; vect.push_back((yyvsp[-1].kt_param)); for (vector<KT_Param*>::iterator it = (yyvsp[0].vectorKT_Param)->begin(); it != (yyvsp[0].vectorKT_Param)->end(); ++it){ KT_Param* n = (*it); vect.push_back(n);} (yyval.vectorKT_Param)=&vect;}
#line 2241 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 368 "kawa.y" /* yacc.c:1646  */
    {if((yyvsp[0].kt_modifier)->isStatic()){(yyvsp[-1].kt_modifier)->setStatic(true);} if((yyvsp[0].kt_modifier)->isAbstract()){(yyvsp[-1].kt_modifier)->setAbstract(true);} if((yyvsp[0].kt_modifier)->isFinal()){(yyvsp[-1].kt_modifier)->setFinal(true);} if((yyvsp[0].kt_modifier)->getVisibility()>0) (yyvsp[-1].kt_modifier)->setVisibility((yyvsp[0].kt_modifier)->getVisibility());}
#line 2247 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 369 "kawa.y" /* yacc.c:1646  */
    {KT_Modifier* modifier; (yyval.kt_modifier)=modifier;}
#line 2253 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 372 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier; (yyval.kt_modifier)->setFinal(true);}
#line 2259 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 373 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_modifier)=new KT_Modifier;}
#line 2265 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 376 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_Param)=(yyvsp[0].vectorKT_Param);}
#line 2271 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 377 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Param*>* vect; (yyval.vectorKT_Param)=vect;}
#line 2277 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 380 "kawa.y" /* yacc.c:1646  */
    {(yyval.vectorKT_ParamsMethodCall)=(yyvsp[0].vectorKT_ParamsMethodCall);}
#line 2283 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 381 "kawa.y" /* yacc.c:1646  */
    {vector<KT_ParamsMethodCall*>* vect; (yyval.vectorKT_ParamsMethodCall)=vect;}
#line 2289 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 384 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_param)=new KT_Param; (yyval.kt_param)->setName((yyvsp[-1].vstring)); KT_Type* type= new KT_Type; type->setArray((yyvsp[0].parser_array)); (yyval.kt_param)->setParamType(type); }
#line 2295 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 388 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_block)=new KT_Block; (yyval.kt_block)->setStatements(*(yyvsp[-1].vectorKT_Statement));}
#line 2301 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 391 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_Statement)->push_back((yyvsp[0].kt_statement)); (yyval.vectorKT_Statement)=(yyvsp[-1].vectorKT_Statement);}
#line 2307 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 392 "kawa.y" /* yacc.c:1646  */
    {vector<KT_Statement*>* var; (yyval.vectorKT_Statement)=var;}
#line 2313 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 395 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2319 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 396 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2325 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 397 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2331 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 398 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_print);}
#line 2337 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 399 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-7].vstring)); name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); pf->setFinal(true); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2343 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 400 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-7].vstring)); name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2349 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 401 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); pf->setFinal(true); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2355 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 402 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2361 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 403 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(true); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2367 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 404 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); KT_Type* type=new KT_Type; type->setBasicType(true); type->setArray((yyvsp[-3].parser_array));  type->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition((yyvsp[-2].kt_variable)); pf->addVectorVariable((yyvsp[-1].parser_field)); pf->upDateType(type); pf->setFinal(true); vector<KT_Variable*> vars = pf->getVariables(); vector<KT_Statement*> stats; for (vector<KT_Variable*>::iterator it = vars.begin(); it != vars.end(); ++it){ KT_Statement* n = (*it); stats.push_back(n);} KT_Block* block = new KT_Block; block->setStatements(stats); (yyval.kt_statement)=block;}
#line 2373 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 405 "kawa.y" /* yacc.c:1646  */
    { KT_ID* id; vector<string*> name; name.push_back((yyvsp[-4].vstring)); id->setValue(name); KT_Affectation* affectation; affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); (yyval.kt_statement)=affectation;}
#line 2379 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 406 "kawa.y" /* yacc.c:1646  */
    {string name = "this"+(*(yyvsp[-4].vstring)); vector<string*> fullname; fullname.push_back(&name); KT_ID* id; id->setValue(fullname); KT_Affectation* affectation; affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); (yyval.kt_statement)=affectation;}
#line 2385 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 407 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[-1].kt_expression);}
#line 2391 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 408 "kawa.y" /* yacc.c:1646  */
    {KT_Super* s = new KT_Super; s->setParams(*(yyvsp[-1].vectorKT_ParamsMethodCall));}
#line 2397 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 409 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=(yyvsp[0].kt_blockStatement);}
#line 2403 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 410 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_statement)=new KT_Statement;}
#line 2409 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 413 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; (yyval.kt_print)->setArgs(*(yyvsp[-2].vectorKT_FactFinal));}
#line 2415 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 415 "kawa.y" /* yacc.c:1646  */
    {KT_FactFinal* factFinal = static_cast<KT_FactFinal*>((yyvsp[-1].kt_expression)); vector<KT_FactFinal*> args; args.push_back(factFinal); for (vector<KT_FactFinal*>::iterator it = (yyvsp[0].vectorKT_FactFinal)->begin(); it != (yyvsp[0].vectorKT_FactFinal)->end(); ++it){ KT_FactFinal* n = (*it); args.push_back(n);} (yyval.vectorKT_FactFinal)=&args;}
#line 2421 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 416 "kawa.y" /* yacc.c:1646  */
    {vector<KT_FactFinal*>* var; (yyval.vectorKT_FactFinal)=var;}
#line 2427 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 418 "kawa.y" /* yacc.c:1646  */
    {KT_FactFinal* factFinal= static_cast<KT_FactFinal*>((yyvsp[-1].kt_expression)); vector<KT_FactFinal*> args; args.push_back(factFinal); for (vector<KT_FactFinal*>::iterator it = (yyvsp[0].vectorKT_FactFinal)->begin(); it != (yyvsp[0].vectorKT_FactFinal)->end(); ++it){ KT_FactFinal* n = (*it); args.push_back(n);} (yyval.vectorKT_FactFinal)=&args;}
#line 2433 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 419 "kawa.y" /* yacc.c:1646  */
    {vector<KT_FactFinal*>* var; (yyval.vectorKT_FactFinal)=var;}
#line 2439 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 422 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2445 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 424 "kawa.y" /* yacc.c:1646  */
    {KT_Reel* reel = new KT_Reel; reel->setValue((yyvsp[0].vfloat)); (yyval.kt_factFinal)=reel;}
#line 2451 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 425 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2457 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 426 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2463 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 429 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2469 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 431 "kawa.y" /* yacc.c:1646  */
    {KT_Entier* entier = new KT_Entier; entier->setValue((yyvsp[0].vint)); (yyval.kt_factFinal)=entier;}
#line 2475 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 432 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2481 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 433 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2487 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 436 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_print)=new KT_Print; vector<KT_FactFinal*> args; args.push_back((yyvsp[-2].kt_factFinal)); (yyval.kt_print)->setArgs(args);}
#line 2493 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 438 "kawa.y" /* yacc.c:1646  */
    {KT_String* s = new KT_String; s->setValue((yyvsp[0].vstring)); (yyval.kt_factFinal)=s;}
#line 2499 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 439 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id = new KT_ID; id->setValue(name); (yyval.kt_factFinal)=id;}
#line 2505 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 440 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_factFinal)=new KT_FactFinal;}
#line 2511 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 443 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_blockStatement)=new KT_BlockStatement;}
#line 2517 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 444 "kawa.y" /* yacc.c:1646  */
    {KT_IfStatement* ifstatement; ifstatement->setCondition((yyvsp[-2].kt_expression)); ifstatement->setBStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=ifstatement;}
#line 2523 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 445 "kawa.y" /* yacc.c:1646  */
    {KT_ifElseStatement* ifelseStatement; ifelseStatement->setCondition((yyvsp[-4].kt_expression)); ifelseStatement->setIfBStatement((yyvsp[-2].kt_blockStatement)); ifelseStatement->setElseBStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=ifelseStatement;}
#line 2529 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 446 "kawa.y" /* yacc.c:1646  */
    {KT_SwitchStatement* switchStatement; switchStatement->setCondition((yyvsp[-4].kt_expression)); switchStatement->setSwitchBStatements(*(yyvsp[-1].vectorKT_SwitchBlockStatement)); (yyval.kt_blockStatement)=switchStatement;}
#line 2535 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 447 "kawa.y" /* yacc.c:1646  */
    {KT_WhileStatement* whileStatement; whileStatement->setCondition((yyvsp[-2].kt_expression)); whileStatement->setWBStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=whileStatement;}
#line 2541 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 448 "kawa.y" /* yacc.c:1646  */
    {KT_WhileStatement* whileStatement; whileStatement->setCondition((yyvsp[-2].kt_expression)); whileStatement->setWBStatement((yyvsp[-5].kt_blockStatement)); (yyval.kt_blockStatement)=whileStatement;}
#line 2547 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 449 "kawa.y" /* yacc.c:1646  */
    {KT_ForStatement* forStatement; forStatement->setForControl((yyvsp[-2].parser_forControl)); forStatement->setBlockStatement((yyvsp[0].kt_blockStatement)); (yyval.kt_blockStatement)=forStatement;}
#line 2553 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 450 "kawa.y" /* yacc.c:1646  */
    {KT_BreakStatement* breakStatement; breakStatement->setIdExist(true); breakStatement->setId((yyvsp[-1].vstring)); (yyval.kt_blockStatement)=breakStatement;}
#line 2559 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 451 "kawa.y" /* yacc.c:1646  */
    {KT_BreakStatement* breakStatement; breakStatement->setIdExist(false); (yyval.kt_blockStatement)=breakStatement;}
#line 2565 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 452 "kawa.y" /* yacc.c:1646  */
    {KT_ContinueStatement* continueStatement; continueStatement->setIdExist(true); continueStatement->setId((yyvsp[-1].vstring)); (yyval.kt_blockStatement)=continueStatement;}
#line 2571 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 453 "kawa.y" /* yacc.c:1646  */
    {KT_ContinueStatement* continueStatement; continueStatement->setIdExist(false); (yyval.kt_blockStatement)=continueStatement;}
#line 2577 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 454 "kawa.y" /* yacc.c:1646  */
    {KT_ReturnStatement* returnStatement; returnStatement->setIsVoidReturn(false); returnStatement->setReturnExpression((yyvsp[-1].kt_expression)); (yyval.kt_blockStatement)=returnStatement;}
#line 2583 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 455 "kawa.y" /* yacc.c:1646  */
    {KT_ReturnStatement* returnStatement; returnStatement->setIsVoidReturn(true); (yyval.kt_blockStatement)=returnStatement;}
#line 2589 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 459 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].vectorKT_SwitchBlockStatement)->push_back((yyvsp[0].kt_switchBlockStatement)); (yyval.vectorKT_SwitchBlockStatement)=(yyvsp[-1].vectorKT_SwitchBlockStatement);}
#line 2595 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 460 "kawa.y" /* yacc.c:1646  */
    {vector<KT_SwitchBlockStatement*>* var; (yyval.vectorKT_SwitchBlockStatement)=var;}
#line 2601 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 463 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_switchBlockStatement)=new KT_SwitchBlockStatement; (yyval.kt_switchBlockStatement)->setCaseExist(true); KT_Block* block =new KT_Block; block->setStatements(*(yyvsp[0].vectorKT_Statement)); (yyval.kt_switchBlockStatement)->setBlock(block); (yyval.kt_switchBlockStatement)->setExpression((yyvsp[-2].kt_expression));}
#line 2607 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 464 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_switchBlockStatement)=new KT_SwitchBlockStatement; (yyval.kt_switchBlockStatement)->setCaseExist(false); KT_Block* block =new KT_Block; block->setStatements(*(yyvsp[0].vectorKT_Statement)); (yyval.kt_switchBlockStatement)->setBlock(block);}
#line 2613 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 468 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-1].kt_expression)); (yyval.parser_forControl)->setInitFor((yyvsp[-3].parser_field)); }
#line 2619 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 469 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-2].kt_expression)); (yyval.parser_forControl)->setInitFor((yyvsp[-4].parser_field)); (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression));}
#line 2625 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 470 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setInitFor((yyvsp[-2].parser_field));}
#line 2631 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 471 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setInitFor((yyvsp[-3].parser_field)); (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression));}
#line 2637 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 472 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-1].kt_expression));}
#line 2643 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 473 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setCondition((yyvsp[-2].kt_expression)); (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression));}
#line 2649 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 474 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; }
#line 2655 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 475 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_forControl)=new PARSER_ForControl; (yyval.parser_forControl)->setUpDate(*(yyvsp[0].vectorKT_IDExpression));}
#line 2661 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 478 "kawa.y" /* yacc.c:1646  */
    {(yyval.parser_field)=new PARSER_Field; KT_Variable* var= (yyvsp[-1].kt_param)->toVariable(); (yyval.parser_field)->AddVariableAtFirstPosition(var); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field)); (yyval.parser_field)->upDateType((yyvsp[-2].kt_type)); }
#line 2667 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 479 "kawa.y" /* yacc.c:1646  */
    {KT_Variable* variable = (yyvsp[-3].kt_param)->toVariable(); variable->setValue((yyvsp[-1].kt_expression)); (yyval.parser_field)=new PARSER_Field; (yyval.parser_field)->AddVariableAtFirstPosition(variable); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field)); (yyval.parser_field)->upDateType((yyvsp[-4].kt_type));}
#line 2673 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 480 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-2].vstring)); for (vector<string*>::iterator it = (yyvsp[-1].vectorString)->begin(); it != (yyvsp[-1].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Variable* var = new KT_Variable; var->setName(name); var->setFinal(false); (yyval.parser_field)=new PARSER_Field; (yyval.parser_field)->AddVariableAtFirstPosition(var); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field)); }
#line 2679 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 481 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-4].vstring)); for (vector<string*>::iterator it = (yyvsp[-3].vectorString)->begin(); it != (yyvsp[-3].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Variable* var = new KT_Variable; var->setName(name); var->setFinal(false); var->setValue((yyvsp[-1].kt_expression)); (yyval.parser_field)=new PARSER_Field; (yyval.parser_field)->AddVariableAtFirstPosition(var); (yyval.parser_field)->addVectorVariable((yyvsp[0].parser_field));}
#line 2685 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 485 "kawa.y" /* yacc.c:1646  */
    {vector<KT_IDExpression*>* update; update->push_back((yyvsp[-1].kt_expression)); for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2691 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 486 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_ID* id; id->setValue(name); KT_Affectation* affectation; affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); vector<KT_IDExpression*>* update; update->push_back(affectation); for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2697 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 489 "kawa.y" /* yacc.c:1646  */
    {vector<KT_IDExpression*>* update; update->push_back((yyvsp[-1].kt_expression)); for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2703 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 490 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-5].vstring)); for (vector<string*>::iterator it = (yyvsp[-4].vectorString)->begin(); it != (yyvsp[-4].vectorString)->end(); ++it){ string* n = (*it); name.push_back(n);} KT_ID* id; id->setValue(name); KT_Affectation* affectation; affectation->setRExpression((yyvsp[-1].kt_expression)); affectation->setLExpression(id); affectation->setIndexedArray((yyvsp[-3].kt_indexedArray)); vector<KT_IDExpression*>* update; update->push_back(affectation); for (vector<KT_IDExpression*>::iterator it = (yyvsp[0].vectorKT_IDExpression)->begin(); it != (yyvsp[0].vectorKT_IDExpression)->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} (yyval.vectorKT_IDExpression)=update;}
#line 2709 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 491 "kawa.y" /* yacc.c:1646  */
    {vector<KT_IDExpression*>* var; (yyval.vectorKT_IDExpression)=var;}
#line 2715 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 496 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2721 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 499 "kawa.y" /* yacc.c:1646  */
    {KT_OrBinEq* expression = new KT_OrBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2727 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 500 "kawa.y" /* yacc.c:1646  */
    {KT_XOrBinEq* expression = new KT_XOrBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2733 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 501 "kawa.y" /* yacc.c:1646  */
    {KT_AndBinEq* expression = new KT_AndBinEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2739 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 505 "kawa.y" /* yacc.c:1646  */
    {KT_ModuloEq* expression = new KT_ModuloEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2745 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 506 "kawa.y" /* yacc.c:1646  */
    {KT_DivisionEq* expression = new KT_DivisionEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2751 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 507 "kawa.y" /* yacc.c:1646  */
    {KT_MultiplicationEq* expression = new KT_MultiplicationEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2757 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 508 "kawa.y" /* yacc.c:1646  */
    {KT_SubstractionEq* expression = new KT_SubstractionEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2763 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 509 "kawa.y" /* yacc.c:1646  */
    {KT_AdditionlEq* expression = new KT_AdditionlEq; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2769 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 510 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2775 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 513 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOr* expression= new KT_ExpressionOr; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2781 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 514 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2787 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 517 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionAnd* expression =new KT_ExpressionAnd; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2793 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 518 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2799 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 521 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOrLogic* expression= new KT_ExpressionOrLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2805 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 522 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2811 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 525 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionOrXLogic* expression= new KT_ExpressionOrXLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2817 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 526 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2823 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 529 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionAndLogic* expression =new KT_ExpressionAndLogic; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2829 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 530 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2835 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 533 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2841 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 534 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2847 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 535 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2853 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 538 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionGE* expression=new KT_ExpressionGE; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2859 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 539 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionGT* expression=new KT_ExpressionGT; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2865 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 540 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionLE* expression=new KT_ExpressionLE; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2871 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 541 "kawa.y" /* yacc.c:1646  */
    {KT_ExpressionLT* expression=new KT_ExpressionLT; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2877 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 542 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2883 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 545 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2889 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 546 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2895 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 547 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2901 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 548 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2907 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 551 "kawa.y" /* yacc.c:1646  */
    {KT_Addition* expression=new KT_Addition; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2913 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 552 "kawa.y" /* yacc.c:1646  */
    {KT_Substraction* expression=new KT_Substraction; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2919 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 553 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2925 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 556 "kawa.y" /* yacc.c:1646  */
    {KT_Multiplication* expression=new KT_Multiplication; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2931 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 557 "kawa.y" /* yacc.c:1646  */
    {KT_Division* expression =new KT_Division; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2937 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 558 "kawa.y" /* yacc.c:1646  */
    {KT_Modulo* expression= new KT_Modulo; expression->setLExpression((yyvsp[-2].kt_expression)); expression->setRExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2943 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 559 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2949 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 562 "kawa.y" /* yacc.c:1646  */
    {KT_NBinary* expression = new KT_NBinary; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2955 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 563 "kawa.y" /* yacc.c:1646  */
    {KT_Negation* expression= new KT_Negation; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2961 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 564 "kawa.y" /* yacc.c:1646  */
    {KT_Minus* expression= new KT_Minus; expression->setExpression((yyvsp[0].kt_expression)); (yyval.kt_expression)=expression;}
#line 2967 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 565 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 2973 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 566 "kawa.y" /* yacc.c:1646  */
    {KT_PostDecrement* expression =new KT_PostDecrement; vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 2979 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 567 "kawa.y" /* yacc.c:1646  */
    {KT_PreDecrement* expression =new KT_PreDecrement; vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 2985 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 568 "kawa.y" /* yacc.c:1646  */
    {KT_PostIncrement* expression =new KT_PostIncrement; vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 2991 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 569 "kawa.y" /* yacc.c:1646  */
    {KT_PreIncrement* expression=new KT_PreIncrement; vector<string*> name; name.push_back((yyvsp[0].vstring)); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); (yyval.kt_expression)=expression;}
#line 2997 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 570 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3003 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 573 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)= (yyvsp[-1].kt_expression);}
#line 3009 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 574 "kawa.y" /* yacc.c:1646  */
    {KT_Entier* expression= new KT_Entier; expression->setValue((yyvsp[0].vint)); (yyval.kt_expression)=expression;}
#line 3015 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 575 "kawa.y" /* yacc.c:1646  */
    {KT_Reel* expression = new KT_Reel; expression->setValue((yyvsp[0].vfloat)); (yyval.kt_expression)=expression;}
#line 3021 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 576 "kawa.y" /* yacc.c:1646  */
    {KT_String* expression = new KT_String; expression->setValue((yyvsp[0].vstring)); (yyval.kt_expression)=expression;}
#line 3027 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 577 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3033 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 578 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_expression);}
#line 3039 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 579 "kawa.y" /* yacc.c:1646  */
    {(yyval.kt_expression)=(yyvsp[0].kt_linkedMethodOrVarCall);}
#line 3045 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 580 "kawa.y" /* yacc.c:1646  */
    {KT_Bool* expression= new KT_Bool; expression->setValue(true); (yyval.kt_expression)=expression; }
#line 3051 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 581 "kawa.y" /* yacc.c:1646  */
    {KT_Bool* expression= new KT_Bool; expression->setValue(false); (yyval.kt_expression)=expression;}
#line 3057 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 582 "kawa.y" /* yacc.c:1646  */
    {KT_Null* expression = new KT_Null; (yyval.kt_expression)=expression;}
#line 3063 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 585 "kawa.y" /* yacc.c:1646  */
    {KT_ConstructorCall* expression =new KT_ConstructorCall; expression->addString((yyvsp[-2].vstring)); expression->addVectorString(*(yyvsp[-1].vectorString)); expression->setParams(*(yyvsp[0].vectorKT_ParamsMethodCall)); (yyval.kt_expression)=expression;}
#line 3069 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 588 "kawa.y" /* yacc.c:1646  */
    {vector<string*> name; name.push_back((yyvsp[-1].vstring)); KT_MethodCall* expression =new KT_MethodCall; expression->setName(name); expression->setParams(*(yyvsp[0].vectorKT_ParamsMethodCall)); (yyval.kt_methodCall)=expression;}
#line 3075 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 591 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back((yyvsp[-1].vint)); KT_Type* type = new KT_Type; type->setBasicType(true); vector<string*> typeName; typeName.push_back((yyvsp[-3].vstring)); type->setTypeName(typeName); type->setArrayDim(0); KT_ArrayInitilizer* expression = new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); (yyval.kt_expression)=expression;}
#line 3081 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 593 "kawa.y" /* yacc.c:1646  */
    {KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back((yyvsp[-1].vint)); KT_Type* type = new KT_Type; type->setBasicType(false); type->addString((yyvsp[-4].vstring)); type->addVectorString(*(yyvsp[-3].vectorString)); type->setArrayDim(0); KT_ArrayInitilizer* expression =new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); (yyval.kt_expression)=expression;}
#line 3087 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 596 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-3].vstring)); ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3093 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 597 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3099 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 598 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[-1].kt_methodCall)->setNameAddStringAtFirstPosition((yyvsp[-3].vstring));  (yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3105 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 599 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*(yyvsp[0].vectorKT_MethodOrVarCall)); (yyval.kt_linkedMethodOrVarCall)=expression;}
#line 3111 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 602 "kawa.y" /* yacc.c:1646  */
    {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back((yyvsp[-1].vstring)); var->setValue(ids); (yyvsp[0].vectorKT_MethodOrVarCall)->push_back(var); (yyval.vectorKT_MethodOrVarCall)=(yyvsp[0].vectorKT_MethodOrVarCall); }
#line 3117 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 603 "kawa.y" /* yacc.c:1646  */
    {(yyvsp[0].vectorKT_MethodOrVarCall)->push_back((yyvsp[-1].kt_methodCall)); (yyval.vectorKT_MethodOrVarCall)=(yyvsp[0].vectorKT_MethodOrVarCall);}
#line 3123 "kawa.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 604 "kawa.y" /* yacc.c:1646  */
    { vector<KT_MethodOrVarCall*>* vect; (yyval.vectorKT_MethodOrVarCall)=vect; }
#line 3129 "kawa.cpp" /* yacc.c:1646  */
    break;


#line 3133 "kawa.cpp" /* yacc.c:1646  */
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
#line 608 "kawa.y" /* yacc.c:1906  */


int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d]\n", yytext, lineno/*, column-strlen(yytext)*/);
  return 0;
}

