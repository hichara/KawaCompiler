#ifndef __CheckAffectationStatementType__
#define __CheckAffectationStatementType__

#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckAffectationStatementType:public SemanticVisitor{public:
	void visitAffectation(KT_Statement* statement){
		visited = true;
		cout << "affectation visitor visited" << endl;
	}
};

#endif /* __CheckAffectationStatementType__ */