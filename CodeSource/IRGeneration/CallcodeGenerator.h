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




class MethodeCallGenerater {


public:
	static Value *createMethodeCall(const Twine &className,
							        const Twine &functionName,
							        std::vector<Value *> list_args,
							        Value* callTable, int index);

	static Value *createRegularMethodeCall(const Twine &className,
							        const Twine &functionName,
							        std::vector<Value *> list_args);


	static Value *createStaticMethpdeCall(const Twine &className,
							        const Twine &functionName,
							        std::vector<Value *> list_args);

};


