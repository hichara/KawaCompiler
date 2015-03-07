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
#line 81 "kawa.y" /* yacc.c:1909  */

	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;

#line 138 "kawa.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KAWA_HPP_INCLUDED  */
