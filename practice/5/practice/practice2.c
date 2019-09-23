#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Input an Integer:");
    scanf("%d", &n);

    while (count <= 10) {
        printf("%d\n", n + count);
        ++count;
    }

    return 0;
}
