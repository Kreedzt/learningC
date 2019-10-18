#include <stdio.h>

int data[2] = { 100, 200 };
int moredata[2] = { 300, 400 };

int main()
{
    int *p1, *p2, *p3;
    
    p1 = p2 = data;
    p3 = moredata;

    printf(" *p1=%d,  *p2=%d,  *p3=%d\n", *p1, *p2, *p3);
    printf(" *p1++=%d, *++p2=%d, (*p3)++=%d\n", *p1++, *++p2, (*p3)++);
    // 只有(*p3)++改变了数组元素的值, 其他只是指向数组的下一个元素
    printf(" *p1=%d,  *p2=%d,  *p3=%d\n", *p1, *p2, *p3);

    return 0;
}
