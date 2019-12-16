#include <stdio.h>

char* s_gets(char* st, char* end);

int main(int argc, char *argv[])
{
  // char* input_val;
  char input_val[5];

  puts("Enter a number (empty line to quit):");
  s_gets(&input_val[0], &input_val[4]);
  printf("%s\n", input_val);
  
  return 0;
}


char* s_gets(char* st, char* end)
{
  char* ret_val;
  ret_val = fgets(st, end - st + 1, stdin);

  if (ret_val)
  {
    while (*st != '\n' && *st != '\0') {
      st++;
    }

    if (*st == '\n')
      *st = '\0';
    else
      while (getchar() != '\n') {
        continue;
      }
  }

  return ret_val;
}
