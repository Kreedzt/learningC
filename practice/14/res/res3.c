#include <stdio.h>

struct month
{
  char name[40];
  char short_name[4];
  unsigned int days;
  unsigned int month_num;
};

int main(int argc, char *argv[])
{
  struct month january = {
    "January",
    "Jan",
    31,
    0
  };

  printf("%s has %d days\n",
         january.name,
         january.days);

  printf("Shortname: %s, month index: %d\n",
         january.short_name,
         january.month_num);
  
  return 0;
}
