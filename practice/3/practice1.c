#include <stdio.h>

int main()
{
    printf("%e\n", 3.4E38 * 100.0f); // inf 无限大: 上溢
    printf("%e\n", (0.1234E-10) / 10); // 下溢

    return 0;
}
