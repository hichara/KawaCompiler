#include <iostream>
#include "SemanticVisitor.h"

class CheckAffectationStatementType:public SemanticVisitor{public:
	int visited = false;
	
	void visitAffecation(KT_Statement* statement){
		visited = true;
	}

	bool isVisited(){
		return visited;
	}
}