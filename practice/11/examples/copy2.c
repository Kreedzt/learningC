#include <stdio.h>
#include <string.h>

#define WORDS "beast"
#define SIZE 40

int main(int argc, char *argv[])
{
  const char* orig = WORDS;
  char copy[SIZE] = "Be the best that you can be.";
  char* ps;

  puts(orig);
  puts(copy);
  
  // 拷贝前:
  // Be the best that you can be.\0
  // 空字符也拷贝
  ps = strcpy(copy + 7, orig);

  // 拷贝后字符:
  // Be the besast\0hat you can be.\0

  puts(copy);
  puts(ps);
  

  return 0;
}
