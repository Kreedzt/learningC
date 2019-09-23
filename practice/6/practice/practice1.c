#include <stdio.h>

int main()
{
    char words[26];

    for (int i = 0; i < 26; ++i) {
        words[i] = 97 + i;
    }

    for (int j = 0; j < 26; ++j) {
        printf("%c ", words[j]);
    }

    return 0;
}
