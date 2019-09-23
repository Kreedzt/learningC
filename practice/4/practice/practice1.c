#include <stdio.h>

int main()
{
    char firstName[20];
    char lastName[20];

    printf("Please input your lastName firstName:");
    scanf("%s %s", lastName, firstName);

    printf("\nYour Name: %s, %s", lastName, firstName);

    return 0;
}
