%{
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

/*
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
*/



	int yylex();
	extern char* yytext;
	int yyerror(const char* err );
	extern int column;
	extern int lineno;
	KAWATreeProgram* program = new KAWATreeProgram;
%}

%token<vint> ENTIER REEL  
%token<vint> STRING TSTRING TSHORT TINT TLONG TFLOAT TDOUBLE TBYTE TCHAR TBOOLEAN TVOID
%token<vint> TIMPORT TPACKAGE
%token<vint> TPUBLIC TPRIVATE TPROTECTED
%token<vint> TFINAL TABSTRACT TSTATIC TVALUE
%token<vstring> ID TCLASS TINTERFACE TEXTENDS TIMPLEMENTS
%token<vint> TSUPER TTHIS 
%token<vint> TIF TELSE
%token<vint> TFALSE TTRUE
%token<vint> TSWITCH TCASE TCONTINUE TBREAK TDEFAULT
%token<vint> TFOR TWHILE TDO
%token<vint> TNEW TNULL TRETURN
%token<vint> TPRINT TPRINTI TPRINTF TPRINTS

%token<vint> TPLUSEQ TMINUSEQ TMULEQ TDIVEQ TMODEQ
%token<vint> TINC TDEC
%token<vint> TCEQ TCNE
%token<vint> TCLE TCGE
%token<vint> TOR TAND
%token<vint> TANDBINEQ TORBINEQ
%token<vint> TXORBINEQ TDECAL TDECALEQ TDECAR TDECAREQ TDECALNS TDECALNSEQ

%type<vint> Program Package
%type<vint> Ids ListIds QList
%type<vint> Type Tables BasicType
%type<vint> Modifier Modifiers Static All Extends ExtendsList Implements			  
%type<vint> ImportDeclaration 

%type<vint> ClassDeclaration InterfaceDeclaration 
%type<vint> ClassBody MemberDecs MemberDec

%type<vint> InterfaceBody Prototypes Prototype
%type<vint> FormalParameters VoidFormalParametrs FormalParametersCalledMethod FormalParametersCalledMethodDecls FormalParameterDecls VariableModifiers  VariableModifier FormalParameterDeclsRest FormalParameterCalledMethodDeclsRest VariableDeclaratorId
%type<vint> VariableDeclaratorList VariableDeclarator VariableInitializer ConstructorCall MethodCall ArrayInitializer
%type<vint> Block BlockStatements BlockStatement Statement Print Args ArgsRest  
%type<vKAWATreeParam> ArgsS ArgsI ArgsF
%type<vKAWATreePrintString> PrintS
%type<vKAWATreePrintInteger> PrintI
%type<vKAWATreePrintFloat> PrintF
%type<vint> SwitchBlockStatements SwitchBlockStatement 
%type<vint> ForControl ForVarControl ForUpdate StatementExpressionList

%type<vint> Expression FacteurEffect ExpressionOr ExpressionAnd ExpressionOrLogic ExpressionOrExLogic ExpressionAndLogic ExpressionEqNeq ExpressionCompEq TermeDecal TermePlus terme facteur factFinal

%type<vint> TablesIndexe LinkedMethodVarCall LinkedMethodVarCallList

%union
{
	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;
	KAWATreePrintString* vKAWATreePrintString;
	KAWATreePrintInteger* vKAWATreePrintInteger;
	KAWATreePrintFloat* vKAWATreePrintFloat;
	KAWATreeParam* vKAWATreeParam;
}

%nonassoc THEN 
%nonassoc TELSE
%right TORBINEQ TXORBINEQ TANDBINEQ TDECALNSEQ TDECAREQ TDECALEQ TMODEQ TDIVEQ TMULEQ TMINUSEQ TPLUSEQ '='   
%right COND
%left TOR
%left TAND
%left '|'
%left '^'
%left '&'
%left TCEQ TCNE
%left TCGE '>' TCLE '<'
%left TDECALNS TDECAR TDECAL
%left '+' '-'
%left '%' '*' '/'
%right NBINAIRE NLOGIC MOINUS PLUS
%right TINC TDEC

