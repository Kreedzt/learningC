#include <stdio.h>

int main(int argc, char *argv[])
{
  char str1[] = "gawsie";
  char str2[] = "bletonism";
  char* ps;
  int i = 0;

  for (ps = str1; *ps != '\0'; ps++) {
    if (*ps == 'a' || *ps == 'e')
      putchar(*ps);
    else
      (*ps)--;

    // 非a或e输出编码表上一个字符
    putchar(*ps);
  }

  putchar('\n');

  while (str2[i] != '\0') {
    // 间隔2个输出*
    printf("%c", i % 3 ? str2[i] : '*');
    ++i;
  }

  return 0;
}
