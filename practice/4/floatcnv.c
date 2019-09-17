#include <stdio.h>

int main()
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    // 结果异常:
    // 原因: 按照栈队列读取, 按位读取, 所以第1个%ld读取的是n1键的前半部分, 第二个是n1的后半部分,
    // 实际打印是 n1-前半, n1-后半, n2-前半, n2-后半
    // n3, n4未输出
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

    return 0;
}
