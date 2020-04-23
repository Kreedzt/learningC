// 使用 names_st 结构
#include <stdio.h>
#include "names_st.h"

int main()
{
  names candidate;
  get_names(&candidate);
  printf("Let's welcome ");

  show_names(&candidate);

  printf(" to this program!\n");

  return 0;
}
