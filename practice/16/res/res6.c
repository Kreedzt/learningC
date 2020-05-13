#include <stdio.h>

#define VAL 25
#define SPACE " "
#define PS() printf("%s", SPACE)
#define BIG(X) (X + 3)
#define SUMSQ(X, Y) (((X) * (X)) + ((Y) * (Y)))


int main()
{
  printf("VAL is: %d.\n", VAL);
  printf("Before PS");
  PS();
  printf("After PS\n");
  printf("BIG(VAL): %d.\n", BIG(VAL));
  printf("SUMSQ(2, 3): %d.\n", SUMSQ(2, 3));
  return 0;
}
