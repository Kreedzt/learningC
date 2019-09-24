#include <stdio.h>

int main()
{
    char ch;
    int count = 0;
    char prev_char;
    
    
    while ((ch = getchar()) != '#') {
        if (prev_char == 'e' && ch == 'i') {
            ++count;
        }
        prev_char = ch;
    }

    printf("ei displayed %d times", count);

    return 0;
}
