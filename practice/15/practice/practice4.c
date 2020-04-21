#include <stdio.h>

int get_pos_bit(int n, int pos);

int main(int argc, char *argv[])
{
  int num = 11;

  printf("num: %d, pos: %d, res: %d\n", num, 1, get_pos_bit(num, 1));
  printf("num: %d, pos: %d, res: %d\n", num, 2, get_pos_bit(num, 2));
  printf("num: %d, pos: %d, res: %d\n", num, 3, get_pos_bit(num, 3));

  return 0;
}

int get_pos_bit(int n, int pos)
{
  int temp_num = n;
  int total_bits_num = 0;

  while (temp_num != 0) {
    temp_num /= 2;
    ++total_bits_num;
  }
  
  printf("Total bits num: %d\n", total_bits_num);

  return (01 & (n >> (total_bits_num - pos)));
}
