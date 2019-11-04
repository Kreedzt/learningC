// 把字符串看作指针
#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("%s,%p, %c\n\n", "We", "are", *"space farers");
  
  return 0;
}
