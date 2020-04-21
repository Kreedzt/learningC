#include <stdio.h>
#include <limits.h>

void rotate_l(unsigned int* num, int n);

int main(int argc, char *argv[])
{
  unsigned int num = 2147483648;

  printf("src: %u\n", num);

  rotate_l(&num, 4);

  printf("res: %u\n", num);
  
  return 0;
}

void rotate_l(unsigned int* num, int n)
{
  int i = 0;
  unsigned int temp_num = *num;
  unsigned int target_num = 0;
  // 总位数
  int total_bits_num = CHAR_BIT * sizeof(int);
  int suffix_num = 0;
  
  temp_num = 0;

  printf("total bits num: %d\n", total_bits_num);

  // 第一位为 0
  for (i = 0; i < total_bits_num - 2; ++i) {
    target_num <<= 1;
    target_num |= 1;
  }

  // printf("mask num: %d\n", target_num);

  for (i = 0; i < n; ++i) {
    // 先移位最右侧, 获取首位值
    temp_num = 01 & (*num >> (total_bits_num - 1));
    printf("i: %d, current temp_num: %u\n", i, temp_num);
    // 掩码, 设置首位为 0
    // *num &= target_num;
    // 移位
    *num <<= 1;
    // 合并位
    *num |= temp_num;
  }
}
