/**
 * Project Untitled
 */


#ifndef _KT_BLOCKSTATEMENT_H
#define _KT_BLOCKSTATEMENT_H

#include "KT_Statement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_BlockStatement: public KT_Statement {
public: 

	KT_BlockStatement();
    
    /**
     * @param StatementVisitor
     */
    void accept( /*StatementVisitor*/);
};

#endif //_KT_BLOCKSTATEMENT_H