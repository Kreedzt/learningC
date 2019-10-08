#include <stdio.h>

double reverse_sum(double a, double b);

int main()
{
    printf("reverse 2.50 & 3.50 sum: %lf", reverse_sum(2.50, 3.50));
    return 0;
}

double reverse_sum(double a, double b)
{
    double reverse_a = 1 / a;
    double reverse_b = 1 / b;

    return 1 / ((reverse_a + reverse_b) / 2);
}
