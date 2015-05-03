%{
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "../implementation_KawaTree/headers.h"
#include "../Semantique/AlgoSemantique.h"
#include "kawa.hpp"

#include <iostream>
#include "../implementation_KawaTree/KT_Class.h"
#include "../implementation_KawaTree/KT_Interface.h"
#include "../implementation_KawaTree/KT_Prototype.h"
#include "../implementation_KawaTree/KT_Affectation.h"
#include "../implementation_KawaTree/KT_Variable.h"
#include "../implementation_KawaTree/KT_Package.h"
#include "../implementation_KawaTree/KT_Program.h"
#include "../implementation_KawaTree/KT_Print.h"
#include "../implementation_KawaTree/KT_FactFinal.h"
#include "../implementation_KawaTree/KT_String.h"
#include "../implementation_KawaTree/KT_Statement.h"
#include "../Semantique/CheckDeclarationStatementType.cpp"
#include "../Semantique/CheckAffectationStatementType.cpp"
#include "../Semantique/CheckCallMethodStatementType.cpp"
#include "../Semantique/CheckVariableStatementType.cpp"
#include <map>
#include <algorithm>
using namespace std;

typedef std::string String;

int file_num=0, file_num_max=0;
char **files;

inline int strToken( int token ){
    string* st = new std::string(yytext, yyleng); yylval.vstring = st;
    return token;
}

int column=1; int lineno=1;

/* Fonction qui compte les colonnes et lignes pour préciser la position de l'erreur */
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
{FLOAT} {count(); yylval.vfloat=atof(yytext); return(REEL); }

"string"        {count(); return strToken(TSTRING);}
"short"					{count(); return strToken(TSHORT);}
"int"           {count(); return strToken(TINT);}
"long"					{count(); return strToken(TLONG);}
"float"					{count(); return strToken(TFLOAT);}
"double"				{count(); return strToken(TDOUBLE);}
"byte"					{count(); return strToken(TBYTE);}
"char"					{count(); return strToken(TCHAR);}
"boolean"				{count(); return strToken(TBOOLEAN);}
"void"					{count(); return strToken(TVOID);}
"const"					{count(); /**return strToken(TCONST);**/}
"enum"					{count(); /**return strToken(TENUM);**/}
"value"					{count(); /*return strToken(TVALUE);*/}
"import"				{count(); return strToken(TIMPORT);}
"public"				{count(); return strToken(TPUBLIC);}
"private"				{count(); return strToken(TPRIVATE);}
"protected"			{count(); return strToken(TPROTECTED);}
"final"					{count(); return strToken(TFINAL);}
"abstract"			{count(); return strToken(TABSTRACT);}
"static"				{count(); return strToken(TSTATIC);}
"class"					{count(); return strToken(TCLASS);}
"interface"			{count(); return strToken(TINTERFACE);}
"extends"				{count(); return strToken(TEXTENDS);}
"implements"		{count(); return strToken(TIMPLEMENTS);}
"super"					{count(); return strToken(TSUPER);}
"this"					{count(); return strToken(TTHIS);}
"throw"					{count(); /**return strToken(TTHROW);**/}
"throws"				{count(); /**return strToken(TTHROWS);**/}
"try"					  {count(); /**return strToken(TTRY);**/}
"catch"					{count(); /**return strToken(TCATCH);**/}
"if"					  {count(); return strToken(TIF);}
"else"					{count(); return strToken(TELSE);}
"false"					{count(); return strToken(TFALSE);}
"true"					{count(); return strToken(TTRUE);}
"switch"				{count(); return strToken(TSWITCH);}
"case"					{count(); return strToken(TCASE);}
"continue"			{count(); return strToken(TCONTINUE);}
"break"					{count(); return strToken(TBREAK);}
"default"				{count(); return strToken(TDEFAULT);}
"for"					  {count(); return strToken(TFOR);}
"while"					{count(); return strToken(TWHILE);}
"do"					  {count(); return strToken(TDO);}
"instanceof"		{count(); /**return strToken(TINSTANCEOF);**/}
"finally"				{count(); /**return strToken(TFINALLY);**/}
"new"					  {count(); return strToken(TNEW);}
"null"					{count(); return strToken(TNULL);}
"return"				{count(); return strToken(TRETURN);}
"synchronized"	{count(); /**return strToken(TSYNCHRONIZED);**/}
"printString"   {count(); return strToken(TPRINTS);}
"printInt"      {count(); return strToken(TPRINTI);}
"printFloat"    {count(); return strToken(TPRINTF);}
"print"         {count(); return strToken(TPRINT);}
"package"       {count(); return (TPACKAGE);return strToken(TPACKAGE);}

{ID}            {count(); /*string* st = new std::string(yytext, yyleng); yylval.vstring = st; */ return strToken(ID); }


\"[^\n\"]*\"		{count(); return strToken(STRING);}
"+"             {count(); return ('+');}
"-"             {count(); return ('-');}
"*"             {count(); return ('*');}
"/"             {count(); return ('/');}
"%"						  {count(); return ('%');}
"="             {count(); return ('=');}
"+="					  {count(); return strToken(TPLUSEQ);}
"-="					  {count(); return strToken(TMINUSEQ);}
"*="					  {count(); return strToken(TMULEQ);}
"/="					  {count(); return strToken(TDIVEQ);}
"%="					  {count(); return strToken(TMODEQ);}
"++"					  {count(); return strToken(TINC);}
"--"					  {count(); return strToken(TDEC);}
"=="            {count(); return strToken(TCEQ);}
"!="            {count(); return strToken(TCNE);}
"<"             {count(); return ('<');}
"<="            {count(); return strToken(TCLE);}
">"             {count(); return ('>');}
">="            {count(); return strToken(TCGE);}
"||"					  {count(); return strToken(TOR);}
"&&"					  {count(); return strToken(TAND);}
"!"						  {count(); return ('!');}
"&"						  {count(); return ('&');}
"&="					  {count(); return strToken(TANDBINEQ);}
"|"						  {count(); return ('|');}
"|="					  {count(); return strToken(TORBINEQ);}
"^"						  {count(); return ('^');}
"^="					  {count(); return strToken(TXORBINEQ);}
"<<"					  {count(); return strToken(TDECAL);}
"<<="					  {count(); return strToken(TDECALEQ);}
">>"					  {count(); return strToken(TDECAR);}
">>="					  {count(); return strToken(TDECAREQ);}
">>>"					  {count(); return strToken(TDECALNS);}
">>>="					{count(); return strToken(TDECALNSEQ);}
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
extern KT_Program* program;
int main( int argc, char** argv ){

    ++argv; --argc;
    ++argv; --argc;
    file_num=0;
    file_num_max = argc;
    files = argv;
    if ( argc > 0 ){
        while( (yyin = fopen(files[file_num],"r")) == 0 && file_num < file_num_max ){
            printf ("pb ouverture du fichier %s \n", files[file_num++]);
            exit(1);
        }
        /****
         * Frontend
         ***/
        // analyse syntaxique --> production de l'AST avec KawaTree
        yyparse();

        // analyse sémantique
        /*
        Semantic::check(program);
        /*/

        Semantic::checkWithDebug(program);
        //*/
        /****
         * Backend
         ***/
        // production de code intermédiare avec IRCompiler


    }

    return 0;
}

int yywrap() {
  fclose(yyin);
  if ( ++file_num < file_num_max ) {
    while( (yyin = fopen(files[file_num],"r")) == 0 && file_num < file_num_max ){
      return 1;
    }
    if ( file_num < file_num_max ){
      lineno=0;
      return 0;
    }

    else
        return 1;
  }
  else{
    return 1;
  }

}
