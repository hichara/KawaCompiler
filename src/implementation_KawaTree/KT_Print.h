/**
 * Project Untitled
 */


#ifndef _KT_PRINT_H
#define _KT_PRINT_H

#include "KT_Statement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Print: public KT_Statement {
public: 
    
    KT_Print();
    
    vector<FactFinal *> getArgs();
private: 
    vector<FactFinal *> args;
};

#endif //_KT_PRINT_H