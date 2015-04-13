/**
 * Project Untitled
 */


#include "KT_Package.h"

/**
 * KT_Package implementation
 */

KT_Package::KT_Package(){}

/**
 * @return string *
 */
string* KT_Package::getName() {
    return name;
}

/**
 * @return vector<KT_Interface *>
 */
vector<KT_Interface*> KT_Package::getInterfaces() {
    return interfaces;
}

/**
 * @return vector<KT_Class *>
 */
vector<KT_Class*> KT_Package::getClasses() {
    return classes;
}

/**
 * @param string *
 */
void KT_Package::setName(string* var) {
	name=var;
}