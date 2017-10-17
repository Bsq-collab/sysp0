#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include "headers.h"

/*
insert nodes in order
find and return a pointer to an individual song based on song name
find and return a pointer to the first song of an artist based on artist name
Return a pointer to random element in the list.
remove a single node from the list
 */

void print_list(struct node * ptr){
  while (ptr){//null= false`
    printf("%s ,by  %s -->", ptr->name, ptr-> artist);
    ptr=ptr->next;
  }
  printf("NULL\n");
}

struct node * insert_front(struct node * n, char * song, char * by){
  struct node * head = (struct node *)malloc(sizeof(struct node));
  head->name= song;
  head-> artist= by;
  head->next= n;
  return head;
}

struct node * insert_order(char * song, char * singer){
  char * star_char;
  strncpy(start_char,singer,1);
  struct node new;
  new.name = song;
  new.artist = singer;
  new.next = 0;
  struct node * tmp = table;
  while(tmp){
    while(!(strcmp(tmp, start_char))){
      
      if(
    }
  }
}

struct node * find_song(char * title, char * artist){
  char * start_char;
  strncpy(start_char,artist,1);
  struct node* tmp = table;
  while(tmp){
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
  
}

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