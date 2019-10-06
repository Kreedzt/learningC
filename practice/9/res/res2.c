#include <stdio.h>

double sum_double(double a, double b);

int main()
{
    printf("sum(1.00 + 2.00): %lf", sum_double(1.00, 2.00));
    
    return 0;
}

double sum_double(double a, double b)
{
    return a + b;
}
