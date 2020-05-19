#include <stdio.h>
#include <stdbool.h>

#define EVAL(X) _Generic((X),\
    _Bool: "boolean",\
    default: "not boolean"\
                         )

int main()
{
  _Bool val_a = true;
  int val_b = 2;

  printf("EVAL(val_a): %s\n", EVAL(val_a));
  printf("EVAL(val_a): %s\n", EVAL(val_b));
}
