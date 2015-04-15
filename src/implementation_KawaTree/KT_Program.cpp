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

void KT_Program::toString() {
	cout << "***********************" << endl;
	cout << "Programe " << endl;
	cout << "***********************" << endl;

	for (vector<KT_Package*>::iterator it = packages.begin(); it != packages.end(); ++it){
		cout << "Package " << endl;
		(*it)->toString();
	}
}