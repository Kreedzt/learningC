#include <stdio.h>

int main()
{
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;

    printf("%f \n", a); // 精度问题: 计算机缺少足够的小数位来完成正确的运算

    return 0;
}
