/**
 * Project Untitled
 */


#ifndef _KT_BREAKSTATEMENT_H
#define _KT_BREAKSTATEMENT_H

#include "KT_BlockStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_BreakStatement: public KT_BlockStatement {
public: 
    
    KT_BreakStatement();
	~KT_BreakStatement();
    bool isIdExist();
    
    string* getId();
    
    /**
     * @param bool
     */
    void setIdExist( bool var);
    
    /**
     * @param string *
     */
    void setId(string* var);
private: 
    bool idExist;
    string* id;
};

#endif //_KT_BREAKSTATEMENT_H