//============================================================================
// Name        : AST.cpp
// Author      : kheireddine
// Version     : 0.1
// Description : Fichier contenant l'implémebtation des classes (diagramme de classe partie gauche)
//============================================================================
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "AST.h"



/************** Partie redandante juste pour ne pas avoir des erruers de compilation *******************/

          /****************************************************************************************************************************/
         /****************************************** ExprAST *************************************************************************/
        /****************************************************************************************************************************/
        // constructeurs
        ExprAST::ExprAST(int type, bool computed, bool compute) : AST(type, computed, compute){}
        ExprAST::ExprAST(const ExprAST& exp): AST(exp.getTypeAST(), exp.isComputed(), exp.canCompute()){}
        ExprAST::ExprAST(){}

        //Les fonctions redéfinis de la classe mere
        int ExprAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool ExprAST::isComputed() const {
            return isComputed();
        }
        
        bool ExprAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        ExprAST::~ExprAST(){}

         /****************************************************************************************************************************/
         /****************************************** VariableAST *********************************************************************/
        /****************************************************************************************************************************/
        //constructeurs 
        VariableAST::VariableAST(int type, bool computed, bool compute, String* typeVar, String* name, ExprAST* assignmentExpr) : ExprAST(type, computed, compute){
            typeVar=typeVar; 
            name=name; 
            assignmentExpr=assignmentExpr; 
        }
        VariableAST::VariableAST(const VariableAST& var): ExprAST(var.getTypeAST(), var.isComputed(), var.canCompute()){
            typeVar=var.typeVar; 
            name=var.name; 
            assignmentExpr=var.assignmentExpr;   
        }
        VariableAST::VariableAST(){}

        //getters
        String* VariableAST::getTypeVar() const {
            return typeVar;
        }

        String* VariableAST::getName() const {
            return name;
        }

        ExprAST* VariableAST::getAssignmentExpr() const {
            return assignmentExpr; 
        }
        //setters 
        void VariableAST::setAssignmentExpr(ExprAST* assignmentExpr){
            assignmentExpr=assignmentExpr; 
        }

        //Les fonctions redéfinis de la classe mere
        int VariableAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool VariableAST::isComputed() const {
            return isComputed();
        }
        
        bool VariableAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        VariableAST::~VariableAST(){
            delete typeVar;
            delete name;
            delete assignmentExpr;
        }



/************** Fin Partie redandante juste pour ne pas avoir des erruers de compilation *******************/


  /****************************************************************************************************************************/
   /****************************************** AttributAST ********************************************************************/
     /****************************************************************************************************************************/
       
        // constructeurs
	AttributAST::AttributAST(int type, bool computed, bool compute,String* name, int visibility, bool Final,bool Static,bool Value) : AST(type, computed, compute){
        	this->name=name;
        	this->visibility=visibility;
        	this->Final=Final; 
			this->Static=Static;
			this->Value=Value;
			
		}

	AttributAST::AttributAST(String* name, int visibility, bool Final,bool Static,bool Value){
        	this->name=name;
        	this->visibility=visibility;
        	this->Final=Final; 
			this->Static=Static;
			this->Value=Value;
		}
	
	
	AttributAST::AttributAST(){
	
		}
	

	//getters
	
	 String* AttributAST::getName() const {
            return name;
        }

        int AttributAST::getVisibility() const {
            return visibility;
        }
	
	bool AttributAST::isFinal() const {
	return Final== true;	
	}
	
	bool AttributAST::isStatic() const {
	return Static== true;	
	}

	bool AttributAST::isValue() const {
	return Value== true;	
	}

	 //Les fonctions redéfinis de la classe mere
        int AttributAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool AttributAST::isComputed() const {
        	return isComputed();
        }
        
        bool AttributAST::canCompute() const{
        	return canCompute();
        }

	//destructeur
	AttributAST::~AttributAST() {
		delete name;
	}

/****************************************************************************************************************************/
   /****************************************** PrototypeAST  ********************************************************************/
     /****************************************************************************************************************************/
     
        // constructeurs

	PrototypeAST::PrototypeAST(int type, bool computed, bool compute,String* name, int visibility, String* returnType,VariableList args) : AST(type, computed, compute){
        	this->name=name;
        	this->visibility=visibility;
        	this->returnType=returnType;
			this->args=args;
		}
	
	PrototypeAST::PrototypeAST(String* name, int visibility, String* returnType,VariableList args){
        	this->name=name;
        	this->visibility=visibility;
        	this->returnType=returnType;
			this->args=args;
		}	

	PrototypeAST::PrototypeAST() {}

	//getters
	
	 String* PrototypeAST::getName() const {
            return name;
        }

        int PrototypeAST::getVisibility() const {
            return visibility;
        }

	 String* PrototypeAST::getReturnType() const {
            return returnType;
        }

	
	VariableList PrototypeAST::getArgs(){
	    return args;
	}	


	//setters
	
	void PrototypeAST::setArgs(VariableList args){
	this->args=args;
	}

	//Les fonctions redéfinis de la classe mere
        int PrototypeAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool PrototypeAST::isComputed() const {
        	return isComputed();
        }
        
        bool PrototypeAST::canCompute() const{
        	return canCompute();
        }

	//destructeur
	PrototypeAST::~PrototypeAST() {
		delete name;
		delete returnType;

	}

