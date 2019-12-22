#include <stdio.h>
#include "s_gets.h"

char* find_char_in_str(char* str, char ch);

int main(int argc, char *argv[])
{
  // char* str = "Hello World C!";
  char str[20];
  char c;
  char* fined_str = NULL;
  
  while (1) {
    printf("Input source str:\n");

    s_gets(str, 20);

    if (str[0] == '\n') {
      break;
    }
    printf("Input target character:");

    c = getchar();

    if (fined_str = find_char_in_str(str, c)) {
      printf("found ch, cut str:%s\n", fined_str);
    } else {
      printf("Not found\n");
    }
    getchar();
  }
  
  return 0;
}


char* find_char_in_str(char* str, char ch)
{
  char* res = NULL;
  char* source = str;

  while (source) {

    if (*source == ch) {
      res = source;
      break;
    }
    
    ++source;
  }
  
  return res;
}
