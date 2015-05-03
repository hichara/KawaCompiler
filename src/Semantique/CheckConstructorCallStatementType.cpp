#ifndef __CheckConstructorCallStatementType__
#define __CheckConstructorCallStatementType__

#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckConstructorCallStatementType:public SemanticVisitor{public:
	void visitConstructorCall(KT_Statement* statement){
		visited = true;
		cout << "constructor call visitor visited" << endl;
	}
};

#endif /* __CheckConstructorCallStatementType__ */
