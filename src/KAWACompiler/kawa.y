%{
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "../implementation_KawaTree/headers.h"

using namespace std;




	int yylex();
	extern char* yytext;
	int yyerror(const char* err );
	extern int column;
	extern int lineno;

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

%type<kt_class> ClassDeclaration 
%type<kt_interface> InterfaceDeclaration 
%type<vectorPARSER_MemberDec> ClassBody MemberDecs
%type<parser_memberDec> MemberDec

%type<vectorKT_Prototype> InterfaceBody Prototypes
%type<kt_prototype> Prototype
%type<kt_param> VariableDeclaratorId
%type<kt_modifier> VariableModifiers VariableModifier 

%type<kt_expression> ConstructorCall  ArrayInitializer

%type<kt_expression> VariableInitializer
%type<parser_field> VariableDeclaratorList
%type<kt_variable> VariableDeclarator

%type<vectorKT_Param> FormalParameters FormalParameterDecls FormalParameterDeclsRest
%type<vectorKT_ParamsMethodCall> FormalParametersCalledMethod FormalParametersCalledMethodDecls VoidFormalParametrs FormalParameterCalledMethodDeclsRest

%type<kt_block> Block
%type<vectorKT_Statement> Statements
%type<kt_statement> Statement  
%type<kt_blockStatement> BlockStatement   
%type<vectorKT_FactFinal> Args ArgsRest
%type<kt_factFinal> ArgsS ArgsI ArgsF
%type<kt_print> PrintS PrintI PrintF Print

%type<kt_switchBlockStatement> SwitchBlockStatement 
%type<vectorKT_SwitchBlockStatement> SwitchBlockStatements 
%type<parser_forControl> ForControl
%type<parser_field> ForVarControl
%type<vectorKT_IDExpression> ForUpdate StatementExpressionList

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

	vector<KT_MethodOrVarCall*>* vectorKT_MethodOrVarCall;
	vector<string*>* vectorString;
	vector<vector<string*>>* vectorVecorString;
	vector<KT_ParamsMethodCall*>* vectorKT_ParamsMethodCall;
	vector<KT_Param*>* vectorKT_Param;
	vector<KT_Prototype*>* vectorKT_Prototype;
	vector<PARSER_MemberDec*>* vectorPARSER_MemberDec;
	vector<KT_Statement*>* vectorKT_Statement;
	vector<KT_FactFinal*>* vectorKT_FactFinal;
	vector<KT_SwitchBlockStatement*>* vectorKT_SwitchBlockStatement;
	vector<KT_IDExpression*>* vectorKT_IDExpression;
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

Program : Package ImportDeclaration Modifiers ClassDeclaration Program { $$= new KT_Program; $4->setModifier($3); $4->setImports(*$2); $$->addPackageWithClass($1, $4);}
		| Package ImportDeclaration Modifiers InterfaceDeclaration Program{ $$= new KT_Program; $4->setModifier($3); $4->setImports(*$2);$$->addPackageWithInterface($1, $4);}
		| {$$= new KT_Program;}		
		;

Package : TPACKAGE ID ';' {$$= new KT_Package; $$->setName($2);}
		;

/*-----------------------------------ID et ID.ID.ID... et ID,ID,ID... --------------------------------------------------*/
Ids : '.' ID Ids {$3->push_back($2); $$=$3;}
	| {vector<string*>* var; $$=var;}
	;

QList : ',' ID Ids QList {string* name=$2; for (vector<string*>::iterator it = $3->begin(); it != $3->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = $4->begin(); it != $4->end(); ++it){ string* n = (*it); listName.push_back(n);} $$=&listName;}
	  | {vector<string*>* var; $$=var;}
	  ;

ListIds : ID Ids QList {string* name=$1; for (vector<string*>::iterator it = $2->begin(); it != $2->end(); ++it){ string* n = (*it); *name = *name + "." +*n;}  vector<string*> listName; listName.push_back(name); for (vector<string*>::iterator it = $3->begin(); it != $3->end(); ++it){ string* n = (*it); listName.push_back(n);} $$=&listName; }
		;
/*-----------------------------------les types basic est les references type + possibilité des tableaux----------------------------------------------*/
Type : BasicType Tables {$$=new KT_Type; $$->setBasicType(true); $$->setArray($2); vector<string*> name; name.push_back($1); $$->setTypeName(name); }
	 | ID Ids Tables {$$=new KT_Type; $$->setBasicType(false); $$->setArray($3); vector<string*> name; name.push_back($1); for (vector<string*>::iterator it = $2->begin(); it != $2->end(); ++it){ string* n = (*it); name.push_back(n);} $$->setTypeName(name);}
	 ;

Tables : '[' ']' Tables {$3->setArray(true); $$->setArrayDim($$->getArrayDim()+1);}
	   | {$$=new PARSER_Array; $$->setArray(false); $$->setArrayDim(0);}
	   ;

TablesIndexe : '[' ENTIER ']' TablesIndexe {$4->setIndexAddIntAtFirstPosition($2); $$=$4;}
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

Modifiers : Modifiers Modifier {if($2->isStatic()){$1->setStatic(true);} if($2->isAbstract()){$1->setAbstract(true);} if($2->isFinal()){$1->setFinal(true);} if($2->getVisibility()>0) $1->setVisibility($2->getVisibility());}
		  | {KT_Modifier* modifier; $$=modifier;}
		  ;

Static : TSTATIC {$$=true;}
	   | {$$=false;}
	   ;

All : '.' ID All {vector<string*> name; name.push_back($2); for (vector<string*>::iterator it = $3->begin(); it != $3->end(); ++it){ string* n = (*it); name.push_back(n);} $$=&name;} 
	| '.' '*' {string name="*"; $$->push_back(&name);}
	| {vector<string*>* var; $$=var;}
	;


Extends	: TEXTENDS Type {vector<string*> typeName =$2->getTypeName(); string* name=new string; for (vector<string*>::iterator it = typeName.begin(); it != typeName.end(); ++it){ string* n = (*it); if(it!=typeName.begin()){*name = *name + "." +*n;}else{name=n;}}  $$=name;}
		| {$$=new string;}
		;

ExtendsList : TEXTENDS ListIds {$$=$2;}
			| {vector<string*>* var; $$=var;}
			;


Implements	: TIMPLEMENTS ListIds {$$=$2;}
			| {vector<string*>* var; $$=var;}
			;

/*---------------------IMPORTS ------------------------------------------------------------------*/
ImportDeclaration : TIMPORT Static ID All ';' ImportDeclaration {vector<string*> importvar; if($2==true){string* s=new string("static"); importvar.push_back(s);} importvar.push_back($3); for (vector<string*>::iterator it = $4->begin(); it != $4->end(); ++it){ string* n = (*it); importvar.push_back(n);} $6->push_back(importvar); $$=$6; }
				  | {vector<vector<string*>>* var; $$=var; }
				  ; 

/*--------------------- Entete classes et interfaces------------------------------------------------------------------*/

ClassDeclaration : TCLASS ID Extends Implements ClassBody { $$=new KT_Class; $$->setName($2); $$->setParentClass($3); $$->setParentInterfaces(*$4); $$->setMemberDec(*$5);}
				 ;

InterfaceDeclaration : TINTERFACE ID ExtendsList InterfaceBody {$$=new KT_Interface; $$->setName($2); $$->setInterfacesparent(*$3); $$->setPrototypes(*$4);}
					 ;

/*-----------------------------------Corps d'une classe-----------------------------------------------------*/
ClassBody: '{' MemberDecs '}' {$$=$2;} 
MemberDecs : MemberDecs MemberDec {$1->push_back($2); $$=$1;}
					  | {vector<PARSER_MemberDec*>* var; $$=var;}
					  ;

MemberDec: Modifiers Type ID VariableInitializer VariableDeclaratorList ';' {/*PARSER_MemeberDec*/$$=new PARSER_MemberDec;}
		  | Modifiers Type ID FormalParameters Block {KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName($3); methode->setModifier($1) ; methode->setParams(*$4); methode->setType($2); methode->setBlock($5) ; $$=methode;} /* methode avec type de retour */
		  | Modifiers TVOID ID FormalParameters Block {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); KT_SimpleMethod* methode =new KT_SimpleMethod; methode->setIndexParser(2); methode->setName($3); methode->setModifier($1) ; methode->setParams(*$4); methode->setType(type); methode->setBlock($5) ; $$=methode;} /* void methode */
		  | Modifiers ID FormalParameters Block {KT_Constructor* constructor =new KT_Constructor; constructor->setIndexParser(1); constructor->setName($2); constructor->setModifier($1) ; constructor->setParams(*$3) ; constructor->setBlock($4) ; $$=constructor;} /* constructeur */
					;  

