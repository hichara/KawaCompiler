%{
	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
	#include <string.h>

	int yyparse();
	int yylex();
	int yyerror (char *msg);
%}

%token<vstring> ENTIER REEL ID  
%token<vstring> /*STRING*/ TSHORT TINT TLONG TFLOAT TDOUBLE TBYTE TCHAR TBOOLEAN TVOID
%token<vstring> TIMPORT
%token<vstring> TPUBLIC TPRIVATE TPROTECTED
%token<vstring> TFINAL TABSTRACT TSTATIC /*TCONST TENUM*/ TVALUE
%token<vstring> TCLASS TINTERFACE TEXTENDS TIMPLEMENTS
/*%token<vstring> TSUPER TTHIS TTHROW TTHROWS TTRY TCATCH TSYNCHRONIZED*/
%token<vstring> TIF TELSE
/*%token<vstring> TFALSE TTRUE*/
%token<vstring> TSWITCH TCASE TCONTINUE TBREAK TDEFAULT
%token<vstring> TFOR TWHILE TDO
%token<vstring> /*TINSTANCEOF TFINALLY*/ TNEW /*TNULL*/ TRETURN

%token<vstring> TPLUSEQ TMINUSEQ TMULEQ TDIVEQ TMODEQ
%token<vstring> TINC TDEC
%token<vstring> TCEQ TCNE
%token<vstring> TCLE TCGE
%token<vstring> TOR TAND
%token<vstring> TANDBINEQ TORBINEQ
%token<vstring> TXORBINEQ TDECAL TDECALEQ TDECAR TDECAREQ TDECALNS TDECALNSEQ

%type<vstring> Ids ListIds QList
%type<vstring> Type Tables BasicType
%type<vstring> Modifier Modifiers Static All Extends ExtendsList Implements			  
%type<vstring> ImportDeclaration 

%type<vstring> TypeDeclaration ClassOrInterfaceDeclaration ClassDeclaration InterfaceDeclaration 
%type<vstring> ClassBody ClassBodyDeclarations ClassBodyDeclaration

%type<vstring> InterfaceBody InterfaceBodyDeclarations InterfaceBodyDeclaration
%type<vstring> MemberDecl
%type<vstring> MethodOrFieldDecl MethodOrFieldRest
%type<vstring> FieldDeclaratorsRest
%type<vstring> MethodDeclaratorRest
/*%type<vstring> Throws*/ 				
%type<vstring> ConstructorDeclaratorRest
%type<vstring> InterfaceMemberDecl InterfaceMethodOrFieldDecl InterfaceMethodOrFieldRest ConstantDeclaratorsRest ConstantDeclaratorList  ConstantDeclaratorRest ConstantDeclarator /*InterfaceMethodDeclaratorRest*/
%type<vstring> FormalParameters FormalParameterDecls VariableModifiers VariableModifier FormalParameterDeclsRest VariableDeclaratorId
%type<vstring> /*VariableDeclarators*/ VariableDeclaratorList VariableDeclarator VariableDeclaratorRest VariableInitializer ArrayInitializer ObjectInitializer MethodeInitializer VariableInitializerList
%type<vstring> Block BlockStatements BlockStatement /*LocalVariableDeclarationStatement*/ Statement
/*%type<vstring> Catches CatchClauses CatchClause CatchType QualifiedIdentifiers*/
/*%type<vstring> ResourceSpecification Resources ResourceList Resource*/
/*%type<vstring> SwitchBlockStatementGroups SwitchBlockStatementGroup SwitchLabels SwitchLabelRest SwitchLabel*/
%type<vstring> ForControl ForVarControl ForVariableDeclaratorsRest ForUpdate StatementExpressionList

/*%type<vstring> Expression  ExpressionOr ExpressionAnd ExpressionEqNeq ExpressionCompEq TermePlus terme facteur*/
%type<vstring> Expression FacteurEffect /*ExpressionCond*/ ExpressionOr ExpressionAnd ExpressionOrLogic ExpressionOrExLogic ExpressionAndLogic ExpressionEqNeq ExpressionCompEq TermeDecal TermePlus terme facteur factFinal

