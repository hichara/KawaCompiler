/**
 * Project kawa
 */


#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_Expression implementation
 */

 KT_Expression::KT_Expression() {}

/**
 * @return string *
 */
string* KT_Expression::calculReturnType() {
    return returnType;
}

llvm::Value* KT_Expression::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileExpression(this);	
}
