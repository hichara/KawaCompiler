/**
 * Project kawa
 */


#ifndef _KT_BLOCK_H
#define _KT_BLOCK_H

#include <iostream>
#include "KT_Statement.h"
#include "KT_BlockStatement.h"
#include <stdio.h>
#include <string>
#include <vector>

#include "llvm/IR/Module.h"
class IRCompiler;

using namespace std;


class KT_Block: public KT_BlockStatement {
public:
    KT_Block();
    ~KT_Block();

    vector<KT_Statement*> getStatements();
	virtual void toString();
	void setStatements(vector<KT_Statement*> var);

	virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private:
    vector<KT_Statement*> statements;
};

#endif //_KT_BLOCK_H
