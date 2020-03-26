#include <stdio.h>
#include "starfolk.h"

void print_data(struct bem* data);

int main(int argc, char *argv[])
{
  struct bem deb = {
    6,
    { "Berbnazel", "Gwolkapwolk" },
    "Arcturan"
  };

  print_data(&deb);
  
  return 0;
}

void print_data(struct bem* data)
{
  printf("%s %s is a %d-limbed %s\n",
         data->title.first,
         data->title.last,
         data->limbs,
         data->type);
}
