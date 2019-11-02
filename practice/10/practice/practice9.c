#include <stdio.h>

void copy_arr(int rows, int cols, double source[rows][cols], double target[rows][cols]);
void print_arr(int rows, int cols, double arr[rows][cols]);

int main(int argc, char *argv[])
{
  double source[3][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15} };
  double target[3][5];

  copy_arr(3, 5, source, target);
  // printf("source:");
  // print_arr(3, 5, source_arr);
  // printf("target:");
  print_arr(3, 5, target);
  
  return 0;
}


void copy_arr(int rows, int cols, double source[rows][cols], double target[rows][cols])
{
  int i = 0;
  int j = 0;
  for (; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      target[i][j] = source[i][j];
    }
  }
}


void print_arr(int rows, int cols, double arr[rows][cols])
{
  int i = 0;
  int j = 0;
  for (; i < rows; ++i) {
    for (j = 0; j < cols; ++j) {
      printf("%lf ", arr[i][j]);
    }
    printf("\n");
  }
}
