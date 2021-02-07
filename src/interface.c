#include <stdio.h>

void main(){
  //variable to take a character input from user
  
  printf("\nStart: ");
  char user_input = getchar();
  while(user_input != EOF){
    if(user_input == ' '){
      putchar('\n');
    }
    if(user_input == 126){
      break;
    }
    putchar(user_input);
    user_input = getchar(); 
  }
  putchar('\n');
}
