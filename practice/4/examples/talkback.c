#include <stdio.h>
#include <string.h> // 提供strlen()函数的原型

#define DENSITY 62.4 // 人体密度(单位: 磅/立方英尺)

int main()
{

    float weight, volume;
    int size, letters;
    char name[40]; // 容纳40个字符的数组

    printf("Hi! what's your first name?\n");

    // 此处不需要&即是地址
    scanf("%s", name);
    
    printf("%s, what's your weight in pounds?\n", name);

    // 此处需要&转为地址
    scanf("%f", &weight);

    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    
    printf("Well, %s, your volume is %2.2f cubie feet.\n", name, volume);
    printf("Also, your first name has %d letters, \n", letters);
    printf("and we have %d bytes to store it.\n", size);
    
    return 0;
}
