/**
 * Project kawa
 */


#include "KT_ConstructorCall.h"
#include <stdio.h>
#include <string>
#include <vector>

#include "../BackEnd/IRCompiler/IRCompiler.h"

using namespace std;

/**
 * KT_ConstructorCall implementation
 */

 KT_ConstructorCall::KT_ConstructorCall () {}

/**
 * @return vector<string*>
 */
vector<string*> KT_ConstructorCall::getName() {
    return this-> name;
}

/**
 * @return KT_Constructor *
 */
KT_Constructor* KT_ConstructorCall::getMethod() {
    return constructor;
}

void KT_ConstructorCall::setMethod(KT_Constructor *c) {
	constructor = c;
}

/**
 * @return vector<KT_ParamsMethodCall *>
 */
vector<KT_ParamsMethodCall*> KT_ConstructorCall::getParams() {
    return this->params;
}

/**
 * @param vector<string*>
 */
void KT_ConstructorCall::setName( vector<string*> var) {
	this-> name=var;
}

/**
 * @param string *
 */

void KT_ConstructorCall::setParams(vector<KT_ParamsMethodCall*> var) {

	this->params =var;
}

/**
 * @param string*
 */
void KT_ConstructorCall::addString(string* var) {
	name.push_back(var);
}

/**
 * @param vector<string*>
 */
void KT_ConstructorCall::addVectorString(vector<string*> var) {
	for (vector<string*>::iterator it = var.begin(); it != var.end(); ++it){
		string* n = (*it);
		name.push_back(n);
	}
}

void KT_ConstructorCall::accept(SemanticVisitor* visitor){
  visitor->visitConstructorCall(this);
}

llvm::Value* KT_ConstructorCall::acceptIRCompiler(IRCompiler *compiler) {
	return compiler->compileConstructorCall(this);
}
