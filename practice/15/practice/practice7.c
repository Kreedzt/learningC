#include <stdio.h>
#include <string.h>

#define UNDERLINE_MASK 0x1
#define ITALIC_MASK 0x1
#define BOLD_MASK 0x1
#define ALIGN_MASK 0x3
#define SIZE_MASK 0x7e

#define ID_CLEAR_MASK 0xfff
#define SIZE_CLEAR_MASK 0xff00f
#define ALIGNMENT_CLEAR_MASK 0xfffe1
#define BOLD_CLEAR_MASK 0xffffb
#define ITALIC_CLEAR_MASK 0xffffd
#define UNDERLINE_CLEAR_MASK 0xffffe

// struct font
// {
//   unsigned long id: 8;
//   unsigned long size: 7;
//   unsigned long align: 2;
//   unsigned long bold: 1;
//   unsigned long italic: 1;
//   unsigned long underline: 1;
// };

void print_font(unsigned long* ft);
void show_menus();
char get_choice();

void change_font(unsigned long* ft);
void change_size(unsigned long* ft);
void change_alignment(unsigned long* ft);
void toggle_bold(unsigned long* ft);
void toggle_italic(unsigned long* ft);
void toggle_underline(unsigned long* ft);

const char* direction[3] = { "left", "middle", "right" };

int main(int argc, char *argv[])
{
  char c;
  unsigned long ft = 0;

  // 清除 ID
  ft &= ID_CLEAR_MASK;
  // 设置 ID 为 1
  ft |= 1 << 12;
  // 清除 SIZE
  ft &= SIZE_CLEAR_MASK;
  // 设置 SIZE 为 12
  ft |= 12 << 5;
  // 清除 ALIGNMENT
  ft &= ALIGNMENT_CLEAR_MASK;
  // 设置 ALIGNMENT 为 left
  ft |= 0 << 3;
  // 清除 BOLD
  ft &= BOLD_CLEAR_MASK;
  // 设置 bold 为 off
  ft |= 0 << 2;
  // 清除 ITALIC
  ft &= ITALIC_CLEAR_MASK;
  // 设置 ITALIC 为 off
  ft |= 0 << 1;
  // 清除 UNDERLINE
  ft &= UNDERLINE_CLEAR_MASK;
  // 设置 UNDERLINE 为 off
  ft |= 0;
      
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

void print_font(unsigned long* ft)
{ 
  printf("ID  SIZE  ALIGNMENT  B  I  U\n");
  printf(
      "%ld  %ld  %s  %s  %s  %s\n",
      *ft >> 12,
      (*ft >> 5) & SIZE_MASK,
      direction[(*ft >> 3) & ALIGN_MASK],
      (*ft >> 2) & BOLD_MASK ? "on" : "off",
      (*ft >> 1) & ITALIC_MASK ? "on" : "off",
      *ft & UNDERLINE_MASK ? "on" : "off"
         );
}


void show_menus()
{
  puts("f) change font  s)change size  a)change alignment");
  puts("b) toggle bold  i)toggle italic  u)toggle underline");
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

void change_font(unsigned long* ft)
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
  
  *ft &= ID_CLEAR_MASK;

  *ft |= num << 12;
}

void change_size(unsigned long* ft)
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

  *ft &= SIZE_CLEAR_MASK;
  *ft |= num << 5;
}

void change_alignment(unsigned long* ft)
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

  *ft &= ALIGNMENT_CLEAR_MASK;
  *ft |= num << 3;
}

void toggle_bold(unsigned long* ft)
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

  *ft &= BOLD_CLEAR_MASK;
  *ft |= num << 2;
}

void toggle_italic(unsigned long* ft)
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

  *ft &= ITALIC_CLEAR_MASK;
  *ft |= num << 1;
}

void toggle_underline(unsigned long* ft)
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

  *ft &= UNDERLINE_CLEAR_MASK;
  *ft |= num;
}
