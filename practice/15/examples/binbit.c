// 使用位操作显示二进制
#include <stdio.h>
#include <limits.h> // 提供 CHAR_BIT 的定义, CHAR_BIT 表示每字节的位数

char* itobs(int, char*);
void show_bstr(const char*);

int main(int argc, char *argv[])
{
  char bin_str[CHAR_BIT * sizeof(int) + 1];
  int number;

  puts("Enter intergers and see then in binary.");
  puts("Non-numberic input terminates program.");

  while (scanf("%d", &number) == 1) {
    itobs(number, bin_str);
    printf("%d is ", number);
    show_bstr(bin_str);
    putchar('\n');
  }

  puts("Bye!");
  
  return 0;
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
