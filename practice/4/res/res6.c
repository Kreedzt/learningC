#include <stdio.h>

int main()
{
    unsigned width;
    
    printf("%6.4d\n", 120);
    // printf("intput width:");
    // scanf("%d", &width);
    printf("%#*.*o\n", 3, 2, 071);
    printf("%2s\n", "AB");
    printf("%f\n", +3.13);
    printf("%-7.5s", "zzxxcc");

    return 0;
}
