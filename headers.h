//struct node {int i; struct node * next;};

struct node{ 
  char name[256];
  char artist[256];
  struct node *next;
};

struct node * table[26];

void print_list(struct node*);
void print_node(struct node*);

struct node * insert_front(struct node *, char *,char *);

struct node * insert_order(struct node*,char *, char *);

struct node * find_song(struct node*,char *, char *);

struct node * find_artist(struct node*, char *);

struct node * find_rand(struct node*);

struct node * remove_node(struct node *,char *);

struct node * free_list(struct node *);
