#include <stdio.h>

void sum_to_arr(int length, int arr[length], int arr2[length], int target[length]);
void print_arr(int length, int arr[length]);

int main(int argc, char *argv[])
{
  int source[4] =  { 2, 4, 5, 8 };
  int source2[4] = { 1, 0, 4, 6 };
  int target[4];

  sum_to_arr(4, source, source2, target);
  print_arr(4, target);
  
  return 0;
}

void sum_to_arr(int length, int arr[length], int arr2[length], int target[length])
{
  for (int i = 0; i < length; ++i) {
    target[i] = arr[i] + arr2[i];
  }
}

void print_arr(int length, int arr[length])
{
  for (int i = 0; i < length; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
