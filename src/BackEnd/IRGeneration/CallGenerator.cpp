/**
* Creator Hichara
*/

#include "CallGenerator.h"
#include "FunctionGenerator.h"
#include "PrimitiveValueConverter.h"


Value* CallGenerator::createMethodeCall(Module *module, Function *staticRep, Value *instance,
					 std::vector<Value*> args, int index, BasicBlock *bb) {

	Constant *ind = ConstantInt::get(Type::getInt32Ty(module->getContext()), index);
	
	return CallGenerator::createMethodeCall(module, staticRep, instance, args, ind, bb);
}

Value* CallGenerator::createMethodeCall(Module *module, Function *f, Value *instance,
					 std::vector<Value*> args, Value *index, BasicBlock *bb) {

	LLVMContext &context = module->getContext();
	IRBuilder<> builder(context);
	builder.SetInsertPoint(bb);

	std::vector<Value *> indexes, casted;

	indexes.push_back(ConstantInt::get(Type::getInt32Ty(context), 0));
	indexes.push_back(ConstantInt::get(Type::getInt32Ty(context), 1));		

	Value *adr_table = builder.CreateGEP(instance, indexes);
	Value *table = builder.CreateLoad(adr_table);

	unsigned Idx = 0, size = args.size();

	for(Function::arg_iterator AI = f->arg_begin(); Idx != size;
	       ++AI, ++Idx) {
		Value *c = builder.CreateBitCast(args[Idx], AI->getType());
		casted.push_back(c);
	}

    return createCallFromTable(module, f, table,  index, casted, bb);
}

Value* CallGenerator::createCallFromTable(Module *module, Function *f, Value *table, 
	Value* index, std::vector<Value*> args, BasicBlock *bb) {
	LLVMContext &context = module->getContext();
	IRBuilder<> builder(context);
	builder.SetInsertPoint(bb);

	Type *cast_t = f->getType()->getPointerTo();

	std::vector<Value *> indexes, casted;

	Value *v1 = builder.CreateBitCast(table, cast_t);

	indexes.push_back(index);
	Value *v3 = builder.CreateGEP(v1, indexes);

	Value *v4 = builder.CreateLoad(v3);

	unsigned Idx = 0, size = args.size();

	for(Function::arg_iterator AI = f->arg_begin(); Idx != size;
	       ++AI, ++Idx) {

		Value *c = builder.CreateBitCast(args[Idx], AI->getType());
		casted.push_back(c);
	}

	return CallInst::Create(v4, args, "",bb);	
}



// Cree un appel statique
Value* CallGenerator::createStaticMethodeCall(Module *module, std::string funcName,
					   std::vector<Value*> args, BasicBlock *bb) {

	IRBuilder<> builder(module->getContext());
	builder.SetInsertPoint(bb);

	Function *f = FunctionGenerator::getFunction(module, funcName);

	std::vector<Value*> casted;

	unsigned Idx = 0, size = args.size();

	for(Function::arg_iterator AI = f->arg_begin(); Idx != size;
	       ++AI, ++Idx) {

		Value *c = builder.CreateBitCast(args[Idx], AI->getType());
		casted.push_back(c);
	}

	return CallInst::Create(f, casted, "", bb);
}


// Cree un Instruction d'appelle d'affichage
// Il faudra faire attention au type passée.
// str doit etre de type i8*
Value* CallGenerator::createPrintCall(Module *module, Value *str, BasicBlock *bb) {

  Value *v = PrimitiveValueConverter::convertToStr(module, str, bb);	

  Function *f = FunctionGenerator::getOrCreatePutsFunction(module);

  std::vector<Value *> arg;
  arg.push_back(str);

  return CallInst::Create(f, arg, "", bb);
}



