#include <stdio.h>

void exchange(double* a, double* b, double* c);

int main()
{
    double a = 2.0;
    double b = 5.0;
    double c = 1.0;

    printf("origin: a:%lf, b:%lf, c:%lf\n", a, b, c);
    exchange(&a, &b, &c);
    printf("now: a:%lf, b:%lf, c:%lf\n", a, b, c);

    return 0;
}

void exchange(double* a, double* b, double* c)
{
    double min;
    double mid;
    double max;

    if (*a > *b) {
        if (*a > *c) {
            max = *a;
            if (*b > *c) {
                mid = *b;
                min = *c;
            } else {
                mid = *c;
                min = *b;
            }
        } else {
            max = *c;
            min = *b;
            mid = *a;
        }
    } else {
        if (*b > *c) {
            max = *b;
            if (*a > *c) {
                mid = *a;
                min = *c;
            } else {
                mid = *c;
                min = *a;
            }
        } else {
            min = *a;
            mid = *b;
            max = *c;
        }
    }

    *a = min;
    *b = mid;
    *c = max;
}
