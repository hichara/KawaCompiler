/**
 * Project Untitled
 */


#ifndef _KT_PACKAGE_H
#define _KT_PACKAGE_H

#include <iostream>
#include "KT_Class.h"
#include "KT_Interface.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Package {
public: 

    KT_Package();
    
    string* getName();
    
    vector<KT_Interface*> getInterfaces();
    
    vector<KT_Class*> getClasses();
    
    /**
     * @param string *
     */
    void setName(string* var);

	/**
	* @param vector<KT_Interface*>
	*/
	void setInterfaces(vector<KT_Interface*>& var);

	/**
	* @param vector<KT_Class*>
	*/
	void setClasses(vector<KT_Class*>& var);

    /**
    * @param KT_Class*
    */
    void addClass(KT_Class* var);

    /**
    * @param KT_Interface*
    */
    void addInterface(KT_Interface* var);

	void toString();
private: 
    string* name;
    vector<KT_Class*> classes;
    vector<KT_Interface*> interfaces;
};

#endif //_KT_PACKAGE_H