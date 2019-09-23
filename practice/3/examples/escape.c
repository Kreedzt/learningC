#include <stdio.h>

int main()
{
    float salary;
    
    printf("\aEnter your desired monthly salary:");
    printf("$_______\b\b\b\b\b\b\b"); // 退格字符使得光标左移, 某些系统会擦除_, 某些系统不会
    
    scanf("%f", &salary);

    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n"); // \r: 跳到光标起始处
    
    
    return 0;
}
