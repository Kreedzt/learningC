#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int ch;
  FILE* fp;
  char filename[100];
  unsigned long count = 0;
  
  printf("Enter file name:");

  if (scanf("%s", filename) == 1) {
    if ((fp = fopen(filename, "r")) == NULL) {
      printf("Can't open %s\n", filename);
      exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
      putc(ch, stdout);
      ++count;
    }
    
    fclose(fp);
    
    printf("File %s has %lu characters\n", filename, count);
  }

  return 0;
}
