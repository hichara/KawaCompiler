//============================================================================
// Name        : AST.h
// Author      : kheireddine
// Version     : 0.1
// Description : Fichier contenant les déclarations de toutes les classes à implémenter (diagramme de classe partie gauche)
//============================================================================



#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
typedef std::string String;

/*
typedef std::vector<InterfaceAST> InterfaceList ;
typedef std::vector<MethodeAST> MethodeList;
typedef std::vector<PrototypeAST> PrototypeList;
typedef std::vector<ConstructorAST> ConstructorList;
//typedef std::vector<InstructionAST> BlockList;
typedef std::vector<ExprAST*> ExprList;
typedef std::vector<AttributAST*> AttributList;*/



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
/*
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
*/

class AttributAST : public AST{
    private:
         String* name;
         int visibility;//il faudra se mettre d'accord sur une codification
         bool Final;
		 bool Static;
		 bool Value;
		//VariableAST ???

    public:
        // constructeurs
	AttributAST(int type, bool computed, bool compute,String* name, int visibility, bool Final,bool Static,bool Value);
	AttributAST(String* name, int visibility, bool Final,bool Static,bool Value);
	AttributAST();
	
	//getters
	String* getName() const;

	int getVisibility() const;
	
	bool isFinal() const;
	
	bool isStatic() const;

	bool isValue() const ;

	//setters

	//Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

	//destructeur
	~AttributAST();

};



 /*********************** Partie juste pour ne pas avoir des erreur de compliation ***********************/
	/*************** Redandances des classes *************************/
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


typedef std::vector<VariableAST*> VariableList;
class PrototypeAST : public AST{
    private:
	
		String* name;
		int visibility;
		String* returnType;
		VariableList args;
	
    public:
        // constructeurs

	PrototypeAST(int type, bool computed, bool compute,String* name, int visibility, String* returnType,VariableList args);
	
	PrototypeAST(String* name, int visibility, String* returnType,VariableList args);	

	PrototypeAST();

	//getters
	
	 String* getName() const;

     int getVisibility() const;

	 String* getReturnType() const;

	VariableList getArgs();	


	//setters
	void setArgs(VariableList args);

	//Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

	//destructeur
	~PrototypeAST();

};

class InstructionAST : public AST{ 

private:
	AST* BlockParentAST;

public:
	// constructeurs
	InstructionAST(int type, bool computed, bool compute,AST* BlockParentAST);
	InstructionAST(int type, bool computed, bool compute);
	InstructionAST(AST* BlockParentAST);

	InstructionAST();

	//getters
	AST* getBlockParentAST ();

	//setters 
	void setBlockParentAST (AST* BlockParentAST);

	//Les fonctions redéfinis de la classe mere
    int getTypeAST() const;
    bool isComputed() const;
    bool canCompute() const;

     //destructeur
	~InstructionAST();
};

class BlockInstructionAST : public InstructionAST{
    private:
    	AST* parent;
    	vector<InstructionAST*> instructions;


     public:
    	// constructeurs
	BlockInstructionAST (AST* parent,vector<InstructionAST*> instructions);

	BlockInstructionAST ();


	//getters
	vector<InstructionAST*>  getInstructions () ;

	AST* getParent () ;

	//setters 
	void setParent (AST* parent);

	void setInstructions (vector<InstructionAST*> instructions);


	~BlockInstructionAST() ;
};

	
class MethodeAST : public AST{
    private:
	BlockInstructionAST* blockInstructions;
	PrototypeAST* prototypeAst;
    public:
        // constructeurs

	MethodeAST(int type, bool computed, bool compute,BlockInstructionAST* blockInstructions,PrototypeAST* prototypeAst);	
	
	MethodeAST(BlockInstructionAST* blockInstructions,PrototypeAST* prototypeAst);		
	
	MethodeAST();
	//getters
	
	 BlockInstructionAST* getBlockInstructions();

     PrototypeAST* getPrototypeAst() ;


	//setters
	void setBlockInstructions(BlockInstructionAST* blockInstructions);
	
	void setPrototypeAst(PrototypeAST* prototypeAst);

	//Les fonctions redéfinis de la classe mere
        int getTypeAST() const;
        bool isComputed() const;
        bool canCompute() const;

	//destructeur
	~MethodeAST();

};

class DeclarationAST : public InstructionAST{
    private:
    	String* typeDeclaration;
    	VariableAST* varAST;

    public:
    	// constructeurs
	DeclarationAST(String* typeDeclaration,VariableAST* varAST);

	DeclarationAST();

	//getters
	String* getTypeDeclaration ();

	VariableAST* getVarAST ();


	//setters 
	void setvarAST (VariableAST* varAST);

	void setTypeDeclaration (String* typeDeclaration);

	//destructeur
	~DeclarationAST() ;
};

class ConstructorAST : public AST{
    private:
    	bool Static;
    	int portee;
    	BlockInstructionAST* blockInstructions;
    	VariableList parametres;

