#include <stdio.h>
#include <stdlib.h>


#define SOURCE_FILE "practice13test.txt"
#define TARGET_FILE "practice13test-res.txt"

unsigned int lines = 20;

int main(int argc, char *argv[])
{
  int arr[lines][31];
  char res[lines][31];
  char buffer[32];
  FILE* source;
  FILE* target;
  int i = 0;
  int level = 0;
  char ch;

  if ((source = fopen(SOURCE_FILE, "r")) == NULL) {
    printf("Can't open %s\n", SOURCE_FILE);
    exit(EXIT_FAILURE);
  }

  if ((target = fopen(TARGET_FILE, "w")) == NULL) {
    printf("Can't open %s\n", TARGET_FILE);
    exit(EXIT_FAILURE);
  }


  printf("Source:\n");
  
  while (fgets(buffer, 32, source) != NULL) {
    printf("Level: %d\n", level);
    for (i = 0; i < 31; ++i) {

      arr[level][i] = buffer[i] - 48;

      switch (arr[level][i]) {
        case 0:
          ch = ' ';
          break;
        case 1:
          ch = '.';
          break;
        case 2:
          ch = '\'';
          break;
        case 3:
          ch = ':';
          break;
        case 4:
          ch = '~';
        case 5:
          ch = '*';
          break;
        case 6:
          ch = '=';
          break;
        case 8:
          ch = '%';
          break;
        case 9:
          ch = '#';
          break;
        default:
          ch = buffer[i];
          break;
      }

      res[level][i] = ch;
    }
    res[level][30] = '\0';
    
    fprintf(stdout, "%s", buffer);
    printf("Dealed single line:\n");
    fprintf(stdout, "%s", res[level]);


    ++level;
  };


  printf("Dealed Res:\n");
  for (i = 0; i < level; ++i) {
    printf("write times, i:%d\n", i);
    fprintf(stdout, "%s", res[i]);
    fputs(res[i], target);

    if (i != level - 1) {
      fputs("\n", target);
    }
  }

  printf("Done.\n");
  
  return 0;
}
