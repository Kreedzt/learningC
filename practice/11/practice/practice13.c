#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double base;
  int pow;
  double res = 1;
  int index;

  base = atof(argv[1]);
  pow = atoi(argv[2]);

  for (index = 1; index <= pow; ++index) {
    res *= base;
  }


  printf("%.4lf^%d = %.4lf", base, pow, res);
  
  return 0;
}
