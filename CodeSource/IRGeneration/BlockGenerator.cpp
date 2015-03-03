#include "BlockGenerator.h"




BasicBlock* create(Function* f, std::string name="") {
	BasicBlock *bb = BasicBlock::create(f->getContext(), name);


	return bb;
}

BasicBlock* createIFBloc(BasicBlock *pred, Value *cond ,int num);

BasicBlock* createElseBloc(BasicBlock *ifBlock, int num);

BasicBlock* createElIfBloc(BasicBlock *predBlock, int num);

BasicBlock* createwhileBlock(Function *f, Value *cond, int num);

BasicBlock* createForBlock(Function *f, Value *init, Value *cond, Value* it, int num);
