#include <stdio.h>

void show_menus();
char get_choice();

void print_1();
void print_2();
void print_3();
void print_4();

typedef void (*V_FP_CHARP)();

int main(int argc, char *argv[])
{
  V_FP_CHARP func_ptr_arr[4] = { print_1, print_2, print_3, print_4 };

  char c;

  show_menus();
  while ((c = get_choice()) != 'q') {
    switch (c) {
      case 'a': {
        func_ptr_arr[0]();
        break;
      }
      case 'b': {
        func_ptr_arr[1]();
        break;
      }
      case 'c': {
        func_ptr_arr[2]();
        break;
      }
      case 'd': {
        func_ptr_arr[3]();
        break;
      }
      default:
        break;
    }
    show_menus();
  }

  printf("Quit.\n");
  
  return 0;
}

void show_menus()
{
  puts("====Menu List====");
  puts("a) print_1");
  puts("b) print_1");
  puts("c) print_1");
  puts("d) print_1");
  puts("q) quit");
}

char get_choice()
{
  char c;
  while (scanf(" %c", &c) == 1) {
    if (c != 'q' && (c < 'a' || c > 'd')) {
      puts("Please enter correct choice.");
      show_menus();
      continue;
    } else {
      break;
    }
  }

  switch (c) {
    case 'a': {
      puts("====Print 1====");
      break;
    }
    case 'b': {
      puts("====Print 2====");
      break;
    }
    case 'c': {
      puts("====Print 3====");
      break;
    }
    case 'd': {
      puts("====Print 4====");
      break;
    }
    case 'q': {
      puts("====Quting====");
    }
    default:
      break;
  }

  return c;
}

void print_1()
{
  printf("1\n");
}

void print_2()
{
  printf("1\n");
}

void print_3()
{
  printf("3\n");
}

void print_4()
{
  printf("4\n");
}
