#include <stdio.h>

char* find_char_in_str(char* str, char ch);

int main(int argc, char *argv[])
{
  char* str = "Hello World C!";
  char* fined_str = NULL;
  
  if (fined_str = find_char_in_str(str, 'W')) {
    printf("found ch, cut str:%s\n", fined_str);
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
