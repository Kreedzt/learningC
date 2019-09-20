#include <stdio.h>

void printVal(double v);

int main()
{
    double val;
    printf("Input a dobule val:");
    scanf("%lf", &val);
    printVal(val);

    return 0;
}

void printVal(double v) {
    printf("%f", v * v * v);
}
