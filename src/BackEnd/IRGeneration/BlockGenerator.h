/**
* Creator Hichara
*/

/*
#ifndef BLOC_GEN_KAWA
#define BLOC_GEN_KAWA


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
#include <string>
#include <vector>

#include "llvm/IR/Type.h"

using namespace llvm;


class BasicBlockGenerator {

public:

	//cree un bloc
	static BasicBlock* createBlock(LLVMContext &context, std::string name = "");

	//cree un bloc ifs
	static BasicBlock *createIFBloc(LLVMContext &context);

	//cree un bloc if
	static BasicBlock *createElseBloc(LLVMContext &context);

	//cree un bloc else if
	static BasicBlock *createElseIFBloc(LLVMContext &context);


	// intialise un bloc if
	static BasicBlock* intiIFBlock(BasicBlock *current,  BasicBlock *ifBloc, BasicBlock *notIf, Value *cond);


	// initialise else if
	static BasicBlock* initElseIfBlock(BasicBlock *predBloc, BasicBlock *elseIFBloc, BasicBlock *notIF, Value *cond);

	// initialise un bloc else
	static BasicBlock* initElseBlock(BasicBlock *predBloc, BasicBlock *elseBloc);

	// initialise un bloc end if
	static BasicBlock* initEndIF(BasicBlock *current, BasicBlock *endIF);

	static BasicBlock* closeCase();

	static endFor(BasicBlock *forB, BasicBlock  *next);

	static endWhile(BasicBlock *whileB, BasicBlock *next);
};

#endif

*/