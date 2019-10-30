#include <stdio.h>

double get_limit_val(double* arr, int length);

int main(int argc, char *argv[])
{
  double source[5] = { 2.2,  1.1, 3.3, 5.5, 4.4 };

  printf("limit val:%lf\n", get_limit_val(source, 5));
  
  return 0;
}


double get_limit_val(double* arr, int length)
{
  double max = *arr + 0;
  double min = *arr + 0;

  for (int i = 0; i < length; ++i) {
    if (*(arr + i) >= max) {
      max = *(arr + i);
    }

    if (*(arr + i) <= min) {
      min = *(arr + i);
    }
  }

  return max - min;
}
