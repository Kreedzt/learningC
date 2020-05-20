#include <stdio.h>
#include <time.h>

void test_clock(double delay);

int main()
{

  test_clock(1);
  printf("Done.\n");
  
  return 0;
}

void test_clock(double delay)
{
  clock_t start_t = clock();
  double cost_time;
  unsigned int times;

  while(cost_time < delay) {
    printf("Executing...\n");
    cost_time = (double)(clock() - start_t) / CLOCKS_PER_SEC;
    times++;
  }

  printf("Executed times: %d\n", times);
}
