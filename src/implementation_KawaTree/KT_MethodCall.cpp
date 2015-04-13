/**
 * Project Untitled
 */


#include "KT_MethodCall.h"

/**
 * KT_MethodCall implementation
 */

KT_MethodCall::KT_MethodCall(){}

/**
 * @return vector<string *>
 */
vector<string *> KT_MethodCall::getName() {
    return name;
}

/**
 * @return KT_SimpleMethod *
 */
KT_SimpleMethod * KT_MethodCall::getMethod() {
    return methodCall;
}

/**
 * @return KT_VarOrAttr *
 */
KT_VarOrAttr * KT_MethodCall::getCaller() {
    return caller;
}

/**
 * @return vector<KT_ParamsMethodCall *>
 */
vector<KT_ParamsMethodCall *> KT_MethodCall::getParams() {
    return params;
}

/**
 * @param string *
 */
void KT_MethodCall::setName(string * var) {
	name= var;
}