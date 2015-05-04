/**
 * Project kawa
 */


#ifndef _KT_CONSTRUCTORCALL_H
#define _KT_CONSTRUCTORCALL_H

#include "KT_Constructor.h"
#include "KT_FactFinal.h"
#include "KT_ParamsMethodCall.h"
#include "SemanticVisitor.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_ConstructorCall: public KT_Constructor, public KT_FactFinal {
public:
    KT_ConstructorCall();
	~KT_ConstructorCall();

    vector<string*> getName();

    KT_Constructor* getMethod();

    vector<KT_ParamsMethodCall*> getParams();

    /**
     * @param vector<string*>
     */
    void setName(vector<string*> var);

	/**
     * @param vector<KT_ParamsMethodCall *>
     */
    void setParams(vector<KT_ParamsMethodCall*> var);

        /**
     * @param string*
     */
    void addString(string* var);

    /**
     * @param vector<string*>
     */
    void addVectorString(vector<string*> var);

    void accept(SemanticVisitor* visitor);

    virtual llvm::Value *acceptIRCompiler(IRCompiler *compiler);
	
private: 
    vector<string*> name;
    vector<KT_ParamsMethodCall*> params;
};

#endif //_KT_CONSTRUCTORCALL_H
