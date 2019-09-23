#include <stdio.h>

int main()
{
    int min;
    int max;

    int num;
    
    printf("Enter the minimum:");
    scanf("%d", &min);
    printf("Enter the maximum:");
    scanf("%d", &max);

    for (num = min; num < max; ++num) {
        printf("%d  ", num);
        printf("%ld  ", (long)(num * num));
        printf("%ld  ", (long)(num * num * num));
        printf("\n");
    }

    return 0;
}
