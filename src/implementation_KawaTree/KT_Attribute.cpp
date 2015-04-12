/**
 * Project kawa
 */


#include "KT_Attribute.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Attribute implementation
 */

 KT_Attribute::KT_Attribute () {}

/**
 * @return string *
 */
string * KT_Attribute::getName() {
    return this-> name;
}

/**
 * @return int
 */
int KT_Attribute::getIndex() {
    return this-> index;
}

/**
 * @return KT_Type *
 */
KT_Type * KT_Attribute::getType() {
    return this-> type;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier * KT_Attribute::getModifier() {
    return this-> modifier;
}

/**
 * @param string *
 */
void KT_Attribute::setName( string * var) {
	this-> name= var;
}

/**
 * @param KT_Type *
 */
void KT_Attribute::setType(KT_Type * var) {
	this-> type= var;
}

/**
 * @param KT_Modifier *
 */
void KT_Attribute::setModifier(KT_Modifier * var) {
	this-> modifier= var
}