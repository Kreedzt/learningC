#include <stdio.h>
#define MONTHS 12

int main()
{
    // 重要特性: [4]指定后, 后续索引从5开始
    int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    for (i = 0; i< MONTHS; i++)
        printf("%2d  %d\n", i + 1, days[i]);
    

    return 0;
}
