#include <stdio.h>

#define BLURB "Authentic imitation"

int main()
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    // .5限制只打印5个字符
    printf("[%24.5s]\n", BLURB);
    // - 表示左对齐
    printf("[%-24.5s]\n", BLURB);
    
    return 0;
}
