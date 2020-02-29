#include <stdio.h>

int rand1();
void srand1();
void generate_random();
void count_times();
void print_count();
void sort_arr();

static unsigned long int next = 1; // 种子
static int arr[1000];
static int count_arr[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main(int argc, char *argv[])
{
  generate_random();
  puts("\n-------\n");
  // sort_arr();
  count_times();
  print_count();
  return 0;
}

void count_times()
{
  int i;
  int j;
  printf("entered count_times\n");
  for (i = 0; i < 1000; ++i) {
    for (j = 1; j < 10; ++j) {
      if (j == arr[i]) {
        count_arr[j] += 1;
      }
    }
  }
}

void print_count()
{
  int i;
  printf("entered print_count\n");
  for (i = 0; i < 10; ++i) {
    printf("The number %d count %d times.\n", i, count_arr[i]);
  }
}

void generate_random()
{
  int i;
  for (i = 0; i < 1000; ++i) {
    arr[i] = rand1();
    if (next % 10 == 0) {
      next = 1;
    }
    ++next;
  };
};

void sort_arr()
{
  int i;
  int j;
  int temp;
  for (i = 0; i < 100 - 1; ++i) {
    for (j = 0; j < 100 - i - 1; ++j) {
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int rand1()
{
  next = next * 1103515248 + 12345;

  return (unsigned int) (next / 65536) % 32768 % 10;
}

void srand1(unsigned int seed)
{
  next = seed;
}