%start Program;
%%

Program : Package ImportDeclaration Modifiers ClassDeclaration{ $$=0; cout<<"Program ---> Package ImportDeclaration Modifiers ClassDeclaration"<< endl;}
		| Package ImportDeclaration Modifiers InterfaceDeclaration{ $$=0; /*cout<<"Program ---> Package ImportDeclaration Modifiers InterfaceDeclaration"<< endl;*/}
		;
Package : TPACKAGE ID ';'
		;

/*-----------------------------------ID et ID.ID.ID... et ID,ID,ID... --------------------------------------------------*/
Ids : '.' ID Ids {$$=0;}
	| {$$=0;}
	;

QList : ',' ID Ids QList {$$=0;}
	  | {$$=0;}
	  ;

ListIds : ID Ids QList {$$=0;}
		;
/*-----------------------------------les types basic est les references type + possibilité des tableaux----------------------------------------------*/
Type : BasicType Tables {$$=0;}
	 | ID Ids Tables {$$=0;}
	 ;

Tables : '[' ']' Tables {$$=0;}
	   | {$$=0;}
	   ;

TablesIndexe : '[' ENTIER ']' TablesIndexe {$$=0;}
	   | {$$=0;}
	   ;

BasicType : TBYTE {$$=0;}
		  | TSHORT {$$=0;}
		  | TCHAR {$$=0;}
		  | TINT {$$=0;}
		  | TLONG {$$=0;}
		  | TFLOAT {$$=0;}
		  | TDOUBLE {$$=0;}
		  | TBOOLEAN {$$=0;}
		  | TSTRING {$$=0;}
		  ;

/*------------- Partie d'encapsulation + final + static + extends ID, ID..... et implements ID, ID , ID... ----------------------------------*/
Modifier : TPUBLIC {$$=0; /*cout << " Modifier --> TPUBLIC "<<endl;*/}
		 | TPROTECTED {$$=0;}
		 | TPRIVATE {$$=0;}
		 | TSTATIC {$$=0; /*cout << " Modifier --> TSTATIC "<<endl;*/}
		 | TABSTRACT {$$=0;}
		 | TFINAL {$$=0;}
		 ;

Modifiers : Modifiers Modifier {$$=0; /*cout << " Modifiers --> Modifiers Modifier "<<endl;*/}
		  | {$$=0; /*cout << " Modifiers --> Epsilone "<<endl;*/}
		  ;

Static : TSTATIC {$$=0;}
	   | {$$=0;}
	   ;

All : '.' ID All {$$=0;} 
	| '.' '*' {$$=0;}
	| {$$=0;}
	;


Extends	: TEXTENDS Type {$$=0;}
		| {$$=0; /*cout<<"Extends->epsilon\n";*/}
		;

ExtendsList : TEXTENDS ListIds {$$=0;}
			| {$$=0;}
			;


Implements	: TIMPLEMENTS ListIds {$$=0;}
			| {$$=0; /*cout<<"Implements->epsilon\n";*/}
			;

/*---------------------IMPORTS ------------------------------------------------------------------*/
ImportDeclaration : TIMPORT Static ID All ';' ImportDeclaration {$$=0; /*cout<<"ImportDeclaration --> import Static ID All"<< endl;*/ }
				  | {$$=0; /*cout<<"ImportDeclaration --> epsilon"<< endl;*/ }
				  ; 

/*--------------------- Entete classes et interfaces------------------------------------------------------------------*/

ClassDeclaration : TCLASS ID Extends Implements ClassBody { KAWATreeClass* c = new KAWATreeClass(*$2); /*$$->addMain(c); $$ = c; cout << "CLASS NAME: " << *$2 << endl; */}
				 ;

