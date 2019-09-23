#include <stdio.h>

#define SPACE ' '

int main()
{
    char ch;
    
    // ch = getchar(); // 读取第一个字符
    // while (ch != '\n') { // 当一行未结束时
    //     if (ch == SPACE) // 留下空格
    //         putchar(ch); // 该字符不变
    //     else
    //         putchar(ch + 1); // 改变其他字符
    //     ch = getchar(); // 获取下一个字符
    // }
    // putchar(ch); // 打印换行符

    
    while ((ch = getchar()) != '\n') {
        if (ch == SPACE) // 留下空格
            putchar(ch); // 该字符不变
        else
            putchar(ch + 1); // 改变其他字符    
    }

    return 0;
}
