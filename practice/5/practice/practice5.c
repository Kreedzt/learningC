#include <stdio.h>

int main()
{
    int count, sum, max;

    count = 0;
    sum = 0;

    printf("Enter max days:");

    scanf("%d", &max);

    while (count++ < max)
        sum += count;

    printf("sum = %d\n", sum);


    return 0;
}
