#include <stdio.h>
#include <stdlib.h>
#include "llist_headers.h"
#include <time.h>
#include <string.h>
#include "playlist_headers.h"

song_node * table[26];
//char-'a'=> index bc ASCII

void add_song(char*song,char*singer){
  table[singer[0]-'a']=insert_front(table[singer[0]-'a'],song,singer);
  printf("added song %s",song);
}
struct node * find(char* song,char* singer){
  struct node * letter= table[singer[0]-'a'];
  struct node * ans= find_song(letter,song,singer);
  return ans;
}

struct node * find_artist(char* singer){
  struct node* letter= table[singer[0]-'a'];
  struct node* ans= find_artist(letter, singer);
  return ans;
}

void print_letter(char letter){
  struct node * artistLetter= table[letter-'a'];
  printf("printing letter %c:\n",letter);
  print_list(artistLetter);
}

void print_artist(char * singer){
  
}

void print_library(){
  
}

void shuffle(int number){
}





void remove_song(char*song,char*singer){
}

void clear_library(){
}


}



