#include <stdio.h>

int main()
{
    double guessNumberVal = 50;
    double prevMinVal = 0;
    double prevMaxVal = 100;
    int timeCount = 0;
    int option = 0;

    do {
        if (option == 1) {
            prevMaxVal = guessNumberVal;
        } else if (option == 2){
            prevMinVal = guessNumberVal;
        }
        guessNumberVal = (prevMinVal + prevMaxVal) / 2;
        printf("Guess num program, select option:\n");
        printf("1. Greater than my val.\n");
        printf("2. smaller than my val.\n");
        printf("3. equal to my val.\n");
        printf("Guess val:%lf\n", guessNumberVal);
        ++timeCount;
        scanf("%d", &option);
    } while(option != 3);

    printf("Your val is:%lf\n", guessNumberVal);
    printf("Guess time count:%d", timeCount);

    return 0;
}
