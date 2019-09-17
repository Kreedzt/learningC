#include <stdio.h>

int main()
{
    float baseCM = 2.54;
    float userInch;

    printf("Enter your height by inch:");

    scanf("%f", &userInch);

    printf("\nYour height cm is : %f", userInch * baseCM);

    return 0;
}
