
#include <stdio.h>

int convert_str_to_num(char *str);

int main(int argc, char *argv[]) {
  char *pbin = "01001001";

  printf("%s decoded:", pbin);
  printf("%d", convert_str_to_num(pbin));

  return 0;
}

int convert_str_to_num(char *str) {
  char c;
  int count = 0;
  int res = 0;

  while (*str) {
    res <<= 1;
    res |= *str - '0';
    str++;
  }

  return res;
}
