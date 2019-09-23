#include <stdio.h>

int main()
{
    int numsArr[7];
    int res;

    for (int i = 0; i < 8; ++i) {
        printf("Enter the index %d val:", i);
        res = scanf("%d", &numsArr[i]);
    }

    printf("numsArr val:");
    for (int i = 7; i >= 0; --i) {
        printf("%d ", numsArr[i]);
    }
    
    printf("\nExit");
    
    return 0;
}
