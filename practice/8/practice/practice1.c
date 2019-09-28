#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        ++count;
    }

    printf("共:%d字符", count);

    return 0;
}
