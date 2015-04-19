/**
 * Project Untitled
 */


#include "KT_Program.h"

/**
 * KT_Program implementation
 */

KT_Program::KT_Program(){}

/**
 * @return vector<KT_Package *>
 */
vector<KT_Package*> KT_Program::getPackages() {
    return packages;
}

/**
* @param vector<string *>
*/
void KT_Program::setPackages(vector<KT_Package*>& var) {
	this->packages = var;
}

/**
* @param KT_Package*, KT_Class*
*/
void KT_Program::addPackageWithClass(KT_Package* var, KT_Class* classe){
	KT_Package* package = this->getPackage(var);
	if(package!= NULL){
		package->addClass(classe);
	}
	else
		packages.push_back(var);
}

/**
* @param KT_Package*, KT_Interface*
*/
void KT_Program::addPackageWithInterface(KT_Package* var, KT_Interface* interfac){
	KT_Package* package = this->getPackage(var);
	if(package!= NULL){
		package->addInterface(interfac);
	}
	else
		packages.push_back(var);
}

/**
* @param package*
* @return KT_Package*
*/
KT_Package* KT_Program::getPackage(KT_Package* var){
	for (vector<KT_Package*>::iterator it = packages.begin(); it != packages.end(); ++it){
		KT_Package* package = (*it);
		string name1 = *(package->getName());
		string name2 = *var;
		if(name1==name2)
			return package;
	}
	return NULL;
}


/**
* @param string
*/
void KT_Program::setName(string var){
	this->name= var;
}

/**
 * @return string
 */
string KT_Program::getName() {
    return name;
}

void KT_Program::toString() {
	cout << "***********************" << endl;
	cout << "Programe " << endl;
	cout << "***********************" << endl;

	for (vector<KT_Package*>::iterator it = packages.begin(); it != packages.end(); ++it){
		cout << "Package " << endl;
		(*it)->toString();
	}
}