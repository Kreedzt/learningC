#include <stdio.h>

extern unsigned int rand0();

int main(int argc, char *argv[])
{
  int count;

  for (count = 0; count < 5; ++count) {
    printf("%d\n", rand0());
  }

  return 0;
}
