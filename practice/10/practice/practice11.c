#include <stdio.h>

#define COLS 5
#define ROWS 3

void print_arr(int rows, int arr[][COLS]);
void muilti_double_arr(int rows, int arr[][COLS]);

int main(int argc, char *argv[])
{
  int arr[ROWS][COLS] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 }};

  print_arr(3, arr);
  muilti_double_arr(3, arr);
  print_arr(3, arr);
  
  
  return 0;
}

void muilti_double_arr(int rows, int arr[][COLS])
{
  int i = 0;
  int j = 0;
  for (; i < rows; ++i) {
    for (j = 0; j < COLS; ++j) {
      arr[i][j] = arr[i][j] * 2;
    }
  }
}

void print_arr(int rows, int arr[][COLS])
{
  int i = 0;
  int j = 0;
  for (; i < rows; ++i) {
    for (j = 0; j < COLS; ++j) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
