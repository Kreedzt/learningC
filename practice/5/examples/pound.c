#include <stdio.h>

void pound(int n);

int main()
{
    int times = 5;
    char ch = '!'; // 33
    float f = 6.0f;

    pound(times);
    pound(ch); // 和pound((int) ch); 相同
    pound(f); // 和pound((float) f); 相同

    return 0;
}

void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n"); 
}
