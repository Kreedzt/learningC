#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printf_data(const double data[], int size);

int main()
{
  double data1[100];
  double data2[300];
  int i;

  srand(time(NULL));

  for (i = 0; i < 300; ++i) {
    if (i < 100) {
      data1[i] = rand() / 0.5;      
    }
    data2[i] = rand() / 0.5;
  }

  printf("\ndata1:\n");
  printf_data(data1, 100);
  puts("\n======\n");
  printf("data2:\n");
  printf_data(data2, 300);

  puts("\n======\n");
  printf("Copy1...\n");

  for (i = 0; i < 100; ++i) {
    memcpy(&data1[i], &data2[i], sizeof(double));
  }

  puts("\n======\n");
  printf("Copyed.\n");

  printf("\ndata1:\n");
  printf_data(data1, 100);
  puts("\n======\n");
  printf("data2:\n");
  printf_data(data2, 300);

  puts("\n======\n");
  printf("Copy2...\n");
  for (i = 0; i < 100; ++i) {
    memcpy(&data1[100 - i], &data2[300 - i], sizeof(double));
  }

  puts("\n======\n");
  printf("Copyed.\n");

  printf("\ndata1:\n");
  printf_data(data1, 100);
  puts("\n======\n");
  printf("data2:\n");
  printf_data(data2, 300);

  return 0;
}

void printf_data(const double data[], int size)
{
  int i;

  for (i = 0; i < size; ++i) {
    if (i % 10 == 0) {
      putchar('\n');
    }
    printf("%g ", data[i]);
  }
}
