#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book // 结构模板: 标记是book
{
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(int argc, char *argv[])
{
  struct book readfirst;
  int score;

  printf("Enter test score:");
  scanf("%d", &score);

  if (score >= 94)
    readfirst = (struct book) {
      "Crime and Punishment",
      "Fyodor Dostoyevsky",
      11.25
    };
  else
    readfirst = (struct book) {
      "Mr.Bouncy's Nice Hat",
      "Fred Winsome",
      5.99
    };

  printf("Your assigned reading:\n");
  printf("%s by %s: $%.2f\n", readfirst.title,
         readfirst.author, readfirst.value);
  
  return 0;
}
