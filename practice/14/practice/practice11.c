#include <stdio.h>
#include <math.h>

void transform(double source[], double target[], int n, double(*fp) (double));
void print_arr(double arr[], int n);

int main(int argc, char *argv[])
{
  double source[10];
  double target[10];
  int i;

  for (i = 0; i < 10; ++i) {
    source[i] = i;
  }

  // sin
  transform(source, target, 10, sin);
  printf("Should be equal: \n");
  for (i = 0; i < 10; ++i) {
    printf("%lf ", sin(source[i]));
  }
  putchar('\n');
  print_arr(target, 10);

  // cos
  transform(source, target, 10, cos);
  printf("Should be equal: \n");
  for (i = 0; i < 10; ++i) {
    printf("%lf ", cos(source[i]));
  }
  putchar('\n');
  print_arr(target, 10);

  // tan
  transform(source, target, 10, tan);
  printf("Should be equal: \n");
  for (i = 0; i < 10; ++i) {
    printf("%lf ", tan(source[i]));
  }
  putchar('\n');
  print_arr(target, 10);

  // log
  transform(source, target, 10, log);
  printf("Should be equal: \n");
  for (i = 0; i < 10; ++i) {
    printf("%lf ", log(source[i]));
  }
  putchar('\n');
  print_arr(target, 10);
  
  return 0;
}

void transform(double source[], double target[], int n, double(*fp) (double))
{
  int i;
  for (i = 0; i < n; ++i) {
    target[i] = (*fp)(source[i]);
  }
}

void print_arr(double arr[], int n)
{
  int i;
  for (i = 0; i < n; ++i) {
    printf("%lf ", arr[i]);
  }
  putchar('\n');
}
