#include <iostream>
#include "SemanticVisitor.h"

class CheckCallMethodStatementType:public SemanticVisitor{public:
	int visited = false;
	
	void visitCallMethod(KT_Statement* statement){
		visited = true;
	}

	bool isVisited(){
		return visited;
	}
}