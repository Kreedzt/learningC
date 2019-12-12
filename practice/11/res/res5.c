#include <stdio.h>

int main(int argc, char *argv[])
{
  char sign = '$';
  
  printf("size of sign: %zu\n", sizeof(sign)); // 1 疑似编译器优化
  printf("sizeof '$': %zu\n", sizeof('$')); // 4
  printf("sizeof \"$\": %zu\n", sizeof("$")); // 2
  return 0;
}
