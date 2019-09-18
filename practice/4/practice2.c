#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[20];
    char lastName[20];
    char concatName[40] = "";
    
    printf("Please input your lastName firstName:");
    scanf("%s %s", lastName, firstName);

    strcat(concatName, lastName);
    strcat(concatName, firstName);

    printf("\n\"%18s\"", concatName);
    printf("\n\"%-18s\"", concatName);
    printf("\n%3s", concatName);

    return 0;
}
