/**
 * Project Untitled
 */


#ifndef _KT_REEL_H
#define _KT_REEL_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Reel: public KT_FactFinal {
public: 
    
    KT_Reel();
    
    float getValue();
    
    /**
     * @param float
     */
    void setValue( float var);
private: 
    float value;
};

#endif //_KT_REEL_H