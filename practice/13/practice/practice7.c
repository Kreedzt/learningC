#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 255

int main(int argc, char *argv[])
{
  FILE *source, *target;
  char source_name[LEN];
  char target_name[LEN];

  char buffer[LEN];

  // 0: source, 1: target, 3: completed
  unsigned int mode = 0;
  unsigned int is_source_completed = 0;
  unsigned int is_target_completed = 0;

  // 手动输入
  if (argc == 1) {
    printf("Enter source file name and target file name:\n");
    while (scanf(" %s %s", source_name, target_name) != 2) {
      printf("File name Error, again.\n");
      printf("Enter source file name and target file name:\n");
    }

    if ((source = fopen(source_name, "r")) == NULL) {
      printf("Can't open %s.\n", source_name);
      exit(EXIT_FAILURE);
    }

    if ((target = fopen(target_name, "r")) == NULL) {
      printf("Can't open %s.\n", target_name);
      exit(EXIT_FAILURE);
    }

    // 命令行参数
  } else if (argc == 3) {
    if ((source = fopen(argv[1], "r")) == NULL) {
      printf("Can't open %s.\n", argv[1]);
      exit(EXIT_FAILURE);
    }

    if ((target = fopen(argv[2], "r")) == NULL) {
      printf("Can't open %s.\n", argv[2]);
      exit(EXIT_FAILURE);
    }
  }

  while (mode != 3) {
    // source
    if (mode == 0) {
      if (fgets(buffer, LEN, source) != NULL) {
        fputs(buffer, stdout);
        // 若没有换行符, 打印换行符
        if (strrchr(buffer, '\n') == NULL) {
          putchar('\n');
        }
        // EOF
      } else {
        is_source_completed = 1;
      }

      if (is_target_completed == 0) {
        mode = 1;
      } else {
        mode = 3;
      }

      // target
    } else if (mode == 1) {
      if (fgets(buffer, LEN, target) != NULL) {
        fputs(buffer, stdout);
        // 若没有换行符, 打印换行符
        if (strrchr(buffer, '\n') == NULL) {
          putchar('\n');
        }
        // EOF
      } else {
        is_target_completed = 1;
      }

      if (is_source_completed == 0) {
        mode = 0;
      } else {
        mode = 3;
      }
    }
  }

  printf("Done.\n");
  
  return 0;
}
