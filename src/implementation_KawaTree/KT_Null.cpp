/**
 * Project Untitled
 */


#include "KT_Null.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"

/**
 * KT_Null implementation
 */
KT_Null::KT_Null() {}




#include "../BackEnd/IRCompiler/IRCompiler.h"

llvm::Value* KT_Null::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileNULL(this);	
}
