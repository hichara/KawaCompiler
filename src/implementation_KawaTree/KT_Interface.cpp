/**
 * Project Untitled
 */


#include "KT_Interface.h"

/**
 * KT_Interface implementation
 */

KT_Interface::KT_Interface(){} 

/**
 * @return string *
 */
string* KT_Interface::getName() {
    return name;
}

/**
 * @return vector<string *>
 */
vector<string*> KT_Interface::getInterfacesparent() {
    return InterfacesParent;
}

/**
 * @return vector<KT_Prototype *>
 */
vector<KT_Prototype*> KT_Interface::getPrototypes() {
    return prototypes;
}

/**
 * @return KT_Modifier *
 */
KT_Modifier* KT_Interface::getModifier() {
    return modifier;
}

/**
* @return vector<vector<string*>>
*/
vector<vector<string*> > KT_Interface::getImports() {
	return this->imports;
}

/**
 * @param string *
 */
void KT_Interface::setName(string* var) {
	name=var;
}

/**
 * @param KT_Modifier *
 */
void KT_Interface::setModifier(KT_Modifier* var) {
	modifier=var;
}

/**
 * @param vector<string*>
 */
void KT_Interface::setInterfacesparent(vector<string*> var) {
	InterfacesParent=var;
}

/**
 * @param vector<KT_Prototype*>
 */
void KT_Interface::setPrototypes(vector<KT_Prototype*> var){
	prototypes=var;
	for(int i = 0; i < var.size(); i++) {
		var[i]->setParentName(*(getFQN()));
	}
}

/**
	* @param string
	*/
	
	void KT_Interface::addSignature(string var){
	
	 fullSignatures.push_back(var);
	
	}
	
	/**
	* @param vector<string>
	*/
	void KT_Interface::setFullSignatures(vector<string> var){
		this->fullSignatures = var;
	}
	
	/**
	* @return vector<string>
	*/
	vector<string> KT_Interface::getFullSignatures() {
		return this->fullSignatures;
	}
	
	/**
	* @param vector<KT_Interface*>
	*/
	void KT_Interface::setParentsInterfacesSemantique(vector<KT_Interface*> var){
		this-> parentsInterfacesSemantique =var;
	}
	
	/**
	* @return vector<KT_Interface*>
	*/
	vector<KT_Interface*> KT_Interface::getParentsInterfacesSemantique(){
		return this-> parentsInterfacesSemantique ;
	}
	
	
	/**
 * @return string *
 */
string* KT_Interface::getFQN() {
    return this-> FQN;
}	
	
/**
* @param string*
*/
void KT_Interface::setFQN(string* var){
	this->FQN =var;
}

/**
* @param vector<vector<string*>>
*/
void KT_Interface::setImports(vector<vector<string*> > var) {
	this->imports = var;
}
	
