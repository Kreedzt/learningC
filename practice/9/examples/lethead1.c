#include <stdio.h>

#define NAME "GIGATHINK,  INC."
#define ADDRESS "101  Megabuck  Plaza"
#define PLACE "Megapolis,  CA  94904"
#define WIDTH 40

void starbar(); // 函数原型

int main()
{
    starbar();

    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(); // 使用函数

    return 0;
}

void starbar()
{
    int count;

    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}
