




all:
	clang++ -g NameBuilder.cpp  `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

rule4: FunctionGenerator.o KawaUtilitary.o TypeGenerator.o GlobalVariableGenerator.o NameBuilder.o
	clang++ -g kawac.cpp FunctionGenerator.o KawaUtilitary.o TypeGenerator.o GlobalVariableGenerator.o NameBuilder.o `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 -o kawac
	rm *.o
 
FunctionGenerator.o:
	clang++ -c -g FunctionGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

KawaUtilitary.o:
	clang++ -c -g KawaUtilitary.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

TypeGenerator.o:
	clang++ -c -g TypeGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

TypeGenerator.o:
	clang++ -c -g TypeGenerator.cpp   `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

GlobalVariableGenerator.o:
	clang++ -c -g GlobalVariableGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

NameBuilder.o:
	clang++ -c -g NameBuilder.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3


rule2:
	clang++ -g demo.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 -o demo


test: rule4
	./kawac 2> kawac.ll
	llc-3.5 kawac.ll
	gcc kawac.s


