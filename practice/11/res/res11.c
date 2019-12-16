#include <stdio.h>

char* found_first_empty_str(char* str);
 
int main(int argc, char *argv[])
{
  char* str = "Hello World! ";
  
  printf("founded str: %s;\n", found_first_empty_str(str));
  printf("founded str: %s;\n", found_first_empty_str("test"));
  return 0;
}

char* found_first_empty_str(char* str)
{
  char* founded_str = NULL;
  char* target_str = str;

  while (*(++target_str) != '\0') {
    if (*target_str == ' ') {
      founded_str = target_str;
      break;
    }
    ++target_str;
  }

  return founded_str;
}
