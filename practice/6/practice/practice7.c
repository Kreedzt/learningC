#include <stdio.h>
#include <string.h>

int main()
{
    char words[26];

    printf("Enter a string:");
    scanf("%s", words);

    printf("string: %s\n", words);
    printf("Reverse string:");
    
    for (int c = strlen(words); c >= 0; c--) {
        printf("%c", words[c]);
    }
    

    return 0;
}
