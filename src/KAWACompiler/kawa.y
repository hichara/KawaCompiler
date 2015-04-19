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

%token<vint> ENTIER
%token<vfloat> REEL  
%token<vstring> TSTRING TSHORT TINT TLONG TFLOAT TDOUBLE TBYTE TCHAR TBOOLEAN TVOID
%token<vstring> STRING
%token<vstring> TIMPORT TPACKAGE
%token<vstring> TPUBLIC TPRIVATE TPROTECTED
%token<vstring> TFINAL TABSTRACT TSTATIC TVALUE
%token<vstring> ID TCLASS TINTERFACE TEXTENDS TIMPLEMENTS
%token<vstring> TSUPER TTHIS 
%token<vstring> TIF TELSE
%token<vstring> TFALSE TTRUE
%token<vstring> TSWITCH TCASE TCONTINUE TBREAK TDEFAULT
%token<vstring> TFOR TWHILE TDO
%token<vstring> TNEW TNULL TRETURN
%token<vstring> TPRINT TPRINTI TPRINTF TPRINTS

%token<vstring> TPLUSEQ TMINUSEQ TMULEQ TDIVEQ TMODEQ
%token<vstring> TINC TDEC
%token<vstring> TCEQ TCNE
%token<vstring> TCLE TCGE
%token<vstring> TOR TAND
%token<vstring> TANDBINEQ TORBINEQ
%token<vstring> TXORBINEQ TDECAL /*TDECALEQ*/ TDECAR /*TDECAREQ*/ TDECALNS /*TDECALNSEQ*/

%type<kt_program> Program
%type<kt_package> Package
%type<vectorString> Ids
%type<vectorString> ListIds QList
%type<vstring> BasicType
%type<kt_type> Type
%type<parser_array> Tables 
%type<vbool> Static
%type<vectorString> All
%type<vectorString> ExtendsList Implements
%type<vstring> Extends	
%type<kt_modifier> Modifier Modifiers		  
%type<vectorVecorString> ImportDeclaration 

%type<KT_Class> ClassDeclaration 
%type<KT_Interface> InterfaceDeclaration 
%type<vectorPARSER_MemberDec> ClassBody MemberDecs
%type<parser_memberDec> MemberDec

%type<vectorKT_Prototype> InterfaceBody Prototypes
%type<kt_prototype> Prototype
%type<kt_param> VariableDeclaratorId
%type<kt_modifier> VariableModifiers VariableModifier 
%type<vint> VariableDeclaratorList VariableDeclarator VariableInitializer ConstructorCall  ArrayInitializer
%type<kt_expression> VariableDeclaratorList
%type<kt_variable> VariableDeclarator

%type<vectorKT_Param> FormalParameters FormalParameterDecls FormalParameterDeclsRest
%type<vectorKT_ParamsMethodCall> FormalParametersCalledMethod FormalParametersCalledMethodDecls VoidFormalParametrs FormalParameterCalledMethodDeclsRest

%type<kt_block> Block
%type<vectorKT_Statement> Block Statements
%type<kt_statement> Statement  
%type<vint> BlockStatement   
%type<vectorKT_FactFinal> Args ArgsRest
%type<kt_factFinal> ArgsS ArgsI ArgsF
%type<kt_print> PrintS PrintI PrintF Print
%type<vint> SwitchBlockStatements SwitchBlockStatement 
%type<vint> ForControl ForVarControl ForUpdate StatementExpressionList

%type<kt_expression> Expression FacteurEffect ExpressionOr ExpressionAnd ExpressionOrLogic ExpressionOrExLogic ExpressionAndLogic ExpressionEqNeq ExpressionCompEq TermeDecal TermePlus factFinal terme facteur

