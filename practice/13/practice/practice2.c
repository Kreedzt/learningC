#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int ch;
  FILE *source, *target;
  char buff[256];

  if (argc != 3) {
    exit(EXIT_FAILURE);
  }

  // 源文件
  source = fopen(argv[1], "rb");
  // 目标文件
  target = fopen(argv[2], "wb");

  if (source == NULL || target == NULL) {
    printf("Can't Open Source or Target file\n");
    exit(EXIT_FAILURE);
  };

  while ((ch = getc(source)) != EOF) {
    putc(ch, target);
  }

  printf("Copy Success.");
  
  return 0;
}
