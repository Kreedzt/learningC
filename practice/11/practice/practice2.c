#include <stdio.h>
#include <ctype.h>

#define LEN 10

char* get_next_n_text(int n, char* arr);

int main(int argc, char *argv[])
{
  char str[LEN];
  char* check;

  get_next_n_text(LEN - 1, str);

  printf("get: %s\n", str);
  
  return 0;
}


char* get_next_n_text(int n, char* arr)
{
  int i;
  int ch;
  for (i = 0; i < n; ++i) {
    ch = getchar();

    if (ch == EOF || iscntrl(ch) || ch == ' ') {
      break;
    }

    arr[i] = ch;
  }

  if (ch == EOF) {
    return NULL;
  } else {
    arr[i] = '\0';
    return arr;
  }
}
