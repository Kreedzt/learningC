#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
    int: "int",\
    float: "float",\
    double: "double",\
    default: "other"\
                           )

int main()
{
  int d = 5;

  printf("%s\n", MYTYPE(d)); // int
  printf("%s\n", MYTYPE(2.0 * d)); // double
  printf("%s\n", MYTYPE(3L)); // long
  printf("%s\n", MYTYPE(&d)); // int*
  
  return 0;
}
