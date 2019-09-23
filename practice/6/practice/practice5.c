#include <stdio.h>

int main()
{
    char input_word;
    char words[26];

    for (int i = 0; i < 26; ++i) {
        words[i] = 65 + i;
    }

    printf("Enter an uppercase word:");
    scanf("%c", &input_word);

    for (int i = 0; i < 26; ++i) {
        if (i + 65 <= (int)input_word) {
            for (int j = 0; j <= i - 1; ++j) {
                printf("%c", words[j]);
            }
            printf("%c", words[i]);
            for (int k = i - 1; k >= 0; --k) {
                printf("%c", words[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
