/**
 * Project kawa
 */


#include "KT_ConstructorCall.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_ConstructorCall implementation
 */

 KT_ConstructorCall::KT_ConstructorCall () {}

/**
 * @return string *
 */
string* KT_ConstructorCall::getName() {
    return this-> name;
}

/**
 * @return KT_Constructor *
 */
KT_Constructor* KT_ConstructorCall::getMethod() {
    return NULL;
}

/**
 * @return vector<KT_ParamsMethodCall *>
 */
vector<KT_ParamsMethodCall*> KT_ConstructorCall::getParams() {
    return this->params;
}

/**
 * @param string *
 */
void KT_ConstructorCall::setName( string* var) {
	this-> name=var;
}

/**
 * @param string *
 */

void KT_ConstructorCall::setParams(vector<KT_ParamsMethodCall*> &var) {

	this->params =var;
}

