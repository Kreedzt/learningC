// 使用 fgets() 和 fputs()
#include <stdio.h>

#define STLEN 14

int main(int argc, char *argv[])
{
  char words[STLEN];

  printf("Enter a string, please.\n");

  fgets(words, STLEN, stdin);

  printf("Your string twice ((puts), then fputs()): \n");

  puts(words);

  fputs(words, stdout);

  puts("Enter another string, please.\n");
  
  fgets(words, STLEN, stdin);

  printf("Your string twice ((puts), then fputs()): \n");

  puts(words);

  fputs(words, stdout);

  puts("Done");
  
  
  return 0;
}