%union
{
	int vint;
	float vfloat;
	char* vstring;
}
/*
%nonassoc THEN 
%nonassoc TELSE
%left '='
%left TOR
%left TAND
%left TCEQ TCNE
%left TCGE '>' TCLE '<'
%left '+' '-'
%left '%' '*' '/'
%right MOINUS
%right TINC TDEC
*/

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
Ids : '.' ID Ids {$$=" ";}
	| {$$=" ";}
	;

QList : ',' ID Ids QList {$$ = " ";}
	  | {$$ = " ";}
	  ;

ListIds : ID Ids QList
		;
/*-----------------------------------les types basic est les references type + possibilité des tableaux----------------------------------------------*/
Type : BasicType Tables 
	 | ID Ids Tables
	 ;

Tables : '[' ']' Tables {$$=$3;}
	   | {$$=" ";}
	   ;

BasicType : TBYTE 
		  | TSHORT
		  | TCHAR
		  | TINT
		  | TLONG
		  | TFLOAT
		  | TDOUBLE
		  | TBOOLEAN
		  ;

/*------------- Partie d'encapsulation + final + static + extends ID, ID..... et implements ID, ID , ID... ----------------------------------*/
Modifier : TPUBLIC
		 | TPROTECTED
		 | TPRIVATE
		 | TSTATIC 
		 | TABSTRACT
		 | TFINAL
		 ;

Modifiers : Modifiers Modifier
		  | {$$=" ";}
		  ;


Static : TSTATIC
	   | {$$=" ";}
	   ;

All : '.' ID All {$$=" ";} 
	| '.' '*' {$$=" ";}
	| {$$=" ";}
	;


Extends	: TEXTENDS Type
		| {$$=" ";}
		;

ExtendsList : TEXTENDS ListIds
			| {$$=" ";}
			;


Implements	: TIMPLEMENTS ListIds
			| {$$=" ";}
			;

/*---------------------IMPORTS ------------------------------------------------------------------*/
ImportDeclaration : TIMPORT Static ID All ';' ImportDeclaration
				  | {$$=" ";}
				  ; 

/*--------------------- Entete classes et interfaces------------------------------------------------------------------*/
TypeDeclaration : ImportDeclaration ClassOrInterfaceDeclaration {printf("programme fini \n");}
				;

ClassOrInterfaceDeclaration : Modifiers ClassDeclaration 
						    | Modifiers InterfaceDeclaration
							;

ClassDeclaration : TCLASS ID Extends Implements ClassBody
				 ;

InterfaceDeclaration : TINTERFACE ID ExtendsList InterfaceBody
					 ;

/*-----------------------------------Corps d'une classe-----------------------------------------------------*/
ClassBody: '{' ClassBodyDeclarations '}' {$$=" ";} 
ClassBodyDeclarations : ClassBodyDeclarations ClassBodyDeclaration
					  | {$$=" ";}
					  ;

ClassBodyDeclaration: Modifiers MemberDecl /*| Static Block | ';' {$$=" ";}*/
					;  

/*--------------------------------- corps d'une interface ---------------------------------------------------*/
InterfaceBody: '{' InterfaceBodyDeclarations '}' {$$=$2;}
			 ; 
InterfaceBodyDeclarations : InterfaceBodyDeclarations InterfaceBodyDeclaration
 						  | {$$=" ";}
 						  ;

InterfaceBodyDeclaration: Modifiers InterfaceMemberDecl /*| ';' {$$=" ";}*/
    					;  

/*---------------------------classes Memberes : Methodes, void methods, variables, constructors, classes internes and inrefaces internes---------------*/
MemberDecl: MethodOrFieldDecl
		  | TVOID ID MethodDeclaratorRest Block
		  | ID ConstructorDeclaratorRest Block
		  | ClassDeclaration /*-------- classes internes ----------*/
		  | InterfaceDeclaration /*---------- interfaces internes ----*/
		  ;