/*--------------------------------- corps d'une interface ---------------------------------------------------*/
InterfaceBody: '{' Prototypes '}' {$$=$2;}
			 ; 
Prototypes : Prototypes Prototype {$1->push_back($2); $$=$1;}
 						  | {vector<KT_Prototype*>* var; $$=var;}
 						  ;

Prototype : Modifiers Type ID FormalParameters';' {$$ = new KT_Prototype; $$->setName($3); $$->setReturnType($2); $$->setModifier($1); $$->setParams(*$4);}
    	  | Modifiers TVOID ID FormalParameters ';' {KT_Type* type = new KT_Type; vector<string*> typeName; string* svoid = new string("void"); typeName.push_back(svoid); type->setTypeName(typeName); type->setBasicType(false); type->setArrayDim(0); $$ = new KT_Prototype; $$->setName($3); $$->setReturnType(type); $$->setModifier($1); $$->setParams(*$4);} 
    	   ;  

/*-------------------------------------------- partie variables ---------------------------------------------------------*/

VariableDeclaratorList : ',' VariableDeclarator VariableDeclaratorList { $$->AddVariableAtFirstPosition($2); $$->addVectorVariable($3);  }
					   | {$$=new PARSER_Field;}
					   ;

VariableDeclarator: ID VariableInitializer {$$=new KT_Variable; vector<string*> name; name.push_back($1); $$->setName(name); $$->setValue($2);}
				  ;

