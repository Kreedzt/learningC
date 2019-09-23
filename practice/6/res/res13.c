#include <stdio.h>

long squareVal(int val);

int main()
{
    int val = 2;
    printf("%ld", squareVal(val));

    return 0;
}

long squareVal(int val) {
    return (long)val * (long)val;
}
