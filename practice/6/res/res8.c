#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    while (ch != 'g') {
        printf("%c", ++ch);
        scanf("%c", &ch);
    }

    return 0;
}
