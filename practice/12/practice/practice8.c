#include <stdio.h>
#include <stdlib.h>

int* make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(int argc, char *argv[])
{
  int* pa;
  int size;
  int value;
  char ar[20];

  printf("Enter the number of elements: ");

  while (scanf("%d", &size) == 1 && size > 0) {
    printf("Enter the initailization value: ");
    scanf("%d", &value);
    pa = make_array(size, value);

    if (pa) {
      show_array(pa, size);
      free(pa);
    }

    printf("Enter the number of elements (<1 to quit): ");
  }

  printf("Done.\n");
  
  return 0;
}

int* make_array(int elem, int val)
{
  int i;
  int* array = malloc(sizeof (int) * elem);

  for (i = 0; i < elem; ++i) {
    array[i] = val;
  }

  return array;
}

void show_array(const int ar[], int n)
{
  int i;
  for (i = 0; i < n; ++i) {
    if (i % 8 == 0) {
      putchar('\n');
    }

    printf("%d ", ar[i]);
  }
  putchar('\n');
}
