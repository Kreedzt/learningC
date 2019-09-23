#include <stdio.h>

int main()
{
    // int i, j, list(10);
    // int list(10); // msvc特有写法
    int i, j;

    int list[11]; // 定义为数组

    for (i = 1; i <= 10; i++) {
        list[i] = 2 * i + 3;
        for (j = 1; j <= i; j++) // 避免越界访问
            printf(" %d", list[j]);
        printf("\n");
    }
    
    return 0;
}
