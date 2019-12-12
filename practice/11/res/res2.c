#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char food[] = "Yummy";
  char* ptr;

  ptr = food + strlen(food);

  while (--ptr >= food) {
    puts(ptr); // 倒序逐步输出, 输出到末尾
  }
  
  return 0;
}
