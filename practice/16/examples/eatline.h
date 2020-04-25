#include <stdio.h>

#ifndef EATLINE_H_
#define EATLINE_H_

inline static void eatline()
{
  while(getchar() != '\n'){
    continue;
  }
}
#endif
