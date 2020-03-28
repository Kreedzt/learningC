#include <stdio.h>

#define CSIZE 4

struct name
{
  char first[20];
  char last[20];
};

struct student
{
  struct name name;
  float grade[3];
  float avg;
};

int main(int argc, char *argv[])
{
  struct student arr[CSIZE];
  int i = 0;
  int j = 0;
  float total = 0;
  float single = 0;
  
  for (i = 0; i < CSIZE; ++i) {
    printf("Enter %d first name: ", i + 1);
    scanf("%20s", arr[i].name.first);
    printf("Enter %d last name: ", i + 1);
    scanf("%20s", arr[i].name.last);

    // printf("Before second loop.\n");
    for (j = 0; j < 3; ++j) {
      printf("Enter %d grade: ", j + 1);
      scanf("%f", &arr[i].grade[j]);
    }
  }

  for (i = 0; i < CSIZE; ++i) {
    single = 0;
    for (j = 0; j < 3; ++j) {
      total += arr[i].grade[j];
      single += arr[i].grade[j];
    }
    arr[i].avg = single / 3;
  }

  puts("=========Results========");

  for (i = 0; i < CSIZE; ++i) {
    printf("%s %s\n", arr[i].name.first, arr[i].name.last);
    for (j = 0; j < 3; ++j) {
      printf("grade %d: %f\n", j + 1, arr[i].grade[j]);
    }
    printf("Avg: %f\n", arr[i].avg);
  }


  printf("All avg: %f\n", total / (CSIZE * 3));

  
  return 0;
}
