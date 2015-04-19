/**
 * Project Untitled
 */


#include "KT_Class.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Class implementation
 */
 
KT_Class:: KT_Class() {
//besoin semantic
ParentClass=NULL;

}


/**
 * @return vector<KT_SimpleMethode *>
 */
vector<KT_SimpleMethod*> KT_Class::getSimpleMethods() {
    return this-> SimpleMethods;
}

/**
 * @return vector<KT_Attribute *>
 */
vector<KT_Attribute*> KT_Class::getAttributes() {
    return this-> attributes;
}

/**
 * @param KT_Attribute *  attr
 */
void KT_Class::addAttribut(KT_Attribute*  attr) {
	(this-> attributes).push_back (attr);

}

/**
 * @param KT_SimpleMethod *  meth
 */
void KT_Class::addMethod(KT_SimpleMethod*  meth) {
	(this-> SimpleMethods).push_back (meth);
}

/**
 * @return vector<KT_Constructor *>
 */
vector<KT_Constructor*> KT_Class::getConstructors() {
    return this-> constructors;
}

/**
 * @param KT_Constructor *  constr
 */
void KT_Class::addConstructor(KT_Constructor*  constr) {
	(this-> constructors).push_back(constr);
}

/**
 * @return string *
 */
string* KT_Class::getParentClass() {
    return this-> ParentClass;
}

/**
 * @return vector<string *>
 */
vector<string*> KT_Class::getParentInterfaces() {
    return this-> ParentInterfaces;
}

/**
 * @return string *
 */
string* KT_Class::getName() {
    return this-> name;
}

/**
 * @return vector<PARSER_MemberDec *> 
 */
vector<PARSER_MemberDec*> KT_Class::getMemberDecs() {
    return this-> memberDecs;
}

/**
* @return KT_Modifier*
*/
KT_Modifier* KT_Class::getModifier() {
	return this->modifiers;
}

/**
 * @param string *
 */
void KT_Class::setName(string* var) {
	this-> name=var;
}

/**
 * @param string *
 */
void KT_Class::setParentClass(string* var) {
	this-> ParentClass=var;
}

/**
 * @param vector<PARSER_MemberDec *>
 */
void KT_Class::setMemberDec(vector<PARSER_MemberDec*>& var) {
	this-> memberDecs= var;
}

/**
 * @param vector<string *>
 */
void KT_Class::setParentInterfaces(vector<string*>& var) {
	this-> ParentInterfaces= var;
}

/**
* @param KT_Modifier
*/
void KT_Class::setModifier(KT_Modifier* var) {
	this->modifiers = var;
}

	/**
	* @param string
	*/
	
	void KT_Class::addSignature(string var){
	
	 fullSignatures.push_back(var);
	
	}
	
	/**
	* @param vector<string>
	*/
	void KT_Class::setFullSignatures(vector<string> var){
		this->fullSignatures = var;
	}
	
	/**
	* @return vector<string>
	*/
	vector<string> KT_Class::getFullSignatures() {
		return this->fullSignatures;
	}
	
	
	/**
	* @param KT_Class*
	*/
	void KT_Class::setParentClasseSemantique(KT_Class* var){
		this-> parentClasseSemantique  =var;
	}
	/**
	* @return KT_Class*
	*/
	
	KT_Class* KT_Class::getParentClasseSemantique(){
		return this-> parentClasseSemantique  ;
	}
	
	
	/**
	* @param vector<KT_Interface*>
	*/
	void KT_Class::setParentsInterfacesSemantique(vector<KT_Interface*> &var){
		this-> parentsInterfacesSemantique =var;
	}
	
	/**
	* @return vector<KT_Interface*>
	*/
	vector<KT_Interface*> KT_Class::getParentsInterfacesSemantique(){
		return this-> parentsInterfacesSemantique ;
	}
	
/**
 * @return string *
 */
string* KT_Class::getFQN() {
    return this-> FQN;
}	
	
/**
* @param string*
*/
void KT_Class::setFQN(string* var){
	this->FQN =var;
}

/**
 * @return vector<KT_Prototypes*>
 */
vector<KT_Prototypes*>  KT_Class::getAllPrototypes(){
	return this-> AllPrototypes;
}
	
/**
* @param vector<KT_Prototypes*> 
*/
void KT_Class::setAllPrototypes(vector<KT_Prototypes*> var){
	this-> AllPrototypes=var;
}

/**
* @param vector<KT_Prototypes*> 
*/
void addPrototype(KT_Prototype* var) {
	AllPrototypes.push_back(var);
}
	

void KT_Class::toString() {
	
	cout << "--------------------" << endl;
	modifiers->toString();
	cout << " Classe : " << *name << endl;
	cout << "---------------------"<< endl;

	cout << "Classe mere : " << *ParentClass << endl;
	cout << "interfaces meres : " ;
	for (vector<string*>::iterator it = ParentInterfaces.begin(); it != ParentInterfaces.end(); ++it){
		//(*it)->toString();
		cout << *(*it) <<" ";
	}
	cout << endl;
	
	cout << "  Attributes : " << endl;
	cout << "---------------------" << endl;
	for (vector<KT_Attribute*>::iterator it = attributes.begin(); it != attributes.end(); ++it){
		(*it)->toString();
		cout << endl;
	}
	
	cout << endl;
	cout << "  Constructeurs: "  << endl;
	cout << "---------------------" << endl;
	for (vector<KT_Constructor*>::iterator it = constructors.begin(); it != constructors.end(); ++it){
		(*it)->toString();
	}
	
	
	cout << endl;
	cout << "  Methodes: " << *name << endl;
	cout << "---------------------" << endl;
	for (vector<KT_SimpleMethod*>::iterator it = SimpleMethods.begin(); it != SimpleMethods.end(); ++it){
		(*it)->toString();
	}
	
}