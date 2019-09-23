#include <stdio.h>

int main()
{
    int weight, height;
    scanf("%d %d", &weight, &height); // 符号丢失, 读取字符串问题

    if (weight < 100 && height > 64) {
        
        if (height >= 72) {
            printf("You are very tall for your weight.\n");
        }
        else if (height > 64) { // 删除无用判断, 补全丢失判断
            printf("You are tall for your weight");            
        }
        // FIXME: ???
        else if (weight > 300 || height < 48) {
            if(!(height >= 48)) {
                printf("Your are quite short for your weight.\n");
            }
            else {
                printf("Your weight is deal");
            }
        }
    }
    
    return 0;
}
