#include <stdio.h>

int main(int argc, char *argv[])
{
  char note[] = "See you at the snack bar";
  char* ptr;

  ptr = note;
  puts(ptr); // 完整
  puts(++ptr); // e开始
  note[7] = '\0'; // u后位置截断

  puts(note); // u后截断
  puts(++ptr); // 第二个e开始, u后截断
  
  return 0;
}
