/**
 * Project Untitled
 */


#include "KT_SimpleMethod.h"

/**
 * KT_SimpleMethod implementation
 */

KT_SimpleMethod::KT_SimpleMethod(){}

/**
 * @return string *
 */
string * KT_SimpleMethod::getName() {
    return name;
}

/**
 * @return int
 */
int KT_SimpleMethod::getIndex() {
    return index;
}

/**
 * @return vector<KT_Param *>
 */
vector<KT_Param *> KT_SimpleMethod::getParams() {
    return params;
}

/**
 * @return KT_Block *
 */
KT_Block * KT_SimpleMethod::getBlock() {
    return block;
}

/**
 * @param string *
 */
void KT_SimpleMethod::setName(string * var) {
	name=var;
}

/**
 * @param KT_Block *
 */
void KT_SimpleMethod::setBlock(KT_Block * var) {
	block=var;
}