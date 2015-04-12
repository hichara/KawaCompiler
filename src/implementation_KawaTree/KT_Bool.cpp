/**
 * Project Untitled
 */


#include "KT_Bool.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Bool implementation
 */
KT_Bool::KT_Bool() {}

/**
 * @return bool
 */
bool KT_Bool::getValue() {
    return value;
}

/**
 * @param bool
 */
void KT_Bool::setValue( bool var) {
	this->value =var;
}