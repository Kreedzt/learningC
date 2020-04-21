#include <stdio.h>

int count_open_bit(int n);

int main(int argc, char *argv[])
{
  int num = 11;

  printf("count %d open bit: %d\n", num, count_open_bit(num));

  num = 20;
  printf("count %d open bit: %d\n", num, count_open_bit(num));
  
  return 0;
}

int count_open_bit(int n)
{
  int count = 0;

  while (1) {
    // 判断是否打开位
    if ((01 & n) == 1) {
      ++count;
    }

    if (n == 0) {
      break;
    }

    n >>= 1;
  }
  
  return count;
}
