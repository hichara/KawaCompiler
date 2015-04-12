/**
 * Project kawa
 */


#ifndef _KT_CONSTRUCTORCALL_H
#define _KT_CONSTRUCTORCALL_H

#include "KT_Constructor.h"
#include "KT_FactFinal.h"
#include "KT_ParamsMethodCall.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_ConstructorCall: public KT_Constructor, public KT_FactFinal {
public: 
	KT_ConstructorCall ();
    
    string * getName();
    
    KT_Constructor * getMethod();
    
    vector<KT_ParamsMethodCall *> getParams();
    
    /**
     * @param string *
     */
    void setName(string * var);
	
	/**
     * @param vector<KT_ParamsMethodCall *>
     */
    void setParams(vector<KT_ParamsMethodCall *>& var);
	
private: 
    string * name;
    vector<KT_ParamsMethodCall *> params;
};

#endif //_KT_CONSTRUCTORCALL_H