#include <stdio.h>

int main()
{
    unsigned int un = 3000000000; // 30 0000 0000
    short end = 200;
    long big = 65537; // 00000000 00000001 00000000 00000001
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    // %hd: 打印后16位: 00000000 00000001
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}
