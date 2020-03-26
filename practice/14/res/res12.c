#include <stdio.h>


struct car
{
  char name[40];
  double power;
  int level;
  double wheel_base;
  unsigned int produce_year;
};

int main(int argc, char *argv[])
{
  struct car new_car = {
    "BMW",
    22.22,
    4,
    123.123,
    1996
  };

  printf("Name: %s\n", new_car.name);
  printf("Power: %g\n", new_car.power);
  printf("Level: %d\n", new_car.level);
  printf("Whell base: %g\n", new_car.wheel_base);
  printf("Prod year: %d\n", new_car.produce_year);
  
  return 0;
}