/****************************************************************************************************************************/
   /****************************************** InstructionAST  ********************************************************************/
     /****************************************************************************************************************************/
     

	// constructeurs
	InstructionAST::InstructionAST(int type, bool computed, bool compute,AST* BlockParentAST): AST(type, computed, compute) {
		this->BlockParentAST=BlockParentAST;
	}
	InstructionAST::InstructionAST(int type, bool computed, bool compute): AST(type, computed, compute) {}

	InstructionAST::InstructionAST(AST* BlockParentAST){
		this->BlockParentAST=BlockParentAST;
	}

	InstructionAST::InstructionAST() {}

	//getters
	AST* InstructionAST::getBlockParentAST () {
		return BlockParentAST;
	}

	//setters 
	void InstructionAST::setBlockParentAST (AST* BlockParentAST) {
		this->BlockParentAST=BlockParentAST;
	}

	//Les fonctions redéfinis de la classe mere
        int InstructionAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool InstructionAST::isComputed() const {
        	return isComputed();
        }
        
        bool InstructionAST::canCompute() const{
        	return canCompute();
        }


     //destructeur
	InstructionAST::~InstructionAST() {}



/****************************************************************************************************************************/
   /****************************************** BlockInstructionAST  ********************************************************************/
     /****************************************************************************************************************************/
     
    	// constructeurs
	BlockInstructionAST::BlockInstructionAST (AST* parent,vector<InstructionAST*> instructions){
		this->parent=parent;
		this->instructions=instructions;
	}

	BlockInstructionAST::BlockInstructionAST () {}


	//getters
	vector<InstructionAST*>  BlockInstructionAST::getInstructions () {
		return instructions;
	}

	AST* BlockInstructionAST::getParent () {
		return parent;
	}

	//setters 
	void BlockInstructionAST::setParent (AST* parent) {
		this->parent=parent;
	}

	void BlockInstructionAST::setInstructions (vector<InstructionAST*> instructions) {
		this->instructions=instructions;
	}


	BlockInstructionAST::~BlockInstructionAST() {}



/****************************************************************************************************************************/
   /****************************************** MethodeAST  ********************************************************************/
     /****************************************************************************************************************************/
     
        // constructeurs

	MethodeAST::MethodeAST(int type, bool computed, bool compute,BlockInstructionAST* blockInstructions,PrototypeAST* prototypeAst) : AST(type, computed, compute){
        	this->blockInstructions=blockInstructions;
        	this->prototypeAst=prototypeAst;
		}		
	
	MethodeAST::MethodeAST(BlockInstructionAST* blockInstructions,PrototypeAST* prototypeAst){
        	this->blockInstructions=blockInstructions;
        	this->prototypeAst=prototypeAst;
		}		
	
	MethodeAST::MethodeAST() {}
	//getters
	
	 BlockInstructionAST* MethodeAST::getBlockInstructions(){
            return blockInstructions;
        }

        PrototypeAST* MethodeAST::getPrototypeAst() {
            return prototypeAst;
        }


	//setters
	
	void MethodeAST::setBlockInstructions(BlockInstructionAST* blockInstructions){
	this->blockInstructions=blockInstructions;
	}
	
	void MethodeAST::setPrototypeAst(PrototypeAST* prototypeAst){
	this->prototypeAst=prototypeAst;
	}

	//Les fonctions redéfinis de la classe mere
        int MethodeAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool MethodeAST::isComputed() const {
        	return isComputed();
        }
        
        bool MethodeAST::canCompute() const{
        	return canCompute();
        }

	//destructeur
	MethodeAST::~MethodeAST() {}


/****************************************************************************************************************************/
   /****************************************** DeclarationAST  ********************************************************************/
     /****************************************************************************************************************************/

    	// constructeurs
	DeclarationAST::DeclarationAST(String* typeDeclaration,VariableAST* varAST){
		this->typeDeclaration=typeDeclaration;
		this->varAST=varAST;
	}

	DeclarationAST::DeclarationAST():InstructionAST() {}

	//getters
	String* DeclarationAST::getTypeDeclaration () {
		return typeDeclaration;
	}

	VariableAST* DeclarationAST::getVarAST () {
		return varAST;
	}


	//setters 
	void DeclarationAST::setvarAST (VariableAST* varAST) {
		this->varAST=varAST;
	}

	void DeclarationAST::setTypeDeclaration (String* typeDeclaration) {
		this->typeDeclaration=typeDeclaration;
	}

	//destructeur
	DeclarationAST::~DeclarationAST() {
		delete typeDeclaration;
	}



