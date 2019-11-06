// 使用gets()和puts()
#include <stdio.h>
#define STLEN 81

int main(int argc, char *argv[])
{
  char words[STLEN];

  puts("Enter a string, please.");
  
  // 整行输入(除换行符)都被存储在words中, puts(words)和printf("%s\n", words)的效果相同
  gets(words); // 典型用法
  
  printf("Your string twice:\n");
  printf("%s\n", words);

  puts(words);
  puts("Done.");
  
  return 0;
}

