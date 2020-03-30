#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10 // 最大书籍数量
#define FILE_NAME "book.dat"

char* s_gets(char* st, int n);
void show_choice();
char get_choice();

struct book // 建立book模板
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
  int is_delete;
};

void add_book(struct book* arr, int* count);
void edit_book(struct book* arr, int* count);
void delete_book(struct book* arr, int* count);
void show_books(struct book* arr, int count);

int main(int argc, char *argv[])
{
  struct book library[MAXBKS]; // 结构数组
  int count = 0;
  int filecount;
  FILE* pbooks;
  int size = sizeof(struct book);
  char c;
  int i;

  if ((pbooks = fopen(FILE_NAME, "r+b")) == NULL) {
    fputs("Can't open book.dat file\n", stderr);
    exit(1);
  }

  // rewind(pbooks); // 定位到文件开始

  while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1) {
    if (count == 0) {
      puts("Current contents of book.dat:");
      
    }

    printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
    count++;
  }

  filecount = count;

  printf("Current count: %d, Current Max: %d\n", count, MAXBKS);

  if (count == MAXBKS) {
    fputs("The book.dat file is full.", stderr);
    exit(2);
  }

  c = get_choice();

  while (c != 'q') {
    switch (c) {
      case 'a': {
        add_book(library, &count);
        break;
      }
      case 'b': {
        edit_book(library, &count);
        break;
      };
      case 'c': {
        delete_book(library, &count);
        break;
      };
      case 'd': {
        show_books(library, count);
        break;
      };
      default:
        break;
    }
    c = get_choice();
  }

  if (freopen(FILE_NAME, "wb", pbooks) == NULL){
    fputs("Can't reopen book.dat file\n", stderr);
    exit(1);
  }

  rewind(pbooks);

  for (i = 0; i < count; ++i) {
    if (library[i].is_delete != 1) {
      printf("===Saving: %d===\n", i);
      printf("Write data to file:\n");
      printf("%s %s %f\n", library[i].title, library[i].author, library[i].value);
      fwrite(&library[i], size, 1, pbooks);
    }
  }

  puts("Bye.\n");
  fclose(pbooks);
  
  return 0;
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

void show_choice()
{
  puts("List of choice:");
  puts("a): Add book   b): Edit book");
  puts("c): Delete book   d): Show books");
  puts("q): quit");
  printf("Enter your choice:");
}

char get_choice()
{
  char c;
  show_choice();
  while (scanf(" %c", &c) == 1) {
    if (c != 'q' && (c < 'a' || c > 'd')) {
      puts("Please enter correct choice.");
      show_choice();
      continue;
    } else {
      break;
    }
  }

  switch (c) {
    case 'a': {
      puts("====Add Book====");
      break;
    }
    case 'b': {
      puts("====Edit Book====");
      break;
    }
    case 'c': {
      puts("====Delete Book====");
      break;
    }
    case 'd': {
      puts("====Show Books====");
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

void add_book(struct book* arr, int* count)
{
  puts("Please add new book titles.");
  puts("Press [enter] at the start of a line to stop.");
  getchar();

  while (*count < MAXBKS
         && s_gets(arr[*count].title, MAXTITL) != NULL
         && arr[*count].title[0] != '\0') {
    puts("Now enter the author.");
    s_gets(arr[*count].author, MAXAUTL);
    puts("Now enter the value.");
    scanf("%f", &arr[*count].value);
    arr[*count].is_delete = 0;

    *count = *count + 1;
    
    while (getchar() != '\n') {
      continue;
    }


    if (*count < MAXBKS) {
      puts("Enter the next title.");
    }
  }
}

void edit_book(struct book* arr, int* count)
{
  int index;

  if (*count == 0) {
    printf("No books.\n");
    return;
  }

  printf("Enter index to select a book: ");

  
  while (scanf("%d", &index) == 1) {
    if (index < 0 || index > *count - 1) {
      printf("Error index, again.\n");
      printf("Enter index to select a book:");
      continue;
    } else {
      break;
    }
  }

  puts("========");
  printf("Selected Book:\n");
  printf("Index: %d\n", index);
  printf("Title: %s\n", arr[index].title);
  printf("Author: %s\n", arr[index].author);
  printf("Value: %f\n", arr[index].value);
  puts("========");

  getchar();

  printf("New Title: ");
  s_gets(arr[index].title, MAXTITL);
  printf("New Author: ");
  s_gets(arr[index].author, MAXAUTL);
  printf("New Value: ");
  while (scanf("%f", &arr[index].value) == 1) {
    break;
  }
  printf("Done.\n");

  puts("========");
  printf("Current Book:\n");
  printf("Index: %d\n", index);
  printf("Title: %s\n", arr[index].title);
  printf("Author: %s\n", arr[index].author);
  printf("Value: %f\n", arr[index].value);
  puts("========");
}

void delete_book(struct book* arr, int* count)
{
  int index;
  char choice;
  
  if (*count == 0) {
    printf("No books.\n");
    return;
  }
  
  printf("Enter index to select a book: ");
  
  while (scanf("%d", &index) == 1) {
    if (index < 0 || index > *count - 1) {
      printf("Error index, again.\n");
      printf("Enter index to select a book:");
      continue;
    } else {
      break;
    }
  }


  puts("========");
  printf("Selected Book:\n");
  printf("Index: %d\n", index);
  printf("Title: %s\n", arr[index].title);
  printf("Author: %s\n", arr[index].author);
  printf("Value: %f\n", arr[index].value);
  puts("========");

  getchar();
  printf("Really delete? Enter 'y' to confirm, 'n' to abort: ");
  while (scanf("%c", &choice) == 1) {
    if (choice == 'y') {
      arr[index].is_delete = 1;
      *count = *count - 1;
      puts("Deleted.");
      break;
    } else if (choice == 'n') {
      puts("Aborted.");
    } else {
      printf("Error input.\n");
      printf("Enter 'y' to confirm, 'n' to abort: ");
    }
  }
}

void show_books(struct book* arr, int count)
{
  int index = 0;
  if (count > 0) {
    puts("Here is the list of your books:");

    for (index = 0; index < count; index++) {
      if (arr[index].is_delete != 1) {
        printf("%s by %s: $%.2f\n",
               arr[index].title,
               arr[index].author,
               arr[index].value); 
      }
    }
  } else {
    puts("No books? Too bad.\n");
  }
}
