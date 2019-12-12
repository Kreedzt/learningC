#include <stdio.h>

int main(int argc, char *argv[])
{
  char str1[] = "gawsie";
  char str2[] = "bletonism";
  char* ps;
  int i = 0;

  for (ps = str1; *ps != '\0'; ps++) {
    // 若为a/e原样输出
    if (*ps == 'a' || *ps == 'e')
      putchar(*ps);
    else
      (*ps)--; //字符识别为int类型相减,
    putchar(*ps);
  }

  putchar('\n');


  while (str2[i] != '\0') {
    // 隔3位输出*
    printf("%c", i % 3 ? str2[i] : '*');
    ++i;
  }
  
  return 0;
}
