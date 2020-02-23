#include <stdio.h>

char color = 'B';

void first();
void second();

int main(int argc, char *argv[])
{
  extern char color;

  printf("color in main() is %c\n", color); // B

  first(); // R

  printf("color in main() is %c\n", color); // B

  second(); // G

  printf("color in main() is %c\n", color); // G
  
  return 0;
}

void first()
{
  char color;
  color = 'R';

  printf("color in first() is %c\n", color); // R
}

void second()
{
  color = 'G';
  
  printf("color in second() is %c\n", color); // G
}

