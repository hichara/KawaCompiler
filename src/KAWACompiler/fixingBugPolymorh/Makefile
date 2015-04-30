CC= clang++
CFLAGS= -Wall -g -Wno-deprecated-register -Wno-string-plus-int -std=c++11
LDFLAGS= -O3
KAWATreeSrcDir= ../../implementation_KawaTree

all: kawac
clean:
	@rm kawac

kawac:
	${CC} ${CFLAGS} ${KAWATreeSrcDir}/*.cpp -o kawac main.cpp ${LDFLAGS}
