/**
 * Project Untitled
 */


#include "KT_MethodOrVarCall.h"

/**
 * KT_MethodOrVarCall implementation
 */

KT_MethodOrVarCall::KT_MethodOrVarCall(){}
void KT_MethodOrVarCall::accept(SemanticVisitor* visitor){
	cout << "method or var call visited" << endl;
}