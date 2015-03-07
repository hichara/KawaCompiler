//============================================================================
// Name        : AST.cpp
// Author      : kheireddine
// Version     : 0.1
// Description : Intégration du diagramme de classes (DAL) (partie droite + partie gauche)
//============================================================================
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "AST.h"

/******************************** Partie droite **********************************************/

   /****************************************************************************************************************************/
         /****************************************** Classe AST **********************************************************************/
        /****************************************************************************************************************************/
        // contructuers 
        AST::AST(int type, bool computed, bool compute) : type(type), computed(computed), compute(compute) {}
        AST::AST(const AST& a){
            type=a.type;
            computed=a.computed;
            compute=a.compute;
        }
        AST::AST(){}

        //desctructeur
        AST::~AST(){}


          /****************************************************************************************************************************/
         /****************************************** Classe ConcreteClasse ***********************************************************/
        /****************************************************************************************************************************/
        // constructeurs
        ConcreteClassAST::ConcreteClassAST(int type, bool computed, bool compute, String* name, int visibility, bool final, ConcreteClassAST* parent, InterfaceList interfaces, AttributList attributs, ConstructorList constructors, MethodeList methodes ) : AST(type, computed, compute), name(name){
        	visibility=visibility;
        	final=final; 
        	parent=parent; 
        	interfaces=interfaces; 
        	attributs=attributs; 
        	constructors=constructors;
        	methodes=methodes;
        }

        ConcreteClassAST::ConcreteClassAST(){
            parent=NULL;
        } 

        ConcreteClassAST::ConcreteClassAST(const ConcreteClassAST& c): AST(c.getTypeAST(), c.isComputed(), c.canCompute()), name(c.name){
            visibility=c.visibility;
            final=c.final; 
            parent=c.parent; 
            interfaces=c.interfaces; 
            attributs=c.attributs; 
            constructors=c.constructors;
            methodes=c.methodes;
        }

        //getters
        String* ConcreteClassAST::getName() const {
            return name;
        }

        int ConcreteClassAST::getVisibility() const {
            return visibility;
        }

        bool ConcreteClassAST::isFinal() const {
            return final;
        }

        ConcreteClassAST* ConcreteClassAST::getParent() const {
            return parent;
        }

        InterfaceList ConcreteClassAST::getInterfaces() const {
            return interfaces;
        }

        AttributList ConcreteClassAST::getAttributs() const {
            return attributs;
        }

        ConstructorList ConcreteClassAST::getConstructors() const {
            return constructors;
        }

        PrototypeList ConcreteClassAST::getMethodes() const {
            return methodes;
        }

        //Setters
        void ConcreteClassAST::setParent(ConcreteClassAST* parent){
            parent=parent;
        }
        
        void ConcreteClassAST::setInterfaces(InterfaceList& interfaces){
            interfaces=interfaces;
        }

        void ConcreteClassAST::setAttributs(AttributList& attributs){
            attributs=attributs;
        }

        void ConcreteClassAST::setConstructors(ConstructorList& constructors){
            constructors=constructors;
        }

        void ConcreteClassAST::setMethodes(MethodeList& methodes){
            methodes=methodes;
        }

        //Les fonctions redéfinis de la classe mere
        int ConcreteClassAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool ConcreteClassAST::isComputed() const {
            return isComputed();
        }
        
        bool ConcreteClassAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        ConcreteClassAST::~ConcreteClassAST(){
            delete name;
            delete parent;
            interfaces.clear();
            attributs.clear();
            constructors.clear();
            methodes.clear();
        }

          /****************************************************************************************************************************/
         /****************************************** InterfaceAST ********************************************************************/
        /****************************************************************************************************************************/
        // constructeurs
        InterfaceAST::InterfaceAST(int type, bool computed, bool compute, String* name, int visibility, vector<InterfaceAST*> interfacesParents, PrototypeList prototypes ) : AST(type, computed, compute), name(name), visibility(visibility), interfacesParents(interfacesParents), prototypes(prototypes){}
        InterfaceAST::InterfaceAST(const InterfaceAST& interface): AST(interface.getTypeAST(), interface.isComputed(), interface.canCompute()), name(interface.name), visibility(interface.visibility), interfacesParents(interface.interfacesParents), prototypes(interface.prototypes) {}        
        InterfaceAST::InterfaceAST(){}

        //getters
        String* InterfaceAST::getName() const {
            return name;
        }

        int InterfaceAST::getVisibility() const {
            return visibility;
        }

        vector<InterfaceAST*> InterfaceAST::getInterfacesParents() const {
            return interfacesParents;
        }

        PrototypeList InterfaceAST::getPrototypes() const {
            return prototypes;
        }

        //Setters
        void InterfaceAST::setInterfaces(vector<InterfaceAST*>& interfacesParents){
            interfacesParents=interfacesParents;
        }

        void InterfaceAST::setPrototypes(PrototypeList& prototypes){
            prototypes=prototypes;
        }

        //Les fonctions redéfinis de la classe mere
        int InterfaceAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool InterfaceAST::isComputed() const {
        	return isComputed();
        }
        
        bool InterfaceAST::canCompute() const{
        	return canCompute();
        }

        //desctructeur
        InterfaceAST::~InterfaceAST(){
            delete name;
            interfacesParents.clear();
            prototypes.clear();
        }

          /****************************************************************************************************************************/
         /****************************************** AbstractClassAST ***************************************************************/
        /****************************************************************************************************************************/
        // constructeurs
        AbstractClassAST::AbstractClassAST(int type, bool computed, bool compute, String* name, int visibility, bool final, ConcreteClassAST* parent, InterfaceList interfaces, AttributList attributs, ConstructorList constructors, MethodeList methodes, PrototypeList prototypes) : ConcreteClassAST(type, computed, compute, name, visibility, final, parent, interfaces, attributs, constructors, methodes), prototypes(prototypes){}
        AbstractClassAST::AbstractClassAST(const AbstractClassAST& ac): ConcreteClassAST(ac.getTypeAST(), ac.isComputed(), ac.canCompute(), ac.getName(), ac.getVisibility(), ac.isFinal(), ac.getParent(), ac.getInterfaces(), ac.getAttributs(), ac.getConstructors(), ac.getMethodes()){
            prototypes=prototypes;
        }
        AbstractClassAST::AbstractClassAST(){}

        //Les fonctions redéfinis de la classe mere
        int AbstractClassAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool AbstractClassAST::isComputed() const {
            return isComputed();
        }
        
        bool AbstractClassAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        AbstractClassAST::~AbstractClassAST(){
            prototypes.clear();
        }

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
         /****************************************** ExprUnaireAST *******************************************************************/
        /****************************************************************************************************************************/
        //constructeurs 
        ExprUnaireAST::ExprUnaireAST(int type, bool computed, bool compute, ExprAST* operande, int Operator) : ExprAST(type, computed, compute), operande(operande), Operator(Operator){}
        ExprUnaireAST::ExprUnaireAST(const ExprUnaireAST& exp): ExprAST(exp.getTypeAST(), exp.isComputed(), exp.canCompute()), operande(exp.operande), Operator(exp.Operator){}
        ExprUnaireAST::ExprUnaireAST(){}
        
        //getters
        ExprAST* ExprUnaireAST::getOperande() const {
            return operande;
        }

        int ExprUnaireAST::getOperator() const {
            return Operator;
        }

        //setters 
        void ExprUnaireAST::setOperande(ExprAST* operande){
            operande=operande;
        }

        void ExprUnaireAST::setOperator(int Operator){
            Operator=Operator;
        }

        //Les fonctions redéfinis de la classe mere
        int ExprUnaireAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool ExprUnaireAST::isComputed() const {
            return isComputed();
        }
        
        bool ExprUnaireAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        ExprUnaireAST::~ExprUnaireAST(){
        	delete operande;
        }


          /****************************************************************************************************************************/
         /****************************************** ExprBinaireAST ******************************************************************/
        /****************************************************************************************************************************/
        //constructeurs 
        ExprBinaireAST::ExprBinaireAST(int type, bool computed, bool compute, ExprAST* leftOp, ExprAST* rightOp, int Operator) : ExprAST(type, computed, compute){
        	leftOp=leftOp; 
        	rightOp=rightOp; 
        	Operator=Operator; 
        }
        ExprBinaireAST::ExprBinaireAST(const ExprBinaireAST& exp): ExprAST(exp.getTypeAST(), exp.isComputed(), exp.canCompute()){
            leftOp=exp.leftOp; 
            rightOp=exp.rightOp; 
            Operator=exp.Operator;   
        }
        ExprBinaireAST::ExprBinaireAST(){}
        
        //getters
        ExprAST* ExprBinaireAST::getLeftOp(){
            return leftOp;
        }

        ExprAST* ExprBinaireAST::getRightOp(){
            return rightOp;
        }

        int ExprBinaireAST::getOperator(){
            return Operator;
        }

        //setters 
        void ExprBinaireAST::setLeftOp(ExprAST* leftOp){
            leftOp=leftOp;
        }


        void ExprBinaireAST::setLOperande(ExprAST* rightOp){
            rightOp=rightOp;
        }

        void ExprBinaireAST::setOperator(int Operator){
            Operator=Operator;
        }

        //Les fonctions redéfinis de la classe mere
        int ExprBinaireAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool ExprBinaireAST::isComputed() const {
        	return isComputed();
        }
        
        bool ExprBinaireAST::canCompute() const{
        	return canCompute();
        }

        //desctructeur
        ExprBinaireAST::~ExprBinaireAST(){
        	delete leftOp;
        	delete rightOp;
        }

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
         /****************************************** InstanceObjetAST ****************************************************************/
        /****************************************************************************************************************************/
        //constructeurs
        InstanceObjetAST::InstanceObjetAST(int type, bool computed, bool compute, ConstructorAST* constructor, VariableList params): ExprAST(type, computed, compute){
            constructor=constructor;
            params=params;
        } 
        InstanceObjetAST::InstanceObjetAST(const InstanceObjetAST& ia):ExprAST(ia.getTypeAST(), ia.isComputed(), ia.canCompute()){
            constructor=ia.constructor;
            params=ia.params;
        }
        InstanceObjetAST::InstanceObjetAST(){}
        
        //getters
        ConstructorAST* InstanceObjetAST::getConstructor() const{
            return constructor;
        }

        VariableList InstanceObjetAST::getParams() const{
            return params;
        }

        //setters 
        void InstanceObjetAST::setConstructor(ConstructorAST* constructor){
            constructor=constructor;
        }
        void InstanceObjetAST::setParams(VariableList params){
            params=params;
        }
        
        //Les fonctions redéfinis de la classe mere
        int InstanceObjetAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool InstanceObjetAST::isComputed() const {
            return isComputed();
        }
        
        bool InstanceObjetAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        InstanceObjetAST::~InstanceObjetAST(){
            params.clear();
        }

          /****************************************************************************************************************************/
         /****************************************** CallMethodeAST ******************************************************************/
        /****************************************************************************************************************************/
        //constructeurs
        CallMethodeAST::CallMethodeAST(int type, bool computed, bool compute, String* methodName, ExprList args, VariableAST caller) : ExprAST(type, computed, compute){
        	methodName=methodName;
        	args=args; 
        	caller=caller;
        }
        
        CallMethodeAST::CallMethodeAST(const CallMethodeAST& cm): ExprAST(cm.getTypeAST(), cm.isComputed(), cm.canCompute()){
            methodName=cm.methodName;
            args=cm.args; 
            caller=cm.caller;
        }
        CallMethodeAST::CallMethodeAST(){}

        //getters
        String* CallMethodeAST::getMethodeName() const {
            return methodName;
        }

        ExprList CallMethodeAST::getArgs() const {
            return args; 
        }

        VariableAST CallMethodeAST::getCaller() const {
            return caller;
        }
        
        //setters 
        void CallMethodeAST::setArgs(ExprList args){
            args=args;
        }

        void CallMethodeAST::setCaller(VariableAST caller){
            caller=caller; 
        }

        //Les fonctions redéfinis de la classe mere
        int CallMethodeAST::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool CallMethodeAST::isComputed() const {
        	return isComputed();
        }
        
        bool CallMethodeAST::canCompute() const{
        	return canCompute();
        }

        //desctructeur
        CallMethodeAST::~CallMethodeAST(){
            delete methodName;
            args.clear();
        }

          /****************************************************************************************************************************/
         /****************************************** Primitif****** ******************************************************************/
        /****************************************************************************************************************************/
		//constructeurs
        Primitif::Primitif(int type, bool computed, bool compute) : ExprAST(type, computed, compute){}
        Primitif::Primitif(const Primitif& pr): ExprAST(pr.getTypeAST(), pr.isComputed(), pr.canCompute()){}
        Primitif::Primitif(){}

 		//Les fonctions redéfinis de la classe mere
    	int Primitif::getTypeAST() const{
        	return getTypeAST(); 
        }

        bool Primitif::isComputed() const {
        	return isComputed();
        }
        
        bool Primitif::canCompute() const{
        	return canCompute();
        }

 		//desctructeur
        Primitif::~Primitif(){}

          /****************************************************************************************************************************/
         /****************************************** StringAST ***********************************************************************/
        /****************************************************************************************************************************/
    	//construceurs
    	StringAST::StringAST( int type, bool computed, bool compute, String* value ): Primitif(type, computed, compute){
            value=value;
        }
        StringAST::StringAST(const StringAST& sa): Primitif(sa.getTypeAST(), sa.isComputed(), sa.canCompute()){
            value= sa.value;
        }
     	StringAST::StringAST(){}
        
        //getters
     	String* StringAST::getValue() const {
     		return value;
     	}
        
        //setters
        void StringAST::setValue(String* value){
     		value=value;
     	}

        //desctructeur
        StringAST::~StringAST(){
            delete value;
        }

          /****************************************************************************************************************************/
         /****************************************** BooleanAST **********************************************************************/
        /****************************************************************************************************************************/
    	//constructeurs
    	BooleanAST::BooleanAST(int type, bool computed, bool compute, bool value ): Primitif(type, computed, compute) {
    		value=value;
    	}

        BooleanAST::BooleanAST(const BooleanAST& ba): Primitif(ba.getTypeAST(), ba.isComputed(), ba.canCompute()){
            value = ba.value;
        }
    	BooleanAST::BooleanAST(){}
        
        //getters
        bool BooleanAST::getValue() const {
     		return value;
     	}
        
        //setters
        void BooleanAST::setValue(bool value){
     		value=value;
     	}

        //desctructeur
        BooleanAST::~BooleanAST(){}

          /****************************************************************************************************************************/
         /****************************************** EntierAST ***********************************************************************/
        /****************************************************************************************************************************/
    	//constructeurs
    	EntierAST::EntierAST(int type, bool computed, bool compute, int value ): Primitif(type, computed, compute) {
    		value=value;
    	}
        EntierAST::EntierAST(const EntierAST& ea): Primitif(ea.getTypeAST(), ea.isComputed(), ea.canCompute()){
            value = ea.value;
        }
    	EntierAST::EntierAST(){}
        
        //getters
        int EntierAST::getValue() const {
     		return value;
     	}
        
        //setters
        void EntierAST::setValue(int value){
     		value=value;
     	}

        //desctructeur
        EntierAST::~EntierAST(){}

          /****************************************************************************************************************************/
         /****************************************** FlottantAST *********************************************************************/
        /****************************************************************************************************************************/
    	//constructeurs
    	FlottantAST::FlottantAST(int type, bool computed, bool compute, float value ): Primitif(type, computed, compute) {
    		value=value;
    	}

        FlottantAST::FlottantAST(const FlottantAST& fa): Primitif(fa.getTypeAST(), fa.isComputed(), fa.canCompute()){
            value = fa.value;
        }
    	FlottantAST::FlottantAST(){}
        
        //getters
        float FlottantAST::getValue() const {
     		return value;
     	}
        
        //setters
        void FlottantAST::setValue(float value){
     		value=value;
     	}

        //desctructeur
        FlottantAST::~FlottantAST(){}
          
          /****************************************************************************************************************************/
         /****************************************** CharAST *************************************************************************/
        /****************************************************************************************************************************/ 
    	//constructeurs
    	CharAST::CharAST(int type, bool computed, bool compute, char value ): Primitif(type, computed, compute){
    		value=value;
    	}

        CharAST::CharAST(const CharAST& ca): Primitif(ca.getTypeAST(), ca.isComputed(), ca.canCompute()){
            value=ca.value;
        }
    	CharAST::CharAST(){}
        
        //getters
        char CharAST::getValue() const {
     		return value;
     	}
        
        //setters
        void CharAST::setValue(char value){
     		value=value;
     	}

        //desctructeur
        CharAST::~CharAST(){}

/**************************** Fin partie droite *********************************************/



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


