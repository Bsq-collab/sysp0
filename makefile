all: linked_list.o main.o
	gcc -o llist linked_list.o main.o

linked_list.o: linked_list.c headers.h
	gcc -c linked_list.c

main.o: main.c linked_list.c
	gcc -c main.c

run: all
	./llist

clean:
	rm *~
	rm *.o
