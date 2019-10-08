#include <stdio.h>

void printGuide();

int validateInput(int min_range, int max_range);

int main()
{
    printGuide();
    printf("received validateInput return: %d", validateInput(1, 4));

    return 0;
}

void printGuide()
{
    printf("Please choose one of the following:\n");
    printf("1) copy files        ");
    printf("2) move files\n");
    printf("3) remove files       ");
    printf("4) quit\n");
    printf("Enter the number of your choice:");
}

int validateInput(int min_range, int max_range)
{
    int current = 4;
    int res = 0;
    while (scanf("%d", &current) != 0) {
        if (current <= max_range && current >= min_range) {
            break;
        } else {
            printGuide();
        }
    }
    return current == 0 ? 4 : current;
}
