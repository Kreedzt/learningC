#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 45

typedef struct film {
  char title[TSIZE];
  int rating;
  struct film* next;
  struct film* prev;
} Film;

char* s_gets(char* st, int n);

int main()
{
  Film* head = NULL;
  Film* last = NULL;
  Film *prev, *current;
  char input[TSIZE];
  
  puts("Enter first movie title:");

  while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
  {
    current = (Film*)malloc(sizeof(Film));
    if (head == NULL) {
      head = current;
      current->prev = NULL;
    } else {
      prev->next = current;
      current->prev = prev;
    }

    current->next = NULL;
    last = current;

    strcpy(current->title, input);

    puts("Enter your rating<0-10>:");
    scanf("%d", &current->rating);

    while (getchar() != '\n')
    {
      continue;
    }

    puts("Enter next movie title(empty line to stop)");
    prev = current;
  }

  // 显示电影列表
  if (head == NULL) {
    printf("No data entered");
  } else {
    printf("Here is the movie list:\n");
    current = head;

    while (current != NULL) {
      printf("Movie: %s Rating: %d\n",
             current->title,
             current->rating);

      current = current->next;
    }
  }
  printf("Display Completed.\n");

  printf("Reverse diplay:\n");
  if (last == NULL) {
    printf("No data entered");
  } else {
    printf("Here is the movie list:\n");
    current = last;

    while (current != NULL) {
      printf("Movie: %s Rating: %d\n",
             current->title,
             current->rating);

      current = current->prev;
    }
  }

  printf("Reverse Display Completed.\n");

  // 完成任务, 释放已分配的内存
  current = head;
  while (current != NULL) {
    current->prev = NULL;
    head = current;
    current = current->next;
    free(head);
  }

  printf("Bye!\n");
  
  return 0;
}

char* s_gets(char* st, int n)
{
  char* ret_val;
  char* find;
  ret_val = fgets(st, n, stdin);

  if (ret_val)
  {
    find = strchr(st, '\n');

    if (find) {
      *find = '\0';
    } else {
      while (getchar() != '\n') {
        continue;
      }
    }
  }

  return ret_val;
}
