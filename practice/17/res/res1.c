#include <stdio.h>
#include "stack.h"

void show_menu();

void add_stack_item(Stack* st);

int main()
{
  Stack st;
  char c;

  initialize_stack(&st);

  show_menu();
  while (scanf(" %c", &c) && c != 'q') {
    switch(c) {
      case 'a':
        add_stack_item(&st);
        break;
      case 'b':
        remove_stack(&st);
        break;
      case 's':
        show_all(&st);
        break;
    }
    show_menu();
  }

  remove_all(&st);
  
  puts("Bye.");
  
  return 0;
}

void show_menu()
{
  puts("Avaliable Menus:");
  puts("a) add_stack  b) remove_stack");
  puts("s) show_all  q) quit");
  printf("Enter your choice: ");
}

void add_stack_item(Stack* st)
{
  char name[20];
  printf("Enter name: ");
  scanf(" %20s", name);
  
  add_stack(name, st);
}
