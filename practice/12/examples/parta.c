#include <stdio.h>

void report_count();
void accumulate(int k);

int count = 0; // 文件作用域, 外部链接

int main(int argc, char *argv[])
{
  int value; // 自动变量
  register int i; // 寄存器变量

  printf("Enter a positibe interger (0 to quit): ");

  while (scanf("%d", &value) == 1 && value > 0) {
    ++count; // 使用文件作用域变量

    for (i = value; i >= 0; i--) {
      accumulate(i);
    }

    printf("Enter a positive integer (0 to quit): ");
  }

  report_count();
  
  return 0;
}

void report_count()
{
  printf("Loop executed %d times\n", count);
}
