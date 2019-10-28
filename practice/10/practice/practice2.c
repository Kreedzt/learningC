#include <stdio.h>

void copy_arr(double target[], double source[], int length);
void copy_ptr(double* target, double* source, int length);
void copy_ptrs(double* target, double* source, double* source_limit);
void printArr(double arr[], int length);

int main(int argc, char *argv[])
{
  double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  double target1[5];
  double target2[5];
  double target3[5];

  copy_arr(target1, source, 5);
  printArr(target1, 5);
  copy_ptr(target2, source, 5);
  printArr(target2, 5);
  copy_ptrs(target3, source, source + 5);
  printArr(target3, 5);  
  
  return 0;
}

void copy_arr(double target[], double source[], int length)
{
  for (int i = 0; i < length; ++i) {
    target[i] = source[i];
  }
}

void copy_ptr(double* target, double* source, int length)
{
  double* ptr = source;
  int index = 0;
  for (; index < length;++index, ++ptr) {
    *(target + index) = *ptr;
  }
}

void copy_ptrs(double* target, double* source, double* source_limit)
{
  double* ptr = source;
  int index = 0;
  for (; ptr != source_limit;++index, ++ptr) {
    *(target + index) = *ptr;
  }
}

void printArr(double arr[], int length)
{
  for (int i = 0; i < length; ++i) {
    printf("%lf  ", arr[i]);
  }
  printf("\n");
}
