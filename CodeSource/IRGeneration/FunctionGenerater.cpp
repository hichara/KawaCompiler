#include "FunctionGenerater.h"







Twine* buildFunctionName(const Twine &className
						const Twine &name,
						std::vector<Type *> args_types) {

	Twine *result;


	result = append(className, "_");
	result = append(result, name);
	result = append(result, name); 




	return result;
}




 Function* FunctionGenerater::getFonction(Module *module,
				 				 const Twine &className,
				 				 const Twine &name
				 				 std::vector<Twine *> args) {
 	

 }


 Function* FunctionGenerater::createFonction(Module *module
									const Twine &className,
									const Twine &name,
									std::vector<Twine *> args_names,
									std::vector<Type *> args_types) {

 }

 void FunctionGenerater::setBody(Module *module,
						const Twine &className,
						std::vector<BasicBlock*> list_block) {

 }

 bool FunctionGenerater::exist(Module *module
				const Twine &className,
				const Twine &name) {

 }
