#include "NameBuilder.h"



std::string NameBuilder::buildMethodeName(std::string className,
										 std::string name,
										 std::string ret_type,
										 std::vector<std::string> list_type) {

	std::string result, tmp;

	if(className == "")
		return "";

	if(name == "")
		return "";

	result = className + '.' + name + "_ret:" 
			+ LLVMTypeToStr(StrToLLVMType(ret_type));

	if (list_type.size() == 0) {
		return result + "+" + KAWA_VOID;
	}

	for(std::std::vector<std::string>::iterator it = list_type.begin();
		it != list_type.end(); ++it) {

		tmp = LLVMTypeToStr(StrToLLVMType(*it));;
		if(tmp == "")
			KawaUtilitary::stopGenerationIR(UNKNOWN_TYPE);

		result = result + "+" + tmp;
	}

	return result;
}

std::string NameBuilder::buildConstructorName(std::string className, 
							     std::vector<std::string> list_type) {

	std::string result, tmp;

	if(className == "")
		return "";

	result = "KawaConstructor" + className;

	if (list_type.size() == 0)
		return result + "+" + KAWA_VOID;

	for(std::std::vector<std::string>::iterator it = list_type.begin();
		it != list_type.end(); ++it) {

		tmp = LLVMTypeToStr(TypeGenerator::StrToLLVMType(*it));;
		if(tmp == "")
			KawaUtilitary::stopGenerationIR(UNKNOWN_TYPE);

		result = result + "+" + tmp;
	}

	return result;
}



// L'index est suceptible d'etre le meme pour toute les tables issues de la meme famille
std::string NameBuilder::buildMethodeIndexName(std::string functionBuiltName) {

	std::string res;

	res = METHODE_INDEX_PREFIX + functionBuiltName;

	return res;
}


std::string NameBuilder::buildAdHocTableName(std::string classStatic,
	    									 std::string classDynamique) {

	if(classStatic == "" || classDynamique == "")
		return "";

	std::string res;
	res = ADHOCTABLE_PREFIX + "_" + classStatic + "_" + classDynamique;

	return res;
}
	
std::string NameBuilder::buildAttributIndexName(std::string className, std::string name) {
	std::string res;

	res = ATTRIBUT_INDEX_PREFIX +"_" + className + "_" + name;

	return res;
}

std::string NameBuilder::buildStaticVariableName(std::string className, 
									std::string name) {

	std::string res;

	res STATIC + "_" + className + "_" + name;

	return res;
}



std::string NameBuilder::buildClassTypeName(std::string className) {

	if(className == "")
		return "";
	std::string res;

	res = KAWA_CLASS_PREFIX + className;

	return res;
}


std::string NameBuilder::buildClassStructTypeName(std::string className) {

	if(className == "")
		return "";

	std::string res;

	res = KAWA_CLASS_STRUCT_PREFIX + className;

	return res;
}



std::string NameBuilder::LLVMTypeToStr(Type* type) {

	if(type->isVoidTy())
		return KAWA_VOID;

	if(type->isIntegerTy())
		return KAWA_INT;

	if(type->isDoubleTy())
		return KAWA_DOUBLE;

	if(type->isFloatTy())
		return KAWA_FLOAT;

	if(type->isStructTy())
		return KAWA_CLASS_PREFIX + (type->getStructName()).str();

	return "";
}





