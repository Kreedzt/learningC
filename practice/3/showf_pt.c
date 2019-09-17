#include <stdio.h>
#include <math.h>

int main()
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);

    // C99
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig); // inf 无限大 -- 上溢

    printf("%e\n", (0.1234E-10) / 10); // 下溢?

    printf("%e\n", asin(2)); // nan: 特殊浮点值nan

    return 0;
}
