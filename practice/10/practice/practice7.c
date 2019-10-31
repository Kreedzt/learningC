#include <stdio.h>

// Delay: abstract infinite level arr printer
void printArr(int length, int dimension, double target[dimension][length]);

void copy_arr(double* target, double* source, int length);

void copy_dimension_arr(int length, int dimension, double target[dimension][length], double source[dimension][length]);

int main(int argc, char *argv[])
{
  double source[2][5] = { { 1.1, 2.2, 3.3, 4.4, 5.5 }, { 3.2, 4.1, 5.2, 6.3, 1.7 } };
  double target[2][5];

  copy_dimension_arr(5, 2, target, source);

  printArr(5, 2, target);
  
  return 0;
}

void copy_dimension_arr(int length, int dimension, double target[dimension][length], double source[dimension][length])
{
  for (int i = 0; i < dimension; ++i) {
    copy_arr(target[i], source[i], length);
  }
}

void copy_arr(double target[], double source[], int length)
{
  for (int i = 0; i < length; ++i) {
    target[i] = source[i];
  }
}

void printArr(int length, int dimension, double target[dimension][length])
{
  for (int i = 0; i < dimension; ++i) {
    for (int j = 0; j < length; ++j) {
      printf("%lf  ", target[i][j]);      
    }
    printf("\n");
  }
  printf("\n");
}