%type<kt_indexedArray> TablesIndexe  
%type<kt_linkedMethodOrVarCall> LinkedMethodVarCall
%type<kt_methodCall> MethodCall
%type<vectorKT_MethodOrVarCall> LinkedMethodVarCallList
%union
{
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

	vector<KT_MethodOrVarCall*> vectorKT_MethodOrVarCall;
	vector<string*> vectorString;
	vector<vector<string*>> vectorVecorString;
	vector<KT_ParamsMethodCall*> vectorKT_ParamsMethodCall;
	vector<KT_Param*> vectorKT_Param;
	vector<KT_Prototype*> vectorKT_Prototype;
	vector<PARSER_MemberDec*> vectorPARSER_MemberDec;
	vector<KT_Statement*> vectorKT_Statement;
	vector<KT_FactFinal*> vectorKT_FactFinal;
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

Program : Package ImportDeclaration Modifiers ClassDeclaration{ $$= new KT_Program; $4->setModifier($3); $$->addPackageWithClass($1, $4);}
		| Package ImportDeclaration Modifiers InterfaceDeclaration{ $$= new KT_Program; $$->addPackageWithInterface($1, $4);}
		;
Package : TPACKAGE ID ';' {$$= new KT_Package; $$->setName($2);}
		;

/*-----------------------------------ID et ID.ID.ID... et ID,ID,ID... --------------------------------------------------*/
Ids : '.' ID Ids {$3.push_back($2); $$=$3;}
	| {$$=vector<string*>;}
	;

QList : ',' ID Ids QList {string* name=$2; for (vector<string*>::iterator it = $3.begin(); it != $3.end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = $4.begin(); it != $4.end(); ++it){ string* n = (*it); listName.push_back(n);} $$=listName;}
	  | {vector<string*> var; $$=var;}
	  ;

ListIds : ID Ids QList {string* name=$1; for (vector<string*>::iterator it = $2.begin(); it != $2.end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = $3.begin(); it != $3.end(); ++it){ string* n = (*it); listName.push_back(n);} $$=listName; }
		;
/*-----------------------------------les types basic est les references type + possibilité des tableaux----------------------------------------------*/
Type : BasicType Tables {$$=new KT_Type; $$->setBasicType(true); $$->setArray($2); vector<string*> name; name.push_back($1); $$->setTypeName(name); }
	 | ID Ids Tables {$$=new KT_Type; $$->setBasicType(false); $$->setArray($2); vector<string*> name; name.push_back($1); for (vector<string*>::iterator it = $2.begin(); it != $2.end(); ++it){ string* n = (*it); name.push_back(n);} $$->setTypeName(name);}
	 ;

Tables : '[' ']' Tables {$2->setArray(true); $$->setArrayDim($$->getArrayDim()+1);}
	   | {$$=new PARSER_Array; $$->setArray(false); $$->setArrayDim(0);}
	   ;

TablesIndexe : '[' ENTIER ']' TablesIndexe {$1->setIndexAddIntAtFirstPosition($2); $$=$1;}
	   | {KT_IndexedArray* var; $$=var;}
	   ;

BasicType : TBYTE {$$=$1;}
		  | TSHORT {$$=$1;}
		  | TCHAR {$$=$1;}
		  | TINT {$$=$1;}
		  | TLONG {$$=$1;}
		  | TFLOAT {$$=$1;}
		  | TDOUBLE {$$=$1;}
		  | TBOOLEAN {$$=$1;}
		  | TSTRING {$$=$1;}
		  ;

/*------------- Partie d'encapsulation + final + static + extends ID, ID..... et implements ID, ID , ID... ----------------------------------*/
Modifier : TPUBLIC {$$=new KT_Modifier; $$->setVisibility(1);}
		 | TPROTECTED {$$=new KT_Modifier; $$->setVisibility(2);}
		 | TPRIVATE {$$=new KT_Modifier; $$->setVisibility(3);}
		 | TSTATIC {$$=new KT_Modifier; $$->setStatic(true);}
		 | TABSTRACT {$$=new KT_Modifier; $$->setAbstract(true);}
		 | TFINAL {$$=new KT_Modifier; $$->setFinal(true);}
		 ;

Modifiers : Modifiers Modifier {if($2->isStatic()){$1->setStatic(true);} if($2->isAbstract()){$1->setAbstract(true);} if($2->isFinal()){$1->isFinal(true);} if($2->getVisibility()>0) $1->setVisibility($2->getVisibility());}
		  | {KT_Modifier* modifier; $$=modifier;}
		  ;

Static : TSTATIC {$$=true;}
	   | {$$=false;}
	   ;

All : '.' ID All {vector<string*> name; name.push_back($2); for (vector<string*>::iterator it = $3.begin(); it != $3.end(); ++it){ string* n = (*it); name.push_back(n);} $$=name;} 
	| '.' '*' {$$.push_back("*");}
	| {vector<string*> var; $$=var;}
	;


Extends	: TEXTENDS Type {vector<string*> typeName =$2->getTypeName(); string* name=new string; for (vector<string*>::iterator it = typeName.begin(); it != typeName.end(); ++it){ string* n = (*it); if(it!=typeName.begin()){*name = *name + "." +*n;}else{name=n;}}  $$=name;}
		| {$$=new string;}
		;

ExtendsList : TEXTENDS ListIds {$$=$2;}
			| {vector<string*> var; $$=var;}
			;


Implements	: TIMPLEMENTS ListIds {$$=$2;}
			| {vector<string*> var; $$=var;}
			;

/*---------------------IMPORTS ------------------------------------------------------------------*/
ImportDeclaration : TIMPORT Static ID All ';' ImportDeclaration {vector<string*> importvar; if($2==true){importvar.push_back("static");} importvar.push_back($3); for (vector<string*>::iterator it = $4.begin(); it != $4.end(); ++it){ string* n = (*it); importvar.push_back(n);} $6.push_back(importvar); $$=$6; }
				  | {vector<vector<string*>> var = vector<vector<string*>>; $$=var; }
				  ; 

/*--------------------- Entete classes et interfaces------------------------------------------------------------------*/

ClassDeclaration : TCLASS ID Extends Implements ClassBody { $$=new KT_Class; $$->setName($2); $$->setParentClass($3); $$->setParentInterfaces($4); $$->setMemberDec($5);}
				 ;

InterfaceDeclaration : TINTERFACE ID ExtendsList InterfaceBody {$$=new KT_Interface; $$->setName($2); $$->setInterfacesparent($3); $$->setPrototypes($4);}
					 ;

/*-----------------------------------Corps d'une classe-----------------------------------------------------*/
ClassBody: '{' MemberDecs '}' {$$=$2;} 
MemberDecs : MemberDecs MemberDec {$1.push_back($2); $$=$1;}
					  | {vector<PARSER_MemberDec*> var; $$=var;}
					  ;

MemberDec: Modifiers Type ID VariableInitializer VariableDeclaratorList ';' {/*PARSER_MemeberDec*/$$=;}
		  | Modifiers Type ID FormalParameters Block {KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName($3); methode->setModifier($1) ; methode->setParams($4); methode->setType($2); methode->setBlock($5) ; $$=methode;} /* methode avec type de retour */
		  | Modifiers TVOID ID FormalParameters Block {KT_Type type = new KT_Type; vector<string*> typeName; typeName.push_back("void"); type->ssetTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName($3); methode->setModifier($1) ; methode->setParams($4); methode->setType(type); methode->setBlock($5) ; $$=methode;} /* void methode */
		  | Modifiers ID FormalParameters Block {KT_Constructor* construcror =new KT_Constructor; constructor->setIndexParser(1); constructor->setName($2); constructor->setModifier($1) ; constructor->setParams($3) ; constructor->setBlock($4) ; $$=constructor;} /* constructeur */
					;  

/*--------------------------------- corps d'une interface ---------------------------------------------------*/
InterfaceBody: '{' Prototypes '}' {$$=$2;}
			 ; 
Prototypes : Prototypes Prototype {$1.push_back($2); $$=$1;}
 						  | {vector<KT_Param*> var; $$=var;}
 						  ;

Prototype : Modifiers Type ID FormalParameters';' {$$ = new KT_Prototype; $$->setName($3); $$->setReturnType($2); $$->setModifier($1); $$->setParams(FormalParameters);}
    	  | Modifiers TVOID ID FormalParameters ';' {KT_Type type = new KT_Type; vector<string*> typeName; typeName.push_back("void"); type->ssetTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); $$ = new KT_Prototype; $$->setName($3); $$->setReturnType(type); $$->setModifier($1); $$->setParams(FormalParameters);} 
    	   ;  

