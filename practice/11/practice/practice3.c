#include <stdio.h>

#define LEN 10

int is_valid_char(char ch);
int read_first_word(char str[], int length);
             
int main(int argc, char *argv[])
{
  char str[LEN];

  read_first_word(str, LEN - 1);

  printf("receviced str: %s\n", str);
  
  return 0;
}

int is_valid_char(char ch)
{
  int res = 1;
  if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
    res = 0;
  }
  return res;
}

int read_first_word(char str[], int length)
{
  char ch;
  int received_completed = 0;
  int receiving_char = 0;
  int index = 0;

  while (received_completed == 0) {
    ch = getchar();
    if (is_valid_char(ch)) {

      if (receiving_char == 0) {
        receiving_char = 1;        
      }
      
      if (index < length) {
        str[index] = ch;
        ++index;
      }
        
    } else {
      if (receiving_char == 1) {
        receiving_char = 0;
        received_completed = 1;
        break;
      } else {
        continue;        
      }
    }
  }

  if (index + 1 <= length) {
    str[index + 1] = '\0';
  }
  
  return index;
}
