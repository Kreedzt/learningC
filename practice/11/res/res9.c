#include <stdio.h>

int str_len(char* str);

int main(int argc, char *argv[])
{
  char* str = "Hello, World";

  printf("str len: %d\n", str_len(str));
  
  return 0;
}

int str_len(char* str)
{
  int length = 0;
  while (*str != '\0') {
    ++length;
    ++str;
  }

  return length;
}
