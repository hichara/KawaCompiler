/**
 * Project Untitled
 */


#ifndef _KT_SUPER_H
#define _KT_SUPER_H

#include "KT_Statement.h"
#include "KT_ParamsMethodCall.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Super: public KT_Statement {
public:
	KT_Super();
	
	vector<KT_ParamsMethodCall*> getParams();
private: 
    vector<KT_ParamsMethodCall*> params;
};

#endif //_KT_SUPER_H