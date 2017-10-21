all: linked_list.o playlist.o main.o 
	gcc -o llist linked_list.o playlist.o main.o

linked_list.o: linked_list.c llist_headers.h playlist_headers.h
	gcc -c -g linked_list.c

playlist.o: playlist.c playlist_headers.h llist_headers.h
	gcc -c -g playlist.c

main.o: main.c linked_list.c playlist.c
	gcc -c -g main.c

run: all
	./llist

clean:
	rm *~
	rm *.o
