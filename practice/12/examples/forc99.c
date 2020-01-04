#include <stdio.h>

int main()
{
  int n = 8;
  printf("  Initially, n = %d at %p\n", n, &n);

  // 多次循环地址相同
  for (int n = 1; n < 3; n++)
    printf("  loop 1: n = %d at %p\n", n, &n);
  
  printf("After loop 1, n = %d at %p\n", n, &n);

  for (int n = 1; n < 3; n++)
  {
    // 与第一个循环的地址不同, 多次循环地址相同
    printf(" loop 2 index n = %d at %p\n", n, &n);
    int n = 6;
    // 多次循环地址相同
    printf("   loop 2: n = %d at %p\n", n, &n);
    n++;
  }

  // 易证: 每次块作用域内的变量内存地址相同

  printf("After loop 2, n = %d at %p\n", n, &n);
  
  return 0;
}
