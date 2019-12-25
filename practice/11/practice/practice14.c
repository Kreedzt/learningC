#include <stdio.h>

int my_atoi(char* str);

int main(int argc, char *argv[])
{
  char* str = "39.1";
  char* str2 = " 3";

  printf("res1: %d\n", my_atoi(str));
  printf("res2: %d\n", my_atoi(str2));
  
  return 0;
}


int my_atoi(char* str)
{
  char* source = str;
  int res = 0;
  int per = 1;
  int status = 0; // 0: 未找到匹配项, 1: 已找到匹配开始项, 2: 匹配结束

  // 判断ASC码区间
  while (*source) {
    if (*source >= 48 && *source <= 57) {
      if (status == 0) {
        status = 1;
      }
      res = res * per + (*source - 48);
      per *= 10;
    } else {
      if (status == 1) {
        status = 2;
        break;
      } 
    }

    ++source;
  }

  return res;
}
