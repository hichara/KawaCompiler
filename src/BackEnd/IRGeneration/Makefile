




all:
	clang++ -g *.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveValueConverter:
	clang++ -g PrimitiveValueConverter.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveCreator:
	clang++ -g PrimitiveCreator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveBinaryOperationGenerator:
	clang++ -g PrimitiveBinaryOperationGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

CallGenerator:
	clang++ -g CallGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

FunctionGenerator:
	clang++ -g FunctionGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core` -O3 2> Makeout

KawaUtilitary:
	clang++ -g KawaUtilitary.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core` -O3

TypeGenerator:
	clang++ -g TypeGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core` -O3

GlobalVariableGenerator:
	clang++ -g GlobalVariableGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core` -O3

NameBuilder:
	clang++ -g NameBuilder.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native core` -O3

KawaEnumeration:
	clang++ -g KawaEnumeration.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs` -O3

kawac:
	clang++ -g *.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs` -O3 -o kawac 2> Makeout

try:
	./kawac 2> kawac.ll
	llc-3.5 kawac.ll

test: kawac
	./kawac 2> kawac.ll
	./kawac 2> Makeout
	llc-3.5 kawac.ll
	gcc kawac.s


