#include <stdio.h>

int main()
{
    float singleWeight = 950;
    float quart;

    printf("Enter water quart:");
    
    scanf("%f", &quart);

    printf("\nTotal water hydrone: %f", (singleWeight * quart) / 3.0e-23);

    return 0;
}
