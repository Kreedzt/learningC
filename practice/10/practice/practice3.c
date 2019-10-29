#include <stdio.h>

int get_max_in_arr(int* arr, int length);

int main(int argc, char *argv[])
{
  int arr[] = { 1, 2, 4, 3 };

  printf("max: %d", get_max_in_arr(arr, 4));
  
  return 0;
}

int get_max_in_arr(int* arr, int length)
{
  int max = arr[0];
  int index;

  for (index = 0; index < length; ++index) {
    if (arr[index] > max) {
      max = arr[index];
    }
  }

  return max;
}
