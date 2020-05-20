#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(const void* p1, const void* p2);

void printf_scores(int scores[100]);

int main()
{
  int scores[1000];
  int i;
  
  srand(time(NULL));

  for (i = 0; i < 1000; ++i) {
    scores[i] = rand();
  }

  printf_scores(scores);

  qsort(scores, 100, sizeof(int), comp);

  puts("\n======\n");

  printf_scores(scores);

  return 0;
}

int comp(const void* p1, const void* p2)
{
  const int* val1 = (int*)p1;
  const int* val2 = (int*)p2;

  return *val1 - *val2;
}

void printf_scores(int scores[100])
{
  int i = 0;

  for (i = 0; i < 100; ++i) {
    if (i % 10 == 0) {
      putchar('\n');
    }
    printf("%d ", scores[i]);
  }
}
