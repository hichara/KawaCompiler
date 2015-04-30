/**
 * Project Untitled
 */


#ifndef _KT_VARIABLE_H
#define _KT_VARIABLE_H

#include "KT_Expression.h"
#include "KT_VarOrAttr.h"
#include "SemanticVisitor.h"
#include "KT_Type.h"
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class KT_Variable: public KT_Statement/*, public KT_VarOrAttr*/ {
public:

    KT_Variable();
    virtual ~KT_Variable();

    vector<string*> getName();

    bool isFinal();

    KT_Type* getType();

    KT_Expression* getValue();

    /**
     * @param string *
     */
    void setName(vector<string*> var);

    /**
     * @param bool
     */
    void setFinal(bool var);

    /**
     * @param KT_Type *
     */
    void setType(KT_Type* var);

    /**
     * @param KT_Expression*
     */
    void setValue(KT_Expression* var);

    virtual void accept(SemanticVisitor* visitor);

    virtual void toString();

private:
    vector<string*> name;
    bool Final;
    KT_Type* type;
    KT_Expression* value;
};

#endif //_KT_VARIABLE_H
