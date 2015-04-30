#ifndef __CheckVariableStatementType__
#define __CheckVariableStatementType__

#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckVariableStatementType:public SemanticVisitor{public:
	void visitVariable(KT_Statement* statement){
		visited = true;
		cout << "variable visitor visited" << endl;
	}
};

#endif /* __CheckVariableStatementType__ */
