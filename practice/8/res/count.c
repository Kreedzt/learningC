#include <stdio.h>

int main()
{
    char ch;
    int count = 0;
    while((ch = getchar()) != EOF) {
        ++count;
    }

    // putchar(count);
    printf("%d", count);

    return 0;
}
