%{
	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
	#include <string.h>

	int yyparse();
	int yylex();
	int yyerror (char *msg);
	extern int column;
	extern int lineno; 
%}

%token<vstring> ENTIER REEL ID  
%token<vstring> STRING TSTRING TSHORT TINT TLONG TFLOAT TDOUBLE TBYTE TCHAR TBOOLEAN TVOID
%token<vstring> TIMPORT
%token<vstring> TPUBLIC TPRIVATE TPROTECTED
%token<vstring> TFINAL TABSTRACT TSTATIC /*TCONST TENUM*/ TVALUE
%token<vstring> TCLASS TINTERFACE TEXTENDS TIMPLEMENTS
%token<vstring> TSUPER TTHIS 
%token<vstring> TIF TELSE
%token<vstring> TFALSE TTRUE
%token<vstring> TSWITCH TCASE TCONTINUE TBREAK TDEFAULT
%token<vstring> TFOR TWHILE TDO
%token<vstring> TNEW TNULL TRETURN
%token<vstring> TPRINT TMAIN TPRINTI TPRINTF TPRINTS

%token<vstring> TPLUSEQ TMINUSEQ TMULEQ TDIVEQ TMODEQ
%token<vstring> TINC TDEC
%token<vstring> TCEQ TCNE
%token<vstring> TCLE TCGE
%token<vstring> TOR TAND
%token<vstring> TANDBINEQ TORBINEQ
%token<vstring> TXORBINEQ TDECAL TDECALEQ TDECAR TDECAREQ TDECALNS TDECALNSEQ

%type<vstring> Ids ListIds QList
%type<vstring> Type Tables BasicType
%type<vstring> Modifier Modifiers /*ModifiersMain*/ Static All Extends ExtendsList Implements			  
%type<vstring> ImportDeclaration 

%type<vstring> TypeDeclaration ClassOrInterfaceDeclaration ClassDeclaration InterfaceDeclaration 
%type<vstring> ClassBody ClassBodyDeclarations ClassBodyDeclaration

%type<vstring> InterfaceBody InterfaceBodyDeclarations InterfaceBodyDeclaration
%type<vstring> MemberDecl
%type<vstring> MethodOrFieldDecl MethodOrFieldRest
%type<vstring> FieldDeclaratorsRest
%type<vstring> MethodDeclaratorRest MainMethodDeclaratorRest			
%type<vstring> ConstructorDeclaratorRest
%type<vstring> InterfaceMemberDecl InterfaceMethodOrFieldDecl InterfaceMethodOrFieldRest ConstantDeclaratorsRest ConstantDeclaratorList  ConstantDeclaratorRest ConstantDeclarator 
%type<vstring> FormalParameters MainFormalParametrs FormalMainParameterDecls VoidFormalParametrs FormalParametersCalledMethod FormalParametersCalledMethodDecls FormalParameterDecls VariableModifiers  VariableModifier FormalParameterDeclsRest FormalParameterCalledMethodDeclsRest VariableDeclaratorId
%type<vstring> VariableDeclaratorList VariableDeclarator VariableDeclaratorRest VariableInitializer ArrayInitializer ObjectInitializer MethodeInitializer VariableInitializerList
%type<vstring> Block BlockStatements BlockStatement Statement Print Args ArgsRest PrintF ArgsF PrintI ArgsI PrintS ArgsS
%type<vstring> SwitchBlockStatementGroups SwitchBlockStatementGroup SwitchLabel
%type<vstring> ForControl ForVarControl ForVariableDeclaratorsRest ForUpdate StatementExpressionList

%type<vstring> Expression FacteurEffect ExpressionOr ExpressionAnd ExpressionOrLogic ExpressionOrExLogic ExpressionAndLogic ExpressionEqNeq ExpressionCompEq TermeDecal TermePlus terme facteur factFinal

%type<vstring> IDExpression TablesIndexe

