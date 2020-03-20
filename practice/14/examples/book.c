#include <stdio.h>
#include <string.h>

char* s_gets(char* st, int n);

#define MAXTITL 41 // 书名最大长度 + 1
#define MAXAUTL 31 // 作者姓名的最大长度 + 1

// 结构模板
struct book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(int argc, char *argv[])
{
  struct book library;  // 把libray声明为一个book类型的变量
  printf("Please enter the book title.\n");

  s_gets(library.title, MAXTITL);

  printf("Now enter the author.\n");

  s_gets(library.author, MAXAUTL);

  printf("Now enter the value.\n");

  scanf("%f", &library.value);

  printf("%s by %s: $%.2f\n", library.title, library.author, library.value);

  printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);

  printf("Done.\n");

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
