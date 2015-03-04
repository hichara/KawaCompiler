#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

enum TYPE{
	CLASS,
    ABSTRACTCLASS,
    INTERFACE,
    EXPRESSION,
    EXPRESSIONUNAIRE,
    EXPRESSIONBINAIRE,
    CALLMETHODE,
    VARIABLE,
    PRIMITIF,
    STRING,
    BOOLEAN,
    ENTIER,
    FLOAT,
    CHAR,
    NULLVAL
};

enum VISIBILITY{
    PUBLIC,
    PROTECTED,
    PRIVATE  
};

enum OPERATOR{
    TPLUS,      // +
    TMINUS,     // -             
    TMUL,       // *            
    TDIV,       // /            
    TMOD,       // %            
    TEQ,        // =             
    TPLUSEQ,    // +=        
    TMINUSEQ,   // -=       
    TMULEQ,     // *=         
    TDIVEQ,     // /=         
    TMODEQ,     // %=         
    TINC,       // ++           
    TDEC,       // --           
    TCEQ,       // ==           
    TCNE,       // !=           
    TCL,        // <             
    TCLE,       // <=           
    TCG,        // >             
    TCGE,       // >=            
    TOR,        // ||              
    TAND,       // &&             
    TNEG,       // !              
    TANDBIN,    // &           
    TANDBINEQ,  // &=        
    TORBIN,     // |            
    TORBINEQ,   // |=         
    TXORBIN,    // ^           
    TXORBINEQ,  // ^=        
    TDECAL,     // <<           
    TDECALEQ,   // <<=        
    TDECAR,     // >>           
    TDECAREQ,   // >>=        
    TDECALNS,   // >>>        
    TDECALNSEQ  // >>>=      
};

typedef string String;

class AST{
    private:
        int type;
        bool computed;
        bool compute;
    public:
        // constructeurs
        AST(int type, bool computed, bool compute);
        AST(const AST& a);
        AST();

        //methodes
        virtual int getTypeAST() const{
            return type; 
        }

        virtual bool isComputed() const {
            return computed;
        }
        
        virtual bool canCompute() const{
            return compute;
        }

        //desctructeur
        ~AST();
};

class ConstructorAST : public AST{
    //Les fonctions redéfinis de la classe mere
    int getTypeAST() const;
    bool isComputed() const;
    bool canCompute() const;
};

typedef vector<AST*> MethodeList;
typedef vector<AST*> PrototypeList;
typedef vector<AST*> ConstructorList;
//typedef std::vector<InstructionAST> BlockList;
typedef vector<AST*> AttributList ;


class InterfaceAST : public AST{
    private:
        String* name;
        int visibility;
        vector<InterfaceAST*> interfacesParents;
        PrototypeList prototypes;

    public:
        // constructeurs
        InterfaceAST(int type, bool computed, bool compute, String* name, int visibility, vector<InterfaceAST*> interfacesParents, PrototypeList prototypes );
        InterfaceAST(const InterfaceAST& interface);
        InterfaceAST();

        //getters
        String* getName() const;
        int getVisibility() const;
        vector<InterfaceAST*> getInterfacesParents() const;
        PrototypeList getPrototypes() const;

        //Setters
        void setInterfaces(vector<InterfaceAST*>& interfacesParents);
        void setPrototypes(PrototypeList& prototypes);

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

        //desctructeur
        ~InterfaceAST();
};
typedef vector<InterfaceAST*> InterfaceList ;

class ConcreteClassAST : public AST{
    private:
        String* name;
        int visibility;
        bool final;
        ConcreteClassAST* parent;
        InterfaceList interfaces;
        AttributList attributs;
        ConstructorList constructors;
        MethodeList methodes;
    public:
        // constructeurs
        ConcreteClassAST(int type, bool computed, bool compute, String* name, int visibility, bool final, ConcreteClassAST* parent, InterfaceList interfaces, AttributList attributs, ConstructorList constructors, MethodeList methodes ) ;
        ConcreteClassAST(const ConcreteClassAST& c);
        ConcreteClassAST();

        //getters
        String* getName() const ;
        int getVisibility() const ;
        bool isFinal() const ; 
        ConcreteClassAST* getParent() const ;
        InterfaceList getInterfaces() const ;
        AttributList getAttributs() const ;
        ConstructorList getConstructors() const ;
        PrototypeList getMethodes() const ;

        //Setters
        void setParent(ConcreteClassAST* parent);
        void setInterfaces(InterfaceList& interfaces);
        void setAttributs(AttributList& attributs);
        void setConstructors(ConstructorList& constructors);
        void setMethodes(MethodeList& methodes);

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const ;
        bool canCompute() const;

        //desctructeur
        ~ConcreteClassAST();

};

class AbstractClassAST : public ConcreteClassAST{
    private:
        PrototypeList prototypes;
    public:
        // constructeurs
        AbstractClassAST(int type, bool computed, bool compute, String* name, int visibility, bool final, ConcreteClassAST* parent, InterfaceList interfaces, AttributList attributs, ConstructorList constructors, MethodeList methodes, PrototypeList prototypes) ;
        AbstractClassAST(const AbstractClassAST& ac);
        AbstractClassAST();

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const ;
        bool canCompute() const;

        //desctructeur
        ~AbstractClassAST();
};

class ExprAST : public AST{ 
    public:
        // constructeurs
        ExprAST(int type, bool computed, bool compute) ;
        ExprAST(const ExprAST& exp);
        ExprAST();

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const ;
        bool canCompute() const;

