#include <stdio.h>

inline static double square(double);
double square2(double x);
inline double square3(double x);

int main()
{
  double q = square(1.3);

  printf("square(q): %lf\n", q); // 1.69

  q = square2(1.3);

  printf("square2(q): %lf\n", q); // 1

  q = square3(1.3);

  printf("square3(q): %lf\n", q); // 2
  
  return 0;
}

inline static double square(double x)
{
  return x * x;
}

double square2(double x)
{
  return (int)(x * x);
}

inline double square3(double x)
{
  return (int)(x * x + 0.5);
}
