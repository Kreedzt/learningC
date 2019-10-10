#include <stdio.h>
#include <ctype.h>

int get_char_pos(char c);
void read_chars();

int main()
{
    read_chars();

    return 0;
}

int get_char_pos(char c)
{
    int pos = -1;
    if (islower(c)) {
        pos = c - 96;
    } else if (isupper(c)) {
        pos = c - 64;
    } 

    return pos;
}

void read_chars()
{
    char c;
    int pos = -1;
    while((c = getchar()) != EOF) {
        if ((pos = get_char_pos(c)) != -1) {
            printf("%c is a word, pos is %d\n", c, get_char_pos(c));            
        } else {
            printf("%c is not a word\n", c);
        }
    }
}
