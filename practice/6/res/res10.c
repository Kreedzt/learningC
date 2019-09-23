#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    for (ch = '$'; ch != 'g'; scanf("%c", &ch))
        printf("%c", ch);

    return 0;
}
