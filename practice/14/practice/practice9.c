#include <stdio.h>
#include <string.h>

struct seat
{
  int id;
  int is_ordered;
  char last_name[20];
  char first_name[20];
};

struct airplane {
  int id;
  struct seat content[12];
};

char* s_gets(char* st, int n);
void show_outter_menus();
char get_outter_choice();
void show_menus();
char get_choice();

void show_number_of_empty_seats(struct seat arr[]);
void show_list_of_empty_seats(struct seat arr[]);
void show_alphabetical_list_of_seats(struct seat arr[]);
void assign_customer_to_seat(struct seat arr[]);
void delete_seat_assignment(struct seat arr[]);
void show_seat_status(struct seat arr[]);

int main(int argc, char *argv[])
{
  struct airplane aps[4] = { {
      .id = 102
    }, {
      .id = 311
    }, {
      .id = 444
    }, {
      .id = 519
    }};
  struct airplane* current_airplane;
  int i = 0;
  int j = 0;
  char outter_char;
  char inner_char;


  // 初始化
  for (i = 0; i < 4; ++i) {
    for (j = 0; j < 12; ++j) {
      aps[i].content[j].id = j;
      aps[i].content[j].is_ordered = 0;
      strncpy(aps[i].content[j].last_name, "", 2);
      strncpy(aps[i].content[j].first_name, "", 2); 
    }
  }

  show_outter_menus();
  while ((outter_char = get_outter_choice()) != 'e') {
    switch (outter_char) {      
      case 'a':
        current_airplane = &aps[0];
        break;
      case 'b':
        current_airplane = &aps[1];
        break;
      case 'c':
        current_airplane = &aps[2];
        break;
      case 'd':
        current_airplane = &aps[3];
        break;
      default:
        break;
    }

    if (current_airplane) {
      show_menus();
      while ((inner_char = get_choice()) != 'g') {
        switch (inner_char) {
          case 'a': {
            show_number_of_empty_seats(current_airplane->content);
            break;
          }
          case 'b': {
            show_list_of_empty_seats(current_airplane->content);
            break;
          }
          case 'c': {
            show_alphabetical_list_of_seats(current_airplane->content);
            break;
          }
          case 'd': {
            assign_customer_to_seat(current_airplane->content);
            break;
          }
          case 'e': {
            delete_seat_assignment(current_airplane->content);
            break;
          }
          case 'f': {
            show_seat_status(current_airplane->content);
            break;
          }
          default:
            break;
        }
        printf("====Current airplane: %d====\n", current_airplane->id);
        show_menus();
      }
    }
    show_outter_menus();
  }

  printf("Exited.\n");
  
  return 0;
}

void show_outter_menus()
{
  puts("====Airplanes====");
  puts("Choose an airplane:");
  puts("a) 102");
  puts("b) 311");
  puts("c) 444");
  puts("d) 519");
  puts("e) Quit");
}

char get_outter_choice()
{
  char c;
  while (scanf(" %c", &c) == 1) {
    if (c < 'a' || c > 'e') {
      puts("Please enter correct choice.");
      show_outter_menus();
      continue;
    } else {
      break;
    }
  }

  switch (c) {
    case 'a': {
      puts("====Current airplane: 102====");
      break;
    }
    case 'b': {
      puts("====Current airplane: 311====");
      break;
    }
    case 'c': {
      puts("====Current airplane: 444====");
      break;
    }
    case 'd': {
      puts("====Current airplane: 519====");
      break;
    }
    case 'e': {
      puts("====Quiting====");
      break;
    }
    default:
      break;
  }

  return c;
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
  puts("f)Show seat status");
  puts("g)Quit");
}

char get_choice()
{
  char c;
  while (scanf(" %c", &c) == 1) {
    if (c != 'q' && (c < 'a' || c > 'g')) {
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
      puts("====Show seat status====");
      break;
    }
    case 'g': {
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

void show_seat_status(struct seat arr[])
{
  int i = 0;
  for (i = 0; i < 12; ++i) {
    printf("--------\n");
    printf("id: %d\n", arr[i].id);
    printf("is_ordered: %d\n", arr[i].is_ordered);
    if (arr[i].is_ordered == 1) {
      printf("Ordered by: %s %s\n", arr[i].first_name, arr[i].last_name);
    }
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
