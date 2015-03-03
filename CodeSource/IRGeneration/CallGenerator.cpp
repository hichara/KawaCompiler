#include "CallGenerator.h"





Value* CallGenerator::createMethodeCall(const Twine &className,
							        const Twine &functionName,
							        std::vector<Value *> list_args,
							        Value* callTable, int index);

Value* CallGenerator::createRegularMethodeCall(const Twine &className,
							        const Twine &functionName,
							        std::vector<Value *> list_args);


Value* CallGenerator::createStaticMethodeCall(Module *module,
									std::string fncName,
							        std::vector<Value *> list_args) {

	Function *f = module->getFunction(fncName);

	return CallInst::Create(f, args);
}


// Value representant une chaine de caractere
Value* CallGenerator::createPrintCall(Value *str) {
	if(str->getType() != Type::getInt8Type())
		KawUtilitary::stopGenerationIR(INVALID_ARGS);

	LLVMContext &context = str->getContext();

	std::vector<Value*> idx;

	Constant *z0 = ConstantInt::get(Type::getInt32Ty(context), 0);

	idx.push_back(z0);
	idx.push_back(z0);

	Value *v = GetElementPtrInst(str, idx);

	std::vector<Value*> args;
	args.push_back(str);

	return CallInst::Create(Value *Func, args);
}


