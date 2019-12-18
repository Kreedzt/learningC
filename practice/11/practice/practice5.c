#include <stdio.h>

#define LEN 5

int is_within(char ch, char* str);

int main(int argc, char *argv[])
{
  char* str = "COPY --from=builder /go/src/github.com/AliyunContainerService/image-syncer/image-syncer ./";
  char chs[LEN] = {'C', 'Z', 'g', 'k', '0'};
  int i;
  
  for (i = 0; i < LEN; ++i) {
    printf("is %c in str: %c\n", chs[i], is_within(chs[i], str) == 1 ? 'T' : 'F');
  }
  
  return 0;
}


int is_within(char ch, char* str)
{
  int res = 0;
  char* source = str;

  while (*source) {
    if (*source == ch) {
      res = 1;
      break;
    }

    ++source;
  }

  return res;
}
