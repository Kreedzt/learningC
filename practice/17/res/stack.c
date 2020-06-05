#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void initialize_stack(Stack* st)
{
  st->count = 0;
  st->content = NULL;
}

void add_stack(char name[20], Stack* init)
{
  Stack* temp = init;
  Item* temp_item = temp->content;

  Item* add_item = (Item*)malloc(sizeof(Item));
  add_item->next = NULL;

  strncpy(add_item->name, name, 20);

  if (temp->content == NULL) {
    printf("Content empty.\n");
    temp->content = add_item;
    add_item->id = 1;
    add_item->prev = NULL;
  } else {
    while (temp_item->next != NULL) {
      temp_item = temp_item->next;
    }
    add_item->id = temp_item->id + 1;
    add_item->prev = temp_item;
    temp_item->next = add_item;
  }
  init->count++;
}

void remove_stack(Stack* init)
{
  Item* temp = init->content;

  if (temp == NULL) {
    printf("No content.\n");
    return;
  }
  
  while (temp->next != NULL) {
    temp = temp->next;
  }

  // 目标: 下一项为空, 清除当前项
  // 操作: 指针定位到上一项, 清除下一项
  if (temp->prev != NULL) {
    temp->prev->next = NULL;
  }
  temp->prev = NULL;
  printf("remove id: %d\n", temp->id);
  free(temp);
  temp = NULL;
  init->count--;
}

void remove_all(Stack* init)
{
  while (init->count != 0) {
    remove_stack(init);
  }
}

void show_all(Stack* init)
{
  Item* temp = init->content;
  while (temp) {
    printf("id: %d, name: %s\n", temp->id, temp->name);
    temp = temp->next;
  }
}
