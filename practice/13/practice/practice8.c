#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 255

void del_enter_key(char* str, int length);

int main(int argc, char *argv[])
{
  FILE *source, *target;
  char source_name[LEN];
  char target_name[LEN];

  char buffer[LEN];
  char* ch_ptr;

  // 0: source, 1: target, 3: completed
  // unsigned int mode = 0;
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

  while (is_source_completed != 1 || is_target_completed != 1) {
    // source
    if (is_source_completed != 1 && fgets(buffer, LEN, source) != NULL) {
      // 若有换行符, 剔除
      // if ((ch_ptr = strrchr(buffer, '\n')) != NULL) {
      //   *ch_ptr = '\n';
      // }
      del_enter_key(buffer, LEN);
      fputs(buffer, stdout);
      // EOF
    } else {
      is_source_completed = 1;
    }

    // target
    if (is_target_completed != 1 && fgets(buffer, LEN, target) != NULL) {
      // 若有换行符, 剔除
      // if ((ch_ptr = strrchr(buffer, '\n')) != NULL) {
      //   *ch_ptr = '\n';
      // }
      del_enter_key(buffer, LEN);
      fputs(buffer, stdout);
      // EOF
    } else {
      is_target_completed = 1;
    }

    putchar('\n');
  }

  printf("Done.\n");
  
  return 0;
}

// 剔除换行符
void del_enter_key(char* str, int length)
{
  int i;
  for (i = 0; i < length; ++i) {
    if (str[i] == '\n') {
      str[i] = '\0'; // 截断
    }
  }
}
