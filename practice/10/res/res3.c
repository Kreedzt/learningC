#include <stdio.h>

int main(int argc, char *argv[])
{
  int* ptr;

  int fort[2][2] = { { 12 }, { 14, 16 } };
  ptr = fort[0];

  printf("%d\n", *ptr);
  printf("%d\n", *(ptr + 2));
  
  return 0;
}
