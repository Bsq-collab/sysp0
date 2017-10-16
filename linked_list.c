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
  while (ptr){//null= false
    printf("%s ,by  %s -->", ptr->name, ptr-> artist);
    ptr=ptr->next;
  }
  printf("NULL\n");
}

struct node * insert_front(struct node * n, char[] song, char[] by){
  struct node * head = (struct node *)malloc(sizeof(struct node));
  head->name= song;
  head-> artist= by;
  head->next= n;
  return head;
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
