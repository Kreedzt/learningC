#include <stdio.h>

int main(int argc, char *argv[])
{
  float rootbeer[10], things[10][5], *pf, value = 2.2;
  int i = 3;

  // a
  rootbeer[2] = value;
  // b
  scanf("%f", &rootbeer);
  
  printf("%p\n", rootbeer);

  // c
  // rootbeer = value;

  // d
  printf("%f\n", rootbeer);


  // e
  things[4][4] = rootbeer[3];

  // f
  // things[5] = rootbeer;

  // g
  // pf = value;

  // h
  pf = rootbeer;
  
  return 0;
}
