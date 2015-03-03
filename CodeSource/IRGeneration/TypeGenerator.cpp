#include "TypeGenerator.h"





// Cree le type associé a une instance de classe et la structure contenant les attributs
StructType *TypeGenerator::createClassType(Module *module,
					std::string className,
					std::vector<std::string> att_names,
					std::vector<std::string> list_types, 
					std::vector<bool> isValue,
					std::vector<bool> isStatic) {

	if(isValue.size() == 0)
		return NULL;

	if(isValue.size() != list_type.size() ||
	   isValue.size() != isStatic.size() ||
	   isValue.size() != att_names.size())
		return NULL;

    std::string name_class =
    	NameBuilder::buildClassTypeName(className);

    StructType *maClass = StrToLLVMType(name_class);

	if(!maClass->isOpaque())
		KawaUtilitary::stopGenerationIR(CLASS_AREADY EXIST);

	std::string name_struct =
		 NameBuilder::buildStructTypeName(className);


	std::vector<Type*> res;
	std::string attName, indexName;
	Type *t;

	int indexAtt = 0;

	for(int i = 0; i < list_type.size(); i++) {
		
		t = StrToLLVMType(list_type[i]);

		if(!isValue[i])
			t = t->getPointerTo();		
		
		if(!isStatic[i]) {
			res.push_back(t);
			indexName = NameBuilder::buildAttributIndexName(
				className, att_names[i]); 

			GlobalVariableGenerator::createIndex(module, indexName, indexAtt);
			indexAtt++;
		} else {
			attName = NameBuilder::buildStaticVariableName(
				className, att_names[i]);

			GlobalVariableGenerator::createStaticAttribute(
				module, attName, list_types[i]);
		}
	}

    StructType *maClassStruct = 
    	StructType::create(
    		module->getContext(), 
    		array_type,
    		name_struct);

    std::vector<Type *> ar2;	
    ar2.push_back(maClassStruct->getPointerTy());
    ar2.push_back(Type::getInt8Ty()->getPointerTo());

    maClass->setBody(ar2);

    return maClass;
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


