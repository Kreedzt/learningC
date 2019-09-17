#include <stdio.h>

int main()
{
    int n;

    printf("Please enter three integers:\n");

    // 跳过
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);

    return 0;
}
