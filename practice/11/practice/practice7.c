#include <stdio.h>
#include "s_gets.h"

char* string_in(char* src, char* target);

int main(int argc, char *argv[])
{
  char source[20];
  char target[20];
  char* res;

  while (1) {
    printf("Input source str:\n");
    s_gets(source, 20);
    if (source[0] == '\n' || source[0] == '\0') {
      break;
    }
    
    printf("Input target str:\n");
    s_gets(target, 20);
    if (target[0] == '\n' || target[0] == '\0') {
      break;
    }
    
    res = string_in(source, target);

    if (res) {
      printf("res:%s\n", res);
    } else {
      printf("not matched \"zsx\"\n");      
    }
  }
  
  return 0;
}


char* string_in(char* src, char* target)
{
  char* source_ptr = src;
  char* target_ptr = target;
  char* res = NULL;
  int is_included = 0;
  int start_index = 0;
  int current_index = 0;
  int inner_index = 0;
  char* temp_ptr;
  

  while (*source_ptr && !is_included) {
    // 匹配到第一项
    if (*source_ptr == *target) {
      inner_index = current_index;
      target_ptr = target;
      temp_ptr = source_ptr;

      // 循环比较非结束项
      while (*target_ptr != '\0') {
        if (*target_ptr == *temp_ptr) {
          is_included = 1;
          ++target_ptr;
          ++temp_ptr;
        } else {
          is_included = 0;
          temp_ptr = NULL;
          break;
        }
      }
    } 
    ++current_index;
    ++source_ptr;
  }

  if (is_included) {
    res = src + inner_index;
  }

  return res;
}
