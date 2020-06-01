#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char** argv) {
  if(argc != 3) {
    return 1;
  }

  // Mode
  int begin = 0;
  if(strcmp(argv[1], "-n") == 0) {
    begin = 33;
  }
  else if(strcmp(argv[1], "-s") == 0) {
    begin = 32;
  }
  else {
    return 2;
  }
  

  int len = atoi(argv[2]);
  if(len < 0 || len >= 100)
    return 3;
  
  char buffer[len + 1];
  buffer[len] = '\0';

  srand(time(NULL));
  
  for(int i = 0; i < len; i++) {
    char c = rand()%(127 - begin) + begin;
    buffer[i] = c;
  }

  printf("%s\n", buffer);

  return 0;
}