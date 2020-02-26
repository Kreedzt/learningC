#include <stdio.h>

int rand1();
void srand1();
void generate_random();
void print_arr();
void sort_arr();

static unsigned long int next = 1; // 种子
static int arr[100];

int main(int argc, char *argv[])
{
  generate_random();
  print_arr();
  puts("\n-------\n");
  sort_arr();
  print_arr();
  return 0;
}

void print_arr()
{
  int i;
  for (i = 0; i < 100; ++i) {
    if (i % 10 == 0) {
      putchar('\n');
    }
    printf("%d ", arr[i]);
  }
}

void generate_random()
{
  int i;
  for (i = 0; i < 100; ++i) {
    arr[i] = rand1();
    next += 1;
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
