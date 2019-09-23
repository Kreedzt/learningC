#include <stdio.h>

int main()
{
    int x;
    
    x = (int)3.8 + 3.3;
    printf("x: %d\n", x); // 6
 
    x = (2 + 3) * 10.5;
    printf("x: %d\n", x); // 52

    x = 3 / 5 * 22.0;
    printf("x: %d\n", x); // 0

    x = 22.0 * 3 / 5;
    printf("x: %d\n", x); // 13
}