InterfaceDeclaration : TINTERFACE ID ExtendsList InterfaceBody {$$=0;}
					 ;

/*-----------------------------------Corps d'une classe-----------------------------------------------------*/
ClassBody: '{' MemberDecs '}' {$$=0; /*cout<< "ClassBody --> '{' MemberDecs '}'  "<< endl;*/ } 
MemberDecs : MemberDecs MemberDec {$$=0; /*cout<< " MemberDecs --> MemberDecs MemberDec "<< endl;*/ }
					  | {$$=0; /*cout<< " MemberDecs --> Epsilone "<< endl;*/}
					  ;

MemberDec: Modifiers Type ID VariableInitializer VariableDeclaratorList ';' {$$=0;}
		  | Modifiers Type ID FormalParameters Block {$$=0;} /* methode avec type de retour */
		  | Modifiers TVOID ID FormalParameters Block {$$=0;} /* void methode */
		  | Modifiers ID FormalParameters Block {$$=0;} /* constructeur */
					;  

/*--------------------------------- corps d'une interface ---------------------------------------------------*/
InterfaceBody: '{' Prototypes '}' {$$=$2;}
			 ; 
Prototypes : Prototypes Prototype {$$=0;}
 						  | {$$=0;}
 						  ;

Prototype : Modifiers Type ID FormalParameters';'
    	  | Modifiers TVOID ID FormalParameters ';' {$$=0;} 
    					;  

/*-------------------------------------------- partie variables ---------------------------------------------------------*/

VariableDeclaratorList : ',' VariableDeclarator VariableDeclaratorList {$$=$2;}
					   | {$$=0;}
					   ;

VariableDeclarator: ID VariableInitializer {$$=0;}
				  ;

VariableInitializer: '=' Expression {$$=0;}
					 | {$$=0;}
					 ;

/*-------------------------------------- partie de parametres des methodes -----------------------------------------*/
FormalParameters: '(' FormalParameterDecls ')' {$$=$2;}
				| VoidFormalParametrs {$$=0;}
				;

VoidFormalParametrs : '(' ')' {$$=0; /*cout<< "VoidFormalParametrs --> '(' ')' "<<endl;*/}
					;

FormalParametersCalledMethod: '(' FormalParametersCalledMethodDecls ')' {$$=$2;}
							| VoidFormalParametrs {$$=0;}
							;
FormalParametersCalledMethodDecls : ID '[' ENTIER ']' TablesIndexe FormalParameterCalledMethodDeclsRest {$$=0;}
								  | Expression FormalParameterCalledMethodDeclsRest {$$=0;}
								  ;

FormalParameterDecls: VariableModifiers Type VariableDeclaratorId FormalParameterDeclsRest {$$=0;}
					;

VariableModifiers : VariableModifiers VariableModifier {$$=0;}
				  | {$$=0;}
				  ;

VariableModifier: TFINAL{$$=0;}
				| TVALUE{$$=0;}
				;

FormalParameterDeclsRest: ',' FormalParameterDecls {$$=$2;}
						| {$$=0;}
						;

FormalParameterCalledMethodDeclsRest : ',' FormalParametersCalledMethodDecls {$$=$2;}
									 | {$$=0;}
									 ; 

VariableDeclaratorId: ID Tables {$$=0;}
					;

/*----------------------------------- partie blocks et les variables locaux ------------------------*/
Block: '{' BlockStatements '}' {$$=$2; /*cout<< " Block --> '{' BlockStatements '}' "<< endl;*/}
	 ;

BlockStatements: BlockStatements BlockStatement {$$=0;}
			   | {$$=0; /*cout<< " BlockStatements --> Epsilone "<< endl; */}
			   ; 

