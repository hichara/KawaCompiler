#include "llvm/Analysis/Passes.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/JIT.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/PassManager.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Transforms/Scalar.h"
#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"




class FunctionCodeGenerator {

public:
	static Function *createFonction(Module *module, int index table,
									std::string className,
									std::string name,
									std::string ret_type, 
									std::vector<std::string> args_types,									
									std::vector<std::string> args_names);


	static Function *getFonction(Module *module,
				 				 std::string className,
				 				 std::string name,
				 				 std::string ret_type,
				 				 std::vector<std::string> list_type);


	static Function *getFonction(Module *module, std::string name);

	static void setBody(Module *module,
						std::string functionName,
						std::vector<BasicBlock*> list_block);

};







