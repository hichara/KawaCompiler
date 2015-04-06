/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 98 "kawa.y" /* yacc.c:1909  */

	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;
	KAWATreePrintString* vKAWATreePrintString;
	KAWATreePrintInteger* vKAWATreePrintInteger;
	KAWATreePrintFloat* vKAWATreePrintFloat;
	KAWATreeParam* vKAWATreeParam;

#line 145 "kawa.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */
