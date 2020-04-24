#include <stdio.h>
#include "names.h"
#include "names.h" // 包含头文件 2 次

int main()
{
  names winner = { "Less", "Ismoor" };
  printf("The winner is %s %s.\n", winner.first, winner.last);

  

  return 0;
}