	//Constructeurs
    ConstructorAST(int type, bool computed, bool compute,bool Static,int portee,BlockInstructionAST* blockInstructions,VariableList parametres);
	
	ConstructorAST(bool Static,int portee,BlockInstructionAST* blockInstructions,VariableList parametres);	

	ConstructorAST();

    //getters
	bool isStatic();
	int getPortee ();
	BlockInstructionAST* getBlockInstructions();
	VariableList getParametres() ;

	//setters 
	void setBlockInstructions (BlockInstructionAST* blockInstructions);

	void setPortee(int portee);

	void setStatic(bool Static);

	void setParameters(VariableList parametres);
    //Les fonctions redéfinis de la classe mere
    int getTypeAST() const;
    bool isComputed() const;
    bool canCompute() const;

	//destructeur
	~ConstructorAST() ;

};

class AffectationAST : public InstructionAST, public ExprAST{
    private:
    	VariableAST* varAst;
    	ExprAST* Value;

    public:
    	//Constructeurs
    	AffectationAST(int type, bool computed, bool compute,VariableAST* varAst,ExprAST* Value);
    	AffectationAST(VariableAST* varAst,ExprAST* Value);
    	AffectationAST();

    	//getters
    	VariableAST* getVarAST();
    	ExprAST* getValue();

    	//setters 

    	void setvarAST(VariableAST* varAst);
    	void setValue(ExprAST* Value);

    	 //Les fonctions redéfinis de la classe mere(AST)
	    int getTypeAST() const;
	    bool isComputed() const;
	    bool canCompute() const;

	    //destructeur
		~AffectationAST();

};


class BoucleForAST : public InstructionAST{
    private:
    	InstructionAST* IndexIteration;
    	ExprAST* condition;
    	AffectationAST* affectation;
    	BlockInstructionAST* blockInstructions;

    public:
    	//Constructeurs
    	BoucleForAST(int type, bool computed, bool compute,InstructionAST* IndexIteration,ExprAST* condition,AffectationAST* affectation,BlockInstructionAST* blockInstructions);
    	BoucleForAST(InstructionAST* IndexIteration,ExprAST* condition,AffectationAST* affectation,BlockInstructionAST* blockInstructions);
    	BoucleForAST();

    	//getters
    	InstructionAST* getIndexIteration();
    	ExprAST* getCondition();
    	AffectationAST* getAffectation();
    	BlockInstructionAST* getBlockInstructions();

    	//setters 

    	void setIndexIteration(InstructionAST* IndexIteration);
    	void setCondition(ExprAST* condition);
    	void setAffectation(AffectationAST* affectation);
    	void setBlockInstructions(BlockInstructionAST* blockInstructions);

    	 //Les fonctions redéfinis de la classe mere(AST)
	    int getTypeAST() const;
	    bool isComputed() const;
	    bool canCompute() const;

	    //destructeur
		~BoucleForAST();

};

class BoucleWhileAST : public InstructionAST{
    private:
    	ExprAST* condition;
    	BlockInstructionAST* blockInstructions;

    public:
    	//Constructeurs
    	BoucleWhileAST(int type, bool computed, bool compute,ExprAST* condition,BlockInstructionAST* blockInstructions);
    	BoucleWhileAST(ExprAST* condition,BlockInstructionAST* blockInstructions);
    	BoucleWhileAST();

    	//getters;
    	ExprAST* getCondition();
    	BlockInstructionAST* getBlockInstructions();

    	//setters on);
    	void setCondition(ExprAST* condition);
    	void setBlockInstructions(BlockInstructionAST* blockInstructions);

    	 //Les fonctions redéfinis de la classe mere(AST)
	    int getTypeAST() const;
	    bool isComputed() const;
	    bool canCompute() const;

	    //destructeur
		~BoucleWhileAST();

};


class ExpressionConditionnelleAST : public InstructionAST{
    private:
    	ExprAST* condition;
    	BlockInstructionAST* ifBlock;
    	BlockInstructionAST* nextCondition;

    public:
    	//Constructeurs
    	ExpressionConditionnelleAST(int type, bool computed, bool compute,ExprAST* condition,BlockInstructionAST* ifBlock,BlockInstructionAST* nextCondition);
    	ExpressionConditionnelleAST(ExprAST* condition,BlockInstructionAST* ifBlock,BlockInstructionAST* nextCondition);
    	ExpressionConditionnelleAST();

    	//getters;
    	ExprAST* getCondition();
    	BlockInstructionAST* getIfBlock();
    	BlockInstructionAST* getNextCondition();

    	//setters on);
    	void setCondition(ExprAST* condition);
    	void setIfBlock(BlockInstructionAST* ifBlock);
    	void setNextCondition(BlockInstructionAST* nextCondition);
    	
    	 //Les fonctions redéfinis de la classe mere(AST)
	    int getTypeAST() const;
	    bool isComputed() const;
	    bool canCompute() const;

	    //destructeur
		~ExpressionConditionnelleAST();

};









