/**
 * Project Untitled
 */


#include "KT_VarOrAttr.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"

/**
 * KT_VarOrAttr implementation
 */

KT_VarOrAttr::KT_VarOrAttr(){}



llvm::Value* KT_VarOrAttr::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileVarOrAttr(this);	
}