BlockStatement: Print {$$=0; }
			  | PrintS {$$=0; bodyMain->addInstruction($1); /*cout<< " BlockStatement --> PrintS "<< endl;*/ } 
			  | PrintF {$$=0; bodyMain->addInstruction($1); /*cout<< " BlockStatement --> PrintF "<< endl;*/ } 
			  | PrintI {$$=0; bodyMain->addInstruction($1); /*cout<< " BlockStatement --> PrintI "<< endl;*/}
			  | TFINAL ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | TFINAL ID Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | ID Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | BasicType Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;}
			  | TFINAL BasicType Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;}
    		  | ID TablesIndexe '=' Expression ';' {$$=0;}
    		  | TTHIS '.' ID TablesIndexe '=' Expression ';' {$$=0;}
    		  | Expression ';' {$$=0; cout<< "blockStatement --> Expression "<<endl;}
    		  /*| TTHIS '.' VariableDeclarator ';' {$$=0;}*/
    		  /*| TTHIS '.' ID FormalParametersCalledMethod ';' {$$=0;}*/
    		  | TSUPER FormalParametersCalledMethod ';' {$$=0;}
    		  /*| ID ':' Statement {$$=0;}*/
    		  | Statement {$$=0;}
    		  | ';' {$$=0;}
    		  ;

Print : TPRINT '(' Args ')' ';' {/*cout << "Print: " << $1 << endl;*/ $$=0;}
	  ;
Args :factFinal ArgsRest {$$=0;}
	 | {$$=0;}
	 ;
ArgsRest : '+' factFinal ArgsRest {$$=0;} 
		 | {$$=0;}
		 ;

PrintF : TPRINTF '(' ArgsF ')' ';' {$$=0; printFloat = new KAWATreePrintFloat; printFloat->addParam(paramFloat); /*cout << " PrintF --> TPRINTF '(' ArgsF ')' ';'" <<endl;*/}
	   ;
ArgsF : REEL {$$=0; typeFloat = new KAWATreeType("float"); float* doubleVal = (float*) malloc(sizeof(float)); *doubleVal = $1; void* valueDouble = (void*) doubleVal; paramFloat = new KAWATreeParam(typeFloat, valueDouble);/*cout << " ArgsF --> REEL" <<endl;*/}
	  | ID {$$=0;}
	  | {$$=0;} 
	  ; 

PrintI : TPRINTI '(' ArgsI ')' ';' {$$ = new KAWATreePrintInteger; $$->addParam(paramInteger); /*cout << " PrintI --> TPRINTI '(' ArgsI ')' ';'" <<endl;*/}
	   ;
ArgsI : ENTIER {$$=0; typeInteger = new KAWATreeType("int"); int* integer = (int*) malloc(sizeof(int)); *integer = $1; void* valueInt = (void*) integer; paramInteger = new KAWATreeParam(typeInteger, valueInt); /*cout << " ArgsI --> ENTIER " <<endl;*/}
	  | ID {$$=0;}
	  | {$$=0;}
	  ; 

PrintS : TPRINTS '(' ArgsS ')' ';' {$$=0; printString = new KAWATreePrintString; printString->addParam(paramStr); /*cout<< " PrintS --> TPRINTS '(' ArgsS ')' ';'"<< endl;*/}
	   ;
ArgsS : STRING {$$=0; typeString = new KAWATreeType("string"); paramStr = new KAWATreeParam(typeString, (void*) $1);/*cout<< " ArgsS --> STRING "<< endl;*/}
	  | ID {$$=0;}
	  | {$$=0;}
	  ; 

Statement: Block {$$=0;}
    	 | TIF '(' Expression ')' Statement %prec THEN {$$=0;}
		 | TIF '(' Expression ')' Statement TELSE Statement {$$=0;}
		 | TSWITCH '(' Expression ')' '{' SwitchBlockStatements '}' {$$=0;}
		 | TWHILE '(' Expression ')' Statement {$$=0;}
		 | TDO Statement TWHILE '(' Expression ')' ';' {$$=0;}
		 | TFOR '(' ForControl ')' Statement {$$=0;}
		 | TBREAK ID ';' {$$=0;}
		 | TBREAK ';' {$$=0;}
		 | TCONTINUE ID ';' {$$=0;}
		 | TCONTINUE ';' {$$=0;}
		 | TRETURN Expression ';' {$$=0;}
		 | TRETURN ';' {$$=0;}
		 ;

