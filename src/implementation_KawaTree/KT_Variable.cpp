/**
 * Project Untitled
 */


#include "KT_Variable.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_Variable implementation
 */

KT_Variable::KT_Variable(){
	Final=false;
}

/**
 * @return vector<string *>
 */
vector<string*> KT_Variable::getName() {
    return name;
}

/**
 * @return KT_Expression*
 */
KT_Expression* KT_Variable::getValue() {
    return value;
}

/**
 * @return bool
 */
bool KT_Variable::isFinal() {
    return Final;
}

/**
 * @return KT_Type *
 */
KT_Type* KT_Variable::getType() {
    return type;
}

/**
 * @param string *
 */
void KT_Variable::setName(vector<string*> var) {
	this->name = var;
}

void KT_Variable::setFinal(bool var) {
	Final=var;
}

/**
 * @param KT_Type *
 */
void KT_Variable::setType(KT_Type* var) {
	type=var;
}

/**
 * @param KT_Expression*
 */
void KT_Variable::setValue(KT_Expression* var) {
	value=var;
}

void KT_Variable::accept(SemanticVisitor* visitor){
	visitor->visitVariable(this);
}

void KT_Variable::toString(){
	cout << "\ttoString variable: ";
	for (vector<string*>::iterator it = this->name.begin(); it != this->name.end(); ++it){
		cout << **it;
	}

	cout << "  " << *(getType()->getTypeName()[0]);

	cout << endl;
}

llvm::Value* KT_Variable::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileVariable(this);	
}

