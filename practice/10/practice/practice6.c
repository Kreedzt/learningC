#include <stdio.h>

void sort_arr(double* source_arr, int length);
void printArr(double arr[], int length);

int main(int argc, char *argv[])
{
  double source[5] = { 2.2,  1.1, 3.3, 5.5, 4.4 };

  sort_arr(source, 5);
  printArr(source, 5);
  
  return 0;
}

void sort_arr(double* source_arr, int length)
{
  for (int i = 0; i < length; ++i) {
    for (int j = 0; j < length - i - 1; ++j) {
      if (*(source_arr + j) > *(source_arr + j + 1)) {
        double temp = *(source_arr + j);
        *(source_arr + j) = *(source_arr + j + 1);
        *(source_arr + j + 1) = temp;
      }
    }
  }
}

void printArr(double arr[], int length)
{
  for (int i = 0; i < length; ++i) {
    printf("%lf  ", arr[i]);
  }
  printf("\n");
}

