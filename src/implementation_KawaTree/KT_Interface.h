/**
 * Project Untitled
 */


#ifndef _KT_INTERFACE_H
#define _KT_INTERFACE_H

#include "KT_Modifier.h"
#include "KT_Prototype.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Interface{
public: 
    
    KT_Interface(); 

    string* getName();
    
    vector<string*> getInterfacesparent();
    
	vector<KT_Prototype*> getPrototypes();
    
    KT_Modifier* getModifier();
    
    /**
     * @param string *
     */
    void setName(string* var);
    
    /**
     * @param vector<string*>
     */
    void setInterfacesparent(vector<string*>& var);

    /**
     * @param KT_Modifier *
     */
    void setModifier(KT_Modifier* var);

    /**
     * @param vector<KT_Prototype*>
     */
    void setPrototypes(vector<KT_Prototype*>& var);
private: 
    string * name;
    vector<string*> InterfacesParent;
    KT_Modifier* modifier;
	vector<KT_Prototype*> prototypes;
};

#endif //_KT_INTERFACE_H