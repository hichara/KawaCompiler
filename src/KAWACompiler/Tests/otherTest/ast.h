#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

typedef std::string String;

typedef std::vector<InterfaceAST> InterfaceList ;
typedef std::vector<MethodeAST> MethodeList;
typedef std::vector<PrototypeAST> PrototypeList;
typedef std::vector<ConstructorAST> ConstructorList;
//typedef std::vector<InstructionAST> BlockList;
typedef std::vector<ExprAST*> ExprList;
typedef std::vector<VariableAST*> VariableList;
typedef std::vector<AttributAST*> AttributList 

class AST{
    private:
        const int type;
        const bool computed;
        const bool compute;
    public:
        virtual int getTypeAST() const{}
        virtual bool isComputed() const {}
        virtual bool canCompute() const{}
};

class ConcreteClassAST : public AST{
    private:
        const String& name;
        const int visibility;
        const bool final;
        ConcreteClasseAST parent;
        InterfaceList interfaces;
        AttributList attributs;
        ConstructorList constructors;
        MethodeList methodes;
    public:
        // constructeurs
        ConcreteClasseAST(int type, bool computed, bool compute, String& name, int visibility, bool final, ConcreteClasseAST& parent, InterfaceList& interfaces, AttributList& attributs, ConstructorList& constructors, MethodeList& methodes ) : type(type), computed(computed), compute(compute){
        	name(name);
        	visibility(visibility);
        	final(final); 
        	parent(parent); 
        	interfaces(interfaces); 
        	attributs(attributs); 
        	constructors(constructors);
        	methodes(methodes);
        }

        ConcreteClasseAST(){
        	perent(NULL);
        	interfaces(NULL); 
        	attributs(NULL); 
        	constructors(NULL); 
        	methodes(NULL);
        } 

        //getters
        String getName() const {
            return name;
        }

        int getVisibility() const {
            return visibility;
        }

        ConcreteClasseAST getParent() const {
            return parent;
        }

        InterfaceList getIntefaces() const {
            return interfaces;
        }

        AttributList getAttributs() const {
            return attributs;
        }

        ConstructorList getConstructors() const {
            return constructors;
        }

        PrototypeList getMethodes() const {
            return methodes;
        }

        //Setters
        void setParent(ConcreteClassAST& parent){
            parent(parent);
        }

        void setIntefaces(InterfaceList& interfaces){
            interfaces(interfaces);
        }

        void setAttributs(AttributList& attributs){
            attributs(attributs);
        }

        void setConstructors(ConstructorList& constructors){
            constructors(constructors);
        }

        void setMethodes(MethodeList& methodes){
            return methodes(methodes);
        }

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

        //desctructeur
        ~ConcreteClassAST(){
            interfaces.clear();
            attributs.clear();
            constructors.clear();
            methodes.clear();
        }

};

class InterfaceAST : public AST{
    private:
        const String& name;
        const int visibility;
        InterfaceList interfacesParents;
        PrototypeList prototypes;

    public:
        // constructeurs
        InterfaceAST(int type, bool computed, bool compute, String& name, int visibility, InterfaceList& interfacesParents, PrototypeList& prototypes ) : type(type), computed(computed), compute(compute){
        	name(name);
        	visibility(visibility);
        	interfacesParents(interfacesParents);
        	prototypes(prototypes);
        }

        InterfaceAST(){
        interfacesParents(NULL);   
        prototypes(NULL){}	
        }

        //getters
        String getName() const {
            return name;
        }

        String getVisibility() const {
            return visibility;
        }

        InterfaceParents getIntefacesParents() const {
            return interfacesParents;
        }

        PrototypeList getPrototypes() const {
            return prototypes;
        }

        //Setters
        void setIntefaces(InterfaceList& interfacesParents){
            interfacesParents(interfacesParents);
        }

        void setPrototypes(PrototypeList& prototypes){
            prototypes(prototypes);
        }

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

        //desctructeur
        ~InterfaceAST(){
            interfaces.clear();
            variables.clear();
            prototypes.clear();
        }
};

class AbstractClasseAST : public ConcreteClasseAST, public InterfaceAST{
    
};

class ExprAST : public AST{ 
     
};

class ExprUnaireAST : public ExprAST{ 
    private:
        ExprAST* operande;
        int Operator;
    public:
        //constructeurs 
        ExprUnaireAST(int type, bool computed, bool compute, ExprAST* operande, int Operator) : type(type), computed(computed), compute(compute){
        	operande(perande);
        	Operator(Operator);
        }

        ExprUnaireAST(){}
        
        //getters
        ExprAST* getOperande() const {
            return operande;
        }

        int getOperator() const {
            return Operator;
        }

        //setters 
        void setOperande(ExprAST* operande){
            operande(operande);
        }

        void setOperator(int Operator){
            Operator=Operator;
        }

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

        //desctructeur
        ~ExprUnaireAST(){
        	delete operande;
        }
};


