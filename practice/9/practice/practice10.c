#include <stdio.h>
#include <stdlib.h>

void to_base_n(unsigned long num, int scale);

int main()
{
    unsigned long number;
    int scale;
    printf("Enter an integer and scale (q to quit):\n");

    while (scanf("%lu%d", &number, &scale) == 2) {
        printf("Binary equivalent:");
        to_base_n(number, scale);
        putchar('\n');
        printf("Enter an integer and scale (q to quit):\n");
    }

    printf("Done");

    return 0;
}

void to_base_n(unsigned long num, int scale)
{
    int r;
    r = num % scale;
    if (num >= scale)
        to_base_n(num / scale, scale);
    putchar(r == 0 ? '0' : r + '0');
    return;
}
