#include <stdio.h>

#define PR_INT(x) printf("name:"#x"; value: %d; address:%p", x, &x)

int main()
{

  int fop = 23;
  PR_INT(fop);
  return 0;
}
