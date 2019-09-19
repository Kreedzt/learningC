#include <stdio.h>

#define TEN 10

int main()
{
    int n = 0;
    char c = 96;

    while (n++ < TEN)
        printf("%5d", n);
    printf("\n");

    while (c++ < 103)
        printf("%5c", c);
    printf("\n");


    return 0;
}
