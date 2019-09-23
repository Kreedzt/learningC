#include <stdio.h>

int pow(int val, int times);

int main()
{
    int nums[8];
    int count = 0;

    for (int i = 0; i <  8; ++i) {
        nums[i] = pow(2, i + 1);
    }


    printf("nums val:");
    do {
        printf("%d ", nums[count]);
        ++count;
    } while (count < 8);

    return 0;
}

int pow(int val, int times)
{
    if (times == 0) return 1;
    if (times == 1) return val;
    int sum = val;
    for (int i = 1; i < times; ++i) {
        sum *= val;
    }
    return sum;
}
