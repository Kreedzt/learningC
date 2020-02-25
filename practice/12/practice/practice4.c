#include <stdio.h>

int count_call();

int main(int argc, char *argv[])
{
  int count = 0;
  while (count < 10) {
    count = count_call();
  }

  printf("call times: %d", count);
  
  return 0;
}

int count_call() {
  static int call_times = 0;

  return ++call_times;
}
