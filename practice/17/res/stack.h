
typedef struct stack {
  struct item* content;
  unsigned int count;
} Stack;

typedef struct item {
  int id;
  char name[20];
  struct item* next;
  struct item* prev;
} Item;

void initialize_stack(Stack* st);

void add_stack(char name[20], Stack* init);

void remove_stack(Stack* init);

void remove_all(Stack* init);

void show_all(Stack* init);
