#include <stdio.h>

void printRes(int times);

int main()
{
    int times = 0;
    int res;

    do {
        if (times) {
            printRes(times);
        }
        printf("Enter times:");
        res = scanf("%d", &times);
    } while(res != 0);

    return 0;
}

void printRes(int times)
{
    double sum1 = 0.0;
    double sum2 = 0.0;

    for (int i = 1; i <= times; ++i) {
        sum1 += 1.0 / (i * 1.0);
        if (i % 2 == 0) {
            sum2 -= 1.0 / (i * 1.0);
        } else {
            sum2 -= 1.0 / (-i * 1.0);
        }
    }
    printf("sum1:%lf\n", sum1);
    printf("sum2:%lf\n", sum2);
    printf("total:%lf\n", sum1 + sum2);
}
