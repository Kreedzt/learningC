#include <stdio.h>

int units = 0;

void critic();

int main()
{
  extern int units;

  printf("How many pounds to a firkin of butter?\n");
  scanf("%d", &units);

  while (units != 56)
    critic();

  printf("You must have looked it up!\n");

  return 0;
}


void critic()
{
  printf("No luck, my friend. Try again.\n");
  scanf("%d", &units);
}


