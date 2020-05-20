#include <stdio.h>

#define RECONCILE(X, Y) (1 / (((1 / X) + (1 / Y)) / 2))

int main()
{
  printf("reconcile(1.0, 2.0): %lf\n", RECONCILE(1.0, 2.0));
  printf("reconcile(2.0, 3.0): %lf\n", RECONCILE(2.0, 3.0));
  
  return 0;
}
