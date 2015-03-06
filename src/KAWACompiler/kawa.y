%{
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "testClasse.h"
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

typedef std::string String;

	int yylex();
	int yyerror( const char* err );
	extern int column;
	extern int lineno;
	KAWATreeProgram* program = new KAWATreeProgram;
%}

%token<vint> ENTIER REEL  
%token<vint> STRING TSTRING TSHORT TINT TLONG TFLOAT TDOUBLE TBYTE TCHAR TBOOLEAN TVOID
%token<vint> TIMPORT
%token<vint> TPUBLIC TPRIVATE TPROTECTED
%token<vint> TFINAL TABSTRACT TSTATIC /*TCONST TENUM*/ TVALUE
%token<vstring> ID TCLASS TINTERFACE TEXTENDS TIMPLEMENTS
%token<vint> TSUPER TTHIS 
%token<vint> TIF TELSE
%token<vint> TFALSE TTRUE
%token<vint> TSWITCH TCASE TCONTINUE TBREAK TDEFAULT
%token<vint> TFOR TWHILE TDO
%token<vint> TNEW TNULL TRETURN
%token<vint> TPRINT TMAIN

%token<vint> TPLUSEQ TMINUSEQ TMULEQ TDIVEQ TMODEQ
%token<vint> TINC TDEC
%token<vint> TCEQ TCNE
%token<vint> TCLE TCGE
%token<vint> TOR TAND
%token<vint> TANDBINEQ TORBINEQ
%token<vint> TXORBINEQ TDECAL TDECALEQ TDECAR TDECAREQ TDECALNS TDECALNSEQ

%type<vint> Ids ListIds QList
%type<vint> Type Tables BasicType
%type<vint> Modifier Modifiers /*ModifiersMain*/ Static All Extends ExtendsList Implements			  
%type<vint> ImportDeclaration 

%type<vint> TypeDeclaration ClassOrInterfaceDeclaration ClassDeclaration InterfaceDeclaration 
%type<vint> ClassBody ClassBodyDeclarations ClassBodyDeclaration

%type<vint> InterfaceBody InterfaceBodyDeclarations InterfaceBodyDeclaration
%type<vint> MemberDecl
%type<vint> MethodOrFieldDecl MethodOrFieldRest
%type<vint> FieldDeclaratorsRest
%type<vint> MethodDeclaratorRest MainMethodDeclaratorRest			
%type<vint> ConstructorDeclaratorRest
%type<vint> InterfaceMemberDecl InterfaceMethodOrFieldDecl InterfaceMethodOrFieldRest ConstantDeclaratorsRest ConstantDeclaratorList  ConstantDeclaratorRest ConstantDeclarator 
%type<vint> FormalParameters MainFormalParametrs FormalMainParameterDecls VoidFormalParametrs FormalParametersCalledMethod FormalParametersCalledMethodDecls FormalParameterDecls VariableModifiers  VariableModifier FormalParameterDeclsRest FormalParameterCalledMethodDeclsRest VariableDeclaratorId
%type<vint> VariableDeclaratorList VariableDeclarator VariableDeclaratorRest VariableInitializer ArrayInitializer ObjectInitializer MethodeInitializer VariableInitializerList
%type<vint> Block BlockStatements BlockStatement Statement Print Args ArgsRest
%type<vint> SwitchBlockStatementGroups SwitchBlockStatementGroup SwitchLabel
%type<vint> ForControl ForVarControl ForVariableDeclaratorsRest ForUpdate StatementExpressionList

%type<vint> Expression FacteurEffect ExpressionOr ExpressionAnd ExpressionOrLogic ExpressionOrExLogic ExpressionAndLogic ExpressionEqNeq ExpressionCompEq TermeDecal TermePlus terme facteur factFinal

%type<vint> IDExpression TablesIndexe

