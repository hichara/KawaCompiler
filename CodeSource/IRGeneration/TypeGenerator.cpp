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

	if(isStatic.size() == 0)
		return NULL;

	if(isStatic.size() != list_types.size() ||
	   isStatic.size() != att_names.size())
		return NULL;

    std::string name_class =
    	NameBuilder::buildClassTypeName(className);

    StructType *maClass = (StructType*)strToLLVMType(module, name_class);

	if(!maClass->isOpaque())
		KawaUtilitary::stopGenerationIR(ERROR_CLASS_AREADY_EXIST);

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
			attName = NameBuilder::buildStaticVariableName(
				className, att_names[i]);

			GlobalVariableGenerator::getOrCreateStaticAttribut(
				module, className, attName, list_types[i]);
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
    ar2.push_back(Type::getInt8Ty(context)->getPointerTo());

    maClass->setBody(ar2);

    return maClass;
}


// Retourne le type associé à une chaine de caractere
// Null Sinon
// Dans le cas d'une classe, si la classe n'existe pas, on renvoie un type opaque
Type *TypeGenerator::strToLLVMType(Module *module, std::string type) {

	LLVMContext &context = module->getContext();

	if(type == VOID)
		return Type::getVoidTy(context);

	if(type == INT)
		return Type::getInt32Ty(context);

	if(type == CHAR)
		return Type::getInt8Ty(context);

	if(type == DOUBLE)
		return Type::getDoubleTy(context);

	if(type == FLOAT)
		return Type::getFloatTy(context);

	if(type == STRING)
		return Type::getInt8Ty(context)->getPointerTo();

	std::string lt = KAWA_CLASS_PREFIX + type;

	Type *t = module->getTypeByName(lt);

	// Cree une structure opaque
	if(t == NULL)
		return StructType::create(context, lt); 

	return NULL;
}


static Type* getPointerOf(Module *module, std::string type, int nb) {

	Type *t = TypeGenerator::strToLLVMType(module, type);

	for(int i = 0; i < nb; i++) {
		t = t->getPointerTo();
	}

	return t;
}

static Type* getMultiDimensionArray(Module *module, std::string type, std::vector<int> sizes) {

	Type *t = TypeGenerator::strToLLVMType(module, type);
	int n;

	for(int i = 0; i < sizes.size(); i++) {
		n = sizes[sizes.size() - 1 - i];
		t = ArrayType::get(t, n);
	}

	return t;
}


