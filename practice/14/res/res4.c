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
  
  return 0;
}
