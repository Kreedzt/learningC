#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void show_array(const double ar[], int n);
double* new_d_array(int n, ...);

int main()
{
  double* p1;
  double* p2;

  p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
  p2 = new_d_array(4, 100.0, 20.0, 8.08, -1890.0);

  show_array(p1, 5);
  show_array(p2, 4);

  free(p1);
  free(p2);
  
  return 0;
}

void show_array(const double ar[], int n)
{
  int i = 0;
  for(i = 0; i < n; ++i) {
    printf("%lf ", ar[i]);
  }

  printf("\n====\n");
}

double* new_d_array(int n, ...)
{
  double* ar = malloc(sizeof(double) * n);
  va_list ap;
  double current_val;

  va_start(ap, n);

  int i = 0;
  for (i = 0; i < n; ++i) {
    ar[i] = va_arg(ap, double);
  }

  return ar;
}
