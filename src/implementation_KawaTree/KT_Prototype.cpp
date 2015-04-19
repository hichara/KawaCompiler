/**
 * Project Untitled
 */


#include "KT_Prototype.h"

/**
 * KT_Prtotype implementation
 */

KT_Prototype::KT_Prototype(){}


/**
 * @return string *
 */
string* KT_Prototype::getName() {
    return name;
}

/**
 *	Partie back-end
 * @return string
 */
string KT_Prototype::getParentName() {
    return parentName;
}

/**
 * @return KT_Type *
 */
KT_Type* KT_Prototype::getReturnType() {
    return returnType;
}

/**
 * @return vector<KT_Params *>
 */
vector<KT_Param*> KT_Prototype::getParams() {
    return params;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier* KT_Prototype::getModifier() {
    return modifier;
}

/**
 * @param string *
 */
void KT_Prototype::setName(string* var) {
	name=var;
}

/**
 * @param string
 */
void KT_Prototype::setParentName(string var){
	parentName=var;
}

/**
 * @param KT_Type *
 */
void KT_Prototype::setReturnType(KT_Type* var) {
	returnType=var;
}

/**
 * @param KT_Modifier *
 */
void KT_Prototype::setModifier(KT_Modifier* var) {
	modifier=var;
}

/**
 * @param vector<KT_Param*> 
 */
void KT_Prototype::setParams(vector<KT_Param*>& var) {
	params=var;
}

/**
 * mehtode pour verifier la redefinition d'une methode (semantic)
 * @param KT_Prototype* 
 */
bool KT_Prototype::equal(KT_Prototype* var){
	if((this->name ==var->getName()) && (returnType == var->getReturnType()) && (std::equal(this->params.begin(),this->params.end(), var->getParams().begin())) )
		return true;
		else
			return false;

}
/*
string getFN(vector<string *> beFill) {
   string toFill = ".(";
   for (string * pieceOfName : beFill)
       toFill += "." + *pieceOfName;
   toFill += ")";
   return toFill;
}
*/
string KT_Prototype::toString(){
   /*string  p;
   for (KT_Param * param : this->params)
       p= p + getFN(param->getParamType()->getTypeName());
   string * signature = new string(*this->name + "" + p);
   string returnType = getFN(this->returnType->getTypeName());
   string * fqn = new string(this->modifier->getVisibility() + "." + returnType + "." + *signature);
   return *fqn;*/
   return "";
}
