#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BASE_SIZE 10

int main(int argc, char *argv[])
{
  FILE* fp;
  int ch;

  unsigned int i = 0;
  unsigned int count = 0;
  unsigned int buffer_size = BASE_SIZE;
  
  char filename[255];
  char* buffer = NULL;
  char* tmp_buffer;

  printf("Enter file name: ");

  while (scanf("%255s", filename) != 1) {
    printf("Error filename.\n");
    printf("Enter file name: ");
  }

  if ((fp = fopen(filename, "r")) == NULL) {
    printf("Can't open %s to read.\n", filename);
    exit(EXIT_FAILURE);
  }

  printf("Source file str:\n");
  while ((ch = getc(fp)) != EOF) {
    putchar(ch);

    if (buffer == NULL) {
      buffer = (char*)malloc(sizeof(char) * BASE_SIZE);
    }

    // 若数组可以容下
    if (buffer_size - 1 > count) {
      buffer[count] = ch;

      // 无法容下
    } else {
      buffer[buffer_size - 1] = '\0';
      printf("Buffer Str:\n");
      puts(buffer);
      // 扩容, + BASE_SIZE
      tmp_buffer = (char*)malloc(sizeof (char) * (buffer_size + BASE_SIZE));
      strncpy(tmp_buffer, buffer, buffer_size - 1);
      puts(tmp_buffer);
      free(buffer);
      buffer = (char*)malloc(sizeof (char) * (buffer_size + BASE_SIZE));
      buffer_size += BASE_SIZE;
      buffer = tmp_buffer;
    }

    count += 1;
  }
  putchar('\n');

  printf("Dealed res:\n");
  
  for (i = 0; i < count; ++i) {
    if (isalpha(buffer[i])) {
      putchar(toupper(buffer[i]));
    }
  }

  if ((fp = fopen(filename, "w")) == NULL) {
    printf("Can't open %s to write.\n", filename);
    exit(EXIT_FAILURE);
  }

  for (i = 0; i < count; ++i) {
    if (isalpha(buffer[i])) {
      putc(toupper(buffer[i]), fp);
    }
  }
  
  putchar('\n');

  printf("Done.\n");

  fclose(fp);
  
  return 0;
}
