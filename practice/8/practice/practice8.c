#include <stdio.h>
// #include <ctype.h>

int validateOption(char option);

void calc(float a, float b, char option);

int main()
{
    char option;
    float input_val1 = 0;
    float input_val2 = 0;

    do {
        printf("Enter the operation of your choice:\n");
        printf("a. add        s. substract\n");
        printf("m. multiply        d. divide\n");
        printf("q. quit\n");

        // 处理换行符
        while ((option = getchar()) == '\n') {
            continue;
        }

        // 验证选项
        if (!validateOption(option)) {
            continue;
        }

        if (option == 'q') {
            printf("Bye.");
            return 0;
        }
        
        printf("Enter first number:");
        while (scanf("%f", &input_val1) != 1) {
            printf("Please enter a number, such as 2.5. -1.78E8, or 3:");
        }
        printf("Enter second number:");
        while (scanf("%f", &input_val2) != 1) {
            printf("Please enter a number, such as 2.5. -1.78E8, or 3:");
        }
        // 验证数值运算有效性
        while (option == 'd' && input_val2 == 0) {
            printf("Please enter a effect number, such as 2.5. -1.78E8, or 3:");
            scanf("%f", &input_val2);
        }

        // 计算结果并输出
        calc(input_val1, input_val2, option);
    } while (1);

    return 0;
}

int validateOption(char option)
{
    int isEffect = 0;
    switch(option) {
    case 'a':
    case 's':
    case 'm':
    case 'd':
    case 'q':
        isEffect = 1;
        break;
    default:
        printf("Please enter an effect option\n");
        break;
    }

    return isEffect;
}

void calc(float a, float b, char option)
{
    float res = 0;
    char operator;
    
    switch(option) {
    case 'a':
        res = a + b;
        operator = '+';
        break;
    case 's':
        res = a - b;
        operator = '-';
        break;
    case 'm':
        res = a * b;
        operator = '*';
        break;
    case 'd':
        res = a / b;
        operator = '/';
        break;
    default:
        break;
    }

    printf("%f %c %f = %f\n", a, operator, b, res);
}
