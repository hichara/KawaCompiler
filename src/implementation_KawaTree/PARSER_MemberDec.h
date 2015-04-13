/**
 * Project Untitled
 */


#ifndef _PARSER_MEMBERDEC_H
#define _PARSER_MEMBERDEC_H
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class PARSER_MemberDec {
public: 
    
    PARSER_MemberDec();

    /**
     * @param KT_Class *
     */
    void addToKTClass(KT_Class * var);
};

#endif //_PARSER_MEMBERDEC_H