%union
{
	int vint;
	float vfloat;
	std::string* vstring;
	KAWATreeProgram* program;
	KAWATreeClass* clazz;
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

%start TypeDeclaration;
%%

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

TablesIndexe : '[' ENTIER ']' Tables {$$=0;}
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
Modifier : TPUBLIC {$$=0;}
		 | TPROTECTED {$$=0;}
		 | TPRIVATE {$$=0;}
		 | TSTATIC {$$=0;}
		 | TABSTRACT {$$=0;}
		 | TFINAL {$$=0;}
		 ;

Modifiers : Modifiers Modifier {$$=0;}
		  | {$$=0;}
		  ;
/*
ModifiersMain : TPUBLIC TSTATIC {$$=0;}
			 | TSTATIC {$$=0;}
			 ;
*/

Static : TSTATIC {$$=0;}
	   | {$$=0;}
	   ;

All : '.' ID All {$$=0;} 
	| '.' '*' {$$=0;}
	| {$$=0;}
	;


Extends	: TEXTENDS Type {$$=0;}
		| {$$=0;}
		;

ExtendsList : TEXTENDS ListIds {$$=0;}
			| {$$=0;}
			;


Implements	: TIMPLEMENTS ListIds {$$=0;}
			| {$$=0;}
			;

/*---------------------IMPORTS ------------------------------------------------------------------*/
ImportDeclaration : TIMPORT Static ID All ';' ImportDeclaration {$$=0;}
				  | {$$=0;}
				  ; 

/*--------------------- Entete classes et interfaces------------------------------------------------------------------*/
TypeDeclaration : ImportDeclaration ClassOrInterfaceDeclaration { $$=0; }
				;

ClassOrInterfaceDeclaration : Modifiers ClassDeclaration {$$=0;}
						    | Modifiers InterfaceDeclaration {$$=0;}
							;

ClassDeclaration : TCLASS ID Extends Implements ClassBody { cout << "CLASS NAME: " << *$2 << endl; }
				 ;

InterfaceDeclaration : TINTERFACE ID ExtendsList InterfaceBody {$$=0;}
					 ;

/*-----------------------------------Corps d'une classe-----------------------------------------------------*/
ClassBody: '{' ClassBodyDeclarations '}' {$$=0;} 
ClassBodyDeclarations : ClassBodyDeclarations ClassBodyDeclaration {$$=0;}
					  | {$$=0;}
					  ;

ClassBodyDeclaration: Modifiers MemberDecl {$$=0;} /*| Static Block | ';' {$$=0;}*/
					| Modifiers TVOID TMAIN MainMethodDeclaratorRest Block {$$=0;}
					;  

/*--------------------------------- corps d'une interface ---------------------------------------------------*/
InterfaceBody: '{' InterfaceBodyDeclarations '}' {$$=$2;}
			 ; 
InterfaceBodyDeclarations : InterfaceBodyDeclarations InterfaceBodyDeclaration {$$=0;}
 						  | {$$=0;}
 						  ;

InterfaceBodyDeclaration: Modifiers InterfaceMemberDecl /*| ';' {$$=0;}*/
    					;  

/*---------------------------classes Memberes : Methodes, void methods, variables, constructors, classes internes and inrefaces internes---------------*/
MemberDecl: MethodOrFieldDecl {$$=0;}
		  | TVOID ID MethodDeclaratorRest Block {$$=0;}
		  | ID ConstructorDeclaratorRest Block {$$=0;}
		  | ClassDeclaration {$$=0;} /*-------- classes internes ----------*/
		  | InterfaceDeclaration  {$$=0;}/*---------- interfaces internes ----*/
		  ;
/*---------------- methodes and variables ---------------------------------------------------------*/
MethodOrFieldDecl: Type ID MethodOrFieldRest {$$=0;}
				 ;

MethodOrFieldRest: FieldDeclaratorsRest ';' {$$=0;}
				 | MethodDeclaratorRest Block {$$=0;}
				 ;

/*--------------- variables -----------------------------------------------------------------------*/
FieldDeclaratorsRest: VariableDeclaratorRest VariableDeclaratorList {$$=0;}
					;

/*-------------------------------------------- partie variables ---------------------------------------------------------*/
/*
VariableDeclarators: VariableDeclarator VariableDeclaratorList {$$=0;}
				   ;
*/
VariableDeclaratorList : ',' VariableDeclarator VariableDeclaratorList {$$=$2;}
					   | {$$=0;}
					   ;

VariableDeclarator: ID VariableDeclaratorRest {$$=0;}
				  ;

VariableDeclaratorRest: Tables '=' VariableInitializer {$$=0;}
					  | Tables {$$=0;}
					  ;

VariableInitializer: ArrayInitializer {$$=0;}
				   | Expression {$$=0;}
				   ;

ArrayInitializer: '{' VariableInitializer VariableInitializerList '}' {$$=$2;}
				| '{' '}' {$$=0;}
				;

VariableInitializerList : ',' VariableInitializer VariableInitializerList {$$=$2;} 
						| {$$=0;}
						;


/*---------------------- methodes ----------------------------------------------------------------*/
MethodDeclaratorRest: FormalParameters {$$=0;}/*Throws Block*/ 
					/*| FormalParameters Throws ';'*/
					;

MainMethodDeclaratorRest : MainFormalParametrs {$$=0;}
						 ;

/*---------------------- partie throw pour les exceptions --------------------------------------------------------------
Throws 				: TTHROWS QualifiedIdentifierList 
					| {$$=0;}
					;
*/

/*----------------------------- constructeur -----------------------------------------------------*/
ConstructorDeclaratorRest: FormalParameters  {$$=0;} /*Throws Block*/
						 ;
/*------------------interface membres : Methodes, void methods, variables, classes internes and inrefaces internes ------------------------*/
InterfaceMemberDecl: InterfaceMethodOrFieldDecl {$$=0;}
    			   | TVOID ID FormalParameters ';' {$$=0;}/*Throws*/
    			   | ClassDeclaration {$$=0;}/*-------- classes internes ----------*/
    			   | InterfaceDeclaration {$$=0;}/*-------- interfaces internes ----------*/
    			   ;

InterfaceMethodOrFieldDecl: Type ID InterfaceMethodOrFieldRest {$$=0;}
						  ;

InterfaceMethodOrFieldRest: ConstantDeclaratorsRest ';' {$$=0;}
    					  | FormalParameters ';' {$$=0;}/*InterfaceMethodDeclaratorRest*/
    					  ;

ConstantDeclaratorsRest: ConstantDeclaratorRest ConstantDeclaratorList {$$=0;}
					   ;
ConstantDeclaratorList : ',' ConstantDeclarator ConstantDeclaratorList {$$=$2;}
					   | {$$=0;}
					   ;

ConstantDeclarator: ID ConstantDeclaratorRest {$$=0;}
				  ;

ConstantDeclaratorRest: Tables '=' VariableInitializer {$$=0;}
					  | Tables {$$=0;}
					  ;

/*
InterfaceMethodDeclaratorRest: FormalParameters ';' {$$=0;}/*Throws
							 ; 
*/
/*
VoidInterfaceMethodDeclaratorRest: FormalParameters Throws ';'
								 ;
*/  

/*-------------------------------------- partie de parametres des methodes -----------------------------------------*/
FormalParameters: '(' FormalParameterDecls ')' {$$=$2;}
				| VoidFormalParametrs {$$=0;}
				;

MainFormalParametrs : '(' FormalMainParameterDecls ')' {$$=$2;}
					| VoidFormalParametrs {$$=0;}
					;	
FormalMainParameterDecls : TSTRING '[' ']' ID {$$=0;}
						 ;

VoidFormalParametrs : '(' ')' {$$=0;}
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
Block: '{' BlockStatements '}' {$$=$2;}
	 ;

BlockStatements: BlockStatements BlockStatement {$$=0;}
			   | {$$=0;}
			   ; 

BlockStatement: Print {$$=0;}
			  | ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} /* des nouveaux variables locaux initialisé ou pas */
			  | ID Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} /* des nouveaux variables locaux initialisé ou pas */
			  | BasicType Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;}/* des nouveaux variables locaux initialisé ou pas */
			  /* les 3 premieres lignes remplacent Type VariableDeclarator VariableDeclaratorList ';' qui renvoie un conflit; conflit dans Ids de Type*/
    		  | ID TablesIndexe '=' Expression ';' {$$=0;}
    		  | Expression ';' {$$=0;}
    		  | TTHIS '.' VariableDeclarator ';' {$$=0;}
    		  | TTHIS '.' ID FormalParametersCalledMethod ';' {$$=0;}
    		  | TSUPER FormalParametersCalledMethod ';' {$$=0;}
    		  | ClassOrInterfaceDeclaration {$$=0;}
    		  | ID ':' Statement {$$=0;}
    		  | Statement {$$=0;}
    		  | ';' {$$=0;}
    		  ;

