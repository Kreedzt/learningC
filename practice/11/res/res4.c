#include <stdio.h>

char* pr(char* str)
{
  char* pc;

  pc = str;

  while (*pc) {
    putchar(*pc++); // 先输出字符, 每次循环递增起始位
  }

  // 增加下列代码避免死循环
  // if (!(*pc)) {
  //   return pc;
  // }

  do
  {
    // 死循环根源: 先执行putchar内的--pc, 导致访问了错误的内存
    putchar(*--pc); // 从末尾开始递减起始位, 然后输出字符
  } while (pc - str); // 若为首字符, 结束循环(此时已输出)

  return (pc); // 指针置为字符串首字符
}

int main(int argc, char *argv[])
{
  char* x = pr("Ho Ho Ho!");
  printf("\n%s\n", x);
  
  // pr(""); // 死循环
  return 0;
}

