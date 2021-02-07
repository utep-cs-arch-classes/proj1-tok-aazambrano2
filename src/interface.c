#include <stdio.h>

void main(){
  //variable to take a character input from user
  
  printf("> ");
  char user_input = getchar();
  while(user_input != EOF){
    if(user_input == ' '){
      putchar(' ');
    }
    else{
      putchar(user_input);
    }
    if(user_input == 126){
      break;
    }
    
    user_input = getchar(); 
  }
  putchar('\n');
}
