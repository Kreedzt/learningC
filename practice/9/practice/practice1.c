#include <stdio.h>

double min(double x, double y);

int main()
{
    printf("1.00 and 2.00 min is: %lf", min((double) 1.00, (double) 2.00));

    return 0;
}

double min(double x, double y)
{
    return x > y ? y : x;
}
