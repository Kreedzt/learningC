#include <stdio.h>

int main()
{
    float floatVal;
    
    printf("Enter a float val:");
    scanf("%f", &floatVal);

    printf("%.1f %e\n", floatVal, floatVal);
    printf("%+.3f %E", floatVal, floatVal);

    return 0;
}
