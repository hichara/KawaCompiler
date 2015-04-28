/**
 * Project kawa
 */


class KT_Addition;

#ifndef _KT_ADDITION_H
#define _KT_ADDITION_H

#include "KT_ArithmeticExpression.h"
#include <stdio.h>
#include <string>
#include <vector>

#include "llvm/IR/Module.h"
class IRCompiler;

using namespace std;


class KT_Addition: public KT_ArithmeticExpression {
public : 
	KT_Addition();

	llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_ADDITION_H