/*-------------------------------------------- partie variables ---------------------------------------------------------*/

VariableDeclaratorList : ',' VariableDeclarator VariableDeclaratorList {$$=$2;}
					   | {$$=0;}
					   ;

VariableDeclarator: ID VariableInitializer {$$=new KT_Variable; vector<string*> name; name.push_back($1); $$->setName(name); $$->setValue($2);}
				  ;

VariableInitializer: '=' Expression {$$=$1;}
					 | {$$=new KT_Expression;}
					 ;

/*-------------------------------------- partie de parametres des methodes -----------------------------------------*/
FormalParameters: '(' FormalParameterDecls ')' {$$=$2;}
				| VoidFormalParametrs {vector<KT_Param*> vect; $$=vect;}
				;

VoidFormalParametrs : '(' ')' {vector<KT_ParamsMethodCall*> vect; $$=vect;}
					;

FormalParametersCalledMethod: '(' FormalParametersCalledMethodDecls ')' {$$=$2;}
							| VoidFormalParametrs {$$=$1;}
							;
FormalParametersCalledMethodDecls : ID '[' ENTIER ']' TablesIndexe FormalParameterCalledMethodDeclsRest {KT_ID* id = new KT_ID; id->setValue($1); $5->setIndexAddIntAtFirstPosition($3); KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setIndexedArray($5); param->setExpression(id); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = $6.begin(); it != $6.end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} $$=vect;}
								  | Expression FormalParameterCalledMethodDeclsRest {KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setExpression($1); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = $3.begin(); it != $3.end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} $$=vect;}
								  ;

