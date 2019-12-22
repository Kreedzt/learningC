#include <stdio.h>

char* s_gets(char* st, int n)
{
  char* ret_val;
  char* found_str_pointer;
  ret_val = fgets(st, n, stdin);

  if (ret_val) {
    if (found_str_pointer = strchr(ret_val, '\n')) {
      *found_str_pointer = '\0';
    }
  }

  return ret_val;
}
