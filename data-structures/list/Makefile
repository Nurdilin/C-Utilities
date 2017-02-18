all:	mmainListDemo
mainListDemo: mainListDemo.o list.o
	gcc -o mainListDemo mainListDemo.o list.o
mainListDemo.o: mainListDemo.c list.h
	gcc -c mainListDemo.c
list.o: list.c list.h 
	gcc -c list.c
clean:
	rm -f list.o mainListDemo.o 
