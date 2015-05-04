/**
 * Project Untitled
 */


#ifndef _KT_BLOCKSTATEMENT_H
#define _KT_BLOCKSTATEMENT_H

#include "KT_Statement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_BlockStatement: public KT_Statement {
public:

	KT_BlockStatement();
  virtual ~KT_BlockStatement();
    /**
     * @param StatementVisitor
     */
		void accept(SemanticVisitor* visitor);
    virtual void toString();

    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_BLOCKSTATEMENT_H
