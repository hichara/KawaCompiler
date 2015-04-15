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

#include "llvm/Target/TargetLibraryInfo.h"
#include "llvm/ADT/Triple.h"


#include "llvm/IR/Type.h"

#include "FunctionGenerator.h"

using namespace llvm;



Function *createMainFunction(Module *module) {
  LLVMContext &context = module->getContext();

  std::vector<Type *> empty;

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), empty, false);

  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage ,"main", module);

  return f;
}

Function *createStrLen(Module *module) {
  LLVMContext &context = module->getContext();

  std::vector<Type *> type_args;
  type_args.push_back(
      Type::getInt8Ty(context)->getPointerTo());

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), type_args, false);

  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage, "strlen", module);

  f->addFnAttr(Attribute::NoUnwind);

  return f;
}

Function *createSrtCat(Module *module) {

  LLVMContext &context = module->getContext();

  Type* i8ptr = Type::getInt8Ty(context)->getPointerTo();

  std::vector<Type *> type_args;
  type_args.push_back(i8ptr);
  type_args.push_back(i8ptr);

  FunctionType *ft = FunctionType::get(i8ptr, type_args, false);

  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage, "strcat", module);

  return f;
}


Function *createPutsFunction(Module *module) {
  LLVMContext &context = module->getContext();

  std::vector<Type *> type_args;
  type_args.push_back(
      Type::getInt8Ty(context)->getPointerTo());

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), type_args, false);

  Function *f = Function::Create(ft, GlobalValue::ExternalLinkage, "puts", module);

  f->addFnAttr(Attribute::NoUnwind);

  return f;
}


int main() {
  InitializeNativeTarget();
  LLVMContext &Context = getGlobalContext();
  IRBuilder<> Builder(getGlobalContext());



  Module *myModule = new Module("Nasser Module", Context);
  

  Function *f1 = FunctionGenerator::getOrCreateMainFunction(myModule);
  Function *f2 = FunctionGenerator::getOrCreatePutsFunction(myModule);
  Function *f3 = FunctionGenerator::getOrCreateStrlenFunction(myModule);
  Function *f4 = FunctionGenerator::getOrCreateStrcatFunction(myModule);
  Function *f5 = FunctionGenerator::getOrCreateIntToStrFunction(myModule);
  Function *f6 = FunctionGenerator::getOrCreateDoubleToStrFunction(myModule);

  BasicBlock* bb = BasicBlock::Create(myModule->getContext(), "entry", f1);

  Constant *cc = ConstantDataArray::getString(Context, "Zapaato\0", true);

  Constant *zero = ConstantInt::get(Type::getInt32Ty(Context), 0);
 
  Constant *kinze = ConstantInt::get(Type::getInt32Ty(Context), 15);
  Constant *fff = ConstantFP::get(Type::getDoubleTy(Context), 15.05662f);

  AllocaInst *ab = new AllocaInst(Type::getInt8Ty(Context), kinze,"", bb);
  LoadInst *loadB = new LoadInst (ab, "zb", bb);
  std::vector<Value *> idx, args, args2, args3;

  idx.push_back(zero);

  AllocaInst *a = new AllocaInst(cc->getType(), "",bb);

  StoreInst *s = new StoreInst(cc, a, bb);

  Value *v = new BitCastInst(a, Type::getInt8Ty(Context)->getPointerTo(), "", bb);

  Value *vim = CallInst::Create(f5, kinze, "", bb);
  Value *vf = CallInst::Create(f6, fff, "", bb);

  Value *sizeZ = CallInst::Create(f3, vf, "", bb);
  Value *vZ = CallInst::Create(f5, sizeZ, "", bb);


  args.push_back(v);
  args2.push_back(vim);
  args3.push_back(vim);

  CallInst::Create(f2, v,   "",bb);
  CallInst::Create(f2, vim, "",bb);
  CallInst::Create(f2, vf,  "",bb);
  CallInst::Create(f2, vZ,  "",bb);


  ReturnInst::Create(Context, zero, bb);

/*
  GlobalVariable *gv = myModule->getGlobalVariable("KAWA_FORMAT_INT_TO_STRING");

  if(gv == NULL) {
    Type *i8ptr = Type::getInt8Ty(Context)->getPointerTo();

    Constant* ar = ConstantDataArray::getString(Context, "%d");


    gv = new GlobalVariable (*myModule, 
                ar->getType(),
                true,
                GlobalValue::ExternalLinkage ,
                ar, 
                "KAWA_FORMAT_INT_TO_STRING");
  }

 */  

  myModule->dump();
//  ab->dump();
//  ab->getType()->dump();
// loadB->getType()->dump();

  return 0;
}