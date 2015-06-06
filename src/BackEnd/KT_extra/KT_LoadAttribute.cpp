#include "KT_LoadAttribute.h"



KT_Expression* KT_LoadAttribute::getCaller() {
	return caller;
}

void KT_LoadAttribute::setCaller(KT_Expression *c) {
	caller = c;
}

string KT_LoadAttribute::getAttName() {
	return attName;
}

void KT_LoadAttribute::setAttName(string name) {
	attName = name;
}

llvm::Value* KT_LoadAttribute::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileLoadAttribute(this);	
}

int KT_LoadAttribute::getIndex() {
	return index;
}

void KT_LoadAttribute::setIndex(int i) {
	index = i;
}

bool KT_LoadAttribute::isStatic() {
	return isstatic;
}

void KT_LoadAttribute::setIsStatic(bool b) {
	isstatic = b;
}
