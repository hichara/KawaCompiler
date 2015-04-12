/**
 * Project kawa
 */


#ifndef _KT_BLOCK_H
#define _KT_BLOCK_H

#include "KT_BlockStatement.h"
#include "KT_Statement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Block: public KT_BlockStatement {
public: 
    KT_Block();
	
    vector<KT_Statement *> getStatements();
	
	void setStatements(vector<KT_Statement *> &var);
private: 
    vector<KT_Statement *> statements;
};

#endif //_KT_BLOCK_H