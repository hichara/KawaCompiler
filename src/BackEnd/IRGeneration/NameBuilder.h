/**
* Creator Hichara
*/

#ifndef NAME_BUILDER_H
#define NAME_BUILDER_H

#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>

#include "llvm/IR/Type.h"


#include "KawaEnumeration.h"


using namespace llvm;


class NameBuilder {

public:
	static std::string buildFunctionName(std::string className,
										 std::string name,
										 std::string ret_type,
										 std::vector<std::string> list_type,
										 bool isStatic);

	static std::string buildConstructorName(std::string className, 
											std::vector<std::string> list_type);

	static std::string buildSubConstructorName(std::string className, 
											std::vector<std::string> list_type);

	static std::string buildFunctionIndexName(std::string functionBuiltName);

	static std::string buildAdHocTableName(std::string classStatic,  
	   									   std::string classDynamique);

	static std::string buildgetAdHocTableFunction(std::string staticC, std::string dynamicC);
	
	
	static std::string buildStaticVariableName(std::string className,
											   std::string name);

	static std::string buildAttributIndexName(std::string className, std::string Name);

	static std::string buildClassTypeName(std::string className);

	static std::string StructNameToClass(std::string n);

	static std::string buildClassStructTypeName(std::string className);

	static std::string LLVMTypeToStr(Type* type);

	static std::string strToKawaType(std::string type);
};



#endif