/*---------------- methodes and variables ---------------------------------------------------------*/
MethodOrFieldDecl: Type ID MethodOrFieldRest
				 ;

MethodOrFieldRest: FieldDeclaratorsRest ';'
				 | MethodDeclaratorRest Block
				 ;

/*--------------- variables -----------------------------------------------------------------------*/
FieldDeclaratorsRest: VariableDeclaratorRest VariableDeclaratorList
					;

/*-------------------------------------------- partie variables ---------------------------------------------------------*/
/*
VariableDeclarators: VariableDeclarator VariableDeclaratorList
				   ;
*/
VariableDeclaratorList : ',' VariableDeclarator VariableDeclaratorList {$$=$2;}
					   | {$$=" ";}
					   ;

VariableDeclarator: ID VariableDeclaratorRest
				  ;

VariableDeclaratorRest: Tables '=' VariableInitializer
					  | Tables
					  ;

VariableInitializer: ArrayInitializer
				   | Expression
				   | ObjectInitializer
				   | MethodeInitializer
				   ;

ArrayInitializer: '{' VariableInitializer VariableInitializerList '}' {$$=$2;}
				| '{' '}' {$$=" ";}
				;
ObjectInitializer : TNEW ID Ids FormalParameters
	   ;

MethodeInitializer : ID Ids FormalParameters
		;

VariableInitializerList : ',' VariableInitializer VariableInitializerList {$$=$2;} 
						| {$$=" ";}
						;


/*---------------------- methodes ----------------------------------------------------------------*/
MethodDeclaratorRest: FormalParameters /*Throws Block*/ 
					/*| FormalParameters Throws ';'*/
					;

/*---------------------- partie throw pour les exceptions --------------------------------------------------------------
Throws 				: TTHROWS QualifiedIdentifierList
					| {$$=" ";}
					;
*/

/*----------------------------- constructeur -----------------------------------------------------*/
ConstructorDeclaratorRest: FormalParameters /*Throws Block*/
						 ;
/*------------------interface membres : Methodes, void methods, variables, classes internes and inrefaces internes ------------------------*/
InterfaceMemberDecl: InterfaceMethodOrFieldDecl
    			   | TVOID ID FormalParameters ';' /*Throws*/
    			   | ClassDeclaration /*-------- classes internes ----------*/
    			   | InterfaceDeclaration /*-------- interfaces internes ----------*/
    			   ;

InterfaceMethodOrFieldDecl: Type ID InterfaceMethodOrFieldRest
						  ;

InterfaceMethodOrFieldRest: ConstantDeclaratorsRest ';'
    					  | FormalParameters ';' /*InterfaceMethodDeclaratorRest*/
    					  ;

ConstantDeclaratorsRest: ConstantDeclaratorRest ConstantDeclaratorList
					   ;
ConstantDeclaratorList : ',' ConstantDeclarator ConstantDeclaratorList {$$=$2;}
					   | {$$="$2";}
					   ;

ConstantDeclarator: ID ConstantDeclaratorRest
				  ;

ConstantDeclaratorRest: Tables '=' VariableInitializer
					  ;

/*
InterfaceMethodDeclaratorRest: FormalParameters ';' /*Throws
							 ; 
*/
/*
VoidInterfaceMethodDeclaratorRest: FormalParameters Throws ';'
								 ;
*/  

/*-------------------------------------- partie de parametres des methodes -----------------------------------------*/
FormalParameters: '(' FormalParameterDecls ')' {$$=$2;}
				| '(' ')' {$$=" ";}
				;

FormalParameterDecls: VariableModifiers Type VariableDeclaratorId FormalParameterDeclsRest
VariableModifiers : VariableModifiers VariableModifier
				  | {$$=" ";}
				  ;

VariableModifier: TFINAL
				| TVALUE
				;

