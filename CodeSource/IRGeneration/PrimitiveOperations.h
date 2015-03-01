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


class BinaryOperationGenereter {

public:
	static Value* createAdd(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) ;
	static Value* createMul(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) ;
	static Value* createSub(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) ;
    static Value* createDiv(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) ;
    static Value* createAdd(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) ;
};

//Class convertissant les types
class ValueConverter {

public:
	static Value* convertFromTo(Type *t1, Type *t2, Value *v, IRBuilder *b);

private:
	static Value* convertFromIntToInt(Value *v, IRBuilder *b);
	static Value* convertFromIntToFloat(Value *v, IRBuilder *b);
	static Value* convertFromIntToDouble(Value *v, IRBuilder *b);

	static Value* convertFromFloatToInt(Value *v, IRBuilder *b);
	static Value* convertFromFloatToFloat(Value *v, IRBuilder *b);
	static Value* convertFromFloatToDouble(Value *v, IRBuilder *b);

	static Value* convertFromDoubleToInt(Value *v, IRBuilder *b);
	static Value* convertFromDoubleToFloat(Value *v, IRBuilder *b);
	static Value* convertFromDoubleToDouble(Value *v, IRBuilder *b);
};

class  PrimitiveCreator {

public:
	static Value* create(int i, LLVMContext &context);
	static Value* create(double d, LLVMContext &context);
	static Value* create(float f, LLVMContext &context);
};




