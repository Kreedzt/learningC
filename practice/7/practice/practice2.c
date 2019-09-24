#include <stdio.h>

int main()
{
    char ch;
    char str[255];
    int count = 0;

    while ((ch = getchar()) != '#') {
        str[count] = ch;
        ++count;
    }

    for (count = 0; count < strlen(str); ++count) {
        if (count % 8 == 0) {
            printf("\n");
        }
        printf("%d ", str[count]);
    }

    printf("\nDone");

    return 0;
}
