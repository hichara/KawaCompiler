/**
* Creator Hichara
*/
/*

#include "BlockGenerator.h"


	//cree un bloc
	BasicBlock* createBlock(LLVMContext &context, std::string name = "") {
		return BasicBlock::Create(context, name);
	}

	//cree un bloc if
	BasicBlock *createIFBloc(LLVMContext &context) {
		return BasicBlock::Create(context, "IF");
	} 

	//cree un bloc un bloc if
	BasicBlock *createElseBloc(LLVMContext &context) {
		return BasicBlock::Create(context, "ELSE");
	}

	//cree un bloc else if
	BasicBlock *createElseIFBloc(LLVMContext &context) {
		return BasicBlock::Create(context, "ELSE_IF");
	}

	// intialise un bloc if
	BasicBlock* intiIFBlock(BasicBlock *current,  BasicBlock *ifBloc, BasicBlock *notIf, Value *cond) {

		BranchInst *br1 = BranchInst::Create(ifBloc, notIf, cond, current);

		ifBloc->moveAfter(current);

		return ifBloc;
	}

	// initialise else if
	BasicBlock* initElseIfBlock(BasicBlock *predBloc, BasicBlock *elseIFBloc, BasicBlock *notIF, Value *cond) {

		BasicBlock *b = BasicBlock::Create(predBloc->getContext());

		b->moveAfter(predBloc);
		elseIFBloc->moveAfter(b);

		BranchInst *br = BranchInst::Create(elseIFBloc, notIF, cond, b); 

		return elseIFBloc;
	}

	// initialise un bloc else
	BasicBlock* initElseBlock(BasicBlock *predBloc, BasicBlock *elseBloc) {
		elseBloc->moveAfter(predBloc);

		return predBloc;
	}


	// initialise un bloc end if
	BasicBlock* initEndIF(BasicBlock *current, BasicBlock *endIF) {

		BranchInst *br = BranchInst::Create(endIF, current);

		return endIF;
	} */