// 字符串的地址
#include <stdio.h>

#define MSG "I'm special"

int main(int argc, char *argv[])
{
  char ar[] = MSG;
  const char* pt = MSG;

  printf("address of \"I'm special\"  %p \n", "I'm special");

  // 指针地址不同
  printf("        address  ar: %p\n", ar);
  // 指针地址相同
  printf("        address  pt: %p\n", pt);
  printf("        address of MSG: %p\n", MSG);


  // 指针地址相同 - 编译器优化
  printf("address of \"I'm special\": %p  \n", "I'm special");

  return 0;
}