VariableInitializer: '=' Expression {$$=$2;}
					 | {$$=new KT_Expression;}
					 ;

/*-------------------------------------- partie de parametres des methodes -----------------------------------------*/
FormalParameters: '(' FormalParameterDecls ')' {$$=$2;}
				| VoidFormalParametrs {vector<KT_Param*>* vect; $$=vect;}
				;

VoidFormalParametrs : '(' ')' {vector<KT_ParamsMethodCall*>* vect; $$=vect;}
					;

FormalParametersCalledMethod: '(' FormalParametersCalledMethodDecls ')' {$$=$2;}
							| VoidFormalParametrs {$$=$1;}
							;
FormalParametersCalledMethodDecls : ID '[' ENTIER ']' TablesIndexe FormalParameterCalledMethodDeclsRest {KT_ID* id = new KT_ID; vector<string*> name; name.push_back($1); id->setValue(name); $5->setIndexAddIntAtFirstPosition($3); KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setIndexedArray($5); param->setExpression(id); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = $6->begin(); it != $6->end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} $$=&vect;}
								  | Expression FormalParameterCalledMethodDeclsRest {KT_ParamsMethodCall* param = new KT_ParamsMethodCall; param->setExpression($1); vector<KT_ParamsMethodCall*> vect; vect.push_back(param); for (vector<KT_ParamsMethodCall*>::iterator it = $2->begin(); it != $2->end(); ++it){ KT_ParamsMethodCall* n = (*it); vect.push_back(n);} $$=&vect;}
								  ;

FormalParameterDecls: VariableModifiers Type VariableDeclaratorId FormalParameterDeclsRest {$2->setArrayDim($3->getParamType()->getArrayDim()); $3->setParamType($2); $3->setParamModifier($1); vector<KT_Param*> vect; vect.push_back($3); for (vector<KT_Param*>::iterator it = $4->begin(); it != $4->end(); ++it){ KT_Param* n = (*it); vect.push_back(n);} $$=&vect;}
					;

VariableModifiers : VariableModifiers VariableModifier {if($2->isStatic()){$1->setStatic(true);} if($2->isAbstract()){$1->setAbstract(true);} if($2->isFinal()){$1->setFinal(true);} if($2->getVisibility()>0) $1->setVisibility($2->getVisibility());}
				  | {KT_Modifier* modifier; $$=modifier;}
				  ;

VariableModifier: TFINAL{$$=new KT_Modifier; $$->setFinal(true);}
				| TVALUE{$$=new KT_Modifier;}
				;

FormalParameterDeclsRest: ',' FormalParameterDecls {$$=$2;}
						| {vector<KT_Param*>* vect; $$=vect;}
						;

FormalParameterCalledMethodDeclsRest : ',' FormalParametersCalledMethodDecls {$$=$2;}
									 | {vector<KT_ParamsMethodCall*>* vect; $$=vect;}
									 ; 

VariableDeclaratorId: ID Tables {$$=new KT_Param; $$->setName($1); KT_Type* type= new KT_Type; type->setArray($2); $$->setParamType(type); }
					;

