#include <stdio.h>

void printline(char ch, int times, int rows);

int main()
{
    printline('h', 5, 3);

    return 0;
}


void printline(char ch, int times, int rows)
{
    for (int i = 0; i < rows; ++i)  {
        for (int j = 0; j < times; ++j) {
            putchar(ch);
        }
        putchar('\n');
    }
}
