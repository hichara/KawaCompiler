






class BasicBlockGenerator {

public:
	static BasicBlock* create(Function* f);
};

class IFBlocGenertor {

public:
	static BasicBlock* create(BasicBlock *before, BasicBlock *after);
};


class IFELSEBlocGenerator {

public:
	static std::vector<BasicBlock*> create(BasicBlock *before, BasicBlock *after);
};
