#include <stdio.h>
#include <string.h>

int main()
{
    char str[255];
    
    printf("Enter a string(limit 255 words)");
    scanf("%s", str);

    for (int i = strlen(str); i >= 0; --i) {
        printf("%c", str[i]);
    }

    return 0;
}
