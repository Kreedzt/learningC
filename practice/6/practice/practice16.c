#include <stdio.h>

int main()
{
    double fund = 100.0;
    int years = 0;

    while (fund >= 0) {
        fund *= 1.08;
        fund -= 10;
        printf("fund left: %lf\n", fund);
        ++years;
    }

    printf("%d years", years);

    return 0;
}
