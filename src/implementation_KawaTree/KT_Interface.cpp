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