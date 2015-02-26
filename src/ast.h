#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

typedef std::string String;

typedef std::vector<InterfaceAST> InterfaceParents ;
typedef std::vector<MethodeAST> MethodeList;
typedef std::vector<PrototypeAST> PrototypeList;
typedef std::vector<ConstructorAST> ConstructorList;
//typedef std::vector<InstructionAST> BlockList;
typedef std::vector<ExprAST*> ExpressionList;
typedef std::vector<VariableAST*> VariableList;

class AST{
    private:
        int type;
    public:
        virtual void setTypeAST( int newType = 0 ){
        }
        virtual int getTypeAST(){
            return this.type;
        }
};

class ClasseAST : public AST{
    private:
        const String& name;
        const String& portee;
        ClasseAST parentClasse;
        InterfaceParents interfaces;
        VariableList variables;
        ConstructorList constructors;
        PrototypeList prototypes;
    public:
        // constructeurs
        ClasseAST(String& name, String& portee, ClasseAST& parentClasse, InterfaceParents& interfaces, VariableList& variables, ConstructorList& constructors, PrototypeList& prototypes ) :name(name), portee(portee), parentClasse(parentClasse), interfaces(interfaces), variables(variables), constructors(constructors), prototypes(prototypes){}
        ClasseAST():perentClasse(new perentClasse()), interfaces(NULL), variables(NULL), constructors(NULL), prototypes(NULL){} 
        //getters
        String getName() const {
            return name;
        }

        String getPortee() const {
            return portee;
        }

        ClasseAST getParentClasse() const {
            return parentClasse;
        }

        InterfaceParents getIntefaces() const {
            return interfaces;
        }

        VariableList getVariables() const {
            return variables;
        }

        ConstructorList getConstructors() const {
            return constructors;
        }

        PrototypeList getPrototypes() const {
            return prototypes;
        }

        //Setters
        void setParentClasse(ClasseAST& parparentClasse){
            parentClasse=parparentClasse;
        }

        void setIntefaces(InterfaceParents& parinterfaces){
            interfaces=parinterfaces;
        }

        void setVariables(VariableList& parvariables){
            variables=parvariables;
        }

        void setConstructors(ConstructorList& parconstructors){
            constructors=parconstructors;
        }

        void setPrototypes(PrototypeList& parprototypes){
            return prototypes=parprototypes;
        }

        //Les fonctions redéfinis de la classe mere

        //desctructeur
        ~ClasseAST(){
            interfaces.clear();
            variables.clear();
            constructors.clear();
            prototypes.clear();
        }

};

class InterfaceAST : public AST{
    private:
        const String& name;
        const String& portee;
        InterfaceParents interfaces;
        VariableList variables;
        PrototypeList prototypes;
    public:
        // constructeurs
        InterfaceAST(String& name, String& portee, InterfaceParents& interfaces, VariableList& variables, PrototypeList& prototypes ) :name(name), portee(portee), interfaces(interfaces), variables(variables), prototypes(prototypes){}
        InterfaceAST(): interfaces(NULL), variables(NULL),  prototypes(NULL){} 
        //getters
        String getName() const {
            return name;
        }

        String getPortee() const {
            return portee;
        }

        InterfaceParents getIntefaces() const {
            return interfaces;
        }

        VariableList getVariables() const {
            return variables;
        }

        PrototypeList getPrototypes() const {
            return prototypes;
        }

        //Setters
        void setIntefaces(InterfaceParents& parinterfaces){
            interfaces=parinterfaces;
        }

        void setVariables(VariableList& parvariables){
            variables=parvariables;
        }

        void setPrototypes(PrototypeList& parprototypes){
            return prototypes=parprototypes;
        }

        //Les fonctions redéfinis de la classe mere

        //desctructeur
        ~InterfaceAST(){
            interfaces.clear();
            variables.clear();
            prototypes.clear();
        }
};

class AbstractClasseAST : public ClasseAST{
    
};

class ExprAST : public AST{ 
     
};

class ExprUnaireAST : public ExprAST{ 
    private:
        ExprAST* rOperande;
        int operateur;
    public:
        //constructeurs 
        ExprUnaireAST(ExprAST* rOperande, int operateur) : rOperande(rOperande), operateur(operateur) {}
        ExprUnaireAST(){}
        //getters
        ExprAST* getROperande(){
            return rOperande;
        }

        int getOperateur(){
            return operateur;
        }
        //setters 
        void setROperande(ExprAST* parROperande){
            rOperande=parROperande;
        }

        void setOperateur(int parOperateur){
            operateur=parOperateur;
        }
        //Les fonctions redéfinis de la classe mere

        //desctructeur
        ~ExprUnaireAST(){

        }
};


class ExprBinaireAST : public ExprAST{ 
    private:
        ExprAST* rOperande;
        ExprAST* lOperande;
        int op;
    private:
        //constructeurs 
        ExprBinaireAST(ExprAST* rOperande, ExprAST* lOperande, int operateur) : rOperande(rOperande), lOperande(lOperande), operateur(operateur) {}
        ExprBinaireAST(){}
        //getters
        ExprAST* getROperande(){
            return rOperande;
        }

        ExprAST* getLOperande(){
            return lOperande;
        }

        int getOperateur(){
            return operateur;
        }

        //setters 
        void setROperande(ExprAST* parROperande){
            rOperande=parROperande;
        }


        void setLOperande(ExprAST* parLOperande){
            lOperande=parLOperande;
        }

        void setOperateur(int parOperateur){
            operateur=parOperateur;
        }

        //Les fonctions redéfinis de la classe mere

        //desctructeur
        ~ExprBinaireAST(){

        }
};

class InstanceObjet : public ExprAST{ 
    public:
        
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
};


class CallMethodeAST : public ExprAST{ 
    private:
        const String& methodName;
        ExpressionList arguments;
        AST caller; // !!!
    public:
        //constructeurs
        CallMethodeAST(String& methodName, ExpressionList arguments, AST caller) : methodName(methodName), arguments(arguments), caller(caller){}
        CallMethodeAST() : arguments(NULL){}
        //getters
        String getMethodeName(){
            return methodName;
        }

        ExpressionList getArguments(){
            return arguments; 
        }

        AST getCaller(){
            return caller;
        }
        //setters 

        void setArguments(ExpressionList parArguments){
            arguments = parArguments;
        }

        void setCaller(AST parCaller){
            caller=parCaller; 
        }
        //Les fonctions redéfinis de la classe mere

        //desctructeur
        ~CallMethodeAST(){
            arguments.clear();
        }
};

class VariableAST : public ExprAST{ 
    private:
            const String& type;
            const String& name;
            ExprAST* assignmentExpression;
    public:
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
 
};

class Constante : public VariableAST{ 
 
};

class Boolean : public Constante{ 
    private:
        bool value;
        Boolean( bool value ) : value(value){}
    public:
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
};

class Entier : public Constante{ 
    private:
        int value;
        Entier( int value ) : value(value){}
    public:
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
};

class Flotant : public Constante{ 
    private:
        float value;
        Flotant( float value ) : value(value){}
    public:
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
};

class Charactaire : public Constante{ 
    private:
        char value;
        Charactaire( char value ) : value(value){}
    public:
        //getters

        //setters 

        //Les fonctions redéfinis de la classe mere

        //desctructeur
};
