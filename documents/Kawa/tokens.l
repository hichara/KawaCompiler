%{
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
%}
INT [0-9]+
FLOAT [0-9]+(\.[0-9]+)?(e[0-9]+)?
ID [_]?[a-zA-Z][a-zA-Z0-9]*
%%
{INT} {yylval.vstring=strdup(yytext); return(ENTIER); }
{FLOAT} {yylval.vstring=strdup(yytext); return(REEL); }

"short"					{return (TSHORT);}
"int"					{return (TINT);}
"long"					{return (TLONG);}
"float"					{return (TFLOAT);}
"double"				{return (TDOUBLE);}
"byte"					{return (TBYTE);}
"char"					{return (TCHAR);}
"boolean"				{return (TBOOLEAN);}
"void"					{return (TVOID);}
"const"					{/*return (TCONST);*/}
"enum"					{/*return (TENUM);*/}
"value"					{return (TVALUE);}
"import"				{return (TIMPORT);}
"public"				{return (TPUBLIC);}
"private"				{return (TPRIVATE);}
"protected"				{return (TPROTECTED);}
"final"					{return (TFINAL);}
"abstract"				{return (TABSTRACT);}
"static"				{return (TSTATIC);}
"class"					{return (TCLASS);}
"interface"				{return (TINTERFACE);}
"extends"				{return (TEXTENDS);}
"implements"			{return (TIMPLEMENTS);}
"super"					{/*return (TSUPER);*/}
"this"					{/*return (TTHIS);*/}
"throw"					{/*return (TTHROW);*/}
"throws"				{/*return (TTHROWS);*/}
"try"					{/*return (TTRY);*/}
"catch"					{/*return (TCATCH);*/}
"if"					{return (TIF);}
"else"					{return (TELSE);}
"false"					{/*return (TFALSE);*/}
"true"					{/*return (TTRUE);*/}
"switch"				{return (TSWITCH);}
"case"					{return (TCASE);}
"continue"				{return (TCONTINUE);}
"break"					{return (TBREAK);}
"default"				{return (TDEFAULT);}
"for"					{return (TFOR);}
"while"					{return (TWHILE);}
"do"					{return (TDO);}
"instanceof"			{/*return (TINSTANCEOF);*/}
"finally"				{/*return (TFINALLY);*/}
"new"					{return (TNEW);}
"null"					{/*return (TNULL);*/}
"return"				{return (TRETURN);}
"synchronized"	 		{/*return (TSYNCHRONIZED);*/}

{ID} {yylval.vstring=strdup(yytext); return(ID); }


\"[^\n\"]*\"			{/*return (STRING);*/}
"+"                     {return ('+');}
"-"                     {return ('-');}
"*"                     {return ('*');}
"/"                     {return ('/');}
"%"						{return ('%');}
"="                     {return ('=');}
"+="					{return (TPLUSEQ);/**/}
"-="					{return (TMINUSEQ);/**/}
"*="					{return (TMULEQ);/**/}
"/="					{return (TDIVEQ);/**/}
"%="					{return (TMODEQ);/**/}
"++"					{return (TINC);}
"--"					{return (TDEC);}
"=="                    {return (TCEQ);}
"!="                    {return (TCNE);}
"<"                     {return ('<');}
"<="                    {return (TCLE);}
">"                     {return ('>');}
">="                    {return (TCGE);}
"||"					{return (TOR);}
"&&"					{return (TAND);}
"!"						{return ('!');}
"&"						{return ('&');}
"&="					{return (TANDBINEQ);/**/}
"|"						{return ('|');}
"|="					{return (TORBINEQ);/**/}
"^"						{return ('^');}
"^="					{return (TXORBINEQ);/**/}
"<<"					{return (TDECAL);/**/}
"<<="					{return (TDECALEQ);/**/}
">>"					{return (TDECAR);/**/}
">>="					{return (TDECAREQ);/**/}
">>>"					{return (TDECALNS);/**/}
">>>="					{return (TDECALNSEQ);/**/}
"("                     {return ('(');}
")"                     {return (')');}
"{"                     {return ('{');}
"}"                     {return ('}');}
"["						{return ('[');}
"]"						{return (']');}
"."                     {return ('.');}
","                     {return (',');}
";"						{return (';');}
"~"						{return ('~');}
"?"						{return ('?');}
":" 					{return (':');}
"//".*\n 				{}
"/*"[^*\/]*"*/"			{}
[\n]+					{}
[ \t\v\f]  				{}
.			{printf("TOKEN inconnu!\n"); yyterminate();}

%%
