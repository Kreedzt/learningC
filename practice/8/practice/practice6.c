#include <stdio.h>

char get_first();

int main()
{
    printf("This program get first null-empty word, try it there:\n");

    putchar(get_first());

    return 0;
}

char get_first()
{
    int ch;

    while ((ch = getchar()) != EOF) {
        if (ch != ' ') {
            break;
        }
    }

    return ch;
}
