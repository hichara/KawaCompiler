/**
 * Project Untitled
 */


#ifndef _KT_STRING_H
#define _KT_STRING_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_String: public KT_FactFinal {
public: 
    
    KT_String();
    
    string* getValue();
    
    /**
     * @param string *
     */
    void setValue(string* var);
	virtual void toString() ;	
private: 
    string* value;
};

#endif //_KT_STRING_H