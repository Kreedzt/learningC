#include <stdio.h>

int main()
{
    char ch;

    do {
        scanf("%c", &ch);
        printf("%c", ch);
    } while(ch != 'g');

    return 0;
}
