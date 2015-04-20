#include "GlobalVariableGenerator.h"

#include "KawaUtilitary.h"
#include "NameBuilder.h"
#include "TypeGenerator.h"


//Cree une variable statique
Value* GlobalVariableGenerator::getOrCreateStaticAttribut(
							Module *module, std::string className ,
							std::string name, Type* type = NULL) {

	std::string varN = NameBuilder::buildStaticVariableName(className, name);

	Value* v = module->getGlobalVariable(varN);

	if(v != NULL)
		return v;

	if(type == NULL)
		return NULL;

	GlobalVariable *gv = new GlobalVariable(*module,
	 		type, false, GlobalValue::ExternalLinkage , 
	 		0, varN);

	return gv;
}


// Cree un l'index d'un attribut
Value* GlobalVariableGenerator::createIndexOfMember(Module *module, std::string name, int index) {

	Type *t = Type::getInt32Ty(module->getContext());

	Constant *c = ConstantInt::get(t ,index);

	GlobalVariable *gv = new GlobalVariable(*module,
	 		t, false, GlobalValue::ExternalLinkage   , 
	 		c, name);

//	gv->getType()->dump();

	return gv;
}

// Retourne un objet value contenant un entier
Value* GlobalVariableGenerator::getIndexOfMember(Module *module, std::string name) {

	LLVMContext &c = module->getContext();
	Type *t;
	GlobalVariable *g = module->getGlobalVariable(name);

	t = Type::getInt32Ty(c)->getPointerTo();

	if(g->getType() != t)
		KawaUtilitary::stopGenerationIR(ERROR_UNKNOW_INDEX);

	Value *v = new LoadInst(g);

	return v;	
}



// Creee une table AdHoc
Value* GlobalVariableGenerator::createAdHocTable(Module *module,
						std::string classStatic, 
						std::string classDynamic,
						std::vector<Function *> functions) {

	int size = functions.size();
	Type* i8ptr = Type::getInt8Ty(module->getContext())->getPointerTo();
	ArrayType*  arty = ArrayType::get(i8ptr, size);

	std::vector<Constant *> casts;
	std::string indexName;
	Constant *cast;

	for(int i = 0; i < functions.size(); i++) {
		cast = ConstantExpr::getBitCast(functions[i], i8ptr);
		casts.push_back(cast);
		indexName = NameBuilder::buildFunctionIndexName(functions[i]->getName().str());
		createIndexOfMember(module, indexName, i);
	}

	std::string tableName = NameBuilder::buildAdHocTableName(classStatic, classDynamic);

	Constant *gtable = ConstantArray::get(arty, casts);

	GlobalVariable *table = new GlobalVariable(
		*module,
		arty,
		true,
		GlobalValue::ExternalLinkage,
		gtable,
		tableName);

	
	

	return table;
}


// Retourne une table AdHoc
Value* GlobalVariableGenerator::getAdHocTable(Module *module,
									std::string classStatic,
									std::string classDynamic) {

	std::string tableName = NameBuilder::buildAdHocTableName(classStatic, classDynamic);

	return module->getGlobalVariable(tableName);
}

