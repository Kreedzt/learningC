#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  int ch;
  int i = 0;

  for (i = 1; i < argc; ++i) {
    if ((fp = fopen(argv[i], "r")) != NULL) {
      printf("File %s:\n", argv[i]);
      while ((ch = getc(fp)) != EOF) {
        putchar(ch);
      }
    } else {
      printf("Can't open file %s.\n", argv[i]);
    }

    fclose(fp);
  }

  printf("Done.\n");

  
  return 0;
}
