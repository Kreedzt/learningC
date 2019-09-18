#include <stdio.h>

int main()
{
    int intNum;
    int intNum2;
    float floatNum;
    float floatNum2;
    char charStr[40];
    
    printf("Input intNum:");
    scanf("%d", &intNum);
    printf("Res: %d\n", intNum);

    printf("Input floatNum floatNum2:");
    scanf("%f %f", &floatNum, &floatNum2);
    printf("Res: %f, %e\n", floatNum, floatNum2);

    printf("Input string:");
    scanf(" %s", charStr);
    printf("Res: %s\n", charStr);

    printf("Input string intNum:");
    scanf(" %s %d", charStr, &intNum);
    printf("Res: %s,%d\n", charStr, intNum);

    printf("Input string(skip) intNum:");
    scanf(" %*s %d", &intNum2);
    printf("Res: %d\n", intNum2);

    return 0;
}
