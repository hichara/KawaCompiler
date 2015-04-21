/**
 * Project kawa
 */


#ifndef _KT_CONTINUESTATEMENT_H
#define _KT_CONTINUESTATEMENT_H

#include "KT_BlockStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_ContinueStatement: public KT_BlockStatement {
public: 
    KT_ContinueStatement();
	~KT_ContinueStatement();
    
    bool isIdExist();
    
    string* getId();
    
    /**
     * @param bool
     */
    void setIdExist( bool var);
    
    /**
     * @param string *
     */
    void setId( string* var);
private: 
    bool idExist;
    string* id;
};

#endif //_KT_CONTINUESTATEMENT_H