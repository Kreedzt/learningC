#include <stdio.h>
#include <float.h>

int main()
{
    double doubleVal;
    float floatVal;

    doubleVal = 1.0 / 3.0;
    floatVal = 1.0 / 3.0;

    printf("6 count doubleVal: %.6f, floatVal: %.6f\n", doubleVal, floatVal);
    printf("12 count doubleVal: %.12f, floatVal: %.12f\n", doubleVal, floatVal);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d", DBL_DIG);

    return 0;
}
