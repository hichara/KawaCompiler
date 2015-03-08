#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "ast.h"
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
         /****************************************** ConstructorAST ******************************************************************/
        /****************************************************************************************************************************/
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
         /****************************************** InstanceObjectAST ****************************************************************/
        /****************************************************************************************************************************/
        //constructeurs
        InstanceObjectAST::InstanceObjectAST(int type, bool computed, bool compute, ConstructorAST* constructor, VariableList params): ExprAST(type, computed, compute){
            constructor=constructor;
            params=params;
        } 
        InstanceObjectAST::InstanceObjectAST(const InstanceObjectAST& ia):ExprAST(ia.getTypeAST(), ia.isComputed(), ia.canCompute()){
            constructor=ia.constructor;
            params=ia.params;
        }
        InstanceObjectAST::InstanceObjectAST(){}
        
        //getters
        ConstructorAST* InstanceObjectAST::getConstructor() const{
            return constructor;
        }

        VariableList InstanceObjectAST::getParams() const{
            return params;
        }

        //setters 
        void InstanceObjectAST::setConstructor(ConstructorAST* constructor){
            constructor=constructor;
        }
        void InstanceObjectAST::setParams(VariableList params){
            params=params;
        }
        
        //Les fonctions redéfinis de la classe mere
        int InstanceObjectAST::getTypeAST() const{
            return getTypeAST(); 
        }

        bool InstanceObjectAST::isComputed() const {
            return isComputed();
        }
        
        bool InstanceObjectAST::canCompute() const{
            return canCompute();
        }

        //desctructeur
        InstanceObjectAST::~InstanceObjectAST(){
            delete constructor;
            params.clear();
        }

          /****************************************************************************************************************************/
         /****************************************** CallMethodeAST ******************************************************************/
        /****************************************************************************************************************************/
        //constructeurs
        CallMethodeAST::CallMethodeAST(int type, bool computed, bool compute, String* methodName, ExprList args, VariableAST* caller) : ExprAST(type, computed, compute){
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

        VariableAST* CallMethodeAST::getCaller() const {
            return caller;
        }
        
        //setters 
        void CallMethodeAST::setArgs(ExprList args){
            args=args;
        }

        void CallMethodeAST::setCaller(VariableAST* caller){
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
            delete caller;
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