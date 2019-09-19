#include <stdio.h>

int main()
{
    int x, y;
    
    x = (2 + 3) * 6;
    printf("x: %d\n", x); // 30
 
    x = (12 + 6) / 2 * 3;
    printf("x: %d\n", x); // 27

    y = x = (2 + 3) / 4;
    printf("x: %d, y: %d\n", x, y); // 1, 1

    y = 3 + 2 * (x = 7 / 2);
    printf("x: %d, y: %d", x, y); // 3, 9
}
