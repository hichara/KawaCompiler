/**
 * Project Untitled
 */


#ifndef _KT_CONSTRUCTOR_H
#define _KT_CONSTRUCTOR_H

#include "KT_Method.h"
#include "PARSER_MemberDec.h"
#include "KT_Param.h"
#include "KT_Modifier.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Constructor: public KT_Method, public PARSER_MemberDec {
public: 
    
	KT_Constructor();
	
    string * getName();
    
    KT_Modifier * getModifier();
    
    vectoor<KT_Param *> getParams();
    
    /**
     * @param string *
     */
    void setName( string * var);
    
    /**
     * @param KT_Modifier *
     */
    void setModifier( KT_Modifier * var);
	
	/**
     * @param Vector<KT_Param *>
     */
    void setParams( Vector<KT_Param *> &var);
private: 
    string * name;
    Vector<KT_Param *> params;
    KT_Modifier* modifier;
};

#endif //_KT_CONSTRUCTOR_H