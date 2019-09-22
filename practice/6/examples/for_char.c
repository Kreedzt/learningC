#include <stdio.h>

int main()
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        printf("The ASCⅡ value for %c is %d.\n", ch, ch);

    return 0;
}
