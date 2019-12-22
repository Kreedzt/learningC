#include <stdio.h>
#include <string.h>
#include "s_gets.h"

char* mystrncpy(char* target, char* source, int length);

int main(int argc, char *argv[])
{
  char source[20];
  char target[20];

  while (1) {
    printf("Input source str:\n");
    s_gets(source, 20);

    if (source[0] == '\n' || source[0] == '\0') {
      break;
    }
    printf("Input target str:\n");
    s_gets(target, 20);
    if (target[0] == '\n' || target[0] == '\0') {
      break;
    }

    mystrncpy(target, source, 20);

    printf("target:%s\n", target);
    printf("source:%s\n", source);
  }
  
  return 0;
}


char* mystrncpy(char* target, char* source, int length)
{
  int i = 0;
  int source_len = strlen(source);

  for (i = 0; i < length; ++i) {
    if (i < source_len) {
      target[i] = source[i];      
    } else {
      target[i] = '\0';
    }
  }

  return target;
}
