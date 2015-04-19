/**
 * Project Untitled
 */


#ifndef _KT_PRTOTYPE_H
#define _KT_PRTOTYPE_H

#include "KT_Param.h"
#include "KT_Type.h"
#include "KT_Modifier.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Prototype {
public: 
    
    KT_Prototype();

    //back-end
	string* getName();
	
	string getParentName();
    
    KT_Type* getReturnType();
    
    vector<KT_Param*> getParams();
    
    KT_Modifier* getModifier();
    
    /**
     * @param string *
     */
    void setName(string* var);
	
	 /**
     * @param string
     */
    void setParentName(string var);
    
    /**
     * @param KT_Type *
     */
    void setReturnType(KT_Type* var);
    
    /**
     * @param KT_Modifier *
     */
    void setModifier(KT_Modifier* var);

    /**
     * @param vector<KT_Param*>
     */
    void setParams(vector<KT_Param*>& var);
	
	 /**
	 * mehtode pour verifier la redefinition d'une methode (semantic)
     * @param KT_Prototype* 
     */
	bool equal(KT_Prototype* var);
private: 
    string* name;
	
	//back-end
	string parentName;
	
    vector<KT_Param*> params;
    KT_Type* returnType;
    KT_Modifier* modifier;
};

#endif //_KT_PRTOTYPE_H