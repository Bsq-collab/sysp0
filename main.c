#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
int main(){

  struct node * tester;

  printf("\n\n\n=====TESTING INSERT_FRONT======\n\n\n");
  int x=1;
  while(x<=10){
    tester= insert_front(tester,x);
    printf("inserted value %d to list\n",x);
    x++;    
  }
  printf("population complete!!");

  printf("\n\n\n=====TESTING PRINT_LIST======\n\n\n");
  print_list(tester);

  printf("\n\n\n=====TESTING FREE_LIST======\n\n\n");
  
  printf("after freeing~~~~:\n");
  printf("printing free_list(tester):\n");
  print_list(free_list(tester));
  printf("\n\n");

  printf("tester:\n");
  print_list(tester);
  
  return 0;
  
  
}
