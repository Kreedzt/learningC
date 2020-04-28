#include <stdio.h>
#include <limits.h>

_Static_assert(CHAR_BIT == 16, "16-bit char falsey, assumed");

int main()
{
  puts("char is 16 bits");
  
  return 0;
}
