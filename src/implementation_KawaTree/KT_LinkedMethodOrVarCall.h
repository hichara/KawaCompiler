/**
 * Project Untitled
 */


#ifndef _KT_LINKEDMETHODORVARCALL_H
#define _KT_LINKEDMETHODORVARCALL_H

#include "KT_FactFinal.h"
#include "KT_MethodOrVarCall.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_LinkedMethodOrVarCall: public KT_FactFinal {
public: 
    
    vector<KT_MethodOrVarCall*> getMixedCall();
    
private: 
    vector<KT_MethodOrVarCall*> mixteCall;
};

#endif //_KT_LINKEDMETHODORVARCALL_H