%union
{
	int vint;
	float vfloat;
	char* vstring;
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

TablesIndexe : '[' ENTIER ']' Tables {$$=" ";}
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
		  | TSTRING
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
/*
ModifiersMain : TPUBLIC TSTATIC
			 | TSTATIC
			 ;
*/

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
					| Modifiers TVOID TMAIN MainMethodDeclaratorRest Block
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
				   ;

ArrayInitializer: '{' VariableInitializer VariableInitializerList '}' {$$=$2;}
				| '{' '}' {$$=" ";}
				;

VariableInitializerList : ',' VariableInitializer VariableInitializerList {$$=$2;} 
						| {$$=" ";}
						;


/*---------------------- methodes ----------------------------------------------------------------*/
MethodDeclaratorRest: FormalParameters /*Throws Block*/ 
					/*| FormalParameters Throws ';'*/
					;

MainMethodDeclaratorRest : MainFormalParametrs
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
					  | Tables
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
				| VoidFormalParametrs
				;

MainFormalParametrs : '(' FormalMainParameterDecls ')' {$$=$2;}
					| VoidFormalParametrs
					;	
FormalMainParameterDecls : TSTRING '[' ']' ID
						 ;

VoidFormalParametrs : '(' ')' {$$=" ";}
					;

FormalParametersCalledMethod: '(' FormalParametersCalledMethodDecls ')' {$$=$2;}
							| VoidFormalParametrs
							;
FormalParametersCalledMethodDecls : ID '[' ENTIER ']' TablesIndexe FormalParameterCalledMethodDeclsRest
								  | Expression FormalParameterCalledMethodDeclsRest
								  ;

FormalParameterDecls: VariableModifiers Type VariableDeclaratorId FormalParameterDeclsRest
					;

VariableModifiers : VariableModifiers VariableModifier
				  | {$$=" ";}
				  ;

VariableModifier: TFINAL
				| TVALUE
				;

FormalParameterDeclsRest: ',' FormalParameterDecls {$$=$2;}
						| {$$=" ";}
						;

FormalParameterCalledMethodDeclsRest : ',' FormalParametersCalledMethodDecls {$$=$2;}
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

BlockStatement: Print
			  | PrintF
			  | PrintI
			  | PrintS
			  | ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {$$=" ";} /* des nouveaux variables locaux initialisé ou pas */
			  | ID Tables VariableDeclarator VariableDeclaratorList ';' {$$=" ";} /* des nouveaux variables locaux initialisé ou pas */
			  | BasicType Tables VariableDeclarator VariableDeclaratorList ';' /* des nouveaux variables locaux initialisé ou pas */
			  /* les 3 premieres lignes remplacent Type VariableDeclarator VariableDeclaratorList ';' qui renvoie un conflit; conflit dans Ids de Type*/
    		  | ID TablesIndexe '=' Expression ';' {$$ = " ";}
    		  | Expression ';'
    		  | TTHIS '.' VariableDeclarator ';' 
    		  | TTHIS '.' ID FormalParametersCalledMethod ';'
    		  | TSUPER FormalParametersCalledMethod ';'
    		  | ClassOrInterfaceDeclaration
    		  | ID ':' Statement
    		  | Statement
    		  | ';' {$$ = " ";}
    		  ;

Print : TPRINT '(' Args ')' ';'
	  ;
Args :factFinal ArgsRest
	 | {}
	 ;
ArgsRest : '+' factFinal ArgsRest {$$ = $2;} 
		 | {$$ = " ";} 
		 ;

PrintF : TPRINTF '(' ArgsF ')' ';'
	   ;
ArgsF : REEL
	  | ID
	  | {}
	  ; 

PrintI : TPRINTI '(' ArgsI ')' ';'
	   ;
ArgsI : ENTIER
	  | ID
	  | {}
	  ; 

PrintS : TPRINTS '(' ArgsS ')' ';'
	   ;
ArgsS : STRING
	  | ID
	  | {}
	  ; 

/*
LocalVariableDeclarationStatement: 
								 ;
*/
Statement: Block 
    	 | TIF '(' Expression ')' Statement %prec THEN
		 | TIF '(' Expression ')' Statement TELSE Statement
		 | TSWITCH '(' Expression ')' '{' SwitchBlockStatementGroups '}'
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
/*----------------------------------------Partie switch----------------------------------------------*/
SwitchBlockStatementGroups: SwitchBlockStatementGroups SwitchBlockStatementGroup
						  | {$$=" ";}
						  ;

SwitchBlockStatementGroup: SwitchLabel BlockStatements
						 ;

SwitchLabel: TCASE Expression ':' 
    	   | TDEFAULT ':'
    	   ;
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
			 | ID ForVariableDeclaratorsRest
			 ;

ForVariableDeclaratorsRest:  VariableDeclaratorList
						  | '=' VariableInitializer VariableDeclaratorList {$$=$2;}
						  ;

ForUpdate: IDExpression StatementExpressionList
		 ;

StatementExpressionList : ',' Expression StatementExpressionList{$$=$2;}
						| {$$=" ";}
						;   

IDExpression : Expression
	 		 | ID TablesIndexe '=' Expression
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
		 | ID Ids
		 | STRING
		 | ObjectInitializer
		 | MethodeInitializer
		 | TTRUE
		 | TFALSE
		 | TNULL
		 ;

ObjectInitializer : TNEW ID Ids FormalParametersCalledMethod
	   ;

MethodeInitializer : ID Ids FormalParametersCalledMethod
		;


%%

#include "lex.yy.c"

int yyerror (char *msg) 
{
  printf("Erreur syntaxique: '%s' est imprévu dans la ligne [%d] colonne [%d]\n", yytext, lineno, column-strlen(yytext));
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
