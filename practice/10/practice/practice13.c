#include <stdio.h>
// #include <ctype.h>

#define ROWS 3
#define COLS 5

void save_data_to_arr(double arr[ROWS][COLS]);
double get_arr_avg(double arr[], int length); // 每组5个
double get_all_data_avg(double arr[ROWS][COLS]);
double get_max_in_arr(double arr[ROWS][COLS]);
void print_arr(double arr[ROWS][COLS]);

int main(int argc, char *argv[])
{
  double arr[ROWS][COLS];
  int i = 0;

  save_data_to_arr(arr);

  for (; i < ROWS; ++i) {
    printf("row:%d, avg:%lf\n", i, get_arr_avg(arr[i], COLS));
  }

  printf("All data avg: %lf\n", get_all_data_avg(arr));
  printf("This arr max val:%lf\n", get_max_in_arr(arr));

  print_arr(arr);
  
  return 0;
}

void save_data_to_arr(double arr[ROWS][COLS])
{
  int i = 0;
  int j = 0;
  
  printf("Enter 3 class double numbers, every class should have 5 numbers:\n");
  
  for (; i < ROWS; ++i) {
    printf("Enter numbers for one row:\n");
    for (j = 0; j < COLS; ++j) {
      printf("Enter a number: ");
      scanf("%lf", &arr[i][j]);
    }
  }
}

double get_all_data_avg(double arr[ROWS][COLS])
{
  int i;
  int j;
  double sum = 0;
  for (i = 0; i < ROWS; ++i) {
    for (j = 0; j < COLS; ++j) {
      sum += arr[i][j];
    }
  }

  return sum / (ROWS * COLS);
}

double get_arr_avg(double arr[], int length) // 每组5个
{
  int i;
  double sum = 0;
  for (i = 0; i < length; ++i) {
    sum += arr[i];
  }

  return sum / length;
}

double get_max_in_arr(double arr[ROWS][COLS])
{
  int i;
  int j;
  double max = arr[0][0];
  for (i = 0; i < ROWS; ++i) {
    for (j = 0; j < COLS; ++j) {
      if (arr[i][j] > max) {
        max = arr[i][j];
      }
    }
  }

  return max;
}

void print_arr(double arr[ROWS][COLS])
{
  int i = 0;
  int j = 0;
  for (; i < ROWS; ++i) {
    for (j = 0; j < COLS; ++j) {
      printf("%lf ", arr[i][j]);
    }
    putchar('\n');
  }
}
