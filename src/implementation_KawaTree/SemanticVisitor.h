#ifndef __SEMANTIC_VISITOR__H
#define __SEMANTIC_VISITOR__H

class KT_Statement;

class SemanticVisitor{public:
	int visited = false;

	bool isVisited(){
		return visited;
	}

	virtual void visitAffectation(KT_Statement* s){};
	virtual void visitCallMethod(KT_Statement* s){};
	virtual void visitDeclaration(KT_Statement* s){};
	virtual void visitVariable(KT_Statement* s){};
};

#endif
