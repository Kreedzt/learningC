#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    
    for(; i < 4; ++i) {
        for(j = 0;j < 8; ++j) {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}
