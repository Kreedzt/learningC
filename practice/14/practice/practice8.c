#include <stdio.h>
#include <string.h>

struct seat
{
  int id;
  int is_ordered;
  char last_name[20];
  char first_name[20];
};

char* s_gets(char* st, int n);
void show_menus();
char get_choice();

void show_number_of_empty_seats(struct seat arr[]);
void show_list_of_empty_seats(struct seat arr[]);
void show_alphabetical_list_of_seats(struct seat arr[]);
void assign_customer_to_seat(struct seat arr[]);
void delete_seat_assignment(struct seat arr[]);

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
  
  while ((c = get_choice()) != 'f') {
    switch (c) {
      case 'a': {
        show_number_of_empty_seats(airplane);
        break;
      }
      case 'b': {
        show_list_of_empty_seats(airplane);
        break;
      }
      case 'c': {
        show_alphabetical_list_of_seats(airplane);
        break;
      }
      case 'd': {
        assign_customer_to_seat(airplane);
        break;
      }
      case 'e': {
        delete_seat_assignment(airplane);
        break;
      }
      default:
        break;
    }
    show_menus();
  }

  printf("Exited.\n");
  
  return 0;
}

void show_menus()
{
  puts("====Menus====");
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
    case 'f': {
      puts("====Quiting====");
      break;
    }
    default:
      break;
  }

  return c;
}

void show_number_of_empty_seats(struct seat arr[])
{
  int i = 0;
  int count = 0;

  for (i = 0; i < 12; ++i) {
    if (arr[i].is_ordered == 0) {
      ++count;
    }
  }
  printf("Total empty seats: %d\n", count);
}

void show_list_of_empty_seats(struct seat arr[])
{
  int i = 0;
  
  for (i = 0; i < 12; ++i) {
    if (arr[i].is_ordered == 0) {
      printf("%d ", arr[i].id);
    }
  }

  putchar('\n');

}

void show_alphabetical_list_of_seats(struct seat arr[])
{
  struct seat* temp_arr[12];
  struct seat* temp;
  int i = 0;
  int j = 0;

  for (i = 0; i < 12; ++i) {
    temp_arr[i] = &arr[i];
  }

  for (i = 0; i < 12; ++i) {
    for (j = i + 1; j < 12; ++j) {
      if (strncmp(temp_arr[i]->first_name, temp_arr[j]->first_name, 12) == 0) {
        if (strncmp(temp_arr[i]->last_name, temp_arr[j]->last_name, 12) > 0) {
          temp = temp_arr[i];
          temp_arr[i] = temp_arr[j];
          temp_arr[j] = temp;
        }
      } else if(strncmp(temp_arr[i]->first_name, temp_arr[j]->first_name, 12) > 0) {
        temp = temp_arr[i];
        temp_arr[i] = temp_arr[j];
        temp_arr[j] = temp;
      }
    }
  }

  for (i = 0; i < 12; ++i) {
    printf("id: %d\n", temp_arr[i]->id);
    printf("is_ordered: %d\n", temp_arr[i]->is_ordered);
    printf("Name: %s %s\n", temp_arr[i]->first_name, temp_arr[i]->last_name);
  }
}

void assign_customer_to_seat(struct seat arr[])
{
  int success = 0;
  int id;
  char first_name[20];
  char last_name[20];
  while (success == 0) { 
    printf("Enter a seat id(0~11): ");
    scanf("%d", &id);

    if (id >= 0 && id <= 11) {
      if (arr[id].is_ordered == 0) {
        success = 1;
      } else {
        printf("This seat is ordered.\n");
      }
    } else {
      printf("Invalid id.\n");
    }
  }

  printf("Selected id: %d\n", id);

  getchar();

  printf("Enter first_name(empty line to quit): ");
  s_gets(first_name, 20);
  if (first_name[0] == '\n' || first_name[0] == '\0') {
    printf("Canceled.\n");
    return;
  }
  printf("Enter last_name(empty line to quit): ");
  s_gets(last_name, 20);
  if (last_name[0] == '\n' || last_name[0] == '\0') {
    printf("Canceled.\n");
    return;
  }

  arr[id].is_ordered = 1;
  strncpy(arr[id].first_name, first_name, 20);
  strncpy(arr[id].last_name, last_name, 20);
  printf("Now %d is ordered by %s %s.\n", arr[id].id, arr[id].first_name, arr[id].last_name);
}

void delete_seat_assignment(struct seat arr[])
{
  int success = 0;
  int id;
  char c;

  while (success == 0) { 
    printf("Enter a seat id(0~11): ");
    scanf("%d", &id);

    if (id >= 0 && id <= 11) {
      if (arr[id].is_ordered == 1) {
        success = 1;
      } else {
        printf("This seat is not ordered.\n");
      }
    } else {
      printf("Invalid id.\n");
    }
  }

  printf("Info:\n");
  printf("id: %d\n", id);
  printf("Name: %s %s\n", arr[id].first_name, arr[id].last_name);

  printf("Enter 'y' to delete assignment: ");
  scanf(" %c", &c);

  if (c == 'y') {
    arr[id].is_ordered = 0;
    strncpy(arr[id].first_name, "", 20);
    strncpy(arr[id].last_name, "", 20);
    printf("Deleted assigment with id: %d\n", arr[id].id);
  } else {
    printf("Canceled.\n");
  }
}

char* s_gets(char* st, int n)
{
  char* ret_val;
  char* find;
  ret_val = fgets(st, n, stdin);

  if (ret_val) {
    // 查找换行符
    find = strchr(st, '\n'); 

    // 如果地址不是NULL
    if (find) {
      // 在此处放置一个空字符
      *find = '\0';
    } else {
      while (getchar() != '\n') {
        // 清理输入行
        continue;
      }
    }
  }

  return ret_val;
}
