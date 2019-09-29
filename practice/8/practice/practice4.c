#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    int wordsCountArr[255];
    int index = 0;
    int wordsCount = 0;
    double avgWordsCount = 0;
    int sum = 0;

    while ((ch = getchar()) != EOF) {
        if (ispunct(ch) || ch == ' ') {
            wordsCountArr[index] = wordsCount;
            wordsCount = 0;
            ++index;
        } else {
            ++wordsCount;
        }
    }

    for (int i = 0; i <= index; ++i) {
        sum += wordsCountArr[i];
    }

    avgWordsCount = (double)sum / (double)index;

    printf("index:%d, sum:%d\n", index, sum);

    printf("Avg word count per words: %lf", avgWordsCount);
    

    return 0;
}
