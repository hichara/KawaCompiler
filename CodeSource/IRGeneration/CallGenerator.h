#include "llvm/Analysis/Passes.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/JIT.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/PassManager.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Transforms/Scalar.h"
#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>
#include "llvm/IR/Type.h"
#include <iostream>


using namespace llvm;



class CallGenerator {


public:
	static Value *createMethodeCall(Module *module, Value *instance,
							std::vector<Value*> args, int index, BasicBlock *b);

	static Value *createMethodeCall(Module *module, Value *instance,
						 std::vector<Value*> args, Value *index, BasicBlock *b);

	static Value *createStaticMethodeCall(Module *module, std::string funcName,
					        std::vector<Value *> list_args, BasicBlock *b);

	static Value *createPrintCall(Module *module, Value *str, BasicBlock *b);
};


