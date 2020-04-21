#include <stdio.h>
#include <string.h>

struct font
{
  unsigned int id: 8;
  unsigned int size: 7;
  unsigned int align: 2;
  unsigned int bold: 1;
  unsigned int italic: 1;
  unsigned int underline: 1;
};

void print_font(struct font* ft);
void show_menus();
char get_choice();

void change_font(struct font* ft);
void change_size(struct font* ft);
void change_alignment(struct font* ft);
void toggle_bold(struct font* ft);
void toggle_italic(struct font* ft);
void toggle_underline(struct font* ft);

int main(int argc, char *argv[])
{
  char c;
  struct font ft;
  ft.id = 1;
  ft.size = 36;
  ft.align = 0;
  ft.bold = 0;
  ft.italic = 1;
  ft.underline = 0;

  print_font(&ft);
  show_menus();
  c = get_choice();
  while(c != 'q'){
    switch (c) {
      case 'f':
        change_font(&ft);
        break;
      case 's':
        change_size(&ft);
        break;
      case 'a':
        change_alignment(&ft);
        break;
      case 'b':
        toggle_bold(&ft);
        break;
      case 'i':
        toggle_italic(&ft);
        break;
      case 'u':
        toggle_underline(&ft);
        break;
      default:
        puts("Wrong choice, input again.");
        break;
    }

    print_font(&ft);
    show_menus();
    c = get_choice();
  }

  printf("Bye.\n");
    
  return 0;
}

void print_font(struct font* ft)
{
  char align_direction[10];

  switch(ft->align){
    case 0:
      strncpy(align_direction, "left", 5);
      break;
    case 1:
      strncpy(align_direction, "middle", 7);
      break;
    case 2:
      strncpy(align_direction, "right", 6);
      break;
    default:
      break;
  }
  
  printf("ID  SIZE  ALIGNMENT  B  I  U\n");
  printf(
      "%d  %d  %s  %s  %s  %s\n",
      ft->id,
      ft->size,
      align_direction,
      ft->bold == 1 ? "on" : "off",
      ft->italic == 1 ? "on" : "off",
      ft->underline == 1 ? "on" : "off"
         );
}


void show_menus()
{
  puts("f) change font  s)change size  a)change alignment");
  puts("t) toggle bold  i)toggle italic  u)toggle underline");
  puts("q)quit");
}

char get_choice()
{
  char c;
  
  // getchar();
  while(scanf(" %c", &c) != 1) {
    puts("Wrong Input, input again.");
    // getchar();
  };

  return c;
}

void change_font(struct font* ft)
{
  int num = 0;

  printf("Input font(0~255):");
  while(scanf("%d", &num) == 1){
    if (num < 0 || num > 255) {
      printf("out of range(0~255), input again.\n");
      continue;
    } else {
      break;
    }
  }

  ft->id = num;
}

void change_size(struct font* ft)
{
  int num = 0;
  
  printf("Input size(0~127):");
  while(scanf("%d", &num) == 1){
    if (num < 0 || num > 127) {
      printf("out of range(0~127), input again.\n");
      continue;
    } else {
      break;
    }
  }

  ft->size = num;
}

void change_alignment(struct font* ft)
{
  int num = 0;

  printf("input 0(left) or 1(middle) or 2(right):");
  while(scanf("%d", &num) == 1){
    if (num < 0 || num > 2) {
      printf("out of range(0~2), input again.\n");
      continue;
    } else {
      break;
    }
  }

  ft->align = num;
}

void toggle_bold(struct font* ft)
{
  int num = 0;

  printf("input 0(off) or 1(on):");
  while(scanf("%d", &num) == 1){
    if (num < 0 || num > 1) {
      printf("out of range(0~1), input again.\n");
      continue;
    } else {
      break;
    }
  }

  ft->bold = num;
}

void toggle_italic(struct font* ft)
{
  int num = 0;

  printf("input 0(off) or 1(on):");
  while(scanf("%d", &num) == 1){
    if (num < 0 || num > 1) {
      printf("out of range(0~1), input again.\n");
      continue;
    } else {
      break;
    }
  }

  ft->italic = num;
}

void toggle_underline(struct font* ft)
{
  int num = 0;

  printf("input 0(off) or 1(on):");
  while(scanf("%d", &num) == 1){
    if (num < 0 || num > 1) {
      printf("out of range(0~1), input again.\n");
      continue;
    } else {
      break;
    }
  }

  ft->underline = num;
}
