#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[40];
  char short_name[4];
  unsigned int days;
  unsigned int month_num;
} Month;

int get_days(char input[40], Month year[12]);

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

  char input[40];
  int res;

  printf("Enter month name(q to quit): ");

  while (scanf("%s", input) == 1) {
    if (input[0] == 'q') {
      break;
    }
    
    res = get_days(input, year);
    
    if (res == 0) {
      printf("Error input.\n");
    } else {
      printf("Current month days: %d\n", res);
    }

    printf("Enter next month(q to quit): ");
  }
  
  printf("Bye.\n");
  
  return 0;
}

int get_days(char input[40], Month year[12])
{
  int days = 0;
  int i;

  for (i = 0; i < 12; ++i) {
    if (strcmp(input, year[i].name) == 0) {
      days = year[i].days;
      break;
    }
  }

  return days;
}
