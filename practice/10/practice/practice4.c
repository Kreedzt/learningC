#include <stdio.h>

int find_max_val_index(double* arr, int length); 

int main(int argc, char *argv[])
{
  double arr[] = {3.1, 1.5, 4.3, 2.5, 3.3 };

  printf("min_index:%d\n", find_max_val_index(arr, 5));
  
  
  return 0;
}

int find_max_val_index(double* arr, int length)
{
  int index = 0;
  // double min = arr + 0;
  int min_index = 0;

  for (; index < length; index++) {
    if (*(arr + index) < *(arr + min_index)) {
      min_index = index;
    }
  }

  return min_index;
}
