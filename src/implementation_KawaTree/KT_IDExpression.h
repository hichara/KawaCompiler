/**
 * Project kawa
 */


#ifndef _KT_IDEXPRESSION_H
#define _KT_IDEXPRESSION_H

#include "KT_Statement.h"
#include "SemanticVisitor.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_IDExpression: public KT_Statement {
	virtual void toString();	
};

#endif //_KT_IDEXPRESSION_H