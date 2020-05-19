#include <stdio.h>

#define PR_DATE

int main()
{

#ifdef PR_DATE
  printf("%s", __DATE__);
#endif
  return 0;
}
