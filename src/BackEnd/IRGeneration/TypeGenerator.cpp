#include "TypeGenerator.h"
#include "KawaEnumeration.h"
#include "NameBuilder.h"
#include "KawaUtilitary.h"
#include "GlobalVariableGenerator.h"


// Cree le type associé a une instance de classe et la structure contenant les attributs
StructType* TypeGenerator::createClassType(Module *module,
					std::string className,
					std::vector<std::string> att_names,
					std::vector<Type*> list_types, 
					std::vector<bool> isStatic) {

    StructType *maClass = (StructType*)strToLLVMType(module, className);

	if(!maClass->isOpaque()) {
		KawaUtilitary::stopGenerationIR(KawaEnumeration::ERROR_CLASS_AREADY_EXIST);
	}

	std::string name_struct =
		 NameBuilder::buildClassStructTypeName(className);

	std::vector<Type*> llvm_types;
	std::string attName, indexName;
	Type *t;

	int indexAtt = 0;

	for(int i = 0; i < list_types.size(); i++) {
				
		t = list_types[i];

		t = t->getPointerTo();
		
		if(!isStatic[i]) {
			llvm_types.push_back(t);
			indexName = NameBuilder::buildAttributIndexName(
				className, att_names[i]);

			GlobalVariableGenerator::createIndexOfMember(module, indexName, indexAtt);
			indexAtt++;
		} else {

			GlobalVariableGenerator::getOrCreateStaticAttribut(
				module, className, att_names[i], list_types[i]);
		}
	}

	LLVMContext &context = module->getContext();

    StructType *maClassStruct = 
    	StructType::create(
    		context, 
    		llvm_types,
    		name_struct);

    std::vector<Type*> ar2;	
    ar2.push_back(maClassStruct->getPointerTo());
    ar2.push_back(Type::getInt8Ty(context)->getPointerTo()->getPointerTo());

    maClass->setBody(ar2);

    return maClass;
}

StructType* TypeGenerator::getOrCreateNullObjectType(Module *module) {

	StructType *t = (StructType*)TypeGenerator::strToLLVMType(module, "__null_object");

	if(!t->isOpaque())
		return t;

	std::vector<std::string> att_names;
	std::vector<Type*> list_types;
	std::vector<bool> isStatic;
	std::string className = "__null_object";

	return createClassType(module, className, att_names, list_types, isStatic);
}



// Retourne le type associé à une chaine de caractere
// Null Sinon
// Dans le cas d'une classe, si la classe n'existe pas, on renvoie un type opaque
Type *TypeGenerator::strToLLVMType(Module *module, std::string type) {

	LLVMContext &context = module->getContext();

	if(type == KawaEnumeration::VOID)
		return Type::getVoidTy(context);

	if(type == KawaEnumeration::INT)
		return Type::getInt32Ty(context);

	if(type == KawaEnumeration::CHAR)
		return Type::getInt8Ty(context);

	if(type == KawaEnumeration::DOUBLE)
		return Type::getDoubleTy(context);

	if(type == KawaEnumeration::FLOAT)
		return Type::getFloatTy(context);

	if(type == KawaEnumeration::STRING)
		return Type::getInt8Ty(context)->getPointerTo();

	std::string lt = NameBuilder::buildClassTypeName(type);

	Type *t = module->getTypeByName(lt);

	// Cree une structure opaque
	if(t == NULL)
		return StructType::create(context, lt); 

	return t;
}


Type* TypeGenerator::getPointerOf(Module *module, std::string type, int nb) {

	Type *t = TypeGenerator::strToLLVMType(module, type);

	for(int i = 0; i < nb; i++) {
		t = t->getPointerTo();
	}

	return t;
}

Type* TypeGenerator::getMultiDimensionArray(Module *module, std::string type, std::vector<int> sizes) {

	Type *t = TypeGenerator::strToLLVMType(module, type);
	int n;

	for(int i = 0; i < sizes.size(); i++) {
		n = sizes[sizes.size() - 1 - i];
		t = ArrayType::get(t, n);
	}

	return t;
}


std::vector<Type*> TypeGenerator::strToLLVMType(Module *module, std::vector<std::string> args) {

	std::vector<Type*> types;

	for(int i = 0; i < args.size(); i++) {
		types.push_back(strToLLVMType(module, args[i]));
	}

	return types;
}