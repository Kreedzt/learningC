#include <stdio.h>

int main()
{
    // C99
    // C99/C11 提供 %zd转换说明sizeof的返回类型, 可以用 %u或%lu代替%zd
    printf("Type int has a size of %zd bytes.\n", sizeof(int)); // 4
    printf("Type char has a size of %zd bytes.\n", sizeof(char)); // 1
    printf("Type long has a size of %zd bytes.\n", sizeof(long)); // 8
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long)); // 8
    // 在char类型为16位, double类型为64位的系统中, sizeof给出的double是4字节
    printf("Type double has a size of %zd bytes.\n", sizeof(double)); // 8
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double)); // 16

    return 0;
}
