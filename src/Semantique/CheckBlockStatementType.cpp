#ifndef __CheckBlockStatementType__
#define __CheckBlockStatementType__

#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckBlockStatementType:public SemanticVisitor{public:
	void visitBlockStatement(KT_Statement* statement){
		visited = true;
		cout << "BlockStament visitor visited" << endl;
	}
};

#endif /* __CheckBlockStatementType__ */
