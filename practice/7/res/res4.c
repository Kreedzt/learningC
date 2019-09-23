#include <stdio.h>

int main()
{
    char ch;
    int lc = 0; // 统计小写字母
    int uc = 0; // 统计大写字母
    int oc = 0; // 统计其他字母

    while ((ch = getchar()) != '#') {
        // 条件错误
        if ('a' <= ch && ch <= 'z') {
            lc++;
            // 条件错误
        } else if (ch >= 'A' && ch <= 'Z') {
            uc++;
        } else {
            oc++;
        }
    }

    printf("%d lowercase, %d uppercase, %d other", lc, uc, oc); // 字符串错误

    return 0;
}
