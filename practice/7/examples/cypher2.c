#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) // 如果是一个字符
            putchar(ch + 1); // 显示该字符的下一个字符
        else 
            putchar(ch); // 否则原样显示
    }

    putchar(ch); // 显示换行符

    return 0;
}
