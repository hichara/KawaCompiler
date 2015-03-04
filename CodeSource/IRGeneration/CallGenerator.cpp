#include "CallGenerator.h"
#include "FunctionGenerator.h"




Value* CallGenerator::createMethodeCall(Module *module, Value *instance,
					 std::vector<Value*> args, int index, BasicBlock *bb) {

	return NULL;
}


Value* CallGenerator::createMethodeCall(Module *module, Value *instance,
					 std::vector<Value*> args, Value *index, BasicBlock *bb) {

	return NULL;
}


Value* CallGenerator::createStaticMethodeCall(Module *module, std::string funcName,
					   std::vector<Value *> list_args, BasicBlock *bb) {

	return NULL;
}


// Cree un Instruction d'appelle d'affichage
// Il faudra faire attention au type passée.
// str doit etre de type [n * i8]*
Value* CallGenerator::createPrintCall(Module *module, Value *str, BasicBlock *bb) {

	LLVMContext &ctx = str->getContext();
	
	Type *t = str->getType();
	if(!t->isPointerTy())
		std::cerr << "Erreur lors de l'appel du print" << "\n";

		return NULL;

	Constant *zero = ConstantInt::get(Type::getInt32Ty(ctx), 0);

	std::vector<Value *> idx, args;
	idx.push_back(zero);
	idx.push_back(zero);

	Value *v = GetElementPtrInst::Create(str, idx, "", bb);

	args.push_back(v);

	Function *f = FunctionGenerator::getPrintFunction(module);

	return CallInst::Create(f, args, "",bb);
}



