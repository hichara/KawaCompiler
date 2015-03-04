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
#include <iostream>

#include "llvm/IR/Type.h"


using namespace llvm;



Function *createMainFunction(Module *module) {
  LLVMContext &context = module->getContext();

  std::vector<Type *> empty;

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), empty, false);

  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage ,"main", module);

  return f;
}


Function *createPrintFunction(Module *module) {
  LLVMContext &context = module->getContext();

  std::vector<Type *> type_args;
  type_args.push_back(
      Type::getInt8Ty(context)->getPointerTo());

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), type_args, false);

  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage, "puts", module);

  f->addFnAttr(Attribute::NoUnwind);

  f->arg_begin()->setName("nocapturd");

  return f;
}


int main() {
  InitializeNativeTarget();
  LLVMContext &Context = getGlobalContext();
  IRBuilder<> Builder(getGlobalContext());



  Module *myModule = new Module("Nasser Module", Context);
  

  Function *f1 = createMainFunction(myModule);
  Function *f2 = createPrintFunction(myModule);


/*
  std::vector<Type *> v;



  FunctionType *ft = FunctionType::get(Type::getInt32Ty(Context), v, false);


  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage ,"main", myModule);

  Constant *c = ConstantInt::get(Type::getInt32Ty(Context), 5);
  Value *cc = ConstantExpr::getAdd(c, c);

  BasicBlock *bb = BasicBlock::Create(Context, "entrybloc");

  Value *zz = ReturnInst::Create(Context, c, bb);

  f->getBasicBlockList().push_back(bb);
*/

  myModule->dump(); 



  return 0;
}