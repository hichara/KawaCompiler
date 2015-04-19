/**
 * Project Untitled
 */


#ifndef _PARSER_MEMBERDEC_H
#define _PARSER_MEMBERDEC_H
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class PARSER_MemberDec{
public: 
    PARSER_MemberDec();
    int getIndexParser();

    /**
     * @param int
     */
    void setIndexParser(int var);

 private:
 	int indexParser;
};

#endif //_PARSER_MEMBERDEC_H