class ExprBinaireAST : public ExprAST{ 
    private:
        ExprAST* leftOp;
        ExprAST* rightOp;
        int Operator;
    private:
        //constructeurs 
        ExprBinaireAST(int type, bool computed, bool compute, ExprAST* leftOp, ExprAST* rightOp, int Operator) : type(type), computed(computed), compute(compute){
        	leftOp(leftOp); 
        	rightOp(rightOp); 
        	Operator(Operator); 
        }

        ExprBinaireAST(){}
        
        //getters
        ExprAST* getLeftOp(){
            return leftOp;
        }

        ExprAST* getRightOp(){
            return rightOp;
        }

        int getOperator(){
            return Operator;
        }

        //setters 
        void setLeftOp(ExprAST* leftOp){
            leftOp(leftOp);
        }


        void setLOperande(ExprAST* rightOp){
            rightOp(rightOp);
        }

        void setOperator(int Operator){
            Operator(Operator);
        }

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

        //desctructeur
        ~ExprBinaireAST(){
        	delete leftOp;
        	delete rightOp;
        }
};

class InstanceObjet : public ExprAST{ 
   ;
        
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
};


class CallMethodeAST : public ExprAST{ 
    private:
        const String& methodName;
        ExprList args;
        VariableAST caller;
    public:
        //constructeurs
        CallMethodeAST(int type, bool computed, bool compute, String& methodName, ExpressionList args, VariableAST caller) : type(type), computed(computed), compute(compute){
        	methodName(methodName);
        	args(args); 
        	caller(caller);
        }
        
        CallMethodeAST(){
        	args(NULL);
        	caller(NULL);
        }

        //getters
        String getMethodeName() const {
            return methodName;
        }

        ExprList getArgs() const {
            return args; 
        }

        AST getCaller() const {
            return caller;
        }
        
        //setters 
        void setArgs(ExprList args){
            args(args);
        }

        void setCaller(VariableAST caller){
            caller(caller); 
        }

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

        //desctructeur
        ~CallMethodeAST(){
            args.clear();
        }
};

class VariableAST : public ExprAST{ 
    private:
        const String& typeVar;
        const String& name;
        ExprAST* assignmentExpr;

    public:
        //getters
    	String getTypeVar() const {
    		return typeVar;
    	}

    	String getName() const {
    		return name;
    	}

    	ExprAST* getAssignmentExpr() const {
    		return assignmentExpr; 
    	}
        //setters 
    	ExprAST* setAssignmentExpr(){
    		assignmentExpr=(assignmentExpr); 
    	}

        //Les fonctions redéfinis de la classe mere
    	int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

        //desctructeur
        ~VariableAST(){
        	delete assignmentExpr;
        }
 
};

class Primitif : public ExprAST{ 
	public: 
		//constructeurs
        Primitif(int type, bool computed, bool compute) : type(type), computed(computed), compute(compute){}
        Primitif(){}

 		//Les fonctions redéfinis de la classe mere
    	int getTypeAST() const{
        	return type; 
        }

        bool isComputed() const {
        	return computed;
        }
        
        bool canCompute() const{
        	return compute;
        }

 		//desctructeur
        ~Primitif(){}
};

class StringAST : public Primitif{ 
    private:
        String value;
    
    public:
    	//construceurs
    	StringAST( String& value ) {
         value(value);
     	}

     	StringAST(){}
        
        //getters
     	String getValue() const {
     		return value;
     	}
        
        //setters
        void setValue(String& value){
     		value(value);
     	}

        //desctructeur
        ~StringAST(){}
};

class BooleanAST : public Primitif{ 
    private:
        bool value;
 
    public:
    	//constructeurs
    	BooleanAST( bool value ) {
    		value(value);
    	}

    	BooleanAST(){}
        
        //getters
        bool getValue() const {
     		return value;
     	}
        
        //setters
        void setValue(bool value){
     		value(value);
     	}

        //desctructeur
        ~BooleanAST(){}
};

class EntierAST : public Primitif{ 
    private:
        int value;
 
    public:
    	//constructeurs
    	EntierAST( int value ) {
    		value(value);
    	}

    	EntierAST(){}
        
        //getters
        int getValue() const {
     		return value;
     	}
        
        //setters
        void setValue(int value){
     		value(value);
     	}

        //desctructeur
        ~EntierAST(){}
};


class FlottantAST : public Primitif{ 
    private:
        float value;
 
    public:
    	//constructeurs
    	FlottantAST( float value ) {
    		value(value);
    	}

    	FlottantAST(){}
        
        //getters
        float getValue() const {
     		return value;
     	}
        
        //setters
        void setValue(float value){
     		value(value);
     	}

        //desctructeur
        ~FlottantAST(){}
};

class CharAST : public Primitif{ 
    private:
        char value;
 
    public:
    	//constructeurs
    	CharAST( char value ) {
    		value(value);
    	}

    	CharAST(){}
        
        //getters
        char getValue() const {
     		return value;
     	}
        
        //setters
        void setValue(char value){
     		value(value);
     	}

        //desctructeur
        ~CharAST(){}
};

