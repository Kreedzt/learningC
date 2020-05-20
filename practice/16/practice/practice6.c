#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 5

struct names
{
  char first[40];
  char last[40];
};

void showarray(const struct names ar[], int n);

int mycomp(const void* p1, const void* p2);

int main()
{
  struct names ar[NUM] = {{"Zhao", "Ken"},
                          {"Tiger", "Woods"},
                          {"Black", "Griffen"},
                          {"Kevin", "Durant"},
                          {"Steven", "Curry"}};

  showarray(ar, NUM);
  
  qsort(ar, NUM, sizeof(struct names), mycomp);
  
  puts("\nSorted list:");
  showarray(ar, NUM);

  return 0;
}

void showarray(const struct names ar[], int n)
{
  int index;
  for(index = 0; index < n; index++)
  {
    printf("%s %s\n", ar[index].first, ar[index].last);
  }

  printf("\n====\n");
}

// 按从小到大的顺序排序
int mycomp(const void* p1, const void* p2)
{
  // 要使用指向 double 的指针来访问这个值
  const struct names* a1 = (const struct names*)p1;
  const struct names* a2 = (const struct names*)p2;

  int res;

  res = strncmp(a1->first, a2->first, 40);

  if (res != 0) {
    return res;
  } else {
    return strncmp(a1->last, a2->last, 40);
  }
}

