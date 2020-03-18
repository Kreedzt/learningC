#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  char name[256];
  unsigned long pos = 0;
  unsigned long last = 0;
  char ch;
  const char* file = "numbers.dat";

  printf("Enter file name: ");

  while (scanf("%255s", name) != 1 ) {
    printf("Invalid file name, enter again.\n");
    printf("Enter file name: ");
  }

  if ((fp = fopen(name, "r")) == NULL) {
    printf("Can't open %s.\n", name);
  }

  fseek(fp, 0, SEEK_END);
  last = ftell(fp);

  printf("Enter an index in the range to access file pos:(0 ~ %ld)\n", last);

  while (scanf("%ld", &pos) == 1) {
    if (pos < 0 || pos > last) {
      printf("Error pos.\n");
      printf("Enter correct pos(0 ~ %ld):\n", last);
      continue;
    }
    printf("Set pos: %ld\n", pos);
    fseek(fp, pos, SEEK_SET);
    while ((ch = getc(fp)) != EOF) {
      putchar(ch);
      if (ch == '\n') {
        break;
      }
    }
    printf("Enter an index in the range to access file pos:(0 ~ %ld)\n", last);
  }


  fclose(fp);

  printf("Done.\n");
  
  return 0;
}
