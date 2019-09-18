#include <stdio.h>

int main()
{
    char name[20];
    float height;
    
    printf("Enter your height name:");

    scanf("%f %s", &height, name);

    printf("\n%s, your are %.3f feet tall", name, height);

    return 0;
}
