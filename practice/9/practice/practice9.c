#include <stdio.h>

double power(double num, int p);
void start(double* x, double* xpow, int* exp);

int main()
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf("  to which\nthe number will be raised, Enter q");
    printf("  to quit.\n");

    stat(&x, &xpow, *exp);
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

void start(double* x, double* xpow, int* exp)
{
    if (scanf("%lf%d", x, exp) == 2) {
        printf("Get x:%lf, exp:%d\n", *x, *exp);
        *xpow = power(*x, *exp);
        printf("%.3g to the power %d is %.5g\n", *x, *exp, *xpow);
        printf("Enter next pair of number or q to quit.\n");
        start(x, xpow, exp);
    }
}

double power(double num, int p)
{
    double pow = 1;
    int i;

    if (p == 0){
        pow = num;
    } else {
        for (i = 1; p < 0? i <= -p : i <= p; ++i) {
            if (p > 0) {
                pow *= num;
            } else {
                pow /= num;
            }
        }
    }

    return pow;
}