FormalParameterDecls: VariableModifiers Type VariableDeclaratorId FormalParameterDeclsRest {$2->setArrayDim($3->getParamType()->getArrayDim()); $3->setParamType($2); $3->setParamModifier($1); vector<KT_Param*> vect; vect.push_back($3); for (vector<KT_Param*>::iterator it = $4.begin(); it != $4.end(); ++it){ KT_Param* n = (*it); vect.push_back(n);} $$=vect;}
					;

VariableModifiers : VariableModifiers VariableModifier {if($2->isStatic()){$1->setStatic(true);} if($2->isAbstract()){$1->setAbstract(true);} if($2->isFinal()){$1->isFinal(true);} if($2->getVisibility()>0) $1->setVisibility($2->getVisibility());}
				  | {KT_Modifier* modifier; $$=modifier;}
				  ;

VariableModifier: TFINAL{$$=new KT_Modifier; $$->setFinal(true);}
				| TVALUE{$$=new KT_Modifier;}
				;

FormalParameterDeclsRest: ',' FormalParameterDecls {$$=$2;}
						| {vector<KT_Param*> vect; $$=vect;}
						;

FormalParameterCalledMethodDeclsRest : ',' FormalParametersCalledMethodDecls {$$=$2;}
									 | {vector<KT_ParamsMethodCall*> vect; $$=vect;}
									 ; 

VariableDeclaratorId: ID Tables {$$=new KT_Param; $$->setName($1); KT_Type type= new KT_Type; type->setArray($2); $$->setParamType(type); }
					;

/*----------------------------------- partie blocks et les variables locaux ------------------------*/
Block: '{' Statements '}' {$$=new KT_Block; $$->setStatements($2)}
	 ;

Statements: Statements Statement {$1.push_back($2); $$=$1;}
			   | {vector<KT_Statement*> var; $$=var;}
			   ; 

