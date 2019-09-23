#include <stdio.h>

int main()
{
    char ch; // 8位
    int i; // 32位
    float fl;
    
    fl = i = ch = 'C'; // 'C'作为1字节存储在ch, i接收转换的整数67, fl接收浮点数67.00
    printf("ch=%c,i=%d,fl=%2.2f\n", ch, i, fl);
    ch += 1; // ch的值被转成整数67 + 1
    i = fl + 2 * ch; // 136转成浮点数, 136 + 67.00 = 203.00f
    fl = 2.0 * ch + i; // ch转成浮点数68.00, i=203转成浮点型203.00
    printf("ch=%c,i=%d,fl=%2.2f\n", ch, i, fl); 
    ch = 1107;
    printf("Now ch = %c\n", ch); // 类型降级 ch 的值为 1107 % 265
    ch = 80.89;
    printf("Now ch = %c\n", ch); // 字符截断

    return 0;
}
