#include <stdio.h>
#include <stdlib.h>

extern void srand1(unsigned int x);
extern int rand1();

int main(int argc, char *argv[])
{
  int count;
  unsigned seed;

  printf("Please enter your choice for seed.\n");

  while (scanf("%u", &seed) == 1) {
    srand1(seed);

    for (count = 0; count < 5; ++count) {
      printf("%d\n", rand1());
    }

    printf("Please enter next seed(q to quit):\n");
  }

  printf("Done\n");
  
  return 0;
}
