#include <stdio.h>

typedef double real; // real作为double的别名

int main()
{
    int n = 0;

    real deal; // double类型

    size_t intsize;
    
    intsize = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);

    return 0;
}
