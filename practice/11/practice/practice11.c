#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char str[20];
  char c;
  unsigned int i = 0;
  unsigned int index = 0;
  unsigned int upper_char_count = 0;
  unsigned int lower_char_count = 0;
  unsigned int symbol_char_count = 0;
  unsigned int number_char_count = 0;

  while (1) {
    c = getchar();
    if (c == EOF) {
      break;
    }
    if (index == 19) {
      break;
    }

    str[index] = c;
    ++index;
  }

  str[index + 1] = '\0';

  puts("Read completed:");

  puts(str);

  for (i = 0; i < index; ++i) {
    if (isupper(str[i])) {
      ++upper_char_count;
    } else if (islower(str[i])) {
      ++lower_char_count;
    } else if (ispunct(str[i])) {
      ++symbol_char_count;
    } else if (isdigit(str[i])) {
      ++number_char_count;
    }
  }

  printf("Upper: %d\n", upper_char_count);
  printf("Lower: %d\n", lower_char_count);
  printf("Symbol: %d\n", symbol_char_count);
  printf("Number: %d\n", number_char_count);
  
  return 0;
}
