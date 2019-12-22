#include <stdio.h>
#include "s_gets.h"

int is_within(char ch, char* str);

int main(int argc, char *argv[])
{
  char str[20];
  int i;
  char c;

  while (1) {
    printf("Input source str:\n");

    s_gets(str, 20);

    if (str[0] == '\n') {
      break;
    }
    printf("Input target character:");

    c = getchar();

    if (is_within(c, str) == 1) {
      printf("%c is in str\n", c);
    } else {
      printf("%c is not in str\n", c);
    }
    
    getchar();
  }
  
  return 0;
}


int is_within(char ch, char* str)
{
  int res = 0;
  char* source = str;

  while (*source) {
    if (*source == ch) {
      res = 1;
      break;
    }

    ++source;
  }

  return res;
}
