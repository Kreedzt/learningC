#include <stdio.h>

void alter(int* x, int* y);

int main()
{
    int x = 1;
    int y = 2;

    printf("Origin x: %d, y: %d", x, y);
    putchar('\n');

    alter(&x, &y);

    printf("Now x: %d, y: %d", x, y);

    return 0;
}

void alter(int* x, int* y)
{
    int tmpx = *x;
    int tmpy = *y;
    *x = tmpx + tmpy;
    *y = tmpx - tmpy;
}
