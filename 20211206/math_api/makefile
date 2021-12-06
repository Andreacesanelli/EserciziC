all : libmath.so

libutf8.so : quiz.o 
	gcc -shared -o libmath.so quiz.o

quiz.o : quiz.c quiz.h
	gcc -c -o quiz.o quiz.c

