#include <stdio.h>

int main()
{
    int value;

    for (value = 36; value > 0; value /= 2)
        printf("%3d", value); // int:  36 18  9  4  2  1

    printf("\n");

    double value2;

    for (value2 = 36; value2 > 0; value2 /= 2)
        printf("%3d", value2); // dobule: 溢出

    return 0;
}
