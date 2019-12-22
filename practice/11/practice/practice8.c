#include <stdio.h>
#include <string.h>
#include "s_gets.h"

void reverse_str(char* str);

int main(int argc, char *argv[])
{
  char str[20];

  while (1) {
    printf("Input source str:\n");

    s_gets(str, 20);

    if (str[0] == '\n' || str[0] == '\0') {
      break;
    }

    reverse_str(str);

    printf("res: %s\n", str);
  }

  return 0;
}


void reverse_str(char* str)
{
  char* source = str;
  int length = strlen(source);
  printf("length: %d\n", length);
  char temp;
  char temp2;
  int i;
  int reverse_i;

  for (i = 0; i < length / 2; ++i) {
    reverse_i = length - 1 - i;
    temp = *(source + i);
    temp2 = *(source + reverse_i);
    source[i] = temp2;
    source[reverse_i] = temp;
  }
}
