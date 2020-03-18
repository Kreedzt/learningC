// 把文件附加到另一个文件末尾
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append(FILE* source, FILE* dest);
char* s_gets(char* st, int n);

int main(int argc, char *argv[])
{
  FILE *fa, *fs; // fa指向目标文件, fs指向源文件

  int files = 0; // 附加的文件数量
  int ch;

  if (argc != 3) {
    printf("Error parameter nums.\n");
    exit(EXIT_FAILURE);
  }

  // 1: 目标文件名
  if ((fa = fopen(argv[1], "a+")) == NULL) {
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  // 如果无法创建缓冲区, 直接终止
  if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
    fputs("Can't create output buffer\n", stderr);
    exit(EXIT_FAILURE);
  }

  // 防止程序把文件附加在 自身 末尾
  if (strcmp(argv[2], argv[1]) == 0) {
    fputs("Can't append file to itself\n", stderr);

    // 2: 源文件名
  } else if ((fs = fopen(argv[2], "r")) == NULL) {
    fprintf(stderr, "Can't open %s\n", argv[2]);
  } else {
    if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
      fputs("Can't create input buffer\n", stderr);
    }

    append(fs, fa);

    if (ferror(fs) != 0) {
      fprintf(stderr, "Error in reading file %s.\n", argv[2]);
    }

    if (ferror(fa) != 0) {
      fprintf(stderr, "Error in wrting file %s.\n", argv[1]);
    }

    fclose(fs);
    files++;

    printf("File %s appended.\n", argv[2]);
  }

  printf("Done appending. %d files appended.\n", files);
  rewind(fa);

  printf("%s contents:\n", argv[1]);

  while ((ch = getc(fa)) != EOF) {
    putchar(ch);
  }

  puts("Done displaying.");

  fclose(fa);
  
  return 0;
}


void append (FILE* source, FILE* dest)
{
  size_t bytes;
  static char temp[BUFSIZE]; // 只分配一次

  while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) {
    fwrite(temp, sizeof(char), bytes, dest);
  }
}
