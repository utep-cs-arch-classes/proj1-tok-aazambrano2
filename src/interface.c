#include <stdio.h>

void main(){
  //variable to take a character input from user
  
  printf("> ");
  char user_input = getchar();
  while(user_input != EOF){
    if(user_input == 126){
      break;
    }
    putchar(user_input);
    user_input = getchar(); 
  }
}
