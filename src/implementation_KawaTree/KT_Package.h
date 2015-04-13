/**
 * Project Untitled
 */


#ifndef _KT_PACKAGE_H
#define _KT_PACKAGE_H

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
private: 
    string* name;
    vector<KT_Class*> classes;
    vector<KT_Interface*> interfaces;
};

#endif //_KT_PACKAGE_H