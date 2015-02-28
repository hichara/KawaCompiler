#include "TypeGenerator.h"







class TypeGenerator {

public:
	static StructType *createClassType(std::string name, std::vector<std::string> list,
				std::vector<bool> list_val);

	static Type *StrToLLVMType(std::string type, Module *module);

private:
	static StructType *createStructType(std::string name, std::vector<std::string> list,
				std::vector<bool> list_val);

}