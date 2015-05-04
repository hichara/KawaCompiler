/**
 * Project Untitled
 */


#ifndef _KT_VARORATTR_H
#define _KT_VARORATTR_H
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_VarOrAttr {
public:
	KT_VarOrAttr();
  virtual ~KT_VarOrAttr();

  virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_VARORATTR_H
