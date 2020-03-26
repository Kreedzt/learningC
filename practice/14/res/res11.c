#include <stdio.h>
#include <string.h>

struct fullname
{
  char fname[20];
  char lname[20];
};

struct bard
{
  struct fullname name;
  int born;
  int died;
};

int main(int argc, char *argv[])
{
  struct bard willie;
  struct bard* pt = &willie;

  willie.born = 1996;
  willie.died = 2222;
  strncpy(willie.name.fname, "Zhao", 20);
  strncpy(willie.name.lname, "Ken", 20);

  // a
  printf("%d\n", willie.born);
  // b
  printf("%d\n", pt->born);

  // c
  printf("Enter born value: ");
  scanf("%d", &willie.born);

  // d
  printf("Enter born value(pt): ");
  scanf("%d", &pt->born);

  // e
  printf("Enter lname: ");
  scanf("%s", willie.name.lname);

  // f
  printf("Enter lname(pt): ");
  scanf("%s", pt->name.lname);

  // g
  printf("3rd: %c\n", *(willie.name.lname + 2));

  // h
  printf("name count: %llu\n", strlen(willie.name.lname) + strlen(willie.name.fname));
  
  return 0;
}
