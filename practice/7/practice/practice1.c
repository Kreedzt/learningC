#include <stdio.h>

int main()
{
    char ch;
    int blank_count = 0;
    int enter_count = 0;
    int other_count = 0;
    
    while((ch = getchar()) != '#') {
        if (ch == ' ') {
            ++blank_count;
        } else if (ch == '\n') {
            ++enter_count;
        } else {
            ++other_count;
        }
    }

    printf("blank: %d, enter: %d, other: %d", blank_count, enter_count, other_count);

    return 0;
}
