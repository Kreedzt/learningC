#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *fp1, *fp2;
  char ch;

  fp1 = fopen("terky", "r");
  fp2 = fopen("jerky", "w");

  ch = getc(fp1);

  fprintf(fp2, "%c\n", ch);
  putc(ch, fp2);

  fclose(fp1);
  fclose(fp2);
  
  return 0;
}
