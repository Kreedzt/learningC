#include <stdio.h>
#include <string.h>

struct member
{
  char id[40];
  struct
  {
    char first_name[20];
    char middle_name[20];
    char last_name[20];
  };
};

void print(struct member m);
void print_by_ptr(struct member* m);

int main(int argc, char *argv[])
{
  struct member arr[5] = {
    {
      "0x00fza1123s0409149",
      {
        "Dribble",
        "Middle",
        "Flossie"
      }
    },
    {
      "0x22fza1123s0409149",
      {
        "Zhao",
        "",
        "Ken"
      }
    }
  };

  print(arr[0]);
  print(arr[1]);
  print_by_ptr(&arr[0]);
  print_by_ptr(&arr[1]);

  return 0;
}

void print(struct member m)
{
  if (strlen(m.middle_name) > 0) {
    printf("%s, %s, %c. -- %s\n",
           m.first_name,
           m.last_name,
           m.middle_name[0],
           m.id);
  } else {
    printf("%s, %s -- %s\n",
           m.first_name,
           m.last_name,
           m.id);
  }
}

void print_by_ptr(struct member* m)
{
  if (strlen(m->middle_name) > 0) {
    printf("%s, %s, %c. -- %s\n",
           m->first_name,
           m->last_name,
           m->middle_name[0],
           m->id);
  } else {
    printf("%s, %s -- %s\n",
           m->first_name,
           m->last_name,
           m->id);
  }
}
