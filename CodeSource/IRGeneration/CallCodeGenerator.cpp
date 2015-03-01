#include "CallCodeGenerator.h"






// Retourne la table conteant les fonctions de l'instance
// instance est de type Kawa_instance_type*

Value *getInstanceTable(Value *instance) {

	Value *zero = ConstantInt::get(Type::getInt32Ty(context), 0);
	Value   *un = ConstantInt::get(Type::getInt32Ty(context), 1);

	std::vector<Value *> list_index;
	list_index.push_back(zero);
	list_index.push_back(un);

	Value *table = GetElementPtrInst::CreateInBounds (instance, list_index, "", bb);

	return table;
}



Value *createRegularMethodeCall(Value *instance, Value *index, IRBuilder<> *builder) {


	return val;
}


static Value *createStaticMethodeCall(std::string functionName, );

static Value *createPrintCall(Value *str, BasicBlock *bb);