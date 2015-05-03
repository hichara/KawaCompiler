/**
 * Project Untitled
 */


#ifndef _KT_NULL_H
#define _KT_NULL_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_Null: public KT_FactFinal {
public: 
	KT_Null();
 	
 	llvm::Value* acceptIRCompiler(IRCompiler *compiler);   
};

#endif //_KT_NULL_H