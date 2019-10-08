#include <stdio.h>

void larger_of(double* a, double* b);

int main()
{
    double a = 2.00;
    double b = 4.00;
    printf("origin: a: %lf, b: %lf\n", a, b);
    larger_of(&a, &b);
    printf("now: a: %lf, b: %lf", a, b);

    return 0;
}

void larger_of(double* a, double* b)
{
    if (*a > *b) {
        *b = *a;
    } else {
        *a = *b;
    }
}
