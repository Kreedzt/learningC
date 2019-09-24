#include <stdio.h>
#include <stdlib.h> // 为了使用exit()

int main()
{
    int ch;
    FILE * fp;
    char fname[50];
    
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    
    fp = fopen(fname, "r"); // 打开待读取文件
    if (fp == NULL) { // 如果失败 
        printf("Failed to open file");
        exit(1); // 退出程序
    }

    // getc(fp)从文件的打开中获取一个字符
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    
    
    return 0;
}
