/**
 * Project Untitled
 */


#include "KT_Constructor.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Constructor implementation
 */

KT_Constructor::KT_Constructor() {}
 
/**
 * @return string *
 */
string * KT_Constructor::getName() {
    return this-> name;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier * KT_Constructor::getModifier() {
    return this-> modifier;
}

/**
 * @return vectoor<KT_Param *>
 */
vector<KT_Param *> KT_Constructor::getParams() {
    return this-> params;
}

/**
 * @param string *
 */
void KT_Constructor::setName( string * var) {
	this-> name= var;
}

/**
 * @param KT_Modifier *
 */
void KT_Constructor::setModifier(KT_Modifier * var) {
	this-> modifier=var;
}

void setParams( Vector<KT_Param *> &var) {
	this->params =var;
}
