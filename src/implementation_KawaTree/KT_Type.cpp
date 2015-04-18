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
 * @return vector<string*>
 */
vector<string*> KT_Type::getTypeName() {
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
 * @param vector<string*>
 */
void KT_Type::setTypeName(vector<string*>& var) {
	typeName=var;
}

/**
 * @param int
 */
void KT_Type::setArrayDim(int var) {
	arrayDim=var;
}

/**
 * @param PARSER_Array*
 */
void KT_Type::setArray(PARSER_Array* var) {
	Array=var;
	arrayDim = Array->getArrayDim();
}

/**
 * @param string*
 */
void KT_Type::addString(string* var) {
	typeName.push_back(var);
}

/**
 * @param vector<string*>
 */
void KT_Type::addVectorString(vector<string*>& var) {
	for (vector<string*>::iterator it = var.begin(); it != var.end(); ++it){
		string* name = (*it)->toString();
		typeName.push_back(name);
	}
}

void KT_Type::toString() {
	if (typeName != NULL)
		cout << *typeName;
	else
		cout << "Type non définit ";
	
	cout<< " dimension: " << arrayDim << " ";

}