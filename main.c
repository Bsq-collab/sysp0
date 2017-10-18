#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <string.h>
int main(){

  struct node * testList;
  printf("LINKED LIST TESTS\n");
  printf("===============================\n");

  insert_front(testList,"song1","artist1");
  printf("Testing print_list:\n");
  print_list(testList);

  printf("===============================\n");
  printf("Testing print_node:\n");

  //print_node();
  printf("===============================\n");
  printf("Testing find_node\n");

  printf("===============================\n");

  printf("Testing find_artist\n");
  printf("===============================\n");
  printf("Testing songcmp(helper function):\n");

  printf("===============================\n");

  printf("Testing random\n");
  printf("===============================\n");
  printf("Testing remove\n");
  printf("===============================\n");
  printf("Testing free_list");
  //free_list()
  printf("\nlist after free_list:\n");
  //print_list(testList);
  printf("===============================\n");
  printf("MUSIC LIBRARY TESTS");
  printf("===============================\n");

  return 0;

  
}
