#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  char arr[256];

  fprintf(stderr, "Hello, %s\n", "name");
  
  if (argc != 3) {
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[2], "r")) == NULL) {
    exit(EXIT_FAILURE);
  }

  while (fgets(arr, sizeof arr, fp) != NULL) {
    // 第1个参数为目标字符
    if (strchr(arr, (argv[1][0])) != NULL) {
      printf("%s", arr);
    }
  }

  if (feof(fp)) {
    puts("End of file reached");
  }

  fclose(fp);
  
  return 0;
}
