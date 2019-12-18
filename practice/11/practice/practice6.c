#include <stdio.h>
#include <string.h>

char* mystrncpy(char* target, char* source, int length);

int main(int argc, char *argv[])
{
  char* source1 = "This is source1";
  char target1[4];
  char* source2 = "This is source22222";
  char target2[24];
  int i;

  mystrncpy(target1, source1, 3);
  mystrncpy(target2, source2, 24);

  printf("target1 item:\n");
  for (i = 0; i < 4; ++i) {
    printf("target1 index:%d : %c\n", i,target1[i]);
  }

  printf("target2 item:\n");
  for (i = 0; i < 24; ++i) {
    printf("target2 index:%d : %c\n", i,target2[i]);
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
