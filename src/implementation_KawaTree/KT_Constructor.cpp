/**
 * Project Untitled
 */


#include "KT_Constructor.h"

/**
 * KT_Constructor implementation
 */

KT_Constructor::KT_Constructor() {}
 
/**
 * @return string *
 */
string* KT_Constructor::getName() {
    return this-> name;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier* KT_Constructor::getModifier() {
    return this-> modifier;
}

/**
 * @return vectoor<KT_Param *>
 */
vector<KT_Param*> KT_Constructor::getParams() {
    return this-> params;
}

/**
 * @return KT_Block*
 */
KT_Block* KT_Constructor::getBlock(){
	return block;
}

/**
 * @param string *
 */
void KT_Constructor::setName( string* var) {
	this-> name= var;
}

/**
 * @param KT_Modifier *
 */
void KT_Constructor::setModifier(KT_Modifier* var) {
	this-> modifier=var;
}

/**
 * @param vector<KT_Param*>
 */
void KT_Constructor::setParams(vector<KT_Param*> var) {
	params = var;
}


/**
 * @param KT_Block*
 */
void KT_Constructor::setBlock(KT_Block* var) {
	block = var;
}
