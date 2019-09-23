#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main()
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short:  %hd %hu\n", num, num);
    printf("-num as short and unsigned short:  %hd %hu\n", mnum, mnum);
    printf("num as short and unsigned short:  %hd %hu\n", num, num);
    // short int 是 2 字节, char是 1 字节, 当%c打印336时, 只会查看储存336的2字节中的后1字节, 相当于整数除以256, 只保留余数:
    // 336的二进制
    // 0 0 0 0 0 0 0 1 (截断, 取后值) 0 1 0 1 0 0 0 0
    printf("num as int and char: %d %c \n", num, num);
    // int 4字节(65618), %hd打印使用了最后2字节, 相当于 65618 % 65536 = 82
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

    return 0;
}
