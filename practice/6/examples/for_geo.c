#include <stdio.h>

int main()
{
    double debt;

    for (debt = 100.0; debt < 150.0; debt *= 1.1)
        printf("Your debt is now $%.2f.\n", debt);
    

    return 0;
}
