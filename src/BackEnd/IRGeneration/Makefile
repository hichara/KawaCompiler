




all: PrimitiveCreator.o

kawac: FunctionGenerator.o KawaUtilitary.o TypeGenerator.o GlobalVariableGenerator.o NameBuilder.o PrimitiveValueConverter.o
	clang++ -g kawac.cpp FunctionGenerator.o KawaUtilitary.o TypeGenerator.o GlobalVariableGenerator.o PrimitiveValueConverter.o PrimitiveCreator.o NameBuilder.o -O3 -o kawac
	rm *.o

PrimitiveValueConverter.o:
	clang++ -g PrimitiveValueConverter.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveCreator.o:
	clang++ -g PrimitiveCreator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

PrimitiveBinaryOperationGenerator.o:
	clang++ -g PrimitiveBinaryOperationGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

CallGenerator.o:
	clang++ -c -g CallGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

FunctionGenerator.o:
	clang++ -c -g FunctionGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

KawaUtilitary.o:
	clang++ -c -g KawaUtilitary.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

TypeGenerator.o:
	clang++ -c -g TypeGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

GlobalVariableGenerator.o:
	clang++ -c -g GlobalVariableGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

NameBuilder.o:
	clang++ -c -g NameBuilder.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

test: kawac
	./kawac 2> kawac.ll
	llc-3.5 kawac.ll
	gcc kawac.s


