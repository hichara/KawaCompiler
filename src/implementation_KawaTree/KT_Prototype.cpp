/**
 * Project Untitled
 */


#include "KT_Prototype.h"

/**
 * KT_Prtotype implementation
 */

KT_Prototype::KT_Prototype(){}


/**
 * @return string *
 */
string* KT_Prototype::getName() {
    return name;
}

/**
 * @return KT_Type *
 */
KT_Type* KT_Prototype::getReturnType() {
    return returnType;
}

/**
 * @return vector<KT_Params *>
 */
vector<KT_Param*> KT_Prototype::getParams() {
    return params;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier* KT_Prototype::getModifier() {
    return modifier;
}

/**
 * @param string *
 */
void KT_Prototype::setName(string* var) {
	name=var;
}

/**
 * @param KT_Type *
 */
void KT_Prototype::setReturnType(KT_Type* var) {
	returnType=var;
}

/**
 * @param KT_Modifier *
 */
void KT_Prototype::setModifier(KT_Modifier* var) {
	modifier=var;
}

/**
 * @param vector<KT_Param*> 
 */
void KT_Prototype::setParams(vector<KT_Param*>& var) {
	params=var;
}