        //desctructeur
        ~ExprAST();       
};
typedef vector<ExprAST*> ExprList;

class ExprUnaireAST : public ExprAST{ 
    private:
        ExprAST* operande;
        int Operator;
    public:
        //constructeurs 
        ExprUnaireAST(int type, bool computed, bool compute, ExprAST* operande, int Operator);
        ExprUnaireAST(const ExprUnaireAST& exp);
        ExprUnaireAST();
        
        //getters
        ExprAST* getOperande() const ;
        int getOperator() const ;

        //setters 
        void setOperande(ExprAST* operande);
        void setOperator(int Operator);

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

        //desctructeur
        ~ExprUnaireAST();
};

class ExprBinaireAST : public ExprAST{ 
    private:
        ExprAST* leftOp;
        ExprAST* rightOp;
        int Operator;
    private:
        //constructeurs 
        ExprBinaireAST(int type, bool computed, bool compute, ExprAST* leftOp, ExprAST* rightOp, int Operator) ;
        ExprBinaireAST(const ExprBinaireAST& exp);
        ExprBinaireAST();
        
        //getters
        ExprAST* getLeftOp();
        ExprAST* getRightOp();
        int getOperator();

        //setters 
        void setLeftOp(ExprAST* leftOp);
        void setLOperande(ExprAST* rightOp);
        void setOperator(int Operator);

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

        //desctructeur
        ~ExprBinaireAST();
};

class VariableAST : public ExprAST{ 
    private:
        String* typeVar;
        String* name;
        ExprAST* assignmentExpr;

    public:
        //constructeurs
        VariableAST(int type, bool computed, bool compute, String* typeVar, String* name, ExprAST* assignmentExpr);
        VariableAST(const VariableAST& var);
        VariableAST();

        //getters
        String* getTypeVar() const;
        String* getName() const;
        ExprAST* getAssignmentExpr() const;

        //setters 
        void setAssignmentExpr(ExprAST* assignmentExpr);

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

        //desctructeur
        ~VariableAST();
 
};
typedef vector<VariableAST*> VariableList;


class InstanceObjetAST : public ExprAST{ 
    private:
        ConstructorAST* constructor;
        VariableList params;

    public:
        //constructeurs
        InstanceObjetAST(int type, bool computed, bool compute, ConstructorAST* constructor, VariableList params);
        InstanceObjetAST(const InstanceObjetAST& ia);
        InstanceObjetAST();
        
        //getters
        ConstructorAST* getConstructor() const;
        VariableList getParams() const;

        //setters 
        void setConstructor(ConstructorAST* constructor);
        void setParams(VariableList params);
        
        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

        //desctructeur
        ~InstanceObjetAST();
};

class CallMethodeAST : public ExprAST{ 
    private:
        String* methodName;
        ExprList args;
        VariableAST caller;
    public:
        //constructeurs
        CallMethodeAST(int type, bool computed, bool compute, String* methodName, ExprList args, VariableAST caller);
        CallMethodeAST(const CallMethodeAST& cm);
        CallMethodeAST();

        //getters
        String* getMethodeName() const ;
        ExprList getArgs() const;
        VariableAST getCaller() const;
        
        //setters 
        void setArgs(ExprList args);
        void setCaller(VariableAST caller);

        //Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const ;
        bool canCompute() const;

        //desctructeur
        ~CallMethodeAST();
};

class Primitif : public ExprAST{ 
	public: 
		//constructeurs
        Primitif(int type, bool computed, bool compute);
        Primitif(const Primitif& pr);
        Primitif();

 		//Les fonctions redéfinis de la classe mere
    	int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

 		//desctructeur
        ~Primitif();
};


class StringAST : public Primitif{ 
    private:
        String* value;
    
    public:
    	//construceurs
    	StringAST(int type, bool computed, bool compute, String* value );
        StringAST(const StringAST& sa);
     	StringAST();
        
        //getters
     	String* getValue() const;
        
        //setters
        void setValue(String* value);

        //desctructeur
        ~StringAST();
};

class BooleanAST : public Primitif{ 
    private:
        bool value;
 
    public:
    	//constructeurs
    	BooleanAST(int type, bool computed, bool compute, bool value );
        BooleanAST(const BooleanAST& ba);
    	BooleanAST();
        
        //getters
        bool getValue() const;
        
        //setters
        void setValue(bool value);

        //desctructeur
        ~BooleanAST();
};

class EntierAST : public Primitif{ 
    private:
        int value;
 
    public:
    	//constructeurs
    	EntierAST(int type, bool computed, bool compute, int value );
        EntierAST(const EntierAST& ea);
    	EntierAST();
        
        //getters
        int getValue() const;
        
        //setters
        void setValue(int value);

        //desctructeur
        ~EntierAST();
};


class FlottantAST : public Primitif{ 
    private:
        float value;
 
    public:
    	//constructeurs
    	FlottantAST(int type, bool computed, bool compute, float value );
        FlottantAST(const FlottantAST& fa);
    	FlottantAST();
        
        //getters
        float getValue() const;
        
        //setters
        void setValue(float value);

        //desctructeur
        ~FlottantAST();
};

class CharAST : public Primitif{ 
    private:
        char value;
 
    public:
    	//constructeurs
    	CharAST(int type, bool computed, bool compute, char value );
        CharAST(const CharAST& ca);
    	CharAST();
        
        //getters
        char getValue() const;
        
        //setters
        void setValue(char value);

        //desctructeur
        ~CharAST();
};

