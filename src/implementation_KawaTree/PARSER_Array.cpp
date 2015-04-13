/**
 * Project Untitled
 */


#include "PARSER_Array.h"

/**
 * PARSER_Array implementation
 */

PARSER_Array::PARSER_Array(){}

/**
 * @return bool
 */
bool PARSER_Array::isArray() {
    return Array;
}

/**
 * @return int
 */
int PARSER_Array::getArrayDim() {
    return arrayDim;
}

/**
 * @param int
 */
void PARSER_Array::setArrayDim( int var) {
	arrayDim=var;
}

/**
 * @param bool
 */
void PARSER_Array::setArray(bool var) {
	Array=var;
}