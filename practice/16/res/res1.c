#include <stdio.h>

#define FEET 4
#define POD FEET + FEET

// #define SIX = 6;
// int next = SIX;

int plort = FEET * POD;

#define NEW(X) X + 5

int main()
{
  int y = NEW(y); // 0 + 5 = 5
  int est;
  int nilp;
  int berg = 0;
  int lob = 1;
  
  berg = NEW(berg) * lob; // 0 + 5 * 1 = 5

  est = NEW(berg) / NEW(y); // 5 + 5 / 5 + 5 = 11

  nilp = lob * NEW(-berg); // 1 * -5 + 5 = 0
  
  printf("plort: %d\n", plort);


  printf("berg: %d\n", berg);
  printf("est: %d\n", est);
  printf("nilp: %d\n", nilp);

  return 0;
}
