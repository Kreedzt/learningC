#include <stdio.h>

int main() 
{
    float cows = 0.0;
    float legs;
    
    printf("How many cow legs did you count?\n");
    scanf("%f", &legs);

    cows = legs / 4;
    
    printf("That implies there are %f cows.\n", cows);

    return 0;
}
