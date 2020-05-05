#include <stdio.h>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main()
{
  printf("Max of 1 and 2: %d\n", MAX(1, 2));
  printf("Max of 4 and 3: %d\n", MAX(4, 3));
  
  return 0;
}
