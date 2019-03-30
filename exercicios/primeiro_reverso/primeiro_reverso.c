#include <stdio.h> 
#include <string.h>

#define BUFFLEN 128

void primeiro_reverso(char str[]) { 
  
  // code goes here
  int size = strlen(str);
  str[size - 1] = '\0';

  for(int i = 0; i < size/2; i++) {
    int j = (size - 1) - i;
    char tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
  }
  
  printf("%s\n", str);
}

int main(void) { 
  
  // keep this function call here
  char str[BUFFLEN];
  while(fgets(str, BUFFLEN, stdin)) {
      printf("%s", str);
    //primeiro_reverso(str);
  }
  return 0;
} 

