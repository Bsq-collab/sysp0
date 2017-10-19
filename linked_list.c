#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "headers.h"


void print_node(struct node * n){
  printf("Title: %s\t Artist: %s\n",n->name,n->artist);
  }
void print_list(struct node * ptr){
  while (ptr){//null= false`
    print_node(ptr);
    ptr=ptr->next;
  }
  printf("null\n");
}

struct node * insert_front(struct node * n, char * song, char * singer){
  struct node * head = (struct node *)malloc(sizeof(struct node));
  strcpy(head->name, song);
  strcpy(head->artist, singer);
  printf("\ninserted %s\n", head->name);
  head->next= n;  
  return head;
}
/*
struct node * insert_order(char * song, char * singer){
  char * start_char;
  strncpy(start_char,singer,1);
  struct node new;
  new.name = song;
  new.artist = singer;
  new.next = 0;
  struct node * tmp = table;
  }
*/
struct node * find_song(struct node* h,char * title, char * artist){
  while(strcmp(h->name,title)&&strcmp(h->artist,artist)){
    h=h->next;
  }
  return h;
}



//=========================Extra Code???========================//


/*
struct node * insert_order(char * song, char * singer){
  char * start_char;
  strncpy(start_char,singer,1);
  struct node new;
  new.name = song;
  new.artist = singer;
  new.next = 0;
  struct node * tmp = table;
  }
*/

/*
struct node * find_song(char * title, char * artist){
  char * start_char;
  strncpy(start_char,artist,1);
  //struct node* tmp = table;
  while(table){
    while(!(strcmp(tmp,start_char))){
      
      if(!(strcmp(tmp->name, title))){
	return tmp;
      }
      else
	tmp = tmp->next;
    }
    tmp++;
  }
  
  return 0;

struct node * find_first_artist_song(char * singer){

  char * start_char;
  strncpy(start_char,singer,1);
  struct node tmp[26] = table;
  while(tmp){
    while(!(strcmp(tmp,start_char))){
      
      if(!(strcmp(tmp->artist, singer))){
	return tmp;
      }
      else
	tmp = tmp->next;
    }
    tmp++;
  }
  
  return 0;
  
}

struct node * remove_node(char * song,char * singer){
 
  char * start_char;
  strncpy(start_char,singer,1);
  struct node * tmp = table;
  struct node * prev = table;
  while(tmp){
    while(!(strcmp(tmp,start_char))){
      
      if(!(strcmp(tmp->name, title))){
	prev->next = tmp->next;
	return tmp;
      }
      else{
	prev = tmp;
	tmp = tmp->next;
      }
    }
    prev = tmp;
    tmp++;
  }
  
  return 0;
  
}

struct node * free_list(struct node * lp){
  while(lp){
    struct node * next = lp-> next;
    free(lp);
    lp = next;
  }
  return lp;
}

struct node * find_rand(struct node* n){
  if(!n){
    return NULL;
  }
  if(!n->next){
    return n;
  }
  
}
*/
