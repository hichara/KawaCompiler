/**
 * Project Untitled
 */


#include "KT_MethodCall.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_MethodCall implementation
 */

KT_MethodCall::KT_MethodCall(){}

/**
 * @return vector<string>
 */
vector<string> KT_MethodCall::getName() {
    return name;
}

/**
 * @return KT_SimpleMethod *
 */
KT_SimpleMethod* KT_MethodCall::getMethod() {
    return methodCall;
}

/**
 * @return KT_VarOrAttr *
 */
KT_VarOrAttr* KT_MethodCall::getCaller() {
    return caller;
}

/**
 * @return vector<KT_ParamsMethodCall *>
 */
vector<KT_ParamsMethodCall*> KT_MethodCall::getParams() {
    return params;
}

/**
 * @param string
 */
void KT_MethodCall::setName(vector<string> var) {
	name= var;
}

/**
 * @param vector<KT_ParamsMethodCall*>
 */
void KT_MethodCall::setParams(vector<KT_ParamsMethodCall*> var){
	params = var;
}

/**
 * @param KT_SimpleMethod*
 */
void KT_MethodCall::setMethodCall(KT_SimpleMethod* var) {
	methodCall= var;
}

/**
 * @param KT_VarOrAttr*
 */
void KT_MethodCall::setCaller(KT_VarOrAttr* var) {
	caller = var;
}

/**
 * @param string
 */
void KT_MethodCall::setNameAddStringAtFirstPosition(string var){
  std::vector<string>::iterator it;
  it = name.begin();
  it = name.insert ( it , var );
}


Value* KT_MethodCall::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileMethodCall(this);
}





