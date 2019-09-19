#include <stdio.h>
#include <math.h>

// #define baseCmToInch 0.39370079
// #define baseCmToFeet 0.03
#define baseInchToCm 2.5
#define baseFeetToCm 30

int main()
{
    float height;
    
    while (height > 0) {
        printf("Enter a height in centimeters:");
        scanf("%f", &height);
        if (height > 0) {
            // TODO: 并未转成 5 feet, 11inches
            printf("%.1f cm = %f feet, %f inches\n", height, height / baseFeetToCm, fmod(height, baseFeetToCm)/ baseInchToCm);
        }
    }

    printf("bye");
    
    return 0;
}
