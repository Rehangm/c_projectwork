ABC.exe : big3.o fact.o main.o sort.o
	gcc -o ABC.exe big3.o fact.o main.o sort.o
main.o : main.c
	gcc -c main.c
big3.o : big3.c
	gcc -c big3.c
fact.o : fact.c
	gcc -c fact.c
sort.o : sort.c
	gcc -c sort.c
clean :
	rm -rf *.o
