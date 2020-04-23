#include <stdio.h>

#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)

int main()
{
  int x = 5;
  int z;

  printf("x is %d\n", x);

  PR(x);
  z = SQUARE(x);
  printf("Evaluating SQUARE(x):");
  PR(z);

  z = SQUARE(2);
  printf("Evaluating SQUARE(2):");
  PR(z);

  printf("Evaluating SQUARE(x+2):");
  // 替换结果: x + 2 * x + 2; (没有括号)
  PR(SQUARE(x + 2));

  printf("Evaliating 100/SQUARE(2):");
  PR(100 / SQUARE(2));

  printf("x is %d\n", x);

  printf("Evaliating SQUARE(++x):");
  PR(SQUARE(++x));

  printf("After incrementing, x is %x.\n", x);
  
  return 0;
}
