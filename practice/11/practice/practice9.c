#include <stdio.h>
#include "s_gets.h"

int is_empty_line(char* str, int length);
void del_str_empty_word(char* str, int length);

int main(int argc, char *argv[])
{
  char str[20];
  char* res;

  while (1) {
    printf("Input source str:\n");

    s_gets(str, 20);

    if (str[0] == '\n' || str[0] == '\0') {
      break;
    }

    del_str_empty_word(str, 20);

    printf("res:%s\n", str);
  }
  
  return 0;
}

void del_str_empty_word(char* str, int length)
{
  int i = 0;
  int inner_i = 0;
  while (i < length) {
    if (str[i] == ' ') {
      inner_i = i;
      while (inner_i < length) {
        str[inner_i] = str[inner_i + 1];
        ++inner_i;
      }
      --i;
    }
    ++i;
  }
}
