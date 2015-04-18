/**
 * Project Untitled
 */


#ifndef _KT_ENTIER_H
#define _KT_ENTIER_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Entier: public KT_FactFinal {
public: 
    
	KT_Entier();
    int getValue();
    
    /**
     * @param int
     */
    void setValue( int var);
	/*virtual void toString();*/
private: 
    int value;
};

#endif //_KT_ENTIER_H