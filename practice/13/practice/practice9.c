#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // argv[1]: 字符
  FILE* fp;
  int i;
  unsigned long times = 0;
  char ch;
  char name[255];

  // 检查参数
  if (argc < 2) {
    printf("Error params num.\n");
    exit(EXIT_FAILURE);
  }

  // 交互式输入
  if (argc == 2) {
    printf("Enter file name(q to quit): ");
    while (scanf("%s", name) != 1) {
      printf("Invalid file name.\n");
      printf("Enter file name(q to quit): ");
    }

    if (strncmp("q", name, 1) == 0) {
      printf("Exit.\n");
    } else {
      if ((fp = fopen(name, "r")) == NULL) {
        printf("Can't open %s\n", name);
      } else {
        while ((ch = getc(fp)) != EOF) {
          if (ch == argv[1][0]) {
            ++times;
          }
        }

        printf("%s file has %ld %c\n", name, times, argv[1][0]);
        fclose(fp);
      }
    }

  } else {
    for (i = 2; i < argc; ++i) {
      if ((fp = fopen(argv[i], "r")) == NULL) {
        printf("Can't open %s\n", argv[i]);
      } else {
        times = 0;
        while ((ch = getc(fp)) != EOF) {
          if (ch == argv[1][0]) {
            ++times;
          }
        }

        printf("%s file has %ld %c\n", argv[i], times, argv[1][0]);
      }
      
      fclose(fp);
    }
  }

  printf("Done.\n");
  
  return 0;
}
