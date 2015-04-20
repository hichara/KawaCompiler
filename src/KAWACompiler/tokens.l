%{
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "../implementation_KawaTree/headers.h"
#include "kawa.hpp"

typedef std::string String;

int file_num=0, file_num_max=0;
char **files;

inline int strToken( int token ){
    yylval.vstring = new std::string( yytext, yyleng );
    /*
    if( debugTokens ){
        printf("TOKEN\tIDENTIFIER\t%d\t%s\n", token, yytext);
    }
    */

    return token;
}

int column=1; int lineno=1;

/* Fonction qui compte les colonnes et lignes pour préciser la position d'un erreur */ 
void count() {
  int i;
  column += strlen(yytext);
  if(strcmp(yytext, "\t")==0)
  	column +=3;
  for (i = 0; yytext[i] != '\0'; i++) {
    if (yytext[i] == '\n'){
      column = 1;
      lineno++;
    }
  }
}

%}

INT [0-9]+
FLOAT [0-9]+(\.[0-9]+)?(e[0-9]+)?
ID [_]?[a-zA-Z][a-zA-Z0-9]*
%%
{INT} {count(); yylval.vint=atof(yytext); return(ENTIER); }
{FLOAT} {count(); yylval.vint=atof(yytext); return(REEL); }

"string"        {count(); return (TSTRING);}
"short"					{count(); return (TSHORT);}
"int"					  {count(); return (TINT);}
"long"					{count(); return (TLONG);}
"float"					{count(); return (TFLOAT);}
"double"				{count(); return (TDOUBLE);}
"byte"					{count(); return (TBYTE);}
"char"					{count(); return (TCHAR);}
"boolean"				{count(); return (TBOOLEAN);}
"void"					{count(); return (TVOID);}
"const"					{count(); /*return (TCONST);*/}
"enum"					{count(); /*return (TENUM);*/}
"value"					{count(); return (TVALUE);}
"import"				{count(); return (TIMPORT);}
"public"				{count(); return (TPUBLIC);}
"private"				{count(); return (TPRIVATE);}
"protected"			{count(); return (TPROTECTED);}
"final"					{count(); return (TFINAL);}
"abstract"			{count(); return (TABSTRACT);}
"static"				{count(); return (TSTATIC);}
"class"					{count(); return (TCLASS);}
"interface"			{count(); return (TINTERFACE);}
"extends"				{count(); return (TEXTENDS);}
"implements"		{count(); return (TIMPLEMENTS);}
"super"					{count(); return (TSUPER);}
"this"					{count(); return (TTHIS);}
"throw"					{count(); /*return (TTHROW);*/}
"throws"				{count(); /*return (TTHROWS);*/}
"try"					  {count(); /*return (TTRY);*/}
"catch"					{count(); /*return (TCATCH);*/}
"if"					  {count(); return (TIF);}
"else"					{count(); return (TELSE);}
"false"					{count(); return (TFALSE);}
"true"					{count(); return (TTRUE);}
"switch"				{count(); return (TSWITCH);}
"case"					{count(); return (TCASE);}
"continue"			{count(); return (TCONTINUE);}
"break"					{count(); return (TBREAK);}
"default"				{count(); return (TDEFAULT);}
"for"					  {count(); return (TFOR);}
"while"					{count(); return (TWHILE);}
"do"					  {count(); return (TDO);}
"instanceof"		{count(); /*return (TINSTANCEOF);*/}
"finally"				{count(); /*return (TFINALLY);*/}
"new"					  {count(); return (TNEW);}
"null"					{count(); return (TNULL);}
"return"				{count(); return (TRETURN);}
"synchronized"	{count(); /*return (TSYNCHRONIZED);*/}
"printString"   {count(); return (TPRINTS);}
"printInt"      {count(); return (TPRINTI);}
"printFloat"    {count(); return (TPRINTF);}
"print"         {count(); return (TPRINT);}
"package"       {count(); return (TPACKAGE);}

{ID}            {count(); return strToken(ID); }


\"[^\n\"]*\"		{count(); return (STRING);}
"+"             {count(); return ('+');}
"-"             {count(); return ('-');}
"*"             {count(); return ('*');}
"/"             {count(); return ('/');}
"%"						  {count(); return ('%');}
"="             {count(); return ('=');}
"+="					  {count(); return (TPLUSEQ);/**/}
"-="					  {count(); return (TMINUSEQ);/**/}
"*="					  {count(); return (TMULEQ);/**/}
"/="					  {count(); return (TDIVEQ);/**/}
"%="					  {count(); return (TMODEQ);/**/}
"++"					  {count(); return (TINC);}
"--"					  {count(); return (TDEC);}
"=="            {count(); return (TCEQ);}
"!="            {count(); return (TCNE);}
"<"             {count(); return ('<');}
"<="            {count(); return (TCLE);}
">"             {count(); return ('>');}
">="            {count(); return (TCGE);}
"||"					  {count(); return (TOR);}
"&&"					  {count(); return (TAND);}
"!"						  {count(); return ('!');}
"&"						  {count(); return ('&');}
"&="					  {count(); return (TANDBINEQ);/**/}
"|"						  {count(); return ('|');}
"|="					  {count(); return (TORBINEQ);/**/}
"^"						  {count(); return ('^');}
"^="					  {count(); return (TXORBINEQ);/**/}
"<<"					  {count(); return (TDECAL);/**/}
"<<="					  {count(); return (TDECALEQ);/**/}
">>"					  {count(); return (TDECAR);/**/}
">>="					  {count(); return (TDECAREQ);/**/}
">>>"					  {count(); return (TDECALNS);/**/}
">>>="					{count(); return (TDECALNSEQ);/**/}
"("             {count(); return ('(');}
")"             {count(); return (')');}
"{"             {count(); return ('{');}
"}"             {count(); return ('}');}
"["						  {count(); return ('[');}
"]"						  {count(); return (']');}
"."             {count(); return ('.');}
","             {count(); return (',');}
";"						  {count(); return (';');}
"~"						  {count(); return ('~');}
"?"						  {count(); return ('?');}
":" 					  {count(); return (':');}
"//".*\n 				{count();}
"/*"[^*\/]*"*/"	{count();}
[\n]					  {count();}
[ \t\v\f]  			{count();}
.			          {count(); printf("TOKEN inconnu!\n"); yyterminate();}

%%
int main( int argc, char** argv ){ 
    ++argv; --argc; 
    file_num=0;
    file_num_max = argc;
    files = argv;
    if ( argc > 0 ){
        while( (yyin = fopen(files[file_num],"r")) == 0 && file_num < file_num_max ){
            printf ("pb ouverture du fichier %s \n", files[file_num++]);
            exit(1);
        }
        yyparse();
    }
    return 0;
}

int yywrap() {
  fclose(yyin);
  if ( ++file_num < file_num_max ) {
    while( (yyin = fopen(files[file_num],"r")) == 0 && file_num < file_num_max ){
      return 1;
    }
    if ( file_num < file_num_max )
        return 0;
    else 
        return 1;
  } 
  else{
    return 1;
  }
  
}

