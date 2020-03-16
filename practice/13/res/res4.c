#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE* fp = NULL;
  double sum = 0.0;
  unsigned int count = 0;
  double current_num = 0.0;

  // 参数数量不对, 终止程序
  if (argc > 2) {
    exit(EXIT_FAILURE);
  }

  if (argc == 2) {
    if ((fp = fopen(argv[1], "r")) == NULL) {
      exit(EXIT_FAILURE);

      // 读取文件
    } else {
      while (fscanf(fp, "%lf", &current_num) == 1) {
        ++count;
        sum += current_num;
      }
      fclose(fp);
      printf("Read file done.\n");
    }
  } else {
    printf("Enter number:");
    // stdin
    while (scanf("%lf", &current_num) == 1) {
      ++count;
      sum += current_num;
      printf("Enter next number:");
    }
    printf("Read stdin done.\n");
  }

  if (count != 0) {
    printf("Avg: %lf\n", sum / count);
  }

  printf("Done.\n");
  
  return 0;
}
