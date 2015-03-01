#include "StructureClassGenerator.h"









Type *TypeGenerator::createClassType(Module *module,
					std::string name, 
					std::vector<std::string> list_type,
					std::vector<bool> list_val) {

	if(list_val.size() == 0)
		return NULL;

	if(list_type.size() == 0)
		return NULL;

	if(list_val.size() != list_type)
		return NULL;

	std::vector<Type*> res;
	Type *t;

	for(int i = 0; i < list_type.size(); i++) {
		
		t = StrToLLVMType(list_type[i]);

		if(!list_val[i])
			t = t->getPointerTo();
		
		res.push_back(t);
	}

	std::string name_struct =
		 NameBuilder::buildStructTypeName(name);

    StructType *maClassStruct = 
    	StructType::create(
    		module->getContext(), 
    		array_type,
    		name_struct);

    std::vector<Type *> ar2;	

    ar2.push_back(montype->getPointerTy());
    ar2.push_back(Type::getInt8Ty()->getPointerTo());

    std::string name_class =
    	NameBuilder::buildClassTypeName(name);

    StructType *maClass = StrToLLVMType(name_class);


    return monClass;
}

Type *TypeGenerator::createClassStructType(std::string name, 
	std::vector<std::string> list,
	std::vector<bool> list_val) {

}


// Retourne le type associé à une chaine de caractere
// Null Sinon
// Dans le cas d'une classe, si la classe n'existe pas, on renvoie un type opaque
Type *TypeGenerator::StrToLLVMType(Module *module, std::string type) {

	LLVMContext &context = module->getContext();

	if(type == VOID)
		return Type::getVoidTy(context);

	if(type == INT)
		return Type::getInt32Ty(context);

	if(type == DOUBLE)
		return Type::getDoubleTy(context);

	if(type == FLOAT)
		return Type::getFloatTy(context);

	std::string lt = KAWA_CLASS_PREFIX + type;

	Type *t = module->getTypeByName(lt);

	if(t == NULL)
		return StructType::createType(module->getContext, lt); 

	return NULL;
}
