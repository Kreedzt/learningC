#include <stdio.h>

int main()
{
    char grade = 'B';
    char fate = 'FATE';

    char beep = '\007'; // 可以省略0, '\07', 甚至 '\7', 编译器自动识别为八进制
    
    grade = fate;

    printf("grade: %c\n", grade);
    printf("fate: %c\n", fate);
    printf("new grade: %c\n", grade);
    printf("beep: %c\n", beep);
    printf("beep in number: %#o", beep);
    
    return 0;
}
