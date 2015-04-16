#include "CallGenerator.h"
#include "FunctionGenerator.h"



Value* CallGenerator::createMethodeCall(Module *module, Value *instance,
					 std::vector<Value*> args, int index, BasicBlock *bb) {

	Constant *i = ConstantInt::get(Type::getInt32Ty(bb->getContext), index);
	
	return CallGenerator::createMethodeCall(module, instance,  args, i, bb);
}


Value* CallGenerator::createMethodeCall(Module *module, Value *instance,
					 std::vector<Value*> args, Value *index, BasicBlock *bb) {

	std::vector<Value*> arg(args);

	Value *callee = NULL; // Load Function

	arg.insert(arg.begin(), instance);

	return new CallInst::Create(callee, arg, bb);
}


Value* CallGenerator::createStaticMethodeCall(Module *module, std::string funcName,
					   std::vector<Value*> list_args, BasicBlock *bb) {

	Function *f = FunctionGenerator::getFunction(module, funcName);

	return new CallInst::Create(f, list_args, bb);
}


// Cree un Instruction d'appelle d'affichage
// Il faudra faire attention au type passée.
// str doit etre de type i8*
Value* CallGenerator::createPrintCall(Module *module, Value *str, BasicBlock *bb) {

	LLVMContext &ctx = str->getContext();
	
	Type *t = str->getType();
	if(!t->isPointerTy())
		std::cerr << "Erreur lors de l'appel du print" << "\n";

		return NULL;

  std::vector<Value*> args;
		
  args.push_back(v);

  CallInst::Create(f2, args, "", bb);

  return CallInst::Create(f, args, "",bb);
}



