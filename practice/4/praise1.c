#include <stdio.h>

#define PRAISE "You are an extraorinary being"

int main()
{
    char name[40];

    printf("What's your name?");

    // scanf遇到空格不再读取输入, 可用fgets代替
    scanf("%s", name);

    printf("Hello, %s.%s\n", name, PRAISE);

    return 0;
}
