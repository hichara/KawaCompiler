CC= clang++
CFLAGS= -Wno-c++11-extensions -Wno-string-plus-int -Wno-invalid-source-encoding -g
SRCDIR= .
KAWATreeDIR= ../implementation_KawaTree

all: semanticAlgo

semanticAlgo: ${SRCDIR}/*.cpp ${KAWATreeDIR}/*.h
	${CC} ${CFLAGS} ${SRCDIR}/*.cpp ${KAWATreeDIR}/*.cpp -o semanticAlgo

clean:
	rm semanticAlgo
