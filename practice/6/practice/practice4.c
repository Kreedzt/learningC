#include <stdio.h>

int main()
{
    char words[26];

    for (int i = 0; i < 26; ++i) {
        words[i] = 65 + i;
    }

    int count = 0;

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%c", words[j + i + count]);
        }
        count += i;
        printf("\n");
    }

    return 0;
}
