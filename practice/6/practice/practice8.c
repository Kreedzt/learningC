#include <stdio.h>

double calc(double x, double y);

int main()
{
    double x, y;
    int res;

    do {
        printf("Enter two double values:");
        res = scanf("%lf %lf", &x, &y);
    } while(res && printf("(x - y) / (x * y):%lf\n", calc(x, y)));

    printf("Exit");

    return 0;
}

double calc(double x, double y) {
    return (x - y) / (x * y);
}