Statement     : Print {$$=$1;}
			  | PrintS {$$=$1;} 
			  | PrintF {$$=$1;} 
			  | PrintI {$$=$1;}
			  | TFINAL ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | TFINAL ID Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;} 
			  | ID Tables VariableDeclarator VariableDeclaratorList ';' {$=0} 
			  | BasicType Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;}
			  | TFINAL BasicType Tables VariableDeclarator VariableDeclaratorList ';' {$$=0;}
    		  | ID TablesIndexe '=' Expression ';' { KT_ID* id; id->setValue($1); KT_Affectation* affectation; affectation->setsetRExpression($4); affectation->setLExpression(id); affectation->setIndexedArray($2); $$=affectation;}
    		  | TTHIS '.' ID TablesIndexe '=' Expression ';' {string* name = "this"+(*$1); KT_ID* id; id->setValue(id); KT_Affectation* affectation; affectation->setsetRExpression($6); affectation->setLExpression(id); affectation->setIndexedArray($4); $$=affectation;}
    		  | Expression ';' {$$=$1;}
    		  | TSUPER FormalParametersCalledMethod ';' {KT_Super* s = new KT_Super; s->setParams($2);}
    		  | BlockStatement {$$=$1;}
    		  | ';' {$$=new KT_Statement;}
    		  ;

Print : TPRINT '(' Args ')' ';' {$$=new KT_Print; $$->setArgs($3);}
	  ;
Args :factFinal ArgsRest {FactFinal* factFinal;= static_cast<FactFinal*>($1); vector<FactFinal*> args; args.push_back(factFinal); for (vector<FactFinal*>::iterator it = $2.begin(); it != $2.end(); ++it){ FactFinal* n = (*it); args.push_back(n);} $$=args;}
	 | {vector<KT_FactFinal*> var; $$=var;}
	 ;
ArgsRest : '+' factFinal ArgsRest {FactFinal* factFinal;= static_cast<FactFinal*>($2); vector<FactFinal*> args; args.push_back(factFinal); for (vector<FactFinal*>::iterator it = $3.begin(); it != $3.end(); ++it){ FactFinal* n = (*it); args.push_back(n);} $$=args;} 
		 | {vector<KT_FactFinal*> var; $$=var;}
		 ;

PrintF : TPRINTF '(' ArgsF ')' ';' {$$=new KT_Print; vector<KT_FactFinal*> args; args.push_back($3); $$->setArgs(args);}
	   ;
ArgsF : REEL {KT_Reel* reel = new KT_Reel; reel->setValue($1); $$=reel;}
	  | ID {KT_ID* id = new KT_ID; id->setValue($1); $$=id;}
	  | {$$=new KT_FactFinal;} 
	  ; 

PrintI : TPRINTI '(' ArgsI ')' ';' {$$=new KT_Print; vector<KT_FactFinal*> args; args.push_back($3); $$->setArgs(args);}
	   ;
ArgsI : ENTIER {KT_Entier* entier = new KT_Entier; reel->setValue($1); $$=entier;}
	  | ID {KT_ID* id = new KT_ID; id->setValue($1); $$=id;}
	  | {$$=new KT_FactFinal;}
	  ; 

PrintS : TPRINTS '(' ArgsS ')' ';' {$$=new KT_Print; vector<KT_FactFinal*> args; args.push_back($3); $$->setArgs(args);}
	   ;
ArgsS : STRING {KT_String* s = new KT_String; s->setValue($1); $$=s;}
	  | ID {KT_ID* id = new KT_ID; id->setValue($1); $$=id;}
	  | {$$=new KT_FactFinal;}
	  ; 

BlockStatement: Block {$$=0;}
    	 	  | TIF '(' Expression ')' BlockStatement %prec THEN {$$=0;}
		      | TIF '(' Expression ')' BlockStatement TELSE BlockStatement {$$=0;}
		      | TSWITCH '(' Expression ')' '{' SwitchBlockStatements '}' {$$=0;}
		      | TWHILE '(' Expression ')' BlockStatement {$$=0;}
		      | TDO BlockStatement TWHILE '(' Expression ')' ';' {$$=0;}
		      | TFOR '(' ForControl ')' BlockStatement {$$=0;}
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

SwitchBlockStatement: TCASE Expression ':' Statements {$$=0;}
					|  TDEFAULT ':' Statements
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

Expression : FacteurEffect {$$=$1;}
		   ;

