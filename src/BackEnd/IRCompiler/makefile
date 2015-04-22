




all: IRCompiler

IRCompiler:
	clang++ IRCompiler.cpp `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3 2> Makeout

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


	



