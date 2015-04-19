/**
 * Project kawa
 */


#ifndef _KT_IDEXPRESSION_H
#define _KT_IDEXPRESSION_H

#include "KT_Statement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_IDExpression: public KT_Statement {
	/**
     * @param StatementVisitor
     */
    void accept( /*StatementVisitor*/);
};

#endif //_KT_IDEXPRESSION_H