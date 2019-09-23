#include <stdio.h>

int main()
{
    float downloadSpeed;
    float fileSize;
    
    printf("Enter your download speed(Mb/s) file size(MB):");

    scanf("%f %f", &downloadSpeed, &fileSize);

    printf("\nAt %.2f megabits per second, a file of %.2f", downloadSpeed, fileSize);
    printf("\n downloads in %.2f seconds", fileSize / (downloadSpeed / 8));

    return 0;
}
