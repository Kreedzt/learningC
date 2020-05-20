#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
  double param;
  sscanf(argv[1], "%lf", &param);
  // 类型不匹配
  // printf("The sqare root of %f is %f\n", argv[1], sqrt(argv[1]));
  
  printf("The sqare root of %f is %f\n", param, sqrt(param));
  return 0;
}
