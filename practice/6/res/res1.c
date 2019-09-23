#include <stdio.h>

int main()
{
    int quack = 2;
    
    quack += 5;
    printf("%d\n", quack);

    quack = 2;
    quack *= 10;
    printf("%d\n", quack);

    quack = 2;
    quack -= 6;
    printf("%d\n", quack);

    quack = 2;
    quack /= 8;
    printf("%d\n", quack);

    quack = 2;
    quack %= 3;
    printf("%d\n", quack);
    

    return 0;
}
