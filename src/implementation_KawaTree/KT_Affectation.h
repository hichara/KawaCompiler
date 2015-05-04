/**
 * Project Untitled
 */


#ifndef _KT_AFFECTATION_H
#define _KT_AFFECTATION_H

#include "KT_IDExpression.h"
#include "KT_VarOrAttr.h"
#include "KT_Expression.h"
#include "KT_IndexedArray.h"
#include "SemanticVisitor.h"
#include <stdio.h>
#include <string>
#include <vector>

#include "llvm/IR/Module.h"
class IRCompiler;

using namespace std;


class KT_Affectation: public KT_IDExpression {
public:
    KT_Affectation();
	  virtual ~KT_Affectation();

    KT_Expression* getLExpression();

    KT_VarOrAttr* getReference();

    KT_Expression* getrExpression();

    KT_IndexedArray* getIndexedArray();

    /**
     * @param KT_Expression *
     */
    void setLExpression(KT_Expression* var);

    /**
     * @param KT_Expression *
     */
    void setRExpression(KT_Expression* var);

    /**
     * @param KT_VarOrAttr*
     */
    void setReference(KT_VarOrAttr* var);

    /**
     * @param KT_IndexedArray*
     */
    void setIndexedArray(KT_IndexedArray* var);

    virtual void accept(SemanticVisitor* visitor);
    virtual void toString();


    /**
    * Methode accept pour le IRCompiler
    */
    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private:
    KT_VarOrAttr* reference;
    KT_Expression* lExpression;
    KT_Expression* rExpression;
    KT_IndexedArray* indexedArray;
};

#endif //_KT_AFFECTATION_H
