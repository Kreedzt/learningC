#include <stdio.h>

int main()
{
    float f;

    printf("Enter a floating-point value:");
    scanf("%f", &f);
    printf("\nfixed-point notation: %f", f);
    printf("\nexponential notation: %e", f);
    // C99特性: p计数法
    printf("\np notation: %a", f);

    return 0;
}
