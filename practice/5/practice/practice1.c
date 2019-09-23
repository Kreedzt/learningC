#include <stdio.h>

#define baseTrans 60

int main()
{
    int minutes = 1;

    while (minutes > 0) {
        printf("Input minutes next line, auto transform hours:\n");
        scanf("%d", &minutes);
        if (minutes > 0) {
            printf("%d hours, %d minutes\n", minutes / 60, minutes % 60);
        }
    }

    printf("Exit");

    return 0;
}
