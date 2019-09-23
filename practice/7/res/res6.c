#include <stdio.h>

int main()
{
    char ch;

    while ((ch = getchar()) != '#') {
        if (ch != '\n') {
            printf("Step 1\n");

            if (ch == 'b') {
                break;
            }

            if (ch != 'h') {
                printf("Step 2\n");
            }
            printf("Step 3\n");
        }
    };

    printf("Done\n");

    return 0;
}
