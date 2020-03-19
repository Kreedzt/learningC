#include <stdio.h>
#include <stdlib.h>


#define SOURCE_FILE "practice13test.txt"
#define TARGET_FILE "practice14test-res.txt"

unsigned int lines = 20;

int main(int argc, char *argv[])
{
  int arr[lines][31];
  char res[lines][31];
  char buffer[32];
  FILE* source;
  FILE* target;
  int i = 0;
  int j = 0;
  int level = 0;
  char ch;
  int is_correct = 0;
  int sum = 0;
  int count = 0;

  if ((source = fopen(SOURCE_FILE, "r")) == NULL) {
    printf("Can't open %s\n", SOURCE_FILE);
    exit(EXIT_FAILURE);
  }

  if ((target = fopen(TARGET_FILE, "w")) == NULL) {
    printf("Can't open %s\n", TARGET_FILE);
    exit(EXIT_FAILURE);
  }


  printf("Source:\n");

  while (fgets(buffer, 32, source) != NULL) {
    printf("Level: %d\n", level);
    for (i = 0; i < 31; ++i) {
      arr[level][i] = buffer[i] - 48;
    }
    res[level][30] = '\0';

    ++level;
  };

  for (i = 0; i < lines; ++i) {
    for (j = 0; j < 30; ++j) {
      sum = 0;
      count = 0;
      is_correct = 0;
      // 右
      if (j < 30) {
        if (arr[i][j] - arr[i][j + 1] != 0) {
          sum += arr[i][j + 1];
          ++count;
        } else {
          is_correct = 1;
        }
      }

      // 左
      if (j > 0) {
        if (arr[i][j] - arr[i][j - 1] != 0) {
          sum += arr[i][j - 1];
          ++count;
        } else {
          is_correct = 1;
        }
      }

      // 上
      if (i > 0) {
        if (arr[i][j] - arr[i - 1][j] != 0) {
          sum += arr[i - 1][j];
          ++count;
        } else {
          is_correct = 1;
        }
      }

      // 下
      if (i < 19) {
        if (arr[i][j] - arr[i + 1][j] != 0) {
          sum += arr[i + 1][j];
          ++count;
        } else {
          is_correct = 1;
        }
      }

      if (is_correct == 0) {
        res[i][j] = (int)(sum / count) + 48;
      } else {
        res[i][j] = arr[i][j] + 48;
      }
    }
  }



  printf("Dealed Res:\n");
  for (i = 0; i < level; ++i) {
    printf("write times, i:%d\n", i);
    fprintf(stdout, "%s", res[i]);
    fputs(res[i], target);

    if (i != level - 1) {
      fputs("\n", target);
    }
  }

  printf("Done.\n");
  
  return 0;
}