FacteurEffect : FacteurEffect TORBINEQ ExpressionOr {$$=KT_OrBinEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | FacteurEffect TXORBINEQ ExpressionOr {$$=KT_XOrBinEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | FacteurEffect TANDBINEQ ExpressionOr {$$=KT_AndBinEq; $$->setLExpression($1); $$->setRExpression($3);}
			  /*| FacteurEffect TDECALNSEQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECAREQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECALEQ ExpressionOr {$$=KT_D; $$->setLExpression($1); $$->setRExpression($3);}*/
			  | FacteurEffect TMODEQ ExpressionOr {$$=KT_ModuloEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | FacteurEffect TDIVEQ ExpressionOr {$$=KT_DivisionEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | FacteurEffect TMULEQ ExpressionOr {$$=KT_MultiplicationEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | FacteurEffect TMINUSEQ ExpressionOr {$$=KT_SubstractionEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | FacteurEffect TPLUSEQ ExpressionOr {$$=KT_AdditionlEq; $$->setLExpression($1); $$->setRExpression($3);}
			  | ExpressionOr{$$=$1;}
			  ;

ExpressionOr  : ExpressionOr TOR ExpressionAnd {$$=KT_ExpressionOr; $$->setLExpression($1); $$->setRExpression($3);} 
			  | ExpressionAnd {$$=1;}
			  ;

ExpressionAnd : ExpressionAnd TAND ExpressionOrLogic {$$=KT_ExpressionAnd; $$->setLExpression($1); $$->setRExpression($3);} 
			  | ExpressionOrLogic {$$=$1;}
			  ;

ExpressionOrLogic : ExpressionOrLogic '|' ExpressionOrExLogic {$$=KT_ExpressionOrLogic; $$->setLExpression($1); $$->setRExpression($3);}
				  | ExpressionOrExLogic {$$=$1;}
				  ;

ExpressionOrExLogic : ExpressionOrExLogic '^' ExpressionAndLogic {$$=KT_ExpressionOrXLogic; $$->setLExpression($1); $$->setRExpression($3);}
				    | ExpressionAndLogic {$$=$1;}
				    ;	

ExpressionAndLogic : ExpressionAndLogic '&' ExpressionEqNeq {$$=new KT_ExpressionAndLogic; $$->setLExpression($1); $$->setRExpression($3);}
				   | ExpressionEqNeq {$$=$1;}
				   ;

ExpressionEqNeq  : ExpressionEqNeq TCNE ExpressionCompEq {$$=$3;}
				 | ExpressionEqNeq TCEQ ExpressionCompEq {$$=$3;}
				 | ExpressionCompEq {$$=$1;}
				 ; 

ExpressionCompEq : ExpressionCompEq TCGE TermePlus {$$=new KT_ExpressionGE; $$->setLExpression($1); $$->setRExpression($3);}  
				 | ExpressionCompEq '>' TermePlus {$$=new KT_ExpressionGT; $$->setLExpression($1); $$->setRExpression($3);}
				 | ExpressionCompEq TCLE TermePlus {$$=new KT_ExpressionLE; $$->setLExpression($1); $$->setRExpression($3);}
				 | ExpressionCompEq '<' TermePlus {$$=new KT_ExpressionLT; $$->setLExpression($1); $$->setRExpression($3);}
				 | TermeDecal {$$=$1;}
				 ;	

TermeDecal : TermeDecal TDECALNS TermePlus {$$=3;}
	   	   | TermeDecal TDECAR TermePlus {$$=3;}
	   	   | TermeDecal TDECAL TermePlus {$$=$3;}
	       | TermePlus {$$=$1;}
	       ;

TermePlus    : TermePlus '+' terme {$$=new KT_Addition; $$->setLExpression($1); $$->setRExpression($3);} 
			 | TermePlus '-' terme {$$=new KT_Substraction; $$->setLExpression($1); $$->setRExpression($3);}
			 | terme {$$=$1;}
			 ;	

terme  : terme '*' facteur {$$=new KT_Multiplication; $$->setLExpression($1); $$->setRExpression($3);}
	   | terme '/' facteur {$$=new KT_Division; $$->setLExpression($1); $$->setRExpression($3);}
	   | terme '%' facteur {$$=new KT_Modulo; $$->setLExpression($1); $$->setRExpression($3);}
	   | facteur {$$=$1;}
	   ;

facteur : '~' facteur %prec NBINAIRE {$$= new KT_NBinary; $$->setExpression($2);}
		| '!' facteur %prec NLOGIC {$$= new KT_Negation; $$->setExpression($2);}
		| '-' facteur %prec MOINUS {$$= new KT_Minus; $$->setExpression($2);}
		| '+' facteur %prec PLUS {$$=$2;}
		| ID TDEC {$$=new KT_PostDecrement; KT_ID* id=new KT_ID; id->setValue($2); $$->setExpression(id);}
		| TDEC ID {$$=new KT_PreDecrement; KT_ID* id=new KT_ID; id->setValue($2); $$->setExpression(id);}
		| ID TINC {$$=new KT_PostIncrement; KT_ID* id=new KT_ID; id->setValue($2); $$->setExpression(id);}
		| TINC ID {$$=new KT_PreIncrement; KT_ID* id=new KT_ID; id->setValue($2); $$->setExpression(id);}
		| factFinal {$$=$1;}
		;

factFinal: '(' Expression ')' {$$= $2;}
		 | ENTIER {$$= new KT_Entier; $$->setValue($1);}
		 | REEL {$$ = new KT_Reel; $$->setValue($1);}
		 | STRING {$$= new KT_String; $$->setValue($1);}
		 | ConstructorCall {$$=$1;}
		 | ArrayInitializer {$$=1;} 
		 | LinkedMethodVarCall {$$=$1;} 
		 | TTRUE {$$= new KT_Bool; $$->setValue(true); }
		 | TFALSE {$$= new KT_Bool; $$->setValue(false);}
		 | TNULL {$$= new KT_Null;} 
		 ;

ConstructorCall : TNEW ID Ids FormalParametersCalledMethod {$$=new KT_ConstructorCall; $$->addString($2); $$->addVectorString($3); $$->setParams($4);}
	            ;

MethodCall : ID FormalParametersCalledMethod {vector<string*> name; name.push_back($1); $$=new KT_MethodCall; $$->setName(name); $$->setParams($2);}
		   ;

ArrayInitializer : TNEW BasicType '[' ENTIER ']'{KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray.setDimension(1); vector<int> indexes; indexes.pysh_back($4); KT_Type* type = new KT_Type; type->setBasicType(true); vector<string*> typeName; typeName.push_back($2); type->setTypeName(typeName); type->setArrayDim(0); $$=new KT_ArrayInitilizer; $$->setIndexedArray(indexedArray); $$->setType(type); }
				 
				 | TNEW ID Ids '[' ENTIER ']'{KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray.setDimension(1); vector<int> indexes; indexes.pysh_back($5); KT_Type* type = new KT_Type; type->setBasicType(false); type->addString($2); type->addVectorString($3); type->setArrayDim(0); $$=new KT_ArrayInitilizer; $$->setIndexedArray(indexedArray); $$->setType(type);}
				 ;

LinkedMethodVarCall : TTHIS '.' ID LinkedMethodVarCallList {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back($1); ids.push_back($3); var->setValue(ids); $4.push_back(var); $$=new KT_LinkedMethodOrVarCall; $$->setMixedCall($2);}
					| ID LinkedMethodVarCallList {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back($1); var->setValue(ids); $2.push_back(var); $$=new KT_LinkedMethodOrVarCall; $$->setMixedCall($2);}
					| TTHIS '.' MethodCall LinkedMethodVarCallList {$3->setNameAddStringAtFirstPosition($1);  $4.push_back($3); $$=new KT_LinkedMethodOrVarCall; $$->setMixedCall($4);}
					| MethodCall LinkedMethodVarCallList {$2.push_back($1); $$=new KT_LinkedMethodOrVarCall; $$->setMixedCall($2);}
					;

LinkedMethodVarCallList : '.' ID LinkedMethodVarCallList {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back($2); var->setValue(ids); $3.push_back(var); $$=$3; }
						| '.' MethodCall LinkedMethodVarCallList {$3.push_back($2); $$=$3;}
						| { vector<KT_MethodOrVarCall*> vect; $$=vect; }
						;


%%

int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d] colonne [%d]\n", yytext, lineno, column-strlen(yytext));
  return 0;
}

