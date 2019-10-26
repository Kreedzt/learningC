#include <stdio.h>

int main(int argc, char *argv[])
{
  int (*ptr)[2];
  int torf[2][2]=  { 12, 14, 16 };

  ptr = torf;
  
  printf("%d\n", **ptr);
  printf("%d\n", **(ptr + 1));
  
  return 0;
}
