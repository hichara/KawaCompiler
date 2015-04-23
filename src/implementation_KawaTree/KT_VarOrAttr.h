/**
 * Project Untitled
 */


#ifndef _KT_VARORATTR_H
#define _KT_VARORATTR_H



#include <stdio.h>
#include <string>
#include <vector>


#include "llvm/IR/Module.h"
class IRCompiler;


using namespace std;

class KT_VarOrAttr {
public:
	KT_VarOrAttr();

	llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_VARORATTR_H