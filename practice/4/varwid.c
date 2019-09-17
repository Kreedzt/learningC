#include <stdio.h>

int main()
{
    unsigned width, precision;

    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");

    scanf("%d", &width);

    // * 提供字符宽度
    printf("The number is %*d:\n", width, number);
    printf("Now enter a width and a precision:\n");

    scanf("%d %d", &width, &precision);

    // * 提供字符宽度
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}
