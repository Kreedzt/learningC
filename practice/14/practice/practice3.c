#include <stdio.h>
#include <string.h>

char* s_gets(char* st, int n);

#define MAXTITL 41 // 书名最大长度 + 1
#define MAXAUTL 31 // 作者姓名的最大长度 + 1
#define MAXBKS 100 // 书籍的最大数量



struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

void sort_by_title(struct book* lib[], int count);
void sort_by_value(struct book* lib[], int count);

int main(int argc, char *argv[])
{
  struct book library[MAXBKS]; // book类型结构的数组
  struct book* library_ptr[MAXBKS]; // 每个项都为指向 book 类型结构的指针
  int count = 0;
  int index;

  printf("Plase enter the book title.\n");
  printf("Press [enter] at the start of a line to stop.\n");

  while (count < MAXBKS
         && s_gets(library[count].title, MAXTITL) != NULL
         && library[count].title[0] != '\0') {
    printf("Now enter the author.\n");
    s_gets(library[count].author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library[count].value);
    // 指针赋值
    library_ptr[count] = &library[count];

    ++count;

    while (getchar() != '\n') {
      continue;
    }

    if (count > 0) {
      printf("Here is the list of your books:\n");

      for (index = 0; index < count; ++index) {
        printf("%s by %s: $%.2f\n", library[index].title,
               library[index].author,
               library[index].value);
      }

      sort_by_title(library_ptr, count);
      printf("Here is the list of your books sort by title:\n");

      for (index = 0; index < count; ++index) {
        printf("%s by %s: $%.2f\n", library_ptr[index]->title,
               library_ptr[index]->author,
               library_ptr[index]->value);
      }

      sort_by_value(library_ptr, count);
      printf("Here is the list of your books sort by value:\n");

      for (index = 0; index < count; ++index) {
        printf("%s by %s: $%.2f\n", library_ptr[index]->title,
               library_ptr[index]->author,
               library_ptr[index]->value);
      }

    } else {
      printf("No books? Too bad.\n");
    }

    if (count < MAXBKS) {
      printf("Enter the next title.\n");
    }
  }

  printf("Bye.\n");
  
  return 0;
}



char* s_gets(char* st, int n)
{
  char* ret_val;
  char* find;
  ret_val = fgets(st, n, stdin);

  if (ret_val) {
    find = strchr(st, '\n'); // 查找换行符
    if (find) // 如果地址不是NULL
      *find = '\0'; // 在此处放置一个空字符
    else
      while (getchar() != '\n') {
        continue; // 处理输入行中剩余的字符
      }
  }

  return ret_val;
}

void sort_by_title(struct book* lib[], int count)
{
  int i = 0;
  int j = 0;
  struct book* tmp;

  for (i = 0; i < count; ++i) {
    for (j = 0; j < count - i - 1; ++j) {
      if (strcmp(lib[j]->title, lib[j + 1]->title) > 0) {
        tmp = lib[j];
        lib[j] = lib[j + 1];
        lib[j + 1] = tmp;
      }
    }
  }
}

void sort_by_value(struct book* lib[], int count)
{
  int i = 0;
  int j = 0;
  struct book* tmp;

  for (i = 0; i < count; ++i) {
    for (j = 0; j < count - i - 1; ++j) {
      if (lib[j]->value > lib[j + 1]->value) {
        tmp = lib[j];
        lib[j] = lib[j + 1];
        lib[j + 1] = tmp;
      }
    }
  }
}
