/**
 * Project Untitled
 */


#include "KT_String.h"

/**
 * KT_String implementation
 */

KT_String::KT_String(){}

/**
 * @return string *
 */
string * KT_String::getValue() {
    return value;
}

/**
 * @param string *
 */
void KT_String::setValue(string * var) {
	value=var;
}