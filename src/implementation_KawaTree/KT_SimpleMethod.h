/**
 * Project Untitled
 */


#ifndef _KT_SIMPLEMETHOD_H
#define _KT_SIMPLEMETHOD_H

#include "KT_Method.h"
#include "PARSER_MemberDec.h"
#include "KT_Param.h"
#include "KT_Block.h"


class KT_SimpleMethod: public PARSER_MemberDec {
public: 
    
    KT_SimpleMethod();
    
    string * getName();
    
    int getIndex();
    
    vector<KT_Param *> getParams();
    
    KT_Block * getBlock();
    
    /**
     * @param string *
     */
    void setName(string * var);
    
    /**
     * @param KT_Block *
     */
    void setBlock(KT_Block * var);
private: 
    string * name;
    int index;
    vector<KT_Param*> params;
    KT_Block* block;
};

#endif //_KT_SIMPLEMETHOD_H