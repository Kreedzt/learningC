#include <stdio.h>

int main()
{
    char lets[26];

    for (int i = 0; i < 26; ++i) {
        lets[i] = 65 + i;
    }

    for (int j = 0; j < 6; ++j) {

        for (int k = 0; j - k >= 0; ++k) {
            printf("%c", lets[5 - k]);
        }
        printf("\n");
    }

    return 0;
}
