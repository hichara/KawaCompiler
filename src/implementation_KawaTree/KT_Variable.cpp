/**
 * Project Untitled
 */


#include "KT_Variable.h"

/**
 * KT_Variable implementation
 */

KT_Variable::KT_Variable(){}

/**
 * @return vector<string *>
 */
vector<string *> KT_Variable::getName() {
    return name;
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
KT_Type * KT_Variable::getType() {
    return type;
}

/**
 * @param string *
 */
void KT_Variable::setName(string * var) {
	name=var;
}

void KT_Variable::setFinal(bool var) {
	Final=var;
}

/**
 * @param KT_Type *
 */
void KT_Variable::setType(KT_Type * var) {
	type=var;
}