#include <stdio.h>

int main()
{
    double nums[8];
    double total[8];

    for (int i = 0; i < 8; ++i) {
        printf("Enter the index %d value:", i);
        scanf("%lf", &nums[i]);
        if (i == 0) {
            total[i] = nums[i];
        } else {
            total[i] = total[i - 1] + nums[i];
        }
    }

    printf("nums:");
    for (int j = 0; j < 8; ++j){
        printf("%lf ", nums[j]);
    }

    printf("\ntotal:");
    for (int j = 0; j < 8; ++j){
        printf("%lf ", total[j]);
    }

    return 0;
}
