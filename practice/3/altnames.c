#include <stdio.h>
#include <inttypes.h> // 支持可移植类型

int main()
{
    // MAC - Clang下编译失败
    int32_t me32; // me32是一个32位有符号整型变量
    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    prtinf("me32 = %" PRId32 "\n", me32);
    
    
    return 0;
}
