/**
 * Project Untitled
 */


#include "KT_SimpleMethod.h"

/**
 * KT_SimpleMethod implementation
 */

KT_SimpleMethod::KT_SimpleMethod(){
//besoin semantic

prototype=NULL;

}

/**
 * @return string *
 */
string* KT_SimpleMethod::getName() {
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
vector<KT_Param*> KT_SimpleMethod::getParams() {
    return params;
}

/**
 * @return KT_Block *
 */
KT_Block* KT_SimpleMethod::getBlock() {
    return block;
}

/**
* @return KT_Modifier*
*/
KT_Modifier* KT_SimpleMethod::getModifier() {
	return modifier;
}

/**
* @return KT_Type*
*/
KT_Type* KT_SimpleMethod::getType() {
	return type;
}

/**
* @return KT_Prototype*
*/
KT_Prototype* KT_SimpleMethod::getPrototype() {
	return prototype;
}


/**
 * @param string *
 */
void KT_SimpleMethod::setName(string* var) {
	name=var;
}

/**
 * @param KT_Block *
 */
void KT_SimpleMethod::setBlock(KT_Block* var) {
	block=var;
}

/**
* @param KT_Modifier*
*/
void KT_SimpleMethod::setModifier(KT_Modifier* var) {
	modifier = var;
}

/**
* @param KT_Type*
*/
void KT_SimpleMethod::setType(KT_Type* var) {
	type = var;
}

/**
* @param vector<KT_Param*>
*/
void KT_SimpleMethod::setParams(vector<KT_Param*> var) {
	params = var;
}


/**
* @param KT_Prototype*
*/
void KT_SimpleMethod::setPrototype(KT_Prototype* var){
	this->prototype  = var;
}

/**
* @param string
*/
void KT_SimpleMethod::setFullSignature(string var){
	this->FullSignature = var;
}

/**
* @return string
*/
string KT_SimpleMethod::getFullSignature() {
	return this->FullSignature;
}


void KT_SimpleMethod::toString() {
	modifier->toString();
	type->toString();
	cout << *name << " (";
	for (vector<KT_Param*>::iterator it = params.begin(); it != params.end(); ++it){
		(*it)->toString();
	}
	cout << ")" << endl;
	cout << "Methode Block : " << endl;
	block->toString();
}