/*----------------------------------------Partie switch----------------------------------------------*/
SwitchBlockStatements: SwitchBlockStatements SwitchBlockStatement {$$=0;}
						  | {$$=0;}
						  ;

SwitchBlockStatement: TCASE Expression ':' BlockStatements {$$=0;}
					|  TDEFAULT ':' BlockStatements
					; 

/*------------------------------ partie for -----------------------------------------------------------------*/
ForControl: ForVarControl ';' Expression ';' {$$=0;} 
		  | ForVarControl ';' Expression ';' ForUpdate {$$=0;} 
		  | ForVarControl ';' ';' {$$=0;}
		  | ForVarControl ';' ';' ForUpdate {$$=0;}
    	  | ';' Expression ';' {$$=0;}
    	  | ';' Expression ';' ForUpdate {$$=0;}
    	  | ';' ';' {$$=0;}
    	  | ';' ';' ForUpdate {$$=0;}
    	  ;

ForVarControl: Type VariableDeclaratorId VariableDeclaratorList {$$=0;}
			 | Type VariableDeclaratorId '=' Expression VariableDeclaratorList {$$=0;}
			 | ID Ids VariableDeclaratorList {$$=0;}
			 | ID Ids '=' Expression VariableDeclaratorList  {$$=0;}
			 ;


ForUpdate: Expression StatementExpressionList {$$=0;}
		 |  ID Ids TablesIndexe '=' Expression  StatementExpressionList {$$=0;}
		 ;

StatementExpressionList : ',' Expression StatementExpressionList {$$=0;}
						| ','  ID Ids TablesIndexe '=' Expression  StatementExpressionList {$$=0;}
						| {$$=0;}
						;   

/*-------------------------------------Expression arithmetique----------------------------------------------------*/

Expression : FacteurEffect {$$=0;}
		   ;

FacteurEffect : FacteurEffect TORBINEQ ExpressionOr {$$=0;}
			  | FacteurEffect TXORBINEQ ExpressionOr {$$=0;}
			  | FacteurEffect TANDBINEQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECALNSEQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECAREQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECALEQ ExpressionOr {$$=0;}
			  | FacteurEffect TMODEQ ExpressionOr {$$=0;}
			  | FacteurEffect TDIVEQ ExpressionOr {$$=0;}
			  | FacteurEffect TMULEQ ExpressionOr {$$=0;}
			  | FacteurEffect TMINUSEQ ExpressionOr {$$=0;}
			  | FacteurEffect TPLUSEQ ExpressionOr {$$=0;}
			  | ExpressionOr{$$=0;}
			  ;

ExpressionOr  : ExpressionOr TOR ExpressionAnd {$$=0;} 
			  | ExpressionAnd {$$=0;}
			  ;

ExpressionAnd : ExpressionAnd TAND ExpressionOrLogic {$$=0;} 
			  | ExpressionOrLogic {$$=0;}
			  ;

ExpressionOrLogic : ExpressionOrLogic '|' ExpressionOrExLogic {$$=0;}
				  | ExpressionOrExLogic {$$=0;}
				  ;

ExpressionOrExLogic : ExpressionOrExLogic '^' ExpressionAndLogic {$$=0;}
				    | ExpressionAndLogic {$$=0;}
				    ;	

ExpressionAndLogic : ExpressionAndLogic '&' ExpressionEqNeq {$$=0;}
				   | ExpressionEqNeq {$$=0;}
				   ;

