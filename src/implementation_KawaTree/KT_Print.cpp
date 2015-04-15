/**
 * Project Untitled
 */


#include "KT_Print.h"

/**
 * KT_Print implementation
 */

KT_Print::KT_Print(){}

/**
 * @return vector<FactFinal *>
 */
vector<KT_FactFinal*> KT_Print::getArgs() {
    return args;
}

/**
* @param vector<KT_FactFinal*>
*/
void KT_Print::setArgs(vector<KT_FactFinal*>& var) {
	this->args = var;
}

void KT_Print::toString(){
	int i = 1;
	for (vector<KT_FactFinal*>::iterator it = args.begin(); it != args.end(); ++it){
		cout << "parametre " << i++;
		(*it)->toString();
		cout << " ";
	}
	
	//cout << "statment Print :D "<<endl;

}