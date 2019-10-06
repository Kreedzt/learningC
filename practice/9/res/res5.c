#include <stdio.h>

int int_max(int a, int b, int c);

int main()
{
    printf("1, 3, 2 max: %d", int_max(1, 3, 2));
    

    return 0;
}

int int_max(int a, int b, int c)
{
    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c) {
            return b;
        } else {
            return c;
        }
    }
}
