/**
* Creator Hichara
*/

#include "NameBuilder.h"


std::string NameBuilder::buildFunctionName(std::string className,
										 std::string name,
										 std::string ret_type,
										 std::vector<std::string> list_type,
										 bool isStatic) {

	std::stringstream result;
	std::string tmp;

	if(className == "")
		return "";

	if(name == "")
		return "";

	if(isStatic)
		result << KawaEnumeration::STATIC << "_"; 

	result << className << '.' << name << "_rt_";
	result << strToKawaType(ret_type);
	result << "_pt_";

	if (list_type.size() == 0) {
		result << "_" << KawaEnumeration::KAWA_VOID;
		result.str();
	}

	for(std::vector<std::string>::iterator it = list_type.begin();
		it != list_type.end(); ++it) {

		tmp = strToKawaType((*it));;
		if(tmp == "")
			return "";

		result << "_" << tmp;
	}


	return result.str();
}


std::string buidClassAdHocTableIndex(std::string className) {
	std::stringstream res;

	res << className << "_adHoc_index";

	return res.str();	
}


std::string NameBuilder::buildConstructorName(std::string className, 
							     std::vector<std::string> list_type) {

	std::string tmp;
	std::stringstream result;

	if(className == "")
		return "";

	result << KawaEnumeration::CONSTRUCTOR_PREFIX << className;

	if (list_type.size() == 0) {
		result << "_pt_" << KawaEnumeration::KAWA_VOID;

		return result.str();
	}

	for(int i = 0; i < list_type.size(); i++) {

		tmp = strToKawaType(list_type[i]);

		result << "_pt_" << tmp;
	}

	return result.str();
}


std::string NameBuilder::buildSubConstructorName(std::string className, 
								std::vector<std::string> list_type) {
	std::string tmp;
	std::stringstream result;

	if(className == "")
		return "";

	result << KawaEnumeration::SUB_CONSTRUCTOR_PREFIX << className;

	if (list_type.size() == 0) {
		result << "_pt_" << KawaEnumeration::KAWA_VOID;

		return result.str();
	}

	for(int i = 0; i < list_type.size(); i++) {

		tmp = strToKawaType(list_type[i]);

		result << "_pt_" << tmp;
	}

	return result.str();	
}



// L'index est suceptible d'etre le meme pour toute les tables issues de la meme famille
std::string NameBuilder::buildFunctionIndexName(std::string functionBuiltName) {

	std::stringstream res;

	res << KawaEnumeration::METHODE_INDEX_PREFIX << functionBuiltName;

	return res.str();
}


std::string NameBuilder::buildAdHocTableName(std::string classStatic,
	    									 std::string classDynamique) {

	if(classStatic == "" || classDynamique == "")
		return "";

	std::stringstream res;
	res << KawaEnumeration::ADHOCTABLE_PREFIX << "_" << classStatic << "_" << classDynamique;

	return res.str();
}


std::string NameBuilder::buildgetAdHocTableFunction(std::string staticC, std::string dynamicC) {

	std::stringstream res;
	res << "get_table_" << buildAdHocTableName(staticC, dynamicC);

	return res.str();
}


std::string NameBuilder::buildAttributIndexName(std::string className, std::string name) {

	std::stringstream res;

	res << KawaEnumeration::ATTRIBUT_INDEX_PREFIX << "_" << className << "_" << name;

	return res.str();
}



std::string NameBuilder::buildStaticVariableName(std::string className, 
									std::string name) {

	std::stringstream res;

	res << KawaEnumeration::STATIC << "_" << className << "_" << name;

	return res.str();
}


std::string NameBuilder::buildClassTypeName(std::string className) {

	if(className == "")
		return "";

	std::stringstream result;

	result << KawaEnumeration::KAWA_CLASS_PREFIX << className;

	return result.str();
}


std::string NameBuilder::buildClassStructTypeName(std::string className) {

	if(className == "")
		return "";

	std::stringstream res;

	res << KawaEnumeration::KAWA_CLASS_STRUCT_PREFIX << className;

	return res.str();
}


std::string NameBuilder::strToKawaType(std::string type) {

	std::stringstream result;

	if(type == KawaEnumeration::FLOAT)
		result << KawaEnumeration::KAWA_FLOAT;

	else if(type == KawaEnumeration::INT)
		result << KawaEnumeration::KAWA_INT;

	else if(type == KawaEnumeration::CHAR)
		result << KawaEnumeration::KAWA_CHAR;

	else if(type == KawaEnumeration::DOUBLE)
		result << KawaEnumeration::KAWA_DOUBLE;

	else if(type == KawaEnumeration::STRING)
		result << KawaEnumeration::KAWA_STRING;

	else
		result << buildClassTypeName(type);

	return result.str();
}

std::string NameBuilder::StructNameToClass(std::string n) {
	return n.substr(KawaEnumeration::KAWA_CLASS_PREFIX.length());
}

std::string NameBuilder::LLVMTypeToStr(Type* type) {

	LLVMContext &c = type->getContext();

	if(type == (Type*)Type::getInt32Ty(c))
		return KawaEnumeration::KAWA_INT;

	if(type == (Type*)Type::getInt8Ty(c))
		return KawaEnumeration::KAWA_CHAR;

	if(type == (Type*)Type::getVoidTy(c))
		return KawaEnumeration::KAWA_VOID;

	if(type == (Type*)Type::getFloatTy(c))
		return KawaEnumeration::KAWA_FLOAT;

	if(type == (Type*)Type::getDoubleTy(c))
		return KawaEnumeration::KAWA_DOUBLE;

	if(type == (Type*)Type::getInt8PtrTy(c))
		return KawaEnumeration::KAWA_STRING;

	if(type->isStructTy())
		return KawaEnumeration::KAWA_CLASS_PREFIX + (type->getStructName()).str();

	return "";
}

