#include <stdio.h>

int main()
{
    int num = 0;

    for (printf("Keep entering numbers.\n"); num != 6;)
        scanf("%d", &num);

    printf("Thasts the one I want!\n");

    return 0;
}
