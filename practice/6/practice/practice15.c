#include <stdio.h>

#define SINGLEPER 10
#define COMPLEXPER 5

int main()
{
    double count1 = 100;
    double count2 = 100;
    int times = 0;
    
    while (count2 <= count1) {
        count1 += 100 * 0.1;
        count2 *= 1.05;
        printf("count1:%lf,  count2:%lf\n", count1, count2);
        ++times;
    }

    printf("%d years later.", times); // 27
    printf("count1:%lf,  count2:%lf", count1, count2);

    return 0;
}