/*----------------------------------- partie blocks et les variables locaux ------------------------*/
Block: '{' Statements '}' {$$=new KT_Block; $$->setStatements(*$2);}
	 ;

Statements: Statements Statement {$1->push_back($2); $$=$1;}
			   | {vector<KT_Statement*>* var; $$=var;}
			   ; 

Statement     : Print {$$=$1;}
			  | PrintS {$$=$1;} 
			  | PrintF {$$=$1;} 
			  | PrintI {$$=$1;}
			  | TFINAL ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {vector<string*> name; name.push_back($2); name.push_back($4); for (vector<string*>::iterator it = $5->begin(); it != $5->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray($6);  $$->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition($7); $$->addVectorVariable($8); $$->upDateType(type); $$->setFinal(true);}
			  | ID '.' ID Ids Tables VariableDeclarator VariableDeclaratorList ';' {vector<string*> name; name.push_back($1); name.push_back($3); for (vector<string*>::iterator it = $4->begin(); it != $4->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray($5);  $$->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition($6); $$->addVectorVariable($7); $$->upDateType(type);} 
			  | TFINAL ID Tables VariableDeclarator VariableDeclaratorList ';' {vector<string*> name; name.push_back($2); KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray($3);  $$->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition($4); $$->addVectorVariable($5); $$->upDateType(type); $$->setFinal(true);} 
			  | ID Tables VariableDeclarator VariableDeclaratorList ';' {vector<string*> name; name.push_back($1); KT_Type* type=new KT_Type; type->setBasicType(false); type->setArray($2);  $$->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition($3); $$->addVectorVariable($4); $$->upDateType(type);} 
			  | BasicType Tables VariableDeclarator VariableDeclaratorList ';' {vector<string*> name; name.push_back($1); KT_Type* type=new KT_Type; type->setBasicType(true); type->setArray($2);  $$->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition($3); $$->addVectorVariable($4); $$->upDateType(type);}
			  | TFINAL BasicType Tables VariableDeclarator VariableDeclaratorList ';' {vector<string*> name; name.push_back($2); KT_Type* type=new KT_Type; type->setBasicType(true); type->setArray($3);  $$->setTypeName(name); PARSER_Field* pf =new PARSER_Field; pf->AddVariableAtFirstPosition($4); $$->addVectorVariable($5); $$->upDateType(type); $$->setFinal(true);}
    		  | ID TablesIndexe '=' Expression ';' { KT_ID* id; vector<string*> name; name.push_back($1); id->setValue(name); KT_Affectation* affectation; affectation->setRExpression($4); affectation->setLExpression(id); affectation->setIndexedArray($2); $$=affectation;}
    		  | TTHIS '.' ID TablesIndexe '=' Expression ';' {string name = "this"+(*$3); vector<string*> fullname; fullname.push_back(&name); KT_ID* id; id->setValue(fullname); KT_Affectation* affectation; affectation->setRExpression($6); affectation->setLExpression(id); affectation->setIndexedArray($4); $$=affectation;}
    		  | Expression ';' {$$=$1;}
    		  | TSUPER FormalParametersCalledMethod ';' {KT_Super* s = new KT_Super; s->setParams(*$2);}
    		  | BlockStatement {$$=$1;}
    		  | ';' {$$=new KT_Statement;}
    		  ;

Print : TPRINT '(' Args ')' ';' {$$=new KT_Print; $$->setArgs(*$3);}
	  ;
Args :factFinal ArgsRest {KT_FactFinal* factFinal = static_cast<KT_FactFinal*>($1); vector<KT_FactFinal*> args; args.push_back(factFinal); for (vector<KT_FactFinal*>::iterator it = $2->begin(); it != $2->end(); ++it){ KT_FactFinal* n = (*it); args.push_back(n);} $$=&args;}
	 | {vector<KT_FactFinal*>* var; $$=var;}
	 ;
ArgsRest : '+' factFinal ArgsRest {KT_FactFinal* factFinal= static_cast<KT_FactFinal*>($2); vector<KT_FactFinal*> args; args.push_back(factFinal); for (vector<KT_FactFinal*>::iterator it = $3->begin(); it != $3->end(); ++it){ KT_FactFinal* n = (*it); args.push_back(n);} $$=&args;} 
		 | {vector<KT_FactFinal*>* var; $$=var;}
		 ;

PrintF : TPRINTF '(' ArgsF ')' ';' {$$=new KT_Print; vector<KT_FactFinal*> args; args.push_back($3); $$->setArgs(args);}
	   ;
ArgsF : REEL {KT_Reel* reel = new KT_Reel; reel->setValue($1); $$=reel;}
	  | ID {vector<string*> name; name.push_back($1); KT_ID* id = new KT_ID; id->setValue(name); $$=id;}
	  | {$$=new KT_FactFinal;} 
	  ; 

PrintI : TPRINTI '(' ArgsI ')' ';' {$$=new KT_Print; vector<KT_FactFinal*> args; args.push_back($3); $$->setArgs(args);}
	   ;
ArgsI : ENTIER {KT_Entier* entier = new KT_Entier; entier->setValue($1); $$=entier;}
	  | ID {vector<string*> name; name.push_back($1); KT_ID* id = new KT_ID; id->setValue(name); $$=id;}
	  | {$$=new KT_FactFinal;}
	  ; 

PrintS : TPRINTS '(' ArgsS ')' ';' {$$=new KT_Print; vector<KT_FactFinal*> args; args.push_back($3); $$->setArgs(args);}
	   ;
ArgsS : STRING {KT_String* s = new KT_String; s->setValue($1); $$=s;}
	  | ID {vector<string*> name; name.push_back($1); KT_ID* id = new KT_ID; id->setValue(name); $$=id;}
	  | {$$=new KT_FactFinal;}
	  ; 

BlockStatement: Block {$$=new KT_BlockStatement;}
    	 	  | TIF '(' Expression ')' BlockStatement %prec THEN {KT_IfStatement* ifstatement; $$->setExpression($3); $$->setBStatelent($5); $$=ifstatement;}
		      | TIF '(' Expression ')' BlockStatement TELSE BlockStatement {KT_ifElseStatement* ifelseStatement; $$->setExpression($3); $$->setIfBStatement($5); $$->setElseBStatement($7); $$=ifelseStatement;}
		      | TSWITCH '(' Expression ')' '{' SwitchBlockStatements '}' {KT_SwitchStatement* switchStatement; $$->setCondition($3); $$->setSwitchBStatements(*$6); $$=switchStatement;}
		      | TWHILE '(' Expression ')' BlockStatement {KT_WhileStatement* whileStatement; $$->setCondition($3); $$->setWBStatement($5); $$=whileStatement;}
		      | TDO BlockStatement TWHILE '(' Expression ')' ';' {KT_WhileStatement* whileStatement; $$->setCondition($5); $$->setWBStatement($2); $$=whileStatement;}
		      | TFOR '(' ForControl ')' BlockStatement {KT_ForStatement* forStatement; $$->setForControl($3); $$->setBlockStatement($5); $$=forStatement;}
		      | TBREAK ID ';' {KT_BreakStatement* breakStatement; $$->setIdExist(true); $$->setId($2); $$=breakStatement;}
		      | TBREAK ';' {KT_BreakStatement* breakStatement; $$->setIdExist(false); $$=breakStatement;}
		 	  | TCONTINUE ID ';' {KT_ContinueStatement* continueStatement; $$->setIdExist(true); $$->setId($2); $$=continueStatement;}
		 	  | TCONTINUE ';' {KT_ContinueStatement* continueStatement; $$->setIdExist(false); $$=continueStatement;}
		 	  | TRETURN Expression ';' {KT_ReturnStatement* returnStatement; $$->setIsVoidReturn(false); $$->setReturnExpression($2); $$=returnStatement;}
		 	  | TRETURN ';' {KT_ReturnStatement* returnStatement; $$->setIsVoidReturn(true); $$=returnStatement;}
		 ;

/*----------------------------------------Partie switch----------------------------------------------*/
SwitchBlockStatements: SwitchBlockStatements SwitchBlockStatement {$1->push_back($2); $$=$1;}
						  | {vector<KT_SwitchBlockStatement*>* var; $$=var;}
						  ;

SwitchBlockStatement: TCASE Expression ':' Statements {$$=new KT_SwitchBlockStatement; $$->setCaseExist(true); KT_Block* block =new KT_Block; block->setStatements(*$4); $$->setBlock(block); $$->setExpression($2);}
					|  TDEFAULT ':' Statements {$$=new KT_SwitchBlockStatement; $$->setCaseExist(false); KT_Block* block =new KT_Block; block->setStatements(*$4); $$->setBlock(block);}
					; 

/*------------------------------ partie for -----------------------------------------------------------------*/
ForControl: ForVarControl ';' Expression ';' {$$=new PARSER_ForControl; $$->setCondition($3); $$->setInitFor($1); } 
		  | ForVarControl ';' Expression ';' ForUpdate {$$=new PARSER_ForControl; $$->setCondition($3); $$->setInitFor($1); $$->setUpDate(*$5);} 
		  | ForVarControl ';' ';' {$$=new PARSER_ForControl; $$->setInitFor(*$1);}
		  | ForVarControl ';' ';' ForUpdate {$$=new PARSER_ForControl; $$->setInitFor($1); $$->setUpDate(*$4);}
    	  | ';' Expression ';' {$$=new PARSER_ForControl; $$->setCondition($2);}
    	  | ';' Expression ';' ForUpdate {$$=new PARSER_ForControl; $$->setCondition($2); $$->setUpDate(*$4);}
    	  | ';' ';' {$$=new PARSER_ForControl; }
    	  | ';' ';' ForUpdate {$$=new PARSER_ForControl; $$->setUpDate(*$3);}
    	  ;

ForVarControl: Type VariableDeclaratorId VariableDeclaratorList {$$=new PARSER_Field; $$->AddVariableAtFirstPosition($2); $$->addVectorVariable($3); $$->upDateType($1); }
			 | Type VariableDeclaratorId '=' Expression VariableDeclaratorList {$2->setValue($4); $$=new PARSER_Field; $$->AddVariableAtFirstPosition($2); $$->addVectorVariable($5); $$->upDateType($1);}
			 | ID Ids VariableDeclaratorList {vector<string*> name; name.push_back($1); for (vector<string*>::iterator it = $2->begin(); it != $2->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Variable* var = new KT_Variable; var->setName(name); var->setFinal(false); $$=new PARSER_Field; $$->AddVariableAtFirstPosition(var); $$->addVectorVariable($3); }
			 | ID Ids '=' Expression VariableDeclaratorList  {vector<string*> name; name.push_back($1); for (vector<string*>::iterator it = $2->begin(); it != $2->end(); ++it){ string* n = (*it); name.push_back(n);} KT_Variable* var = new KT_Variable; var->setName(name); var->setFinal(false); var->setValue($4) $$=new PARSER_Field; $$->AddVariableAtFirstPosition(var); $$->addVectorVariable($5);}
			 ;


ForUpdate: Expression StatementExpressionList {vector<KT_IDExpression*>* update; update->push_back($1); for (vector<KT_IDExpression*>::iterator it = $2->begin(); it != $2->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} $$=update;}
		 | ID Ids TablesIndexe '=' Expression  StatementExpressionList {vector<string*> name; name.push_back($1); for (vector<string*>::iterator it = $2->begin(); it != $2->end(); ++it){ string* n = (*it); name.push_back(n);} KT_ID* id; id->setValue(name); KT_Affectation* affectation; affectation->setRExpression($5); affectation->setLExpression(id); affectation->setIndexedArray($3); vector<KT_IDExpression*>* update; update->push_back(affectation); for (vector<KT_IDExpression*>::iterator it = $6->begin(); it != $6->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} $$=update;}
		 ;

StatementExpressionList : ',' Expression StatementExpressionList {vector<KT_IDExpression*>* update; update->push_back($2); for (vector<KT_IDExpression*>::iterator it = $3->begin(); it != $3->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} $$=update;}
						| ','  ID Ids TablesIndexe '=' Expression  StatementExpressionList {vector<string*> name; name.push_back($2); for (vector<string*>::iterator it = $3->begin(); it != $3->end(); ++it){ string* n = (*it); name.push_back(n);} KT_ID* id; id->setValue(name); KT_Affectation* affectation; affectation->setRExpression($6); affectation->setLExpression(id); affectation->setIndexedArray($4); vector<KT_IDExpression*>* update; update->push_back(affectation); for (vector<KT_IDExpression*>::iterator it = $7->begin(); it != $7->end(); ++it){ KT_IDExpression* n = (*it); update->push_back(n);} $$=update;}
						| {vector<KT_IDExpression*>* var; $$=var;}
						;   

/*-------------------------------------Expression arithmetique----------------------------------------------------*/

Expression : FacteurEffect {$$=$1;}
		   ;

FacteurEffect : FacteurEffect TORBINEQ ExpressionOr {KT_OrBinEq* expression = new KT_OrBinEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | FacteurEffect TXORBINEQ ExpressionOr {KT_XOrBinEq* expression = new KT_XOrBinEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | FacteurEffect TANDBINEQ ExpressionOr {KT_AndBinEq* expression = new KT_AndBinEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  /*| FacteurEffect TDECALNSEQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECAREQ ExpressionOr {$$=0;}
			  | FacteurEffect TDECALEQ ExpressionOr {$$=KT_D; $$->setLExpression($1); $$->setRExpression($3);}*/
			  | FacteurEffect TMODEQ ExpressionOr {KT_ModuloEq* expression = new KT_ModuloEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | FacteurEffect TDIVEQ ExpressionOr {KT_DivisionEq* expression = new KT_DivisionEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | FacteurEffect TMULEQ ExpressionOr {KT_MultiplicationEq* expression = new KT_MultiplicationEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | FacteurEffect TMINUSEQ ExpressionOr {KT_SubstractionEq* expression = new KT_SubstractionEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | FacteurEffect TPLUSEQ ExpressionOr {KT_AdditionlEq* expression = new KT_AdditionlEq; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			  | ExpressionOr{$$=$1;}
			  ;

ExpressionOr  : ExpressionOr TOR ExpressionAnd {KT_ExpressionOr* expression= new KT_ExpressionOr; expression->setLExpression($1); expression->setRExpression($3); $$=expression;} 
			  | ExpressionAnd {$$=$1;}
			  ;

ExpressionAnd : ExpressionAnd TAND ExpressionOrLogic {KT_ExpressionAnd* expression =new KT_ExpressionAnd; expression->setLExpression($1); expression->setRExpression($3); $$=expression;} 
			  | ExpressionOrLogic {$$=$1;}
			  ;

ExpressionOrLogic : ExpressionOrLogic '|' ExpressionOrExLogic {KT_ExpressionOrLogic* expression= new KT_ExpressionOrLogic; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
				  | ExpressionOrExLogic {$$=$1;}
				  ;

ExpressionOrExLogic : ExpressionOrExLogic '^' ExpressionAndLogic {KT_ExpressionOrXLogic* expression= new KT_ExpressionOrXLogic; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
				    | ExpressionAndLogic {$$=$1;}
				    ;	

ExpressionAndLogic : ExpressionAndLogic '&' ExpressionEqNeq {KT_ExpressionAndLogic* expression =new KT_ExpressionAndLogic; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
				   | ExpressionEqNeq {$$=$1;}
				   ;

ExpressionEqNeq  : ExpressionEqNeq TCNE ExpressionCompEq {$$=$3;}
				 | ExpressionEqNeq TCEQ ExpressionCompEq {$$=$3;}
				 | ExpressionCompEq {$$=$1;}
				 ; 

ExpressionCompEq : ExpressionCompEq TCGE TermePlus {KT_ExpressionGE* expression=new KT_ExpressionGE; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}  
				 | ExpressionCompEq '>' TermePlus {KT_ExpressionGT* expression=new KT_ExpressionGT; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
				 | ExpressionCompEq TCLE TermePlus {KT_ExpressionLE* expression=new KT_ExpressionLE; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
				 | ExpressionCompEq '<' TermePlus {KT_ExpressionLT* expression=new KT_ExpressionLT; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
				 | TermeDecal {$$=$1;}
				 ;	

TermeDecal : TermeDecal TDECALNS TermePlus {$$=$3;}
	   	   | TermeDecal TDECAR TermePlus {$$=$3;}
	   	   | TermeDecal TDECAL TermePlus {$$=$3;}
	       | TermePlus {$$=$1;}
	       ;

TermePlus    : TermePlus '+' terme {KT_Addition* expression=new KT_Addition; expression->setLExpression($1); expression->setRExpression($3); $$=expression;} 
			 | TermePlus '-' terme {KT_Substraction* expression=new KT_Substraction; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
			 | terme {$$=$1;}
			 ;	

terme  : terme '*' facteur {KT_Multiplication* expression=new KT_Multiplication; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
	   | terme '/' facteur {KT_Division* expression =new KT_Division; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
	   | terme '%' facteur {KT_Modulo* expression= new KT_Modulo; expression->setLExpression($1); expression->setRExpression($3); $$=expression;}
	   | facteur {$$=$1;}
	   ;

facteur : '~' facteur %prec NBINAIRE {KT_NBinary* expression = new KT_NBinary; expression->setExpression($2); $$=expression;}
		| '!' facteur %prec NLOGIC {KT_Negation* expression= new KT_Negation; expression->setExpression($2); $$=expression;}
		| '-' facteur %prec MOINUS {KT_Minus* expression= new KT_Minus; expression->setExpression($2); $$=expression;}
		| '+' facteur %prec PLUS {$$=$2;}
		| ID TDEC {KT_PostDecrement* expression =new KT_PostDecrement; vector<string*> name; name.push_back($1); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); $$=expression;}
		| TDEC ID {KT_PreDecrement* expression =new KT_PreDecrement; vector<string*> name; name.push_back($2); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); $$=expression;}
		| ID TINC {KT_PostIncrement* expression =new KT_PostIncrement; vector<string*> name; name.push_back($1); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); $$=expression;}
		| TINC ID {KT_PreIncrement* expression=new KT_PreIncrement; vector<string*> name; name.push_back($2); KT_ID* id=new KT_ID; id->setValue(name); expression->setExpression(id); $$=expression;}
		| factFinal {$$=$1;}
		;

factFinal: '(' Expression ')' {$$= $2;}
		 | ENTIER {KT_Entier* expression= new KT_Entier; expression->setValue($1); $$=expression;}
		 | REEL {KT_Reel* expression = new KT_Reel; expression->setValue($1); $$=expression;}
		 | STRING {KT_String* expression = new KT_String; expression->setValue($1); $$=expression;}
		 | ConstructorCall {$$=$1;}
		 | ArrayInitializer {$$=$1;} 
		 | LinkedMethodVarCall {$$=$1;} 
		 | TTRUE {KT_Bool* expression= new KT_Bool; expression->setValue(true); $$=expression; }
		 | TFALSE {KT_Bool* expression= new KT_Bool; expression->setValue(false); $$=expression;}
		 | TNULL {KT_Null* expression = new KT_Null; $$=expression;} 
		 ;

ConstructorCall : TNEW ID Ids FormalParametersCalledMethod {KT_ConstructorCall* expression =new KT_ConstructorCall; expression->addString($2); expression->addVectorString(*$3); expression->setParams(*$4); $$=expression;}
	            ;

MethodCall : ID FormalParametersCalledMethod {vector<string*> name; name.push_back($1); KT_MethodCall* expression =new KT_MethodCall; expression->setName(name); expression->setParams(*$2); $$=expression;}
		   ;

ArrayInitializer : TNEW BasicType '[' ENTIER ']'{KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back($4); KT_Type* type = new KT_Type; type->setBasicType(true); vector<string*> typeName; typeName.push_back($2); type->setTypeName(typeName); type->setArrayDim(0); KT_ArrayInitilizer* expression = new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); $$=expression;}
				 
				 | TNEW ID Ids '[' ENTIER ']'{KT_IndexedArray* indexedArray= new KT_IndexedArray; indexedArray->setDimension(1); vector<int> indexes; indexes.push_back($5); KT_Type* type = new KT_Type; type->setBasicType(false); type->addString($2); type->addVectorString(*$3); type->setArrayDim(0); KT_ArrayInitilizer* expression =new KT_ArrayInitilizer; expression->setIndexedArray(indexedArray); expression->setType(type); $$=expression;}
				 ;

LinkedMethodVarCall : TTHIS '.' ID LinkedMethodVarCallList {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back($1); ids.push_back($3); var->setValue(ids); $4->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*$4); $$=expression;}
					| ID LinkedMethodVarCallList {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back($1); var->setValue(ids); $2->push_back(var); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*$2); $$=expression;}
					| TTHIS '.' MethodCall LinkedMethodVarCallList {$3->setNameAddStringAtFirstPosition($1);  $4->push_back($3); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*$4); $$=expression;}
					| MethodCall LinkedMethodVarCallList {$2->push_back($1); KT_LinkedMethodOrVarCall* expression =new KT_LinkedMethodOrVarCall; expression->setMixedCall(*$2); $$=expression;}
					;

LinkedMethodVarCallList : '.' ID LinkedMethodVarCallList {KT_ID* var=new KT_ID; vector<string*> ids; ids.push_back($2); var->setValue(ids); $3->push_back(var); $$=$3; }
						| '.' MethodCall LinkedMethodVarCallList {$3->push_back($2); $$=$3;}
						| { vector<KT_MethodOrVarCall*>* vect; $$=vect; }
						;


%%

int yyerror( const char* err )
{
  printf("Erreur syntaxique: \'%s\' est imprévu dans la ligne [%d]\n", yytext, lineno/*, column-strlen(yytext)*/);
  return 0;
}

