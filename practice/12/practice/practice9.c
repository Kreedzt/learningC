#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
  char** array;
  unsigned int size;
  char* old_arr = '\0';
  char* temp_arr = '\0';
  int i;
  char c;
  unsigned int current_length = 0;
  unsigned int whole_length = 0;

  printf("How many words do you wish to enter?: ");

  while (scanf("%d", &size) == 1 && size > 0) {
    array = (char**)malloc(sizeof(size));
    printf("Enter %d words now:\n", size);

    getchar();
    whole_length = 0;

    for (i = 0; i < size; ++i) {
      current_length = 0;
      while (c = getchar()) {
        if (c == '\n') {
          *(array + i) = (char*)malloc(sizeof(char) * current_length + 1);
          strncpy(*(array + i), temp_arr, current_length + 1);
          break;
        }

        if (c == ' ') {
          *(array + i) = (char*)malloc(sizeof(char) * current_length + 1);
          strncpy(*(array + i), temp_arr, current_length + 1);
          break;
        }
        else {
          ++current_length;
          free(old_arr);
          old_arr = (char*)malloc(sizeof(char) * (current_length + 1));

          // 判断是否合法字符串
          if (temp_arr != NULL && temp_arr[current_length - 1] == '\0') {
            strncpy(old_arr, temp_arr, current_length - 1);
          }

          old_arr[current_length - 1] = c;
          old_arr[current_length] = '\0';

          free(temp_arr);

          temp_arr = (char*)malloc(sizeof(char) * current_length + 1);
          strncpy(temp_arr, old_arr, current_length + 1);
        }
      }

           
    } 
        
    printf("Here are your words:\n");

    for (i = 0; i < size; ++i) {
      printf("%s\n", array[i]);
    }

    printf("How many words do you wish to enter?: ");
  }
  printf("Done.");

  return 0;
}
