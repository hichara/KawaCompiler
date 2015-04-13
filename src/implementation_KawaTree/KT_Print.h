/**
 * Project Untitled
 */


#ifndef _KT_PRINT_H
#define _KT_PRINT_H

#include "KT_Statement.h"
#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Print: public KT_Statement {
public: 
    
    KT_Print();
    
    vector<KT_FactFinal*> getArgs();
private: 
    vector<KT_FactFinal*> args;
};

#endif //_KT_PRINT_H