#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[40];
  char short_name[4];
  unsigned int days;
  unsigned int month_num;
} Month;

int calc_days(int day, char month[40], int year, Month mapper[12]);

int main(int argc, char *argv[])
{

  Month year_mapper[12] = {
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

  int res;
  int day = 0;
  int year = 0;
  char month[40];

  printf("Enter day: ");
  scanf("%d", &day);

  printf("Enter month: ");
  scanf("%40s", month);

  printf("Enter year: ");
  scanf("%d", &year);

  printf("calced needed days: %d\n", calc_days(day, month, year, year_mapper));

  printf("Bye.\n");
  
  return 0;
}

int calc_days(int days, char month[40], int year, Month mapper[12])
{
  int count_days = 0;
  int month_index;
  int is_month_matched = 0;
  int i = 0;
  int j = 0;
  int scanfcount = 0;
  int scanfres;
  
  for (i = 0; i < 12; ++i) {
    if (strcmp(month, mapper[i].short_name) == 0) {
      is_month_matched = 1;
      month_index = mapper[i].month_num;
      break;
    }
    
    if (strcmp(month, mapper[i].name) == 0) {
      is_month_matched = 1;
      month_index = mapper[i].month_num;
      break;
    }

    // 若匹配到
    if (sscanf(month, "%d", &scanfres) == 1) {
      if (scanfres == i) {
        is_month_matched = 1;
        month_index = mapper[i].month_num;
      }
    }
  }

  // 循环至月份匹配
  for (i = 0; i <= month_index; ++i) {
    // 循环天数
    if (i == month_index) {
      for (j = 0; j < mapper[i].days && j < days; ++j) {
        count_days += 1;
      }
    } else {
      for (j = 0; j < mapper[i].days; ++j) {
        count_days += 1;
      } 
    }
  }

  return count_days;
}
