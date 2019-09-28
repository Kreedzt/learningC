#include <stdio.h>

int main()
{
    char ch;

    while((ch = getchar()) != 'i') {
        putchar(ch);
    }
    
    return 0;
}
