
FLAGS = `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native`
IRGEN_DIR = ../IRGeneration
KT_TREE_DIR = ../../implementation_KawaTree

all: IRCompiler IRGen

IRCompiler:
	clang++ -c  *.cpp  ${IRGEN_DIR}/*.o  ${KT_TREE_DIR}/*.cpp  ${FLAGS} -O3 2> Makeout

IRCompiler_adHoc:
	clang++ IRCompiler_adHoc.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

IRCompiler_expression:
	clang++ IRCompiler_expression.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

IRCompiler_statement:
	clang++ IRCompiler_statement.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

IRCompiler_tool:
	clang++ IRCompiler_tool.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

IRCompiler_solve_polymorphisme:
	clang++ IRCompiler_solve_polymorphisme.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout


IRGen:
	make -C $(IRGEN_DIR)

IRCMP:
	clang++ -c IRCompiler*.cpp Test_Exemple.cpp ${FLAGS} 2> Makeout


KT_Gen:
	clang++ -c ${KT_TREE_DIR}/*.cpp ${FLAGS} 2> Makeout

test:
	clang++ -g ${IRGEN_DIR}/*.cpp *.o ${FLAGS} -o program_test -O3 2> Makeout




