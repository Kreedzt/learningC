#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE* fp;
  int k;

  fp = fopen("gelatin", "w");

  for (k = 0; k < 30; ++k) {
    fputs("Nanette eats gelatin.", fp);
  }

  fclose(fp);
  
  return 0;
}
