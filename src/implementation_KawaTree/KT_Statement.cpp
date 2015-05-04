/**
 * Project Untitled
 */


#include "KT_Statement.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_Statement implementation
 */

KT_Statement::KT_Statement(){}


void KT_Statement::toString() {
	cout << "toString for KT_Statement";
}

void KT_Statement::whoAmI() {
  cout << "I am : ";
  cout <<  typeid(*this).name();
  cout << "\n";
}


void KT_Statement::accept(SemanticVisitor* visitor){
	cout << "kt statement visited : " << endl;
	this->toString();
}

llvm::Value* KT_Statement::acceptIRCompiler(IRCompiler *compiler) {

  cout << "Erreur acceptIRCompiler in ";
  cout <<  typeid(*this).name();
  cout << " shoud not have been called ";
  cout << "acceptIRCompiler is not redefined or handled by the IRCompiler\n";	

  exit(-1);    
  return NULL;
}
