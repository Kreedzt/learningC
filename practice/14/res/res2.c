#include <stdio.h>

struct house
{
  float sqft;
  int rooms;
  int stories;
  char address[40];
};

int main(int argc, char *argv[])
{
  struct house fruzt = { 1560.0, 6, 1, "22 Spiffo Road" };
  struct house* sign;
  sign = &fruzt;
  printf("%d %d\n", fruzt.rooms, sign->stories);
  printf("%s \n", fruzt.address);
  printf("%c %c\n", sign->address[3], fruzt.address[4]);
  
  return 0;
}
