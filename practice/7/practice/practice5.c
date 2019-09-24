#include <stdio.h>

int main()
{
    char ch;
    int replace_count = 0;
    char str[255];
    int index = 0;

    while ((ch = getchar()) != '#') {
        switch(ch) {
        case '.':
            str[index] = '!';
            ++replace_count;
            ++index;
            break;
        case '!':
            str[index] = '!';
            str[index + 1] = '!';
            ++replace_count;
            index += 2;
            break;
        default:
            str[index] = ch;
            ++index;
        }
    }

    printf("new str: %s\n", str);
    printf("replaced count: %d", replace_count);

    return 0;
}
