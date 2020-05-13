#include <stdio.h>

#define EVAL(x, y) printf(""#x" is %d and "#y" is %d", (x), (y))

int main()
{
  EVAL(3+4, 4*12);
  
  return 0;
}
