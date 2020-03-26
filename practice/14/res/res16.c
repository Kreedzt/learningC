#include <stdio.h>

double fn1(double x, double y);
double fn2(double x, double y);
double fn3(double x, double y);
double fn4(double x, double y);

int main(int argc, char *argv[])
{
  double (*fp[4])(double, double) = { fn1, fn2, fn3, fn4 };

  printf("10.0 * 2.5 = %g\n", fp[2](10.0, 2.5));
  printf("10.0 * 2.5 = %g\n", (*fp[2])(10.0, 2.5));
  
  return 0;
}

double fn1(double x, double y)
{
  return x + y;
}

double fn2(double x, double y)
{
  return x - y;
}

double fn3(double x, double y)
{
  return x * y;
}

double fn4(double x, double y)
{
  return x / y;
}
