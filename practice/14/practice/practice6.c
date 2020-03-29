#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RECORD_FILE "record_statistics.txt"

struct member
{
  int id;
  char last_name[20];
  char first_name[20];
  // 上场数
  int display_times;
  // 击中数
  int goal_times;
  // 走垒数
  int go_home_times;
  // 打点
  int rbi;
  // 安打率
  float per;
};

void printf_current_item(struct member* mb);
void printf_all_item(struct member* mb, int size);

int main(int argc, char *argv[])
{
  int file_count = 0;
  char buffer[255];
  struct member current_member;
  struct member* res_arr;
  struct member* temp_arr;
  int arr_size = 0;
  int i = 0;
  int is_found_member = 0;

  FILE *fp;

  if ((fp = fopen(RECORD_FILE, "r")) == NULL) {
    printf("Can't open %s.\n", RECORD_FILE);
    exit(EXIT_FAILURE);
  }

  while (fgets(buffer, 255, fp) != NULL) {
    printf("Current read:\n");
    fputs(buffer, stdout);
    sscanf(buffer, "%d %20s %20s %d %d %d %d",
           &current_member.id,
           current_member.first_name,
           current_member.last_name,
           &current_member.display_times,
           &current_member.goal_times,
           &current_member.go_home_times,
           &current_member.rbi);

    puts("\n===Decoded===");
    printf_current_item(&current_member);

    is_found_member = 0;
    if (res_arr) {
      for (i = 0; i < arr_size; ++i) {
        if (res_arr[i].id == current_member.id) {
          is_found_member = 1;

          res_arr[i].display_times += current_member.display_times;
          res_arr[i].goal_times += current_member.goal_times;
          res_arr[i].go_home_times += current_member.go_home_times;
          res_arr[i].rbi += current_member.rbi;
          
          break;
        }
      }

      if (is_found_member == 0) {
        ++arr_size;

        temp_arr = (struct member*)malloc(sizeof(struct member) * arr_size);
        for (i = 0; i < arr_size - 1; ++i) {
          temp_arr[i].id = res_arr[i].id;
          temp_arr[i].display_times = res_arr[i].display_times;
          temp_arr[i].go_home_times = res_arr[i].go_home_times;
          temp_arr[i].goal_times = res_arr[i].goal_times;
          temp_arr[i].rbi = res_arr[i].rbi;
          strncpy(temp_arr[i].first_name, res_arr[i].first_name, 20);
          strncpy(temp_arr[i].last_name, res_arr[i].last_name, 20);
        }

        res_arr = (struct member*)malloc(sizeof(struct member) * arr_size);
        for (i = 0; i < arr_size - 1; ++i) {
          res_arr[i].id = temp_arr[i].id;
          res_arr[i].display_times = temp_arr[i].display_times;
          res_arr[i].goal_times = temp_arr[i].goal_times;
          res_arr[i].go_home_times = temp_arr[i].go_home_times;
          res_arr[i].rbi = temp_arr[i].rbi;
          strncpy(res_arr[i].first_name, temp_arr[i].first_name, 20);
          strncpy(res_arr[i].last_name, temp_arr[i].last_name, 20);
        }

        res_arr[arr_size - 1].id = current_member.id;
        res_arr[arr_size - 1].goal_times = current_member.goal_times;
        res_arr[arr_size - 1].go_home_times = current_member.go_home_times;
        res_arr[arr_size - 1].display_times = current_member.display_times;
        res_arr[arr_size - 1].rbi = current_member.rbi;
        strncpy(res_arr[i].first_name, current_member.first_name, 20);
        strncpy(res_arr[i].last_name, current_member.last_name, 20);

        free(temp_arr);
      }
    } else {
      res_arr = (struct member*)malloc(sizeof(struct member) * 1);
      ++arr_size;
    }
    ++file_count;
  }

  puts("====Results====");
  printf_all_item(res_arr, arr_size);
  

  printf("\nBye.\n");

  
  return 0;
}

void printf_current_item(struct member* mb)
{
  printf("ID: %d\n", mb->id);
  printf("Name: %s %s\n", mb->first_name, mb->last_name);
  printf("Display Times: %d\n", mb->display_times);
  printf("Goal Times: %d\n", mb->goal_times);
  printf("Go Home Times: %d\n", mb->go_home_times);
  printf("Rbi: %d\n", mb->rbi);
}

void printf_all_item(struct member* mb, int size) {
  int i;

  for (i = 0; i < size; ++i) {
    printf_current_item(&mb[i]);
    mb[i].per = (float)mb[i].goal_times / (float)mb[i].display_times;
    printf("Per: %g\n", mb[i].per);
    puts("--------------");
  }
}
