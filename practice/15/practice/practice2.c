
#include <stdio.h>
#include <limits.h> // 提供 CHAR_BIT 的定义, CHAR_BIT 表示每字节的位数
#include <string.h>

char* itobs(int, char*);
void show_bstr(const char*);

int convert_str_to_num(char *str);

int main(int argc, char *argv[])
{
  char* str1;
  char* str2;
  str1 = argv[1];
  str2 = argv[2];
  
  char dealed_str1[strlen(str1) + 1];
  char dealed_str2[strlen(str2) + 1];
  
  int num1;
  int num2;

  num1 = convert_str_to_num(str1);
  num2 = convert_str_to_num(str2);

  printf("~ operator:\n");
  printf("Str1: %s\n", itobs(~num1, dealed_str1));
  printf("Str2: %s\n", itobs(~num2, dealed_str2));

  printf("& operator:\n");
  printf("Str1 & Str2: %s\n", itobs(num1 & num2, dealed_str1));

  printf("| operator:\n");
  printf("Str1 | Str2: %s\n", itobs(num1 | num2, dealed_str1));

  printf("^ operator:\n");
  printf("Str1 ^ Str2: %s\n", itobs(num1 ^ num2, dealed_str1));
  
  return 0;
}

int convert_str_to_num(char *str)
{
  char c;
  int count = 0;
  int res = 0;

  while (*str)
  {
    res <<= 1;
    res |= *str - '0';
    ++str;
  }
  
  return res;
}

char* itobs(int n, char* ps)
{
  int i;
  const static int size = CHAR_BIT * sizeof(int);

  for (i = size - 1; i >= 0; i--, n >>= 1) {
    // 加值取 ASC 码
    // 每次取 n 末尾值, 随后向右移位一格
    ps[i] = (01 & n) + '0';
  }
  
  ps[size] = '\0';

  return ps;
}

void show_bstr(const char* str)
{
  int i = 0;

  // 判断是否空字符
  while (str[i]) {
    putchar(str[i]);

    if (++i % 4 == 0 && str[i]) {
      putchar(' ');
    }
  }
}
