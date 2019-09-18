#include <stdio.h>
#include <string.h>

int main()
{
    char lastName[20];
    char firstName[20];
    
    printf("Enter your lastName:");
    scanf("%s", lastName);
    
    printf("\nEnter your firstName:");
    scanf("%s", firstName);

    printf("\n %s %s", lastName, firstName);
    printf("\n %*d %*d", strlen(lastName), strlen(lastName), strlen(firstName), strlen(firstName));
    printf("\n %-*d %-*d", strlen(lastName), strlen(lastName), strlen(firstName), strlen(firstName));

    return 0;
}
