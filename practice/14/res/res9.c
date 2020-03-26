#include <stdio.h>

struct name
{
  char first[20];
  char last[20];
};

struct bem
{
  int limbs;
  struct name title;
  char type[30];
};

int main(int argc, char *argv[])
{
  // struct bem* pb;
  struct name* name_ptr;

  struct bem deb = {
    6,
    { "Berbnazel", "Gwolkapwolk" },
    "Arcturan"
  };

  name_ptr = &deb.title;

  printf("%s\n", deb.title.last); // Gwolkapwolk
  printf("%s\n", name_ptr->last); // Gwolkapwolk
  
  return 0;
}
