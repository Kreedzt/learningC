#include <stdio.h>


int main()
{
    int min, max;
    int sum = 0;
    int count;

    printf("Enter lower and upper integer limits:");
    scanf("%d %d", &min, &max);

    while (min < max) {
        for (sum = 0, count = min; count <= max; ++count) {
            sum += count * count;
        }
        printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, sum);
        printf("Enter next set of limits:");
        scanf("%d %d", &min, &max);
    }
    
    printf("Done");

    return 0;
}
