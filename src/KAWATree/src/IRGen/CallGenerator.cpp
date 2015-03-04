/**
 * CallGenerator.Cpp
 * Author : adjibnas
 * 
 *
 */

#include "CallGenerator.h"
#include "FunctionGenerator.h"


Value* CallGenerator::createMethodeCall(Module *module, Value *instance,
					 std::vector<Value*> args, int index, BasicBlock *bb) {

	// A Completer
	return NULL;
}


Value* CallGenerator::createMethodeCall(Module *module, Value *instance,
					 std::vector<Value*> args, Value *index, BasicBlock *bb) {

	// A Completer
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
	if(!t->isArrayTy()) {
		std::cerr << "Error call print :";
		std::cerr << "args type = ";
		t->dump();
		std::cerr << "Type expected [n * i8]";
		return NULL;
	}

	std::vector<Value *> args;

	Function *f = FunctionGenerator::getPrintFunction(module); 

    AllocaInst *a = new AllocaInst(str->getType(), "",bb);

    new StoreInst(str, a, bb);

    Value *v = new BitCastInst(a, Type::getInt8Ty(ctx)->getPointerTo(), "", bb);

    args.push_back(v);

    return CallInst::Create(f, args, "",bb);
}