Print : TPRINT '(' Args ')' ';' {cout << "Print: " << $1 << endl; $$=0;}
	  ;
Args :factFinal ArgsRest {$$=0;}
	 | {$$=0;}
	 ;
ArgsRest : '+' factFinal ArgsRest {$$=0;} 
		 | {$$=0;}
		 ;
/*
LocalVariableDeclarationStatement: 
								 ;
*/
Statement: Block {$$=0;}
    	 | TIF '(' Expression ')' Statement %prec THEN {$$=0;}
		 | TIF '(' Expression ')' Statement TELSE Statement {$$=0;}
		 | TSWITCH '(' Expression ')' '{' SwitchBlockStatementGroups '}' {$$=0;}
		 | TWHILE '(' Expression ')' Statement {$$=0;}
		 | TDO Statement TWHILE '(' Expression ')' ';' {$$=0;}
		 | TFOR '(' ForControl ')' Statement {$$=0;}
		 | TBREAK ID ';' {$$=0;}
		 | TBREAK ';' {$$=0;}
		 | TCONTINUE ID ';' {$$=0;}
		 | TCONTINUE ';' {$$=0;}
		 | TRETURN Expression ';' {$$=0;}
		 | TRETURN ';' {$$=0;}
		 /*| TTHROWS Expression ';'*/
		 /*| TSYNCHRONIZED '(' Expression ')' Block*/
		 /*| TTRY Block Catches */
		 /*| TTRY Block Catches TFINALLY Block*/
		 /*| TTRY Block TFINALLY Block*/
		 /*| TTRY ResourceSpecification Block Catches */
		 /*| TTRY ResourceSpecification Block Catches TFINALLY Block*/
		 /*| TTRY ResourceSpecification Block TFINALLY Block*/
    	 ;

