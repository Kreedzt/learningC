#include <stdio.h>

int main()
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m); // 参数过多, 输出: 4
    printf("%d %d %d\n", n); // 参数过少, 输出: 4, 259, 345833654
    printf("%d %d\n", f, g); // 参数类型不匹配, 输出: 512 515
    
    return 0;
}
