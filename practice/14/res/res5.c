#include <stdio.h>

typedef struct
{
  char name[40];
  char short_name[4];
  unsigned int days;
  unsigned int month_num;
} Month;

int main(int argc, char *argv[])
{
  Month year[12] = {
    {
      "January",
      "Jan",
      31,
      0
    },
    {
      "February",
      "Feb",
      28,
      1
    },
    {
      "March",
      "Mar",
      31,
      2
    },
    {
      "April",
      "Apr",
      30,
      3
    },
    {
      "May",
      "May",
      31,
      4
    },
    {
      "June",
      "Jun",
      30,
      5
    },
    {
      "July",
      "Jul",
      31,
      6
    },
    {
      "August",
      "Aug",
      31,
      7
    },
    {
      "September",
      "Sep",
      30,
      8
    },
    {
      "October",
      "Oct",
      31,
      9
    },
    {
      "November",
      "Nov",
      30,
      10
    },
    {
      "December",
      "Dec",
      31,
      11
    }
  };

  int index;

  printf("Enter month index:(0 - 11):");

  while (scanf("%d", &index) == 1 && index >= 0 && index <= 11) {
    printf("Current Month: %s\n", year[index].name);
    printf("Current Month short_name: %s\n", year[index].short_name);
    printf("Current Month total days: %d\n", year[index].days);
    printf("Enter Next month index:(0 - 11):");
  }

  printf("Bye.\n");
  
  return 0;
}
