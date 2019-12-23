#include <stdio.h>
#include <string.h>
#include "s_gets.h"

void start_process();
int read_first_words_length(char* str);

int main(int argc, char *argv[])
{
  start_process();

  putchar("Bye.");
  
  return 0;
}

int read_first_words_length(char* str)
{
  char* source = str;
  int length = 0;

  while (*source != '\0' && *source != ' ') {
    ++length;
    ++source;
  }

  return length;
}

void start_process()
{
  char str[10][20];
  char* temp_str;
  char option;
  char* sorted_str_by_asc[10];
  char* sorted_str_by_words[10];
  char* sorted_str_by_length[10];
  int index = 0;
  int fix_index = 0;
  int inner_index = 0;
  int deep_index = 0;
  int exit = 0;

  for (index = 0; index < 10; ++index) {
    printf("Enter %d source str:\n", index + 1);
    s_gets(str[index], 19);
    if (strchr(str[index], EOF) != NULL) {
      break;
    }
  }

  for (fix_index = index; fix_index < 10; ++fix_index) {
    strncpy(str[fix_index], "", 20);
  }

  
  while (1 && exit == 0) {
    puts("==================");
    puts("Select Option");
    puts("a) 打印源字符串列表");
    puts("b) 以ASCⅡ顺序打印字符串");
    puts("c) 按长度递增顺序打印字符串");
    puts("d) 按字符串中第一个单词的长度打印字符串");
    puts("q) 退出");

    printf("Enter your Option:");
    option = getchar();
    if (option == '\n') {
      option = getchar();
    }

    switch (option) {
      case 'a': {
        inner_index = 0;
        for (inner_index = 0; inner_index < index; ++inner_index) { 
          puts(str[inner_index]);
        }
        break;
      }
        // 按ASCⅡ
      case 'b': {
        for (inner_index = 0; inner_index < index; ++inner_index) {
          sorted_str_by_asc[inner_index] = str[inner_index];
        }

        for (inner_index = 0; inner_index < index; ++inner_index) {
          for (deep_index = 0; deep_index < index - 1 - inner_index; ++deep_index) {
            if (sorted_str_by_asc[deep_index][0] < sorted_str_by_asc[deep_index + 1][0]) {
              temp_str = sorted_str_by_asc[deep_index];
              sorted_str_by_asc[deep_index] = sorted_str_by_asc[deep_index + 1];
              sorted_str_by_asc[deep_index + 1] = temp_str;
            }
          }
        }

        for (inner_index = 0; inner_index < index; ++inner_index) {
          puts(sorted_str_by_asc[inner_index]);
        }

        break;
      }
        // 按长度
      case 'c': {
        for (inner_index = 0; inner_index < index; ++inner_index) {
          sorted_str_by_length[inner_index] = str[inner_index];
        }

        for (inner_index = 0; inner_index < index; ++inner_index) {
          for (deep_index = 0; deep_index < index - 1 - inner_index; ++deep_index) {
            if (strlen(sorted_str_by_length[deep_index]) > strlen(sorted_str_by_length[deep_index + 1])) {
              temp_str = sorted_str_by_length[deep_index];
              sorted_str_by_length[deep_index] = sorted_str_by_length[deep_index + 1];
              sorted_str_by_length[deep_index + 1] = temp_str;
            }
          }
        }

        for (inner_index = 0; inner_index < index; ++inner_index) {
          puts(sorted_str_by_length[inner_index]);
        }

        break;
      }
      case 'd': {
        for (inner_index = 0; inner_index < index; ++inner_index) {
          sorted_str_by_words[inner_index] = str[inner_index];
        }

        for (inner_index = 0; inner_index < index; ++inner_index) {
          for (deep_index = 0; deep_index < index - 1 - inner_index; ++deep_index) {
            if (read_first_words_length(sorted_str_by_words[deep_index]) > read_first_words_length(sorted_str_by_words[deep_index + 1])) {
              temp_str = sorted_str_by_words[deep_index];
              sorted_str_by_words[deep_index] = sorted_str_by_words[deep_index + 1];
              sorted_str_by_words[deep_index + 1] = temp_str;
            }
          }
        }

        for (inner_index = 0; inner_index < index; ++inner_index) {
          puts(sorted_str_by_words[inner_index]);
        }

        break;
        break;
      }
      case 'q': {
        exit = 1;
        break;
      }
      default:
        puts("选项不正确, 请重新输入");
        break;
    }

    puts("==================");
  }
}
