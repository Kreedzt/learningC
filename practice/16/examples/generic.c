// 定义泛型宏
#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180 / (4 * atanl(1)))

// 泛型平方根函数
#define SQRT(X) _Generic((X),                   \
                         long double: sqrtl,    \
                         default: sqrt,         \
                         float: sqrtf)(X)

// 泛型正弦函数, 角度的单位为度
#define SIN(X) _Generic((X),                                \
                        long double: sinl((X)/RAD_TO_DEG),  \
                        default: sin((X)/RAD_TO_DEG),       \
                        float: sinf((X)/RAD_TO_DEG)         \
                        )

int main()
{
  float x = 45.0f;
  double xx = 45.0;
  long double xxx = 45.0L;
  long double y = SQRT(x);
  long double yy = SQRT(xx);
  long double yyy = SQRT(xxx);

  // 与书中结果可能不一致
  printf("%.17LF\n", y); // float
  printf("%.17LF\n", yy); // default
  printf("%.17LF\n", yyy); // long double

  int i = 45;

  yy = SQRT(i); // default
  printf("%.17Lf\n", yy);

  yyy = SIN(xxx); // long double
  printf("%.17Lf\n", yyy);
  
  return 0;
}
