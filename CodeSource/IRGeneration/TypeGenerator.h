#include "TypeGenerator.h"







class TypeGenerator {

public:
	static StructType* TypeGenerator::createClassType(Module *module,
						std::string className,
						std::vector<std::string> att_names, 
						std::vector<std::string> list_types, 
						std::vector<bool> isValue,
						std::vector<bool> isStatic);

	static Type* StrToLLVMType(Module *module, std::string type);

	static Value* createStaticAttribute(Module *module, std::string className,
						 std::string attributName, std::string type);

	static Value* createClassAttributIndex(Module *module, std::string className, 
						std::string attName, bool isStatic, int i);
}