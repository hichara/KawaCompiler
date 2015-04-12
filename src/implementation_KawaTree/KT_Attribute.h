/**
 * Project kawa
 */


#ifndef _KT_ATTRIBUTE_H
#define _KT_ATTRIBUTE_H

#include "KT_VarOrAttr.h"
#include "KT_Modifier.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Attribute: public KT_VarOrAttr {
public: 

	KT_Attribute ();
    int index;
    
    string * getName();
    
    int getIndex();
    
    KT_Type * getType();
    
    KT_Modifier * getModifier();
    
    /**
     * @param string *
     */
    void setName(string * var);
    
    /**
     * @param KT_Type *
     */
    void setType(KT_Type * var);
    
    /**
     * @param KT_Modifier *
     */
    void setModifier(KT_Modifier * var);
private: 
    string * name;
    KT_Modifier* modifier;
	KT_Type * type;
};

#endif //_KT_ATTRIBUTE_H