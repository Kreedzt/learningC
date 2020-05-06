#include <stdio.h>

#define EVEN_GT(X, Y) ((X) % 2 == 0 && (X) > (Y) ? 1 : 0)


int main()
{
  printf("EVEN_GT(4, 3): %d\n", EVEN_GT(4, 3));
  printf("EVEN_GT(2, 3): %d\n", EVEN_GT(2, 3));
  printf("EVEN_GT(4, 5): %d\n", EVEN_GT(4, 5));
  
  return 0;
}
