#ifndef __SEMANTIC_VISITOR__H
#define __SEMANTIC_VISITOR__H

class SemanticVisitor{public:
	int visited = false;
	
	bool isVisited(){
		return visited;
	}
};

#endif