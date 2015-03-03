#ifndef NAME_BUILDER_H
#define NAME_BUILDER_H

#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>
#include <cstring> 

#include "llvm/IR/DerivedTypes.h"
#include "KawaEnumeration.h"


class NameBuilder {

public:
	static std::string buildFunctionName(std::string className,
										 std::string name,
										 std::string ret_type,
										 std::vector<std::string> list_type);

	static std::string buildConstructorName(std::string className, 
											std::vector<std::string> list_type);

	static std::string buildMethodeIndexName(std::string functionBuiltName);


	static std::string buildAdHocTableName(std::string classStatic,  
	   									   std::string classDynamique);

	
	static std::string buildStaticVariableName(std::string className,
											   std::string name);

	static std::string buildAttributIndexName(std::string className, std::string Name); 

	static std::string buildClassTypeName(std::string className);


	static std::string buildClassStructTypeName(std::string className);

	static std::string LLVMTypeToStr(Type* type);
};



#endif
