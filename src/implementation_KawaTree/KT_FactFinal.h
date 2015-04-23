/**
 * Project kawa
 */


#ifndef _KT_FACTFINAL_H
#define _KT_FACTFINAL_H

#include "../BackEnd/IRCompiler/IRCompiler.h"
#include "llvm/IR/Module.h"

#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>

class IRCompiler;


using namespace std;


class KT_FactFinal: public KT_Expression {
public:
	KT_FactFinal();

	/*virtual void toString() =0;*/

	llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_FACTFINAL_H