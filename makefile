all: linked_list.o main.o
	gcc -o llist linked_list.o main.o

linked_list.o: linked_list.c llist_headers.h
	gcc -c -g linked_list.c

main.o: main.c linked_list.c
	gcc -c -g main.c

run: all
	./llist

clean:
	rm *~
	rm *.o