/****************************************************************************************************************************/
   /****************************************** ConstructorAST  ********************************************************************/
     /****************************************************************************************************************************/

	//Constructeurs
    ConstructorAST::ConstructorAST(int type, bool computed, bool compute,bool Static,int portee,BlockInstructionAST* blockInstructions,VariableList parametres): AST(type, computed, compute){
    	this->Static=Static;
    	this->portee=portee;
    	this->blockInstructions=blockInstructions;
    	this->parametres=parametres;
    }
	
	ConstructorAST::ConstructorAST(bool Static,int portee,BlockInstructionAST* blockInstructions,VariableList parametres){
		this->Static=Static;
    	this->portee=portee;
    	this->blockInstructions=blockInstructions;
    	this->parametres=parametres;
	}

	ConstructorAST::ConstructorAST(){}

    //getters
	bool ConstructorAST::isStatic(){
		return Static== true;
	}
	int ConstructorAST::getPortee (){
		return portee;
	}
	BlockInstructionAST* ConstructorAST::getBlockInstructions(){
		return blockInstructions;
	}
	VariableList ConstructorAST::getParametres() {
		return parametres;
	}

	//setters 
	void ConstructorAST::setBlockInstructions (BlockInstructionAST* blockInstructions){
		this->blockInstructions=blockInstructions;
	}

	void ConstructorAST::setPortee(int portee){
		this->portee=portee;
	}

	void ConstructorAST::setStatic(bool Static){
		this->Static=Static;
	}

	void ConstructorAST::setParameters(VariableList parametres){
		this->parametres=parametres;
	}
	
    //Les fonctions redéfinis de la classe mere
        int ConstructorAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool ConstructorAST::isComputed() const {
        	return isComputed();
        }
        
        bool ConstructorAST::canCompute() const{
        	return canCompute();
        }


       ConstructorAST::~ConstructorAST() {
       	
       }

/****************************************************************************************************************************/
   /****************************************** AffectationAST  ********************************************************************/
     /****************************************************************************************************************************/
    	//Constructeurs
    	AffectationAST::AffectationAST(int type, bool computed, bool compute,VariableAST* varAst,ExprAST* Value): ExprAST(type, computed, compute){
    		this->varAst=varAst;
    		this->Value=Value;
    	}
    	AffectationAST::AffectationAST(VariableAST* varAst,ExprAST* Value){
    		this->varAst=varAst;
    		this->Value=Value;
    	}
    	AffectationAST::AffectationAST(){}

    	//getters
    	VariableAST* AffectationAST::getVarAST(){
    		return varAst;
    	}
    	ExprAST* AffectationAST::getValue(){
			return Value;

    	}

    	//setters 

    	void AffectationAST::setvarAST(VariableAST* varAst){
    		this->varAst=varAst;
    	}
    	void AffectationAST::setValue(ExprAST* Value){
    		this->Value=Value;
    	}


    	//Les fonctions redéfinis de la classe mere
        int AffectationAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool AffectationAST::isComputed() const {
        	return isComputed();
        }
        
        bool AffectationAST::canCompute() const{
        	return canCompute();
        }

	    //destructeur
		AffectationAST::~AffectationAST(){}


/****************************************************************************************************************************/
   /****************************************** BoucleForAST  ********************************************************************/
     /****************************************************************************************************************************/
			//Constructeurs
    	BoucleForAST::BoucleForAST(int type, bool computed, bool compute,InstructionAST* IndexIteration,ExprAST* condition,AffectationAST* affectation,BlockInstructionAST* blockInstructions):InstructionAST(type, computed, compute){
 			this->IndexIteration=IndexIteration;
 			this->condition=condition;
 			this->affectation=affectation;
 			this->blockInstructions=blockInstructions;

    	}
    	BoucleForAST::BoucleForAST(InstructionAST* IndexIteration,ExprAST* condition,AffectationAST* affectation,BlockInstructionAST* blockInstructions){
			this->IndexIteration=IndexIteration;
 			this->condition=condition;
 			this->affectation=affectation;
 			this->blockInstructions=blockInstructions;

    	}
    	BoucleForAST::BoucleForAST(){}

    	//getters
    	InstructionAST* BoucleForAST::getIndexIteration(){
    		return IndexIteration;
    	}

    	ExprAST* BoucleForAST::getCondition() {
    		return condition;
    	}

    	AffectationAST* BoucleForAST::getAffectation(){
    		return affectation;
    	}

    	BlockInstructionAST* BoucleForAST::getBlockInstructions(){
    		return blockInstructions;
    	}

    	//setters 
		void BoucleForAST::setIndexIteration(InstructionAST* IndexIteration){
    		this->IndexIteration=IndexIteration;
 		
    	}

    	void BoucleForAST::setCondition(ExprAST* condition){
    		this->condition=condition;
    	}

    	void BoucleForAST::setAffectation(AffectationAST* affectation){
    		this->affectation=affectation;
    	}

    	void BoucleForAST::setBlockInstructions(BlockInstructionAST* blockInstructions){
    		this->blockInstructions=blockInstructions;
    	}

    	//Les fonctions redéfinis de la classe mere
        int BoucleForAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool BoucleForAST::isComputed() const {
        	return isComputed();
        }
        
        bool BoucleForAST::canCompute() const{
        	return canCompute();
        }


	    //destructeur
		BoucleForAST::~BoucleForAST(){}




