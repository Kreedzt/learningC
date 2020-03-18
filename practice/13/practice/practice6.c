#include <stdio.h>
#include <stdlib.h> // 提供exit() 的原型
#include <string.h> // 提供 strcpy(), strcat() 的原型

#define LEN 256
int main(int argc, char *argv[])
{
  FILE *in, *out; // 声明2个指向FILE的指针
  int ch;
  char name[LEN]; // 储存输出文件名
  char source_name[LEN];
  int count = 0;

  printf("Enter the source file name: ");

  while (scanf("%256s", source_name) != 1) {
    printf("Error file name, Enter again.\n");
    printf("Enter the source file name: ");
  }

  // 设置输入
  if ((in = fopen(source_name, "r")) == NULL) {
    fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  // 设置输出
  strncpy(name, source_name, LEN - 5); //拷贝文件名
  name[LEN - 5] = '\0';
  strcat(name, ".red"); // 在文件名后添加.red

  if ((out = fopen(name, "w")) == NULL) {
    // 以写模式打开文件
    fprintf(stderr, "Can't create output file.\n");
    exit(3);
  }

  // 拷贝数据
  while ((ch = getc(in)) != EOF) {
    if (count++ % 3 == 0)
      putc(ch, out); // 打印3个字符中的第1个字符
  }

  // 收尾工作
  if (fclose(in) != 0 || fclose(out) != 0) {
    fprintf(stderr, "Error in closing files\n");
  }
  
  return 0;
}

