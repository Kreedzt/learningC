#include <stdio.h>

int main(int argc, char *argv[])
{
  char* str[argc - 1];
  int index = 0;

  printf("Result:\n");
  for (index = 1; index < argc; ++index) {
    str[index] = argv[argc - index];
    printf("%s ", str[index]);
  }
  putchar('\n');
  
  return 0;
}
