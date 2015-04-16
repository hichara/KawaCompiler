/**
 * Project Untitled
 */


#include "KT_Super.h"

/**
 * KT_Super implementation
 */

KT_Super::KT_Super(){}

/**
 * @return KT_Block *
 */
vector<KT_ParamsMethodCall*> KT_Super::getParams() {
    return params;
}

/**
 * @param vector<KT_ParamsMethodCall*>
 */
void KT_Super::setParams(vector<KT_ParamsMethodCall*> var){
	params=var;
}