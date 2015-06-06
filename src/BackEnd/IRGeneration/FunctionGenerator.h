/**
* Creator Hichara
*/


#ifndef FUNC_GEN
#define FUNC_GEN

//#include "llvm/Analysis/Passes.h"
//#include "llvm/ExecutionEngine/ExecutionEngine.h"
//#include "llvm/ExecutionEngine/JIT.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
//#include "llvm/IR/Verifier.h"
//#include "llvm/PassManager.h"
//#include "llvm/Support/TargetSelect.h"
//#include "llvm/Transforms/Scalar.h"

#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"

#include <llvm/IR/ValueSymbolTable.h>


using namespace llvm;


class FunctionGenerator {

public:

	static Function *getFunction(Module *module, std::string name);

	static Function *getConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names);

	static Function* getSubConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names);


	static Function *getOrCreateFunction(Module *module, bool isStatic,
									std::string className,
									std::string name,
									std::string ret_type, 
									std::vector<std::string> args_types,									
									std::vector<std::string> args_names);

	static Function* getOrCreateConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names);

	static Function *getAdHocTableFunction(Module *module, std::string classS, 
								std::string classD);

	static Function *createAdHocTableFunction(Module *module, std::string nameStatic,
								 std::string nameDyn);

	// Fonction primitives
	static Function *getOrCreateMainFunction(Module *module, int nbArgs);

	// Function puts
	static Function *getOrCreatePutsFunction(Module *module);

	// Function printf
	static Function *getOrCreatePrintf(Module *module);

	static Function *getOrCreateSprintf(Module *module);

	static Function *getOrCreateStrlenFunction(Module *module);

	static Function *getOrCreateStrcatFunction(Module *module);

	static Function *getOrCreateMallocFunction(Module *module);

	static Function *getOrCreateCallocFunction(Module *module);

	static BasicBlock *initFunction(Function *f, std::vector<std::string> args_names, bool addThis);

	static void setFunctionBody(Function *f,
						std::vector<BasicBlock*> list_block);

	static Function *getOrCreateIntToStrFunction(Module *module);

	static Function *getOrCreateCharToStrFunction(Module *module);

	static Function *getOrCreateDoubleToStrFunction(Module *module);

	static Function *getOrCreateConcatFunction(Module *module);
};



#endif



