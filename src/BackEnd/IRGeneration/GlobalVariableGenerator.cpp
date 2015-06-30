/**
* Creator Hichara
*/


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

	Constant *c = Constant::getNullValue(type);
	gv->setInitializer(c);

	return gv;
}


Value* GlobalVariableGenerator::getOrCreateIndexOfMember(Module *module, std::string name, int index) {

	GlobalVariable *g = module->getGlobalVariable(name);

	if(g == NULL) {
		Type *t = Type::getInt32Ty(module->getContext());

		g = new GlobalVariable(*module,
	 		t, false, GlobalValue::ExternalLinkage   , 
	 		0, name);
	}

	if(index != -1) {
		Type *t = Type::getInt32Ty(module->getContext());
		Constant *c = ConstantInt::get(t ,index);
		g->setInitializer(c);
	}

	return g;
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

	GlobalVariable *g = module->getGlobalVariable(name);
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
	

	for(int i = 0; i < functions.size(); i++) {
		Constant *cast = ConstantExpr::getBitCast(functions[i], i8ptr);
		casts.push_back(cast);
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


GlobalVariable* GlobalVariableGenerator::getOrCreateFormatIntToSTRING(Module *module) {

	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KawaEnumeration::KAWA_FORMAT_INT_TO_STRING);

	if(gv == NULL) {

		Constant* ar = ConstantDataArray::getString(context, "%d");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KawaEnumeration::KAWA_FORMAT_INT_TO_STRING);
	}

	return gv;
}

GlobalVariable* GlobalVariableGenerator::getOrCreateFormatObjectToSTRING(Module *module) {

	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KawaEnumeration::KAWA_FORMAT_OBJECT_TO_STRING);

	if(gv == NULL) {
		Constant* ar = ConstantDataArray::getString(context, "[object]");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KawaEnumeration::KAWA_FORMAT_OBJECT_TO_STRING);
	}

	return gv;
}

GlobalVariable* GlobalVariableGenerator::getOrCreateFormatStringToSTRING(Module *module) {
	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KawaEnumeration::KAWA_FORMAT_STRING_TO_STRING);

	if(gv == NULL) {
		Constant* ar = ConstantDataArray::getString(context, "%s");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KawaEnumeration::KAWA_FORMAT_STRING_TO_STRING);
	}

	return gv;
}



GlobalVariable* GlobalVariableGenerator::getOrCreateFormatCharToSTRING(Module *module) {

	LLVMContext &context = module->getContext();

	GlobalVariable *gv = module->getGlobalVariable(KawaEnumeration::KAWA_FORMAT_CHAR_TO_STRING);

	if(gv == NULL) {
		Constant* ar = ConstantDataArray::getString(context, "%c");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KawaEnumeration::KAWA_FORMAT_CHAR_TO_STRING);
	}
	return gv;
}

GlobalVariable* GlobalVariableGenerator::getOrCreateFormatDoubleToSTRING(Module *module) {

	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KawaEnumeration::KAWA_FORMAT_DOUBLE_TO_STRING);

	if(gv == NULL) {
		Constant* ar = ConstantDataArray::getString(context, "%f");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KawaEnumeration::KAWA_FORMAT_DOUBLE_TO_STRING);
	}

	return gv;
}



