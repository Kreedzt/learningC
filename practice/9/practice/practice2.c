#include <stdio.h>

void chline(char ch, int i, int j);

int main()
{

    chline('*', 6, 4);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int k = 0; k < i; ++k) {
        for (int g = 0; g < j; ++g) {
            putchar(ch);
        }
        putchar('\n');
    }
}
