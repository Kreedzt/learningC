#include <stdio.h>

int main()
{
    char ch;

    ch = '\n';

    printf("%c", ch);

    ch = 10;
    printf("%c", ch);

    ch = 012;
    printf("%c", ch);

    ch = 0x0a;
    printf("%c", ch);

    return 0;
}
