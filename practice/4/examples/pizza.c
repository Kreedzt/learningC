#include <stdio.h>

#define PI 3.14159

int main()
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");

    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0 * PI * radius;

    printf("Your basic pizza parameters are follows:\n");
    
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
    // %n: n表示占用位数(输出长度, 空格补全前缀), 实际输出若大于占用位数, 以实际输出为准
    printf("circumference = %10.2f, area = %1.2f\n", circum, area);
    

    return 0;
}
