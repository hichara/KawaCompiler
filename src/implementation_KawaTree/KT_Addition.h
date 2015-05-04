/**
 * Project kawa
 */


#ifndef _KT_ADDITION_H
#define _KT_ADDITION_H

#include "KT_ArithmeticExpression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_Addition: public KT_ArithmeticExpression {
public : 
	KT_Addition ();

    llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_ADDITION_H