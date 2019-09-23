#include <stdio.h>

int main()
{
    int x = 0;
    char ch = 's';

    while(++x < 3)
        printf("%4d", x);
    printf("\n");

    x = 100;
    while(x++ < 103)
        printf("%4d\n", x);
    printf("%4d\n", x);

    while(ch < 'w') {
        printf("%c", ch);
        ch++;
    }

    printf("%c\n", ch);

    return 0;
}
