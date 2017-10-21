#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "llist_headers.h"
#include "playlist_headers.h"

void print_node(struct node * n){
  printf("Title: %s\t Artist: %s-->\n",n->name,n->artist);
  }
void print_list(struct node * ptr){
  while (ptr){//null= false
      printf("Title: %s\t Artist: %s-->\n",ptr->name,ptr->artist);
    //print_node(ptr);
    ptr=ptr->next;
  }
  printf("NULL\n");
}

struct node * insert_order(struct node * n, char * song, char * singer){
    
    struct node * newSong = (struct node *)malloc(sizeof(struct node));

    strcpy(newSong->name, song);
    strcpy(newSong->artist, singer);
    newSong->next = 0;
    
    
    if(!n){
        return newSong;
    }
    
    if(strcmp(song,n->name) < 0){
        return (insert_front(n, song, singer));
    }
    
    struct node * tmp = n;
    struct node * nextNode = tmp->next;
    while (nextNode){
        if(strcmp(song,nextNode->name) < 0){
            tmp->next = newSong;
            newSong->next = nextNode;
            //tmp = insert_front(tmp, song, singer);
            return n;
        }
        else{
            tmp = nextNode;
            nextNode = nextNode->next;
        }
    }
    tmp->next = newSong;
    return n;
    
}

struct node * insert_front(struct node * n, char * song, char * singer){
  struct node * head = (struct node *)malloc(sizeof(struct node));
  strcpy(head->name, song);
  strcpy(head->artist, singer);
  printf("\ninserted %s\n", head->name);
  head->next= n;  
  return head;
}

struct node * find_song(struct node* h,char * title, char * artist){
  while(h){
      if(!(strcmp(title, h->name))){
          return h;
      }
      else
          h = h->next;
    /*
  while(strcmp(h->name,title)&&strcmp(h->artist,artist)){
    h=h->next;
  }
  return h;
     */
  }
  return h;
  
  //return NULL;
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
  //printf("\npost loop Num var: %d\n",num);

  int randNum=rand()%num;//0 to num-1
  //printf("this is randNum: %d\n",randNum);
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
    return h;
}
struct node * remove_node(struct node *h,char *song,char*singer){
    if(!strcmp(song,h->name)&&!strcmp(singer,h->artist)){
      return(remove_beginning(h,song,singer));
    }
    else{
      return(remove_end_mid(h,song,singer));
    }
}


struct node * free_list(struct node *h){
  while(h){
    struct node * next = h-> next;
    free(h);
    h = next;
  }
  return h;
}


