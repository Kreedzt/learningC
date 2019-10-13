#include <stdio.h>

int fibonacci(int n);

int main()
{
    int pos;
    printf("int a pos to get fibonacci num:");
    while (scanf("%d", &pos) == 1) {
        printf("fibonacci res:%d\n", fibonacci(pos));
        printf("int a pos to get fibonacci num:");
    }
    printf("Done.");

    return 0;
}

int fibonacci(int n)
{
    int res = 1; // 当前项 / 结果
    int count = 2; // 计数
    int prev = 1; // 前一项
    int prev2 = 1; // 前2项

    if (n <= count) {
        return res;
    }

    while (count < n) {
        res = prev + prev2;
        prev2 = prev;
        prev = res;
        ++count;
    }
    
    return res;
}
