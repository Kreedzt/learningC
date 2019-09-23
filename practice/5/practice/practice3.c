#include <stdio.h>

int main()
{
    int days;

    while (days > 0) {
        printf("Input days:");
        scanf("%d", &days);
        if (days > 0) {
            printf("%d days are %d weeks, %d days\n", days, days / 7, days % 7);            
        }
    }

    printf("Exit");

    return 0;
}
