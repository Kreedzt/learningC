#include <stdio.h>

int main()
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    // %c %d只是对数据的展示方式格式化, 地址不变
    printf("The code for %c is %d.\n", ch, ch);
    return 0;
}
