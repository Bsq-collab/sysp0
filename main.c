#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <string.h>
int main(){

  struct node * testList;
  printf("LINKED LIST TESTS\n");
  printf("===============================\n");

  testList= insert_front(testList,"song1","artist1");
  testList=  insert_front(testList,"song2","artist2");
  testList= insert_front(testList,"song3","artist3");
   testList= insert_front(testList,"song4","artist4");
  testList=  insert_front(testList,"song5","artist5");
  testList= insert_front(testList,"song6","artist6");
   testList= insert_front(testList,"song7","artist7");
  testList=  insert_front(testList,"song8","artist8");
  testList= insert_front(testList,"song9","artist9");
  
  printf("Testing print_list:\n");
  print_list(testList);

  printf("===============================\n");
  printf("Testing print_node:\n");
  
  print_node(testList);
   
  printf("===============================\n");
  printf("Testing find_song\n");
  
  // print_list(find_song(testList,"song1","artist1"));
  printf("Finding Song3....\n\n");
  print_list(find_song(testList,"song3","artist3"));

  printf("Finding Song4....\n\n");
  print_list(find_song(testList,"song4","artist4"));

  // printf("\n\nFinding song that doesnt exist....\n");THIS DOESNT WORK YET
  // print_list(find_song(testList,"so","art"));
  
  
  /*
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
  */
  return 0;

  
}
