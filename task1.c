#include <stdio.h>


int main(){
  
  printf("Введите строку: ");
  int ch; 


  while((ch = getchar()) != EOF){
    if(ch == ' '){
      putchar('_');
    }
    else{
      putchar(ch);
    }
  }

  return 0; 
}

// Вариант 6 
