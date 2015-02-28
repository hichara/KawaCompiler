CC= clang++
CFLAGS= -Wall -g
SRCDIR= src
OBJDIR= obj

all: KAWATreeProgram.o

KAWATreeCompilerNode.o: ${SRCDIR}/KAWATreeCompilerNode.cpp ${SRCDIR}/KAWATreeCompilerNode.h
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeCompilerNode.cpp -o ${OBJDIR}/KAWATreeCompilerNode.o

KAWATreeProgram.o: ${SRCDIR}/KAWATreeProgram.cpp ${SRCDIR}/KAWATreeProgram.h KAWATreeMethod.o KAWATreeClass.o KAWATreeCompilerNode.o
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeProgram.cpp -o ${OBJDIR}/KAWATreeProgram.o

KAWATreeClass.o: ${SRCDIR}/KAWATreeClass.cpp ${SRCDIR}/KAWATreeClass.h KAWATreeMethod.o
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeClass.cpp -o ${OBJDIR}/KAWATreeClass.o

KAWATreeMethod.o: ${SRCDIR}/KAWATreeMethod.cpp ${SRCDIR}/KAWATreeMethod.h KAWATreeBodyMethod.o
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeMethod.cpp -o ${OBJDIR}/KAWATreeMethod.o

KAWATreeBodyMethod.o: ${SRCDIR}/KAWATreeBodyMethod.cpp ${SRCDIR}/KAWATreeBodyMethod.h KAWATreeInstruction.o
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeBodyMethod.cpp -o ${OBJDIR}/KAWATreeBodyMethod.o

KAWATreeInstruction.o: ${SRCDIR}/KAWATreeInstruction.cpp ${SRCDIR}/KAWATreeInstruction.h KAWATreeParam.o
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeInstruction.cpp -o ${OBJDIR}/KAWATreeInstruction.o

KAWATreeParam.o: ${SRCDIR}/KAWATreeParam.cpp ${SRCDIR}/KAWATreeParam.h KAWATreeType.o
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeParam.cpp -o ${OBJDIR}/KAWATreeParam.o

KAWATreeType.o: ${SRCDIR}/KAWATreeType.cpp ${SRCDIR}/KAWATreeType.h
	${CC} ${CFLAGS} -c ${SRCDIR}/KAWATreeType.cpp -o ${OBJDIR}/KAWATreeType.o	

clean:
	@rm ${OBJDIR}/*.o