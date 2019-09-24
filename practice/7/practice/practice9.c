#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer:");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; ++i) {
        if (
            i % 2 != 0 &&
            i % 3 != 0 &&
            i % 5 != 0 &&
            i % 7 != 0) {
            printf("%d  ", i);
        }
    }

    return 0;
}