FormalParameterDeclsRest: ',' FormalParameterDecls {$$=$2;}
						| {$$=" ";}
						;

VariableDeclaratorId: ID Tables
					;

/*----------------------------------- partie blocks et les variables locaux ------------------------*/
Block: '{' BlockStatements '}' {$$=$2;}
	 ;

BlockStatements: BlockStatements BlockStatement
			   | {$$=" ";}
			   ; 

BlockStatement: Type VariableDeclarator VariableDeclaratorList ';' {$$=" ";} /* des nouveaux variables locaux initialisé ou pas */
    		  /*| ID Ids VariableDeclaratorRest ';' *//*ID Ids '=' Expression ';'*/ /* ID Ids=(Expression,ArrayInitializer,ObjectInitializer,MethodeInitializer)*//* partie de variable déjà déclaré (conflit avec la ligne au dessus) */
    		  | ClassOrInterfaceDeclaration
    		  | ID ':' Statement
    		  | Statement
    		  | Expression ';'
    		  | ';' {$$ = " ";}
    		  ;
/*
LocalVariableDeclarationStatement: 
								 ;
*/
Statement: Block 
    	 | TIF '(' Expression ')' Statement %prec THEN
		 | TIF '(' Expression ')' Statement TELSE Statement
		 /*| TSWITCH '(' Expression ')' '{' SwitchBlockStatementGroups '}' */
		 | TWHILE '(' Expression ')' Statement
		 | TDO Statement TWHILE '(' Expression ')' ';'
		 | TFOR '(' ForControl ')' Statement
		 | TBREAK ID ';'
		 | TBREAK ';'
		 | TCONTINUE ID ';'
		 | TCONTINUE ';'
		 | TRETURN Expression ';'
		 | TRETURN ';'
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
			 | {$$=" ";}
			 ;

CatchClause:  TCATCH '(' VariableModifiers CatchType ID ')' Block
		   ;

CatchType: QualifiedIdentifier QualifiedIdentifiers
QualifiedIdentifiers : '|' QualifiedIdentifiers QualifiedIdentifier {$$=$2;}
					 | {$$=" ";}
					 ;

/*---------- partie resources de try ----------------------------
ResourceSpecification: '(' Resources ';' ')' {$$=$2;}
					 | '(' Resources ')' {$$=$2;}
					 ;

Resources: Resource ResourceList
		 ;
ResourceList : ';' ResourceList Resource {$$=$2;}
			 | {$$=" ";}
			 ;

Resource: VariableModifiers QualifiedIdentifier VariableDeclaratorId '=' Expression
		;
*/
/*----------------------------------------Partie switch----------------------------------------------
SwitchBlockStatementGroups: SwitchBlockStatementGroups SwitchBlockStatementGroup
						  | {$$=" ";}
						  ;

SwitchBlockStatementGroup: SwitchLabels BlockStatements
						 ;

SwitchLabels: SwitchLabel SwitchLabelRest
			;

SwitchLabel: TCASE Expression ':'
    	   | TDEFAULT ':'
    	   ;

SwitchLabelRest : SwitchLabelRest SwitchLabel
			    | {$$=" ";}
			    ;
*/

/*------------------------------ partie for -----------------------------------------------------------------*/
ForControl: ForVarControl ';' Expression ';' 
		  | ForVarControl ';' Expression ';' ForUpdate 
		  | ForVarControl ';' ';' 
		  | ForVarControl ';' ';' ForUpdate
    	  | ';' Expression ';' {$$=$2;}
    	  | ';' Expression ';' ForUpdate {$$=$2;}
    	  | ';' ';' {$$=" ";}
    	  | ';' ';' ForUpdate {$$=$3;}
    	  ;

ForVarControl: Type VariableDeclaratorId  ForVariableDeclaratorsRest
			 /*| VariableDeclaratorId  ForVariableDeclaratorsRest*/ /* conflit avec la ligne au dessus*/
			 ;