ExpressionEqNeq  : ExpressionEqNeq TCNE ExpressionCompEq {$$=0;}
				 | ExpressionEqNeq TCEQ ExpressionCompEq {$$=0;}
				 | ExpressionCompEq {$$=0;}
				 ; 

ExpressionCompEq : ExpressionCompEq TCGE TermePlus {$$=0;}  
				 | ExpressionCompEq '>' TermePlus {$$=0;}
				 | ExpressionCompEq TCLE TermePlus {$$=0;}
				 | ExpressionCompEq '<' TermePlus {$$=0;}
				 | TermeDecal {$$=0;}
				 ;	

TermeDecal : TermeDecal TDECALNS TermePlus {$$=0;}
	   	   | TermeDecal TDECAR TermePlus {$$=0;}
	   	   | TermeDecal TDECAL TermePlus {$$=0;}
	       | TermePlus {$$=0;}
	       ;

TermePlus    : TermePlus '+' terme {$$=0;} 
			 | TermePlus '-' terme {$$=0;}
			 | terme {$$=0;}
			 ;	

terme  : terme '*' facteur {$$=0;}
	   | terme '/' facteur {$$=0;}
	   | terme '%' facteur {$$=0;}
	   | facteur {$$=0;}
	   ;

facteur : '~' facteur %prec NBINAIRE {$$=0;}
		| '!' facteur %prec NLOGIC {$$=0;}
		| '-' facteur %prec MOINUS {$$=0;}
		| '+' facteur %prec PLUS {$$=0;}
		| ID TDEC {$$=0;}
		| TDEC ID {$$=0;}
		| ID TINC {$$=0;}
		| TINC ID {$$=0;}
		| factFinal {$$=0;}
		;

factFinal: '(' Expression ')' {$$= new KT_Expression;}
		 | ENTIER {$$= new KT_Entier; $$->setValue($1);}
		 | REEL {$$=0; $$ = new KT_Reel; $$->setValue($1);}
		 | STRING {$$= new KT_String; $$->setValue($1);}
		 | ConstructorCall {$$=$1;}
		 | ArrayInitializer {$$=0;} 
		 | LinkedMethodVarCall {$$=0;} 
		 | TTRUE {$$= new KT_Bool; $$->setValue(true); }
		 | TFALSE {$$= new KT_Bool; $$->setValue(false);}
		 | TNULL {$$= new KT_NULL;} 
		 ;

ConstructorCall : TNEW ID Ids FormalParametersCalledMethod {$$=0;}
	            ;

MethodCall : ID FormalParametersCalledMethod {$$=0;}
		   ;

ArrayInitializer : TNEW BasicType '[' ENTIER ']'{/*cout << "NEW BasicType [ Entier ]"<<endl;*/}
				 | TNEW ID Ids '[' ENTIER ']'{/*cout << "NEW ID IDs [ Entier ]"<<endl;*/}
				 ;

LinkedMethodVarCall : TTHIS '.' ID LinkedMethodVarCallList {$$=0;}
					| ID LinkedMethodVarCallList {$$=0;}
					| TTHIS '.' MethodCall LinkedMethodVarCallList {$2.push_back($1); $$=new KT_LinkedMethodOrVarCall; $$->setMixedCall($2);}
					| MethodCall LinkedMethodVarCallList {$2.push_back($1); $$=new KT_LinkedMethodOrVarCall; $$->setMixedCall($2);}
					;

LinkedMethodVarCallList : '.' ID LinkedMethodVarCallList {KT_ID var=new KT_ID; vector<string*> ids; ids.push_back($2); var->setValue(ids); $3.push_back(ids); $$=$3; }
						| '.' MethodCall LinkedMethodVarCallList {$3.push_back($2); $$=$3;}
						| {/*$$=vector< KT_MethodOrVarCall * >*/ }
						;


%%

int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d] colonne [%d]\n", yytext, lineno, column-strlen(yytext));
  return 0;
}

