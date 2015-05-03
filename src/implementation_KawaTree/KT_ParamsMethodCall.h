/**
 * Project Untitled
 */


#ifndef _KT_PARAMSMETHODCALL_H
#define _KT_PARAMSMETHODCALL_H

#include "KT_IndexedArray.h"
#include "KT_Expression.h"

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_ParamsMethodCall {
public: 
    
    KT_ParamsMethodCall();
    ~KT_ParamsMethodCall();

    KT_IndexedArray* getIndexedArray();
    
    KT_Expression* getExpression();
    
    /**
     * @param KT_IndexedArray *
     */
    void setIndexedArray(KT_IndexedArray* var);
    
    /**
     * @param KT_Expression *
     */
    void setExpression(KT_Expression* var);

    /**
    * Methode accept pour le IRCompiler
    */
    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private: 
    KT_IndexedArray* indexedArray;
    KT_Expression* expression;
};

#endif //_KT_PARAMSMETHODCALL_H