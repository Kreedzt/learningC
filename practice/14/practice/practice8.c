#include <stdio.h>
#include <string.h>

struct seat
{
  int id;
  int is_ordered;
  char last_name[20];
  char first_name[20];
};

void show_menus();
char get_choice();

void show_number_of_empty_seats();
void show_list_of_empty_seats();
void show_alphabetical_list_of_seats();
void assign_customer_to_seat();
void delete_seat_assignment();

int main(int argc, char *argv[])
{
  struct seat airplane[12];
  int i = 0;
  char c;

  for (i = 0; i < 12; ++i) {
    airplane[i].id = i;
    airplane[i].is_ordered = 0;
    strncpy(airplane[i].last_name, "", 2);
    strncpy(airplane[i].first_name, "", 2);
  }

  show_menus();
  
  while ((c = get_choice()) != 'q') {
    switch (c) {
      case 'a': {
        show_number_of_empty_seats();
        break;
      }
      case 'b': {
        show_list_of_empty_seats();
        break;
      }
      case 'c': {
        show_alphabetical_list_of_seats();
        break;
      }
      case 'd': {
        assign_customer_to_seat();
      }
      case 'e': {
        delete_seat_assignment();
      }
      default:
        break;
    }
    show_menus();
  }
  
  return 0;
}

void show_menus()
{
  puts("To choose a function, enter its letter label:");
  puts("a)Show number of empty seats");
  puts("b)Show list of empty seats");
  puts("c)Show alphabetical list of seats");
  puts("d)Assign a customer to a seat assignment");
  puts("e)Delete a seat assignment");
  puts("f)Quit");
}

char get_choice()
{
  char c;
  while (scanf(" %c", &c) == 1) {
    if (c != 'q' && (c < 'a' || c > 'f')) {
      puts("Please enter correct choice.");
      show_menus();
      continue;
    } else {
      break;
    }
  }

  switch (c) {
    case 'a': {
      puts("====Show number of empty seats====");
      break;
    }
    case 'b': {
      puts("====Show list of empty seats====");
      break;
    }
    case 'c': {
      puts("====Show alphabetical list of seats====");
      break;
    }
    case 'd': {
      puts("====Assign a customer to a seat assignment====");
      break;
    }
    case 'e': {
      puts("====Delete a seat assignment====");
      break;
    }
    case 'q': {
      puts("====Quiting====");
      break;
    }
    default:
      break;
  }

  return c;
}

void show_number_of_empty_seats()
{
  
}

void show_list_of_empty_seats()
{
  
}

void show_alphabetical_list_of_seats()
{
  
}

void assign_customer_to_seat()
{
  
}

void delete_seat_assignment()
{
  
}
