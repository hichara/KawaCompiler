

CFLAGS= -Wall -g -Wno-deprecated-register -Wno-string-plus-int -std=c++11
IRGENDIR = ../IRGeneration
LLMVFLAGS = `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core` -O3
KTDIR = ../../implementation_KawaTree

all:
	clang++ IRCompiler*.cpp ${IRGENDIR}/*.cpp ${LLMVFLAGS} ${CFLAGS} 2> Makeout

IRCompiler:
	clang++ IRCompiler*.cpp ${LLMVFLAGS}  2> Makeout

IRCompiler_adHoc:
	clang++ IRCompiler_adHoc.cpp ${LLMVFLAGS} 2> Makeout

IRCompiler_expression:
	clang++ IRCompiler_expression.cpp ${LLMVFLAGS} 2> Makeout

IRCompiler_statement:
	clang++ IRCompiler_statement.cpp ${LLMVFLAGS} 2> Makeout

IRCompiler_tool:
	clang++ IRCompiler_tool.cpp ${LLMVFLAGS} -O3 2> Makeout

IRCompiler_solve_polymorphisme:
	clang++ IRCompiler_solve_polymorphisme.cpp  ${LLMVFLAGS} 2> Makeout


	



