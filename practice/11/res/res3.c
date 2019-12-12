#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char goldwyn[40] = "art of it all ";
  char samuel[40] = "I read p";
  const char* quote = "the way through.";

  strcat(goldwyn, quote); // quoto append to goldwyn
  strcat(samuel, goldwyn); // goldwyn append to samuel

  puts(samuel); // samuel + goldwyn + quote
  
  
  return 0;
}
