#ifndef __CheckDeclarationStatementType__
#define __CheckDeclarationStatementType__

#include <iostream>
#include "../implementation_KawaTree/SemanticVisitor.h"
#include "../implementation_KawaTree/KT_Statement.h"

class CheckDeclarationStatementType:public SemanticVisitor{public:
	void visitDeclaration(KT_Statement* statement){
		visited = true;
	}
};

#endif /* __CheckDeclarationStatementType__ */