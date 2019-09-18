#include <stdio.h>

int main()
{
    int count, sum; // 声明, 不是表达式语句, 也没有值
    
    count = 0; // 表达式语句
    sum = 0; // 表达式语句

    while (count++ < 20) // 迭代语句
        sum += count;
    printf("sum=%d\n", sum);

    return 0; // 跳转语句
}
