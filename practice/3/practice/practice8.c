#include <stdio.h>

int main()
{
    int basePintToCup = 2;
    int cupToOunces = 8;
    int ouncesToScoop = 2;
    int scoopToTeaScoop = 3;

    float inputCup;

    printf("Enter cups number:");

    scanf("%f", &inputCup);

    printf("\nTotal Pint: %f", inputCup / basePintToCup);
    printf("\nTotal Ounces: %f", inputCup / basePintToCup / cupToOunces);
    printf("\nTotal Scoopes: %f", inputCup / basePintToCup / cupToOunces / ouncesToScoop);
    printf("\nTotal TeaScoops: %f", inputCup / basePintToCup / cupToOunces / ouncesToScoop / scoopToTeaScoop);

    return 0;
}
