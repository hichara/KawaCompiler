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


class PrimitiveBinaryOperationGenerator {

public:
	static Value* createAdd(Type *type, Value *o1, Value *o2,  const Twine &Name="", BasicBlock *b) ;
	static Value* createMul(Type *type, Value *o1, Value *o2,  const Twine &Name="", BasicBlock *b) ;
	static Value* createSub(Type *type, Value *o1, Value *o2,  const Twine &Name="", BasicBlock *b) ;
    static Value* createDiv(Type *type, Value *o1, Value *o2,  const Twine &Name="", BasicBlock *b) ;
    static Value* createAdd(Type *type, Value *o1, Value *o2,  const Twine &Name="", BasicBlock *b) ;
};
