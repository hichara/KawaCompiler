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
#include <fstream>

#include <stdio.h>
#include <fcntl.h>


#include "llvm/Support/raw_ostream.h"

#include "llvm/Target/TargetLibraryInfo.h"
#include "llvm/ADT/Triple.h"

#include "llvm/IR/Type.h"


#include "FunctionGenerator.h"
#include "TypeGenerator.h"
#include "GlobalVariableGenerator.h"
#include "PrimitiveCreator.h"
#include "CallGenerator.h"
#include "NameBuilder.h"
#include "PrimitiveValueConverter.h"

using namespace llvm;



int main() {

  InitializeNativeTarget();
  LLVMContext &Context = getGlobalContext();
  IRBuilder<> Builder(getGlobalContext());

  Module *myModule = new Module("Module Test", Context);

  Function *f2 = FunctionGenerator::getOrCreatePutsFunction(myModule);

  Function *f3 = FunctionGenerator::getOrCreateStrlenFunction(myModule);

  Function *f4 = FunctionGenerator::getOrCreateStrcatFunction(myModule);

  Function *f5 = FunctionGenerator::getOrCreateIntToStrFunction(myModule);

  Function *f6 = FunctionGenerator::getOrCreateDoubleToStrFunction(myModule);

  Function *f7 = FunctionGenerator::getOrCreateMainFunction(myModule, "argc", "argv");

  Function *f8 = FunctionGenerator::getOrCreateCharToStrFunction(myModule);

  std::vector<std::string> types;
  std::vector<std::string> names;
  std::vector<bool> isstatic;

  types.push_back("int");
  types.push_back("float");
  types.push_back("class_A");
  types.push_back("class_b");
  types.push_back("class_c");
  types.push_back("string");
  types.push_back("double");

  names.push_back("avatar");
  names.push_back("index");
  names.push_back("bossun");
  names.push_back("repre");
  names.push_back("sepe");
  names.push_back("mpm");
  names.push_back("lovea");

  isstatic.push_back(true);
  isstatic.push_back(false);
  isstatic.push_back(false);
  isstatic.push_back(false);
  isstatic.push_back(true);
  isstatic.push_back(false);
  isstatic.push_back(true);

  Type* t1 = TypeGenerator::strToLLVMType(myModule, "CLASSA");

  t1 = TypeGenerator::createClassType(myModule,
            "class_A",
            names, 
            TypeGenerator::strToLLVMType(myModule, types), 
            isstatic);


    GlobalVariable *gv;

    gv = new GlobalVariable (*myModule, 
                t1,
                true,
                GlobalValue::ExternalLinkage ,
                NULL, 
                "KAWA_FORMAT_INT_TO_STRING");


    std::vector<Function *> fncs, fncs2;


    BasicBlock &b3 = f7->getEntryBlock();
    std::vector<Type*> empty;
    std::vector<Value*> empty_v;
    std::vector<std::string> empty_s;


    FunctionType *ftAff = FunctionType::get(Type::getVoidTy(Context), empty, false);
    Function *afficheOk = Function::Create(ftAff, Function::ExternalLinkage, "afficheOk", myModule);
    BasicBlock* b = BasicBlock::Create(Context, "entry", afficheOk);
    std::string s = "afficheOk";
    Value *str = PrimitiveCreator::create(s, b);
    str = PrimitiveCreator::create(14949, b->getContext());
    str = PrimitiveValueConverter::convertToStr(myModule, str, b);
    CallInst::Create(f2, str, "",b);
    Value *v = ReturnInst::Create(Context, NULL, b);


    FunctionType *ftAff2 = FunctionType::get(Type::getVoidTy(Context), empty, false);
    Function *afficheOk2 = Function::Create(ftAff, Function::ExternalLinkage, "afficheOk2", myModule);
    BasicBlock* b2 = BasicBlock::Create(Context, "entry", afficheOk2);
    std::string s2 = "afficheOk2";
    Value *str2 = PrimitiveCreator::create(s2, b2);
    CallInst::Create(f2, str2, "",b2);
    Value *v2 = ReturnInst::Create(Context, NULL, b2);



    Constant *indexA = ConstantInt::get(Type::getInt32Ty(Context), 3);

//    fncs.push_back(f2);
//    fncs.push_back(f3);
//    fncs.push_back(f4);
    fncs.push_back(afficheOk);
    fncs.push_back(afficheOk);
    fncs.push_back(afficheOk);
    fncs.push_back(afficheOk);
    fncs.push_back(afficheOk);
    fncs.push_back(afficheOk);
    fncs.push_back(afficheOk);

    fncs2.push_back(afficheOk2);
    fncs2.push_back(afficheOk2);
    fncs2.push_back(afficheOk2);
    fncs2.push_back(afficheOk2);
    fncs2.push_back(afficheOk2);
    fncs2.push_back(afficheOk2);


//    Value* loadedMethod;

    Value* table = GlobalVariableGenerator::createAdHocTable(myModule,
            "class_A", 
            "class_A",
            fncs);

    Value* table2 = GlobalVariableGenerator::createAdHocTable(myModule,
            "class_B", 
            "class_B",
            fncs2);


    FunctionGenerator::createAdHocTableFunction(myModule, "class_A", "class_A");

    Function *f = FunctionGenerator::getOrCreateConstructor(myModule,
                "class_A",
                empty_s,                  
                empty_s);
      b =  FunctionGenerator::initFunction(f, empty_s, true);
      ReturnInst::Create(Context, NULL, b);

      std::string conName = NameBuilder::buildConstructorName("class_A", empty_s);

     Value* instance = CallGenerator::createStaticMethodeCall(myModule, conName,
                  empty_v, &b3);

     CallGenerator::createMethodeCall(myModule, afficheOk, instance,
                      empty_v, indexA, &b3);


//    CallGenerator::createCallFromTable(myModule, afficheOk,
  //     table,  indexA, empty_v, &b3);


//    CallInst::Create(loadedMethod, empty_v ,"", &b3);
   

    Constant *zero = ConstantInt::get(Type::getInt32Ty(Context), 0);
    v = ReturnInst::Create(Context, zero, &b3);


/*
  BasicBlock* bb = BasicBlock::Create(myModule->getContext(), "entry", f1);

  Constant *cc = ConstantDataArray::getString(Context, "Zapaato\0", true);

  Constant *zero = ConstantInt::get(Type::getInt32Ty(Context), 0);
 

  Constant *kinze = ConstantInt::get(Type::getInt32Ty(Context), 15);
  

  
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
*/
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

  GlobalVariableGenerator::getOrCreateIndexOfMember(myModule, "abs_index");
  GlobalVariableGenerator::getOrCreateIndexOfMember(myModule, "abs_index", 1558);
  GlobalVariableGenerator::getOrCreateIndexOfMember(myModule, "abs_indexcd");



  int fd = open("TEST.TXT", O_CREAT | O_WRONLY, S_IRWXU | S_IRWXG | S_IRWXG);

  raw_fd_ostream my_out(fd, true);

  myModule->print(my_out, NULL);


  myModule->dump();

//  std::cout << Type::getInt8Ty(Context)->isStructTy() << " is struct\n";

  return 0;
}