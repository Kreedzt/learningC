#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char str[30];
  char c;
  unsigned int index = 0;
  unsigned int i = 0;
  char* pos;
  char res_str[30];

  printf("argc: %d\n", argc);

  while (1) {
    c = getchar();

    if (c == EOF) {
      break;
    }

    if (index == 29) {
      break;
    }
    str[index] = c;
    ++index;
  }
  
  str[index + 1] = '\0';

  puts("Read completed:");


  if (argc == 1 || strstr(argv[1], "-p")) {
    printf("-p\n");
    puts(str);
  } else if (strstr(argv[1], "-u")) {
    printf("-u\n");
    for (i = 0; i < index; ++i) {
      res_str[i] = toupper(str[i]);
    }

    res_str[index + 1] = '\0';
    puts(res_str);
  } else if (strstr(argv[1], "-l")) {
    printf("-l\n");

    for (i = 0; i < index; ++i) {
      res_str[i] = tolower(str[i]);
    }

    res_str[index + 1] = '\0';
    puts(res_str);
  }
  
  return 0;
}
