/**
 * Project kawa
 */


#ifndef _KT_FACTFINAL_H
#define _KT_FACTFINAL_H

#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_FactFinal: public KT_Expression {
public:
	KT_FactFinal();

	/*virtual void toString() =0;*/

    /**
    * Methode accept pour le IRCompiler
    */
    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_FACTFINAL_H
