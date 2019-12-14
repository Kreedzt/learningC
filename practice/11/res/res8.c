#include <stdio.h>

int main(int argc, char *argv[])
{
  // char* input_val;
  char input_val[5];

  puts("Enter a number (empty line to quit):");
  s_gets(input_val, 8);
  printf("%s\n", input_val);
  
  return 0;
}


char* s_gets(char* st, int n)
{
  char* ret_val;
  int i = 0;
  ret_val = fgets(st, n, stdin);

  if (ret_val)
  {
    while (st[i] != '\n' && st[i] != '\0') {
      i++;
    }

    if (st[i] == '\n')
      st[i] = '\0';
    else
      while (getchar() != '\n') {
        continue;
      }
  }

  return ret_val;
}