/****************************************************************************************************************************/
   /****************************************** BoucleWhileAST  ********************************************************************/
     /****************************************************************************************************************************/
			//Constructeurs
    	BoucleWhileAST::BoucleWhileAST(int type, bool computed, bool compute,ExprAST* condition,BlockInstructionAST* blockInstructions):InstructionAST(type, computed, compute){
 			
 			this->condition=condition;
 			this->blockInstructions=blockInstructions;

    	}
    	BoucleWhileAST::BoucleWhileAST(ExprAST* condition,BlockInstructionAST* blockInstructions){
 			this->condition=condition;
 			this->blockInstructions=blockInstructions;

    	}
    	BoucleWhileAST::BoucleWhileAST(){}

    	//getters
		ExprAST* BoucleWhileAST::getCondition() {
    		return condition;
    	}

    	BlockInstructionAST* BoucleWhileAST::getBlockInstructions(){
    		return blockInstructions;
    	}

    	//setters

    	void BoucleWhileAST::setCondition(ExprAST* condition){
    		this->condition=condition;
    	}

    	void BoucleWhileAST::setBlockInstructions(BlockInstructionAST* blockInstructions){
    		this->blockInstructions=blockInstructions;
    	}

    	//Les fonctions redéfinis de la classe mere
        int BoucleWhileAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool BoucleWhileAST::isComputed() const {
        	return isComputed();
        }
        
        bool BoucleWhileAST::canCompute() const{
        	return canCompute();
        }


	    //destructeur
		BoucleWhileAST::~BoucleWhileAST(){}


/****************************************************************************************************************************/
   /****************************************** ExpressionConditionnelleAST  ********************************************************************/
     /****************************************************************************************************************************/
		//Constructeurs
    	ExpressionConditionnelleAST::ExpressionConditionnelleAST(int type, bool computed, bool compute,ExprAST* condition,BlockInstructionAST* ifBlock,BlockInstructionAST* nextCondition):InstructionAST(type, computed, compute){
    		this->condition=condition;
 			this->ifBlock=ifBlock;
 			this->nextCondition=nextCondition;
    	}
    	ExpressionConditionnelleAST::ExpressionConditionnelleAST(ExprAST* condition,BlockInstructionAST* ifBlock,BlockInstructionAST* nextCondition){
    		this->condition=condition;
 			this->ifBlock=ifBlock;
 			this->nextCondition=nextCondition;
    	}
    	ExpressionConditionnelleAST::ExpressionConditionnelleAST(){}

    	//getters;
    	ExprAST* ExpressionConditionnelleAST::getCondition(){
    		return condition;
    	}
    	BlockInstructionAST* ExpressionConditionnelleAST::getIfBlock(){
    		return ifBlock;
    	}
    	BlockInstructionAST* ExpressionConditionnelleAST::getNextCondition(){
    		return nextCondition;
    	}

    	//setters on);
    	void ExpressionConditionnelleAST::setCondition(ExprAST* condition){
    		this->condition=condition;
    	}
    	void ExpressionConditionnelleAST::setIfBlock(BlockInstructionAST* ifBlock){
    		this->ifBlock=ifBlock;
    	}
    	void ExpressionConditionnelleAST::setNextCondition(BlockInstructionAST* nextCondition){
    		this->nextCondition=nextCondition;
    	}
    	
    	//Les fonctions redéfinis de la classe mere
        int ExpressionConditionnelleAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool ExpressionConditionnelleAST::isComputed() const {
        	return isComputed();
        }
        
        bool ExpressionConditionnelleAST::canCompute() const{
        	return canCompute();
        }

	    //destructeur
		ExpressionConditionnelleAST::~ExpressionConditionnelleAST(){}


