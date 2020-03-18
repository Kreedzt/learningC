// 使用 fprintf(), fscanf() 和 rewind()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(int argc, char *argv[])
{
  FILE* fp;
  char words[MAX];
  char ch;
  unsigned long current_line = 0;

  if ((fp = fopen("wordy", "a+")) == NULL) {
    fprintf(stdout, "Can't open \"wordy\" file.\n");
    exit(EXIT_FAILURE);
  }

  puts("Enter words to add to the file;press the #");
  puts("key at the beginning of a line to terminate.");

  rewind(fp); // 返回到文件开始处

  while (fgets(words, MAX, fp) != NULL) {
    if (sscanf(words, "%ld:", &current_line) == 1) {
      printf("Current line: %ld\n", current_line);
    }
  }

  while ((fscanf(stdin, "%40s", words)) == 1 && (words[0] != '#')) {
    ++current_line;
    fprintf(fp, "%ld: %s\n", current_line, words);
  }

  puts("File contents:");
  rewind(fp); // 返回到文件开始处

  while (fscanf(fp, "%s", words) == 1) {
    puts(words);
  }

  puts("Done!");

  if (fclose(fp) != 0) {
    fprintf(stderr, "Error closing file\n");
  }
  
  return 0;
}
