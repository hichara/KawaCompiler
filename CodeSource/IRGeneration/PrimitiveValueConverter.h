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


using namespace llvm;


//Class convertissant les types
class PrimitiveValueConverter {

public:
	static Value* convertTo(Type *target, Value o1, BasicBlock *b);
	static Value* convertFromTo(Type *t1, Type *t2, Value *v, BasicBlock *b);

private:
	static Value* convertFromIntToInt(Value *v, BasicBlock *b);
	static Value* convertFromIntToFloat(Value *v, BasicBlock*b);
	static Value* convertFromIntToDouble(Value *v, BasicBlock *b);

	static Value* convertFromFloatToInt(Value *v, BasicBlock *b);
	static Value* convertFromFloatToFloat(Value *v, BasicBlock *b);
	static Value* convertFromFloatToDouble(Value *v, BasicBlock *b);

	static Value* convertFromDoubleToInt(Value *v, BasicBlock *b);
	static Value* convertFromDoubleToFloat(Value *v, BasicBlock *b);
	static Value* convertFromDoubleToDouble(Value *v, BasicBlock *b);

	static Value* convertFromIntToStr(Value *v, BasicBlock *b);
	static Value* convertFromDoubleToStr(Value *v, BasicBlock *b);
};


