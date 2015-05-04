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
  cout << "Erreur acceptIRCompiler in ";
  cout <<  typeid(*this).name();
  cout << " shoud not have been called ";
  cout << "acceptIRCompiler is not redefined or handled by the IRCompiler\n";	

  exit(-1);

  return compiler->compileVarOrAttr(this);	
}
