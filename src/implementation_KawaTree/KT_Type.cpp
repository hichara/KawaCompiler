/**
 * Project Untitled
 */


#include "KT_Type.h"

/**
 * KT_Type implementation
 */

KT_Type::KT_Type(){}

/**
 * @return bool
 */
bool KT_Type::isBasicType() {
    return basicType;
}

/**
 * @return string *
 */
string* KT_Type::getTypeName() {
    return typeName;
}

/**
 * @return int
 */
int KT_Type::getArrayDim() {
    return arrayDim;
}

/**
 * @return PARSER_Array *
 */
PARSER_Array* KT_Type::getArray() {
    return Array;
}

/**
 * @param bool
 */
void KT_Type::setBasicType(bool var) {
	basicType=var;
}

/**
 * @param string *
 */
void KT_Type::setTypeName(string* var) {
	typeName=var;
}

/**
 * @param int
 */
void KT_Type::setArrayDim(int var) {
	arrayDim=var;
}

/**
 * @param int
 */
void KT_Type::setArray(PARSER_Array* var) {
	Array=var;
}

/**
* @param int
*/
void KT_Type::toString() {
	if (typeName != NULL)
		cout << *typeName;
	else
		cout << "Type non définit ";
	
	cout<< " dimension: " << arrayDim << " ";

}