ForVariableDeclaratorsRest:  VariableDeclaratorList
						  | '=' VariableInitializer VariableDeclaratorList {$$=$2;}
						  ;

ForUpdate: Expression StatementExpressionList
StatementExpressionList : ',' Expression StatementExpressionList{$$=$2;}
						| {$$=" ";}
						;   

/*-------------------------------------Expression arithmetique----------------------------------------------------*/

Expression : FacteurEffect
		   ;

FacteurEffect : FacteurEffect TORBINEQ ExpressionOr
			  | FacteurEffect TXORBINEQ ExpressionOr
			  | FacteurEffect TANDBINEQ ExpressionOr
			  | FacteurEffect TDECALNSEQ ExpressionOr
			  | FacteurEffect TDECAREQ ExpressionOr
			  | FacteurEffect TDECALEQ ExpressionOr
			  | FacteurEffect TMODEQ ExpressionOr
			  | FacteurEffect TDIVEQ ExpressionOr
			  | FacteurEffect TMULEQ ExpressionOr
			  | FacteurEffect TMINUSEQ ExpressionOr
			  | FacteurEffect TPLUSEQ ExpressionOr
			  /*| FacteurEffect '=' ExpressionOrCond*/ 
			  | ExpressionOr
			  ;
/*
ExpressionCond : Expression '?' Expression ':' Expression % prec COND
				 | ExpressionCond
				 ;
*/

ExpressionOr  : ExpressionOr TOR ExpressionAnd 
			  | ExpressionAnd
			  ;

ExpressionAnd : ExpressionAnd TAND ExpressionOrLogic 
			  | ExpressionOrLogic
			  ;

ExpressionOrLogic : ExpressionOrLogic '|' ExpressionOrExLogic
				  | ExpressionOrExLogic
				  ;

ExpressionOrExLogic : ExpressionOrExLogic '^' ExpressionAndLogic
				    | ExpressionAndLogic
				    ;	

ExpressionAndLogic : ExpressionAndLogic '&' ExpressionEqNeq
				   | ExpressionEqNeq
				   ;

ExpressionEqNeq  : ExpressionEqNeq TCNE ExpressionCompEq 
				 | ExpressionEqNeq TCEQ ExpressionCompEq  
				 | ExpressionCompEq
				 ; 

ExpressionCompEq : ExpressionCompEq TCGE TermePlus  
				 | ExpressionCompEq '>' TermePlus  
				 | ExpressionCompEq TCLE TermePlus 
				 | ExpressionCompEq '<' TermePlus 
				 | TermeDecal
				 ;	

TermeDecal : TermeDecal TDECALNS TermePlus
	   	   | TermeDecal TDECAR TermePlus
	   	   | TermeDecal TDECAL TermePlus
	       | TermePlus
	       ;

TermePlus    : TermePlus '+' terme 
			 | TermePlus '-' terme 
			 | terme 
			 ;	

terme  : terme '*' facteur
	   | terme '/' facteur
	   | terme '%' facteur
	   | facteur {}
	   ;

facteur : '~' facteur %prec NBINAIRE {$$=$2;}
		| '!' facteur %prec NLOGIC {$$=$2;}
		| '-' facteur %prec MOINUS {$$=$2;}
		| '+' facteur %prec PLUS {$$=$2;}
		| ID TDEC
		| TDEC ID {$$=$2;}
		| ID TINC
		| TINC ID {$$=$2;}
		| factFinal
		;
/*------------------------
.
------------------------
[]
------------------------*/
factFinal: '(' Expression ')' {$$=$2;}
		 | ENTIER 
		 | REEL
		 | ID 
		 ;


%%

#include "lex.yy.c"

int yyerror (char *msg) 
{
  printf("erreuuur, %s: '%s' dans la ligne %d\n", msg, yytext, yylineno);
  return 0;
}

int main(int argc, char** argv)
{ 
	++argv, --argc;
	if(argc>0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;


 yyparse();
 return 0;
}
