#include <stdio.h>

static int mode;
static double distance;
static double cost;

void set_mode(const int input_mode)
{
  if (0 != input_mode && 1!= input_mode) {
    printf("Invalid mode specified. Mode 1(US) used.\n");
    mode = 1;
  } else {
    mode = input_mode;
  }
}

void get_info()
{
  if (mode == 0) {
    printf("Enter distance traveled in kilometers:");
    scanf("%lf", &distance);

    printf("Enter fuel consumed in liters:");
    scanf("%lf", &cost);
  } else if (mode == 1) {
    printf("Enter distance traveled in miles:");
    scanf("%lf", &distance);

    printf("Enter fuel consumed in gallons:");
    scanf("%lf", &cost);
  }
}

void show_info()
{
  if (mode == 0) {
    printf("Fuel consumption is %g liters per 100 km\n", cost / distance * 100);
  } else if (mode == 1) {
    printf("Fuel consumption is %g liters per gallon\n", distance / cost);
  }
}
