#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void initialize_stack(Stack* st)
{
  st->front = NULL;
  st->next = NULL;
  st->id = 0;
}

void add_stack(char name[20], Stack* init)
{
  Stack* temp = init;

  Stack* add_item = (Stack*)malloc(sizeof(Stack));
  while (temp->next != NULL) {
    temp = temp->next;
  }
  add_item->id = temp->id + 1;
  strncpy(add_item->name, name, 20);
  add_item->front = temp;
  add_item->next = NULL;

  temp->next = add_item;
}

void remove_stack(Stack* init)
{
  Stack* temp = init;
  
  while (temp->next != NULL) {
    temp = temp->next;
  }

  // 目标: 下一项为空, 清除当前项
  // 操作: 指针定位到上一项, 清除下一项
  if (temp->front != NULL) {
    temp->front->next = NULL;    
  }
  temp->front = NULL;
  printf("remove id: %d\n", temp->id);
  free(temp);
  temp = NULL;
}

void remove_all(Stack* init)
{
  while (init->next != NULL) {
    printf("Entered remove_stack.\n");
    remove_stack(init);
  }
}

void show_all(Stack* init)
{
  Stack* temp = init;
  while (temp) {
    printf("id: %d, name: %s\n", temp->id, temp->name);
    temp = temp->next;
  }
}
