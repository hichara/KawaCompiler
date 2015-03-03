#ifndef BLOC_GEN_KAWA
#define BLOC_GEN_KAWA




class BasicBlockGenerator {

public:
	static BasicBlock* create(Function* f, std::string name="");

	static BasicBlock* createIFBloc(Function *f, int num);

	static BasicBlock* createElseBloc(Function *f, int num);

	static BasicBlock* createwhileBlock(Function *f, Value *cond, int num);

	static BasicBlock* createForBlock(Function *f, Value *init, Value *cond, Value* it, int num);
};

#endif
