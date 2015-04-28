
/**
 * Project Untitled
 */


#include "KT_Addition.h"
#include <stdio.h>
#include <string>
#include <vector>


#include "../BackEnd/IRCompiler/IRCompiler.h"

using namespace std;

/**
 * KT_Addition implementation
 */

 KT_Addition::KT_Addition(){}





llvm::Value* KT_Addition::acceptIRCompiler(IRCompiler *compiler) {
	return compiler->compileAddition(this);
}
