#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != EOF) {
        switch (ch) {
        case '\n':
            printf("\\n, %d", ch);
            break;
        case '\t':
            printf("\\t, %d", ch);
            break;
        default:
            printf("%c, %d", ch, ch);
            break;
        }
        ++count;
        if (count % 10 == 0){
            printf("\n");
        }
    }

    return 0;
}
