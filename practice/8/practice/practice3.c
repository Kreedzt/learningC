#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    int upper_count = 0;
    int lower_count = 0;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            ++upper_count;
        } else if (islower(ch)) {
            ++lower_count;
        }
    }

    printf("upper: %d, lower: %d", upper_count, lower_count);

    return 0;
}
