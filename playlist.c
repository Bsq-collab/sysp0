#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "playlist_headers.h"
#include "llist_headers.h"
struct node * table[27];
//char-'a'=> index bc ASCIIa

void add_song(char*song,char*singer){
  table[singer[0]-'a']=insert_order(table[singer[0]-'a'],song,singer);
    //struct node * tmp = table[singer[0]-'a'];
    //insert_order(tmp, song, singer);
  printf("added song %s\n\n",song);
}
struct node * find(char* song,char* singer){//doesn't work if nonexistent
  struct node * letter= table[singer[0]-'a'];
  struct node * ans= find_song(letter,song,singer);
  return ans;
}

struct node * search_artist(char* singer){
  struct node* letter= table[singer[0]-'a'];
  struct node* ans= find_artist(letter, singer);
  return ans;
}

void print_letter(char letter){
  struct node * artistLetter= table[letter-'a'];
    printf("Letter %c:\n",letter);
  print_list(artistLetter);
}

void print_artist(char * singer){
  struct node* ans= search_artist(singer);
  if(ans){//if it's not null
    while(ans){
      if(strcmp(singer,ans->artist)==0){
	print_node(ans);
	ans=ans->next;
      }
    }
  }
  else{
    printf("no songs by this artist\n");
  }
}
void print_library(struct node* table[27]){

    char c = 'a';
    while (c != 'z'){
        print_letter(c);
        c++;
    }
    print_letter(c);
}



void shuffle(int number){
  srand(time(NULL));
  int rNum = 0;

  while (number-1){
    rNum = (int)(rand()%27);

    while(!table[rNum]){
      rNum=(int)(rand()%27);
    }

    print_node(find_rand(table[rNum]));
    number--;
  }

}


void remove_song(char*song,char*singer){
  table[singer[0]-'a']=remove_node(table[singer[0]-'a'],song,singer);
}

void clear_library(){
  int i=0;
  while(i<26){
    table[i]=free_list(table[i]);
    i+=1;
  }
}



