#include <stdio.h>

void trystat();

int main()
{
  int count;

  for (count = 1; count <= 3; count++)
  {
    printf("Here comes iteration %d:\n", count);
    trystat();
  }

  return 0;
}

void trystat()
{
  // 编译时未初始化
  // 每次调用初始化
  int fade = 1;
  // 只在编译时初始化
  // 如果未显式初始化, 会初始化为0
  static int stay = 1;
  printf("fade = %d and stay = %d\n", fade++, stay++);
}
