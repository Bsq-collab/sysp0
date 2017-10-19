#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "headers.h"


void print_node(struct node * n){
  printf("Title: %s\t Artist: %s-->\n",n->name,n->artist);
  }
void print_list(struct node * ptr){
  while (ptr){//null= false`
    print_node(ptr);
    ptr=ptr->next;
  }
  printf("NULL\n");
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
struct node * insert_order(struct node *head, char * song, char * singer){
  int artcmp= strcmp(head->artist, singer);
  int songcmp= strcmp(head->name,song);

  if(head|| artcmp<0||(artcmp==0&&songcmp<0)){
    return insert_front(head,song,singer);
  }

  struct node* temp= head; 
  while(head->next){//while it still has a next node
    struct node* tmpNext=head->next;
    int acmp= strcmp(singer,tmpNext->artist);
    int scmp= strcmp(song, tmpNext->name);

    if(acmp<0||(acmp==0&& scmp<0)){
      //if it's a negative cmp num or the comparison to the next one is 0 for artist and
      //the name is negative then add at the next slot.
      head->next= insert_front(head->next,song,singer);
      return temp;
    }
    head= head->next;  
  }
  struct node * addToEnd= (struct node*)malloc(sizeof(struct node));
  head->next=addToEnd;
  strcpy(addToEnd->name,song);
  strcpy(addToEnd->artist,singer);
  return temp;
}
*/      
  /*char * start_char;
  strncpy(start_char,singer,1);
  struct node new;
  new.name = song;
  new.artist = singer;
  new.next = 0;
  struct node * tmp = table;
  }*/

struct node * find_song(struct node* h,char * title, char * artist){
  //while(h){
  while(strcmp(h->name,title)&&strcmp(h->artist,artist)){
    h=h->next;
  }
  return h;
  // }
  // return NULL;
}

struct node * find_artist(struct node* h, char * singer){
  while(h){
    if(!strcmp(singer, h->artist)){
      return h;
    }
    h=h->next;//increment...
  }
  return NULL;
}
int length(struct node * h){
  int num=0;
  while(h){
    num+=1;
    h=h->next;
    printf("\nNum var: %d\n",num);
  }
  return num;
}

struct node * find_rand(struct node* h){

  srand(time(NULL));//seed
  int num=length(h);
  printf("\npost loop Num var: %d\n",num);

  int randNum=rand()%num;//0 to num-1
  printf("this is randNum: %d\n",randNum);
  while(randNum){
    // printf("why isn't this working...");
    h=h->next;
    randNum-=1;
  }
  return h;  
}

struct node * remove_beginning(struct node * h,char * song,char * singer){
    struct node * upNext=h->next;
    free(h);
    return upNext;
}
struct node * remove_end_mid(struct node*h, char*song, char*singer){
  struct node * head= h;
  while(h->next){
    struct node * upNext=h->next;
    if(!strcmp(song,upNext->name) && !(strcmp(singer,upNext->artist))){
      struct node * nexter= upNext->next;
      free(h->next);
      h->next=nexter;
      return head;
    }
    h=h->next;
  }
}
struct node * remove_node(struct node *h,char *song,char*singer){
    if(!strcmp(song,h->name)&&!strcmp(singer,h->artist)){
      remove_beginning(h,song,singer);
    }
    else{
      remove_end_mid(h,song,singer);
    }
}


struct node * free_list(struct node *);
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
