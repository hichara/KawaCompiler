/**
 * Project Untitled
 */


#ifndef _KT_BOOL_H
#define _KT_BOOL_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Bool: public KT_FactFinal {
public: 
    
	KT_Bool();
    bool getValue();
    
    /**
     * @param bool
     */
    void setValue( bool var);
private: 
    bool value;
};

#endif //_KT_BOOL_H