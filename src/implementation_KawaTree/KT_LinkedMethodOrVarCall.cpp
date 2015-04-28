/**
 * Project Untitled
 */


#include "KT_LinkedMethodOrVarCall.h"

/**
 * KT_LinkedMethodOrVarCall implementation
 */

KT_LinkedMethodOrVarCall::KT_LinkedMethodOrVarCall(){}

/**
 * @return KT_MethodOrVarCall *
 */
vector<KT_MethodOrVarCall*> KT_LinkedMethodOrVarCall::getMixedCall() {
    return mixteCall;
}

/**
 * @param vector<KT_MethodOrVarCall*>
 */
void KT_LinkedMethodOrVarCall::setMixedCall(vector<KT_MethodOrVarCall*> var){
	mixteCall= var;
}