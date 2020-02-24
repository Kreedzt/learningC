#include <stdio.h>
#include "pe12-2b.h"

int main(int argc, char *argv[])
{
  int mode;
  double distance;
  double cost;

  printf("Enter 0 for metric mode, 1 for US mode: ");
  scanf("%d", &mode);

  while (mode >= 0) {
    set_mode(&mode);
    get_info(&mode, &distance, &cost);
    show_info(&mode, &distance, &cost);

    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &mode);
  }

  printf("Done.\n");
  
  return 0;
}
