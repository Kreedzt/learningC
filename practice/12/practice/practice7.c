#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../examples/diceroll.h"

int main(int argc, char *argv[])
{
  int dice, roll;
  int sets;
  int sides;
  int status;
  int i;

  // 每次取时间值, 设置不同的rand() 种子
  srand((unsigned int) time(0));
  printf("Enter the number of sets; enter q to stop:");

  while (scanf("%d", &sets) == 1 && sets > 0) {
    printf("How many sides and how many dice?");

    if ((status = scanf("%d %d", &sides, &dice)) != 2)
    {
      if (status == EOF)
        break;
      else
      {
        printf("You should have entered an integer.\n");
        printf(" Let's begin again.\n");

        while (getchar() != '\n')
          continue;
        
        printf("How many sides? Enter 0 to stop.\n");
        continue;
      }
    }

    printf("Here are %d sides of %d %d-sides throws\n", sets, dice, sides);

    for (i = 0; i < sets; ++i) {
      roll = roll_n_dice(dice, sides);
      printf("%d ", roll);
    }
    putchar('\n');

    printf("How many sets? Enter 0 to stop.");
  }

  printf("Done!\n");
  return 0;
}

