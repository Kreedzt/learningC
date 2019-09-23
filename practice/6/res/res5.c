#include <stdio.h>

int main()
{
    int i = 0;

    while (++i < 4)
        printf("Hi!  ");

    // printf("i: %d\n", i);
    do
        printf("Bye!  ");
    while(i++ < 8);

    return 0;
}
