#include <stdio.h>

#define STOPNUM 150

int main()
{
    int friendsCount = 5;
    int days = 1;

    while (friendsCount < STOPNUM) {
        friendsCount -= days;
        friendsCount *= 2;
        printf("Current friends:%d\n", friendsCount);
        ++days;
    }

    printf("Days count:%d", days);

    return 0;
}
