#include <stdio.h>

typedef struct lens // 描述镜头
{
  float foclen; // 焦距长度, 单位为mm
  float fstop; // 孔径
  char brand[30]; // 品牌名称
} LENS;

int main(int argc, char *argv[])
{
  LENS arr[10] = { [2] = {
      500,
      2.0,
      "Remarkata"
    }
  };

  printf("%s Camera: f/%.2f, len: %.2fmm\n", arr[2].brand, arr[2].fstop, arr[2].foclen);
  
  return 0;
}
