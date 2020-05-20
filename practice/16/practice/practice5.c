#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Picker {
  int value;
  int selected;
};

void pick(int arr[], int size, int times);

int main()
{
  int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  pick(arr, 10, 5);

  return 0;
}

void pick(int arr[], int size, int times)
{
  srand(time(NULL));
  int i = 0;
  int rolled_times = 0;
  int current_index;

  struct Picker* picker_arr = malloc(sizeof(struct Picker) * size);

  // 初始化
  for (i = 0; i < size; ++i) {
    picker_arr[i].selected = 0;
    picker_arr[i].value = arr[i];
  }

  while (rolled_times < times) {
    current_index = rand() % size;
    printf("current_index: %d\n", current_index);

    if (picker_arr[current_index].selected == 0) {
      picker_arr[current_index].selected = 1;
      printf("Rolled value: %d\n", picker_arr[current_index].value);
      ++rolled_times;
    } else {
      printf("The value is Selected, Continue...\n");
      printf("====\n");
      continue;
    }

    printf("has rolled times: %d\n", rolled_times);
    printf("====\n");
  }
}
