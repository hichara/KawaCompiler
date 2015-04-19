#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckAffectationStatementType:public SemanticVisitor{public:
	void visitAffecation(KT_Statement* statement){
		visited = true;
	}
};