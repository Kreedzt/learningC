#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 255

int main(int argc, char *argv[])
{
  FILE* fp;
  char buffer[SIZE];
  
  if (argc != 3) {
    printf("Error parameters.\n");
    exit(EXIT_FAILURE);
  }

  // 第1个参数: 目标字符串, 第二个参数: 文件名
  if ((fp = fopen(argv[2], "r")) == NULL) {
    printf("Can't open %s\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  while (fgets(buffer, SIZE,fp) != NULL) {
    // 第1个参数: 目标字符串, 第二个参数: 文件名
    if (strstr(buffer, argv[1]) != NULL) {
      fputs(buffer, stdout);
    }
  }

  if (feof(fp)) {
    if (strchr(buffer, '\n') == NULL) {
      putchar('\n');
    }
  }

  printf("Done.\n");
  
  return 0;
}
