#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(Item item, Node* pnode);

void InitializeList(List* plist)
{
  // *plist = NULL;
  plist->head = NULL;
  plist->end = NULL;
}

bool ListIsEmpty(const List* plist)
{
  if (plist->head == NULL)
    return true;
  else
    return false;
}

bool ListIsFull(const List* plist)
{
  Node* pt;
  bool full;
  pt = (Node*)malloc(sizeof(Node));

  if (pt == NULL)
    full = true;
  else
    full = false;
  free(pt);

  return full;
}

unsigned int ListItemCount(const List* plist)
{
  unsigned int count = 0;
  Node* pnode = plist->head; // 设置链表的开始
  while (pnode != NULL)
  {
    ++count;
    pnode = pnode->next;
  }

  return count;
}

// 创建储存项的节点, 并添加至由 plist 指向的链表末尾(较慢的实现)
bool AddItem(Item item, List* plist)
{
  Node* pnew;
  Node* scan = plist->end;
  pnew = (Node*)malloc(sizeof(Node));

  if (pnew == NULL)
    return false;
  CopyToNode(item, pnew);
  pnew->next = NULL;

  if (scan == NULL) {
    plist->head = pnew;
  }
  else
  {
    scan->next = pnew;
  }

  plist->end = pnew;

  return true;
}

void Traverse(const List* plist, void(*pfun)(Item item))
{
  Node* pnode = plist->head;

  while (pnode != NULL)
  {
    (*pfun)(pnode->item);
    pnode = pnode->next;
    
  }
}


void EmptyTheList(List* plist)
{
  Node* psave;
  Node* temp = plist->head;
  while (temp != NULL)
  {
    psave = temp->next;
    free(temp);
    temp = psave;
  }
}

static void CopyToNode(Item item, Node* pnode)
{
  pnode->item = item;
}
