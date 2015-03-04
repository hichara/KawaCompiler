




all:
	clang++ -g FunctionGenerator.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3

rule4:
	clang++ -g kawac.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 -o kawac


rule2:
	clang++ -g demo.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 -o demo


rule3:
	clang++ -g kawac.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 -o kawac
	./kawac 2> kawac.ll
	llc-3.5 kawac.ll
	gcc kawac.s


