#include <iostream>
#include "SemanticVisitor.h"

class CheckDeclarationStatementType:public SemanticVisitor{public:
	int visited = false;
	
	void visitDeclaration(KT_Statement* statement){
		visited = true;
	}

	bool isVisited(){
		return visited;
	}
}