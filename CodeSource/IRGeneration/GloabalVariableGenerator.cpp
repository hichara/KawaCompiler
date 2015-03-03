#include "GlobalVariableGenerator.h"



//Cree une variable statique
Value* GlobalVariableGenerator::createStaticAttribute(
							Module *module, std::string className ,
							std::string name, std::string type) {

	std::string varN = NameBuilder::build(className, name);

	Type *t = TypeGenerator::StrToLLVMType(module, type);

	GlobalVariable *gv = new GlobalVariable(module,
	 		t, false, GlobalValue::CommonLinkage, 
	 		0, varN);

	return gv;
}

// Retourne une variable statique
Value* GlobalVariableGenerator::getStaticAttribut(Module *module, std::string className, std::string name) {
	std::string varN = NameBuilder::build(className, name);

	return module->getGlobalVariable(varN);
}


// Cree un l'index d'un attribut
Value* GlobalVariableGenerator::createOfIndexMember(Module *module, std::string name, int index) {

	Type *t = Type::getInt32Ty(module->getContext());

	Constant *c = ConstantInt::get(t ,index);

	GlobalVariable *gv = new GlobalVariable(module,
	 		t, false, GlobalValue::CommonLinkage, 
	 		c, name);

	return gv;
}

// Retourne un objet value contenant un entier
Value* GlobalVariableGenerator::getIndexOfMember(Module *module, std::string name) {

	GlobalVariable *g = module->getGlobalVariable (name);

	if(!g->getType() != Type::getInt32Ty(module->getContext()))
		return NULL;

	Value *v = new LoadInst(g, MEMBER_INDEX);

	return v;	
}



// Creee une table AdHoc
Value* GlobalVariableGenerator::createAdHocTable(Module *module,
						std::string classStatic, 
						std::string classDynamic,
						std::vector<Value *> functions) {

	if() {

	}

	int size = functions.size();
	Type* i8ptr = Type::getInt8Ty(module->getContext())->getPointerTo();
	Type*  arty = ArrayType::get(i8ptr, size);

	std::vector<Constant *> casts;
	Constant *cast;

	for(int i = 0; i < list_function.size(); i++) {
		cast = ConstExpr::getBitCast(functions[i], i8ptr);
		casts.push_back(cast);
	}

	std::string tableName = NameBuilder::createAdHocTableName(classStatic, classDynamic);

	GlobalVariable *table = new GlobalVariable(
		module,
		arty,
		true,
		GlobalValue::CommonLinkage,
		casts,
		tableName);

	return table;
}


// Retourne une table AdHoc
Value* GlobalVariableGenerator::getAdHocTable(Module *module,
									std::string classStatic,
									std::string classDynamic) {

	std::string tableName = NameBuilder::createAdHocTable(classStatic, classDynamic);

	return module->getGlobalVariable(tableName);
}