/*--------------------------------------------partie exceptions------------------------------------
Catches: CatchClause  CatchClauses
CatchClauses : CatchClauses CatchClause
			 | {$$=0;}
			 ;

CatchClause:  TCATCH '(' VariableModifiers CatchType ID ')' Block
		   ;

CatchType: QualifiedIdentifier QualifiedIdentifiers
QualifiedIdentifiers : '|' QualifiedIdentifiers QualifiedIdentifier {$$=$2;}
					 | {$$=0;}
					 ;

/*---------- partie resources de try ----------------------------
ResourceSpecification: '(' Resources ';' ')' {$$=$2;}
					 | '(' Resources ')' {$$=$2;}
					 ;

Resources: Resource ResourceList
		 ;
ResourceList : ';' ResourceList Resource {$$=$2;}
			 | {$$=0;}
			 ;

Resource: VariableModifiers QualifiedIdentifier VariableDeclaratorId '=' Expression
		;
*/
/*----------------------------------------Partie switch----------------------------------------------*/
SwitchBlockStatementGroups: SwitchBlockStatementGroups SwitchBlockStatementGroup {$$=0;}
						  | {$$=0;}
						  ;

SwitchBlockStatementGroup: SwitchLabel BlockStatements {$$=0;}
						 ; 

SwitchLabel: TCASE Expression ':' {$$=0;} 
    	   | TDEFAULT ':' {$$=0;}
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

ForVarControl: Type VariableDeclaratorId  ForVariableDeclaratorsRest {$$=0;}
			 | ID ForVariableDeclaratorsRest {$$=0;}
			 ;

ForVariableDeclaratorsRest:  VariableDeclaratorList {$$=0;}
						  | '=' VariableInitializer VariableDeclaratorList {$$=0;}
						  ;

ForUpdate: IDExpression StatementExpressionList {$$=0;}
		 ;

StatementExpressionList : ',' Expression StatementExpressionList {$$=0;}
						| {$$=0;}
						;   

IDExpression : Expression {$$=0;}
	 		 | ID TablesIndexe '=' Expression {$$=0;}
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
			  /*| FacteurEffect '=' ExpressionOrCond*/
			  | ExpressionOr{$$=0;}
			  ;
/*
ExpressionCond : Expression '?' Expression ':' Expression % prec COND {$$=0;}
				 | ExpressionCond {$$=0;}
				 ;
*/

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
/*------------------------
.
------------------------
[]
------------------------*/
factFinal: '(' Expression ')' {$$=0;}
		 | ENTIER {$$=0;}
		 | REEL {$$=0;}
		 | ID Ids {$$=0;}
		 | STRING {$$=0;}
		 | ObjectInitializer {$$=0;}
		 | MethodeInitializer {$$=0;}
		 | TTRUE {$$=0;}
		 | TFALSE {$$=0;}
		 | TNULL {$$=0;} 
		 ;

ObjectInitializer : TNEW ID Ids FormalParametersCalledMethod {$$=0;}
	   ;

MethodeInitializer : ID Ids FormalParametersCalledMethod {$$=0;}
		;


%%

/*#include "lex.yy.c"*/

int yyerror( const char* err )
{
  printf("Erreur syntaxique: '%s' est imprévu dans la ligne [%d] colonne [%d]\n", err, lineno, column);
  return 0;
}

