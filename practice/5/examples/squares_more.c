#include <stdio.h>

int main()
{
    int num = 1;

    while (num < 21) {
        // 不同环境输出不同, 编译器自行选择先对哪个参数求值
        // 可能先对最后一个参数求值, 导致打印 6 25
        // 可能从右往左执行, 导致打印 6 30
        printf("%10d %10d\n", num, num * num++);
    }

    return 0;
}
