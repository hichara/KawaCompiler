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


using namespace llvm;



int main() {


  InitializeNativeTarget();
  LLVMContext &Context = getGlobalContext();

  IRBuilder<> Builder(Context);


  Module *myModule = new Module("Nasser Module", Context);


  std::vector<Type*> Doubles, array_type, empty_vector;
  std::vector<Value*> val_emp;
 

  // Type::get???Ty(Context) : Renvoie un pointeur de type Type
  Doubles.push_back(Type::getDoubleTy(Context));

  array_type.push_back(Type::getInt8Ty(Context));
  array_type.push_back(Type::getFloatTy(Context));



  StructType *montype = StructType::create(myModule->getContext(), array_type, "Mon_type");


 PointerType *ptr = PointerType::get(montype, 0);
 PointerType *ptrptr = PointerType::get(ptr, 0);


 Doubles.push_back(montype);
 Doubles.push_back(ptr);
 Doubles.push_back(ptrptr);



  FunctionType *FT = FunctionType::get(
      Type::getInt32Ty(Context) /* Type retourner par la fonction*/,
      Doubles ,/* Array ou vecteur des parametres de la fonction */
       false);

  FunctionType *FT2 = FunctionType::get(
      Type::getVoidTy(Context) /* Type retourner par la fonction*/,
      empty_vector ,/* Array ou vecteur des parametres de la fonction */
       false);



  Function *myFunction = (Function*) myModule->getOrInsertFunction ("MyFonction_FloatDoubleint", FT);


  Function *myFunction2 = (Function*) myModule->getOrInsertFunction ("MyFonction_Float@Doubleint2", FT2);


  BasicBlock *bb = BasicBlock::Create(getGlobalContext(), "Exemple", myFunction);

  BasicBlock *bb2 = BasicBlock::Create(getGlobalContext(), "Exemple2", myFunction);


  Value *deux = ConstantInt::get(Type::getInt32Ty(Context), 2);
  Value *trois = ConstantInt::get(Type::getInt32Ty(Context), 3);
  Value *zero = ConstantInt::get(Type::getInt32Ty(Context), 0);


  ReturnInst::Create(Context, deux, bb);

  Builder.SetInsertPoint(bb);

  Value *cast = CastInst::CreateIntegerCast(deux, Type::getInt64Ty(Context), true, "", bb);

  GlobalVariable *gv = new GlobalVariable(*myModule, Type::getInt32Ty(Context), false,
         GlobalValue::CommonLinkage,0, "My_class");

  CallInst::Create(myFunction2, val_emp, "", bb);

  std::vector<Value *> list_a;

  list_a.push_back(zero);


  Value *zz = GetElementPtrInst::Create (gv, list_a, "", bb);
  Value *zzl = GetElementPtrInst::CreateInBounds (gv, list_a, "", bb);

//  cast->getType()->dump();


  Builder.CreateRet (trois);

  BasicBlock *v = NULL;

  std::string cc = "cdc";


  ConstantInt *zara = ConstantInt::get(Type::getInt32Ty(Context), 7);

  std::vector<Constant *> l;
  l.push_back(zara);
  l.push_back(zara);
  l.push_back(zara);



  Value *z = ConstantDataArray::getString (Context, cc, true);

  Value *vvz = ConstantDataVector::getSplat (1, zara);


//  Value *r = ConstantDataArray::get(Context, l);

  ArrayType *at = ArrayType::get(
    Type::getInt32Ty(Context), 4);

//  at->dump();

  Constant *int_t = ConstantArray::get(at, l);

//  int_t->dump();

  GlobalVariable *gr = new GlobalVariable(*myModule,
           at,
            true, 
            GlobalValue::CommonLinkage,
            int_t,
            "My_table");

 int elsr[] = {25, 4, 8};

 Constant *vcd = ConstantDataArray::get(Context, elsr);

 vcd->dump();
/*
  iplist<GlobalVariable> &g = myModule->getGlobalList();

  int ii = g.size();

  for(iplist<GlobalVariable>::iterator i = g.begin(); i != g.end(); i++ ) {
    i->dump();
  }*/

 /* StructType *minet = StructType::create( myModule->getContext(), (new Twine("Mon_type"))->getSingleStringRef() );

  minet->dump();*/






/*
  Instruction *zen = CastInst::CreateIntegerCast(deux, Type::getInt64Ty(Context), true, "zen");
  Instruction *zen2 = CastInst::CreateIntegerCast(zen, Type::getInt32Ty(Context), true, "zen");


  //zen->insertAfter(bb->end());
//  bb->getInstList().insertAfter(zen);
  bb->getInstList().push_back(zen);
  bb->getInstList().push_back(zen2);

  zen->dump();
  */
  //Structure d'un Classe

  /*

   ClassA{
     int a;
     int b;
     ClassB B;

     int foo1();

     int foo2(int a, int b);
   }

   ClassB {
     int a;
     int b;
   }

   ClassC extends ClassA {

     int foo1() {
       //Autre chose
     }
   }



  */




  myModule->dump(); 


  return 0;
}
