#include <stdio.h>

int sum_two(int a, int b);

int main()
{
    printf("sum(1 + 2): %d", sum_two(1, 2));

    return 0;
}


int sum_two(int a, int b)
{
    return a + b;
}
