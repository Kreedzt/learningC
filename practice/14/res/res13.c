#include <stdio.h>

struct gas
{
  float distance;
  float gals;
  float mpg;
};

float get_mpg_value(struct gas source);
void set_mpg_value(struct gas* source);

int main(int argc, char *argv[])
{
  struct gas gas1 =
  {
    200,
    20
  };

  gas1.mpg = get_mpg_value(gas1);

  printf("mpg: %g\n", gas1.mpg);

  gas1.mpg = 0;

  set_mpg_value(&gas1);

  printf("mpg: %g\n", gas1.mpg);
  
  return 0;
}

float get_mpg_value(struct gas source)
{
  return source.distance / source.gals;
}

void set_mpg_value(struct gas* source)
{
  source->mpg = source->distance / source->gals;
}
