
typedef struct stack {
  int id;
  char name[20];
  struct stack* front;
  struct stack* next;
} Stack;

void initialize_stack(Stack* st);

void add_stack(char name[20], Stack* init);

void remove_stack(Stack* init);

void remove_all(Stack* init);

void show_all(Stack* init);
