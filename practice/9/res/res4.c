#include <stdio.h>

void salami(int num);

int main()
{
    salami(4);

    return 0;
}

// 形参需要类型定义
void salami(int num)
{
    // num无需再次定义
    int count;

    // 应为count++
    for (count = 1; count <= num; count++)
        printf("  O salami mio!\n");
}
