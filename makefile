main:main.o Arithmetic.o Structlearn.o
	gcc -o main main.o Arithmetic.o Structlearn.o
main.o:main.c Arithmetic.h
	gcc -c main.c
Arithmetic.o:Arithmetic.c Arithmetic.h
	gcc -c Arithmetic.c
Structlearn.o:Structlearn.c Structlearn.h
	gcc -c Structlearn.c
clean:
	rm main.o Arithmetic.o Structlearn.o