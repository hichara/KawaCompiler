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




class FunctionCodeGenerateur {

public:
	static Function *createFonction(Module *module
									const Twine &className,
									const Twine &name,
									std::vector<Twine *> args_names,
									std::vector<Type *> args_types);


	static Twine* buildFunctionName(const Twine &className
									const Twine &name,
									std::vector<Type *> args_types);


	static Function *getFonction(Module *module,
				 				 const Twine &className,
				 				 const Twine &name
				 				 std::vector<Twine *> args);




	static void setBody(Module *module,
						const Twine &className,
						std::vector<BasicBlock*> list_block);

	static bool exist(Module *module
				const Twine &className,
				const Twine &name);
};







