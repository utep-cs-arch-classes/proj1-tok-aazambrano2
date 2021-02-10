#include <stdio.h>

void main(){
  printf("> ");
  char user_input = getchar();
  while(user_input != '\n'){
    putchar(user_input);
    user_input = getchar(); 
  }
  printf("\n");
}
