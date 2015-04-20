/**
 * Project Untitled
 */


#include "KT_Param.h"

/**
 * KT_Param implementation
 */

KT_Param::KT_Param(){}

/**
 * @return string *
 */
string* KT_Param::getName() {
    return name;
}

/**
 * @return KT_Type *
 */
KT_Type* KT_Param::getParamType() {
    return paramType;
}

/**
 * @return KT_Modifier*
 */
KT_Modifier* KT_Param::getParamModifier() {
    return paramModifier;
}

/**
 * @return string *
 */
KT_Variable* KT_Param::toVariable() {
    KT_Variable* var;
    vector<string*> name; 
    name.push_back(this->name);
    var->setName(name);
    var->setType(paramType);
    KT_Expression* exp = new KT_Expression;
    var->setValue(exp);
    return var; 
}

/**
 * @param string *
 */
void KT_Param::setName(string* var) {
	name=var;
}

/**
 * @param KT_Type *
 */
void KT_Param::setParamType(KT_Type* var) {
	paramType=var;
}

/**
 * @param KT_Modifier*
 */
void KT_Param::setParamModifier(KT_Modifier* var) {
	paramModifier=var;
}

void KT_Param::toString() {
	paramModifier->toString();
	paramType->toString();
	cout << *name;
}