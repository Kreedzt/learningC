#include <stdio.h>

void copy_ptr(int* ptr, int numbers, int* target);
void print_arr(int arr[], int length);

int main(int argc, char *argv[])
{
  int source[] = { 1, 2, 3, 4, 5, 6, 7 };
  int target[3];

  copy_ptr(&source[3], 3, target);
  print_arr(target, 3);
  
  return 0;
}

void copy_ptr(int* ptr, int numbers, int* target)
{
  for (int i = 0; i < numbers; ++i)
  {
    *(target + i) = *(ptr + i);
  }
}

void print_arr(int arr[], int length)
{
  for (int i = 0; i < length; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}

