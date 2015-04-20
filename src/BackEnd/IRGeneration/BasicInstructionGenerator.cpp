#include "BasicInstructionGenerator.h"
#include "GlobalVariableGenerator.h"
#include "FunctionGenerator.h"
#include "CallGenerator.h"
#include "NameBuilder.h"


Value* BasicInstructionGenerator::createDeclaration(std::string varName, Type *type, BasicBlock *b) {
	IRBuilder<> builder(type->getContext());
	builder.SetInsertPoint(b);

	return  builder.CreateAlloca(type, NULL, varName);
}

Value* BasicInstructionGenerator::createAffectation(Module *module, std::string className, Value *target, Value *val, BasicBlock *b) {
	IRBuilder<> builder(module->getContext());
	builder.SetInsertPoint(b);

	std::vector<Value*> indexI, empty;
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	Value *v1 = builder.CreateGEP(val, indexI);
	Value *data = builder.CreateLoad(v1);

	std::vector<Value*> indexII;
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 1));
	Value *v2 = builder.CreateGEP(val, indexII);
	Value *table = builder.CreateLoad(v2);

	std::string varName = NameBuilder::buidClassAdHocTableIndex(className);
	Value *adHocIndex = GlobalVariableGenerator::getIndexOfMember(module, varName);

	std::string s = NameBuilder::buildgetAdHocTableFunction(className, className);
	Function *fs = FunctionGenerator::getFunction(module, s);
	Value* newTable = CallGenerator::createMethodeCall(module, fs, val,
					 empty, adHocIndex, b);

	Value* v3 = builder.CreateGEP(target, indexI);
	Value *oldata = builder.CreateLoad(v3);
	Value *v4 = builder.CreateBitCast(data, oldata->getType());

	Value *v5 = builder.CreateGEP(target, indexII);

	builder.CreateStore(newTable, v5);
	builder.CreateStore(v4, v3);
	builder.CreateStore(newTable, table);

	return target;
}



ReturnInst* BasicInstructionGenerator::createReturn(BasicBlock *b, Type* type, Value *v) {

	IRBuilder<> builder(b->getContext());
	builder.SetInsertPoint(b);

	if(type == NULL)
		return builder.CreateRetVoid();

	if(v == NULL)
		return builder.CreateRet(Constant::getNullValue(type));


	Value* cast = builder.CreateBitCast(v, type);

	return builder.CreateRet(cast);
}




