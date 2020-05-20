#include <stdio.h>
#include <math.h>

struct Polar {
  int mod;
  double deg;
};

struct Angle {
  double x;
  double y;
};

struct Angle convert(struct Polar po);

int main()
{
  struct Polar po = {
    50,
    60
  };

  struct Angle ag = convert(po);

  printf("po.mod: %d\n", po.mod);
  printf("po.deg: %lf\n", po.deg);

  puts("===");
  
  printf("ag.x: %lf\n", ag.x);
  printf("ag.y: %lf\n", ag.y);

  return 0;
}

struct Angle convert(struct Polar po)
{
  struct Angle ag;

  static const double deg_rad = 3.14159 / 180.0;

  // 角度转弧度
  double ang = po.deg * deg_rad;

  ag.x = po.mod * cos(ang);
  ag.y = po.mod * sin(ang);

  return ag;
}
