#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckCallMethodStatementType:public SemanticVisitor{public:
	void visitCallMethod(KT_Statement* statement){
		visited = true;
	}
};