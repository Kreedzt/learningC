#include <stdio.h>

char* temp_fn(char* str, char c);

int main(int argc, char *argv[])
{
  char* (*fp)(char*, char);

  fp = temp_fn;
  
  return 0;
}

char* temp_fn(char* str, char c)
{
  return str;
}
