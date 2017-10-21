#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "playlist_headers.h"
#include "llist_headers.h"
int main(){

  struct node * testList = 0;
   printf("===============================\n\n");
  printf("LINKED LIST TESTS\n\n");
  printf("===============================\n");

  printf("testing insert:\n");
  testList= insert_order(testList,"shape of you","ed sheeran");
  testList=  insert_order(testList,"sugar","maroon5");
  testList= insert_order(testList,"stitches","shawn mendes");
  
  testList= insert_order(testList,"chained to the rhythm","katy perry");
  testList=  insert_order(testList,"animals","maroon5");
  testList= insert_order(testList,"roar","katy perry");
  
  testList = insert_order(testList, "despacito", "dy");
 
  printf("===============================\n");
  printf("Testing print_list:\n");
  print_list(testList);

  printf("===============================\n");
  printf("Testing print_node:\n");
  
  print_node(testList);
   
  printf("===============================\n");
  printf("Testing find_song\n");
  
  printf("Finding despacito....\n\n");
  print_list(find_song(testList,"despacito","dy"));

  printf("Finding shape of you....\n\n");
  print_list(find_song(testList,"shape of you","ed sheeran"));

  printf("\n\nFinding song that doesnt exist....\n");
  print_list(find_song(testList,"so","art"));
   
  printf("===============================\n");
  printf("Testing find_artist\n");
  printf("finding katy perry....\n\n");
  print_list(find_artist(testList,"katy perry"));
  printf("finding nonexistent artist....\n");
  print_list(find_artist(testList,"lalaloopsiehead"));

  printf("===============================\n");

  printf("Testing random\n");
  print_node(find_rand(testList));

  printf("===============================\n");

  printf("Testing remove\n");
  printf("testing removal of first node(stitches)...\n");
  testList=remove_node(testList,"stitches","shawn mendes");
  print_list(testList);

  printf("\ntesting removal of middle node(sugar...\n");
  testList=remove_node(testList,"sugar","maroon5");
  print_list(testList);

  printf("===============================\n");
  printf("Testing free_list");
  testList = free_list(testList);
  printf("\nlist after free_list:\n");
  print_list(testList);

  //============================================================================================
  
  printf("===============================\n\n");
  printf("MUSIC LIBRARY TESTS\n\n");
  printf("===============================\n");
  printf("initializing/adding songs...");

  
  

  printf("testing print_library\n");
  struct node* library[27];
  int x=0;
  while (x<=26){
    library[x]=NULL;
    x+=1;
  }
  add_song("turn to stone","elo");
  add_song("twilight","elo");
  add_song("take a chance on me", "abba");
  add_song("goodbye stranger","super tramp");
  add_song("dancing queen","abba");
  add_song("ailly jean","michael jackson");
  add_song("beat it", "michael jackson");
  add_song("powerful","jussie smollett");
  add_song("heavy", "jussie smollett");
  add_song("rockstar", "post malone");
  add_song("too good at goodbyes", "sam smith");
  add_song("thunder", "imagine dragons");
  add_song("believer", "imagine dragons");
  add_song("la la land", "demi lovato");
  add_song("stone cold", "demi lovato");
  add_song("strip that down", "liam payne");
  add_song("what lovers do", "maroon 5");
  add_song("shape of you", "ed sheeran");
  add_song("there's nothing holdin' me back", "shawn mendes");
  add_song("what about us", "pink");
  add_song("praying", "kesha");

  
  printf("===============================\n");
  printf("\ntesting print_letter(m)\n");
  print_letter('m');
  printf("Line 115... before printing library\n");
  
  printf("===============================\n");
  printf("printing library....\n\n");

  print_library(library);

  printf("===============================\n");
  printf("Testing find(twilight,elo)...\n");
  print_node(find("twilight", "elo"));
  printf("\nTesting nonexistent song...\n");
  //print_node(find("lalala","akala"));
  printf("===============================\n");
  printf("Testing find_artist elo....\n");
  print_node( search_artist("elo"));

  printf("nonexistent artist...\n");
  //print_node(search_artist("lalala"));
  printf("===============================\n");
  printf("Testing remove_songtwilight,elo)....\n");
  print_letter('e');
  printf("\n");
  remove_song("twilight","elo");
  print_letter('e');
  printf("\nremoving nonexistent song....\n");
  remove_song("lalal","exa");
  print_letter('e');
  printf("===============================\n");
    printf("Testing shuffle\n");
    //shuffle(5);
    shuffle(2);
    printf("===============================\n");
  printf("Testing clear_library\n");
    clear_library;
    printf("Printing Library after clear:\n");
    print_library;

 
  return 0;

  
}
