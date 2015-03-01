#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>



/*
	Classe contruisant le nom des functions, variables et tables.
*/

class NameBuilder {


public:
	static std::string buildFunctionName(std::string className,
										 std::string name,
										 std::string ret_type,
										 std::vector<std::string> list_type);

	static std::string buildConstructorName(std::string className, 
											std::vector<std::string> list_type);

	static std::string buildMethodeIndexName(std::string functionBuiltName);


	static std::string buildAdHocTableName(std::string classA,  // Classe dynamique 
	   									   std::string classB); // Classe statique

	
    static std::string buildStaticVariableName(std::string className,
										 std::string name,
										 std::string ret_type,
										 std::vector<std::string> list_type);

	static std::string buildStaticVariableName(std::string  className,
											   std::string name,
											   std::string type);

	static std::string attributNameBuilder(std::string className, std::string Name, bool isStatic); 

	static std::string buildClassTypeName(std::string className);

	static std::string buildClassStructTypeName(std::string className);

	static std::string LLVMTypeToStr(Type* type);

};