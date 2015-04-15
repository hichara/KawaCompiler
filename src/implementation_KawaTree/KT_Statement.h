/**
 * Project Untitled
 */


#ifndef _KT_STATEMENT_H
#define _KT_STATEMENT_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Statement {
public:
	KT_Statement();
	virtual void toString() = 0;
};

#endif //_KT_STATEMENT_H