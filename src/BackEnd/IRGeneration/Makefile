




all: PrimitiveCreator.o

kawac: FunctionGenerator.o KawaUtilitary.o TypeGenerator.o GlobalVariableGenerator.o NameBuilder.o PrimitiveValueConverter.o PrimitiveCreator.o CallGenerator.o
	clang++ -g kawac.cpp CallGenerator.o FunctionGenerator.o KawaUtilitary.o TypeGenerator.o GlobalVariableGenerator.o PrimitiveValueConverter.o PrimitiveCreator.o NameBuilder.o `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 -o kawac
	rm *.o

PrimitiveValueConverter.o:
	clang++ -c -g PrimitiveValueConverter.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveCreator.o:
	clang++ -c -g PrimitiveCreator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveBinaryOperationGenerator.o:
	clang++ -c -g PrimitiveBinaryOperationGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

CallGenerator.o:
	clang++ -c -g CallGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

FunctionGenerator.o:
	clang++ -c -g FunctionGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

KawaUtilitary.o:
	clang++ -c -g KawaUtilitary.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

TypeGenerator.o:
	clang++ -c -g TypeGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

GlobalVariableGenerator.o:
	clang++ -c -g GlobalVariableGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

NameBuilder.o:
	clang++ -c -g NameBuilder.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

try:
	./kawac 2> kawac.ll
	llc-3.5 kawac.ll

test: kawac
	./kawac 2> kawac.ll
	./kawac 2> Makeout
	llc-3.5 kawac.ll
	gcc kawac.s


