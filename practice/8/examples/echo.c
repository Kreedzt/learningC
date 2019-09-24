#include <stdio.h>

int main()
{
    char ch;

    while ((ch = getchar()) != '#')
        printf("ch:%c\n",ch);
        putchar(ch);

    // scanf("%c", &ch);
    // printf("\nch:%c", ch);
    // scanf("%c", &ch);
    // printf("\nch:%c", ch);

    return 0;
}
