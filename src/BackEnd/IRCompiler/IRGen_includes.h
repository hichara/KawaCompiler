#ifndef IRG_INC__H
#define IRG_INC__H

#include "llvm/Analysis/Passes.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/PassManager.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Support/raw_ostream.h"
#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>
#include <iostream>

#include "llvm/IR/Type.h"


#include "../IRGeneration/BasicInstructionGenerator.h"
#include "../IRGeneration/FunctionGenerator.h"
#include "../IRGeneration/TypeGenerator.h"
#include "../IRGeneration/GlobalVariableGenerator.h"
#include "../IRGeneration/NameBuilder.h"
#include "../IRGeneration/TypeGenerator.h"
#include "../IRGeneration/PrimitiveCreator.h"
#include "../IRGeneration/CallGenerator.h"
#include "../IRGeneration/KawaUtilitary.h"
#include "../IRGeneration/PrimitiveValueConverter.h"
#include "../IRGeneration/PrimitiveBinaryOperationGenerator.h"


#endif