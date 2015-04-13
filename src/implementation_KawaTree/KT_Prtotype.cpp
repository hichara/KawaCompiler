/**
 * Project Untitled
 */


#include "KT_Prtotype.h"

/**
 * KT_Prtotype implementation
 */

KT_Prtotype::KT_Prtotype(){}


/**
 * @return string *
 */
string * KT_Prtotype::getName() {
    return name;
}

/**
 * @return KT_Type *
 */
KT_Type * KT_Prtotype::getReturnType() {
    return returnType;
}

/**
 * @return vector<KT_Params *>
 */
vector<KT_Params *> KT_Prtotype::getParams() {
    return params;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier * KT_Prtotype::getModifier() {
    return modifier;
}

/**
 * @param string *
 */
void KT_Prtotype::setName(string * var) {
	name=var;
}

/**
 * @param KT_Type *
 */
void KT_Prtotype::setReturnType(KT_Type * var) {
	returnType=var;
}

/**
 * @param KT_Modifier *
 */
void KT_Prtotype::setModifier(KT_Modifier * var) {
	modifier=var;
}