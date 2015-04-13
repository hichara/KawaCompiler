/**
 * Project Untitled
 */


#ifndef _KT_PROGRAM_H
#define _KT_PROGRAM_H

#include "KT_Package.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Program {
public: 
    
    KT_Program();
    
    vector<KT_Package *> getPackages();
private: 
    vector<KT_Package*> packages;
};

#endif //_KT_PROGRAM_H