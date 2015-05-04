/**
 * Project kawa
 */


#ifndef _KT_FACTFINAL_H
#define _KT_FACTFINAL_H

#include "KT_Expression.h"
#include "SemanticVisitor.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_FactFinal: public KT_Expression {
public:
	KT_FactFinal();
	virtual ~KT_FactFinal();
	
	/*virtual void toString() =0;*/

	virtual void accept(SemanticVisitor* visitor){}

};

#endif //_KT_FACTFINAL_H
