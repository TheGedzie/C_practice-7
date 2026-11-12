#include <stdio.h>
#include <ctype.h>

int main(){
  
  printf("Введите числа: \n");
  
  int ch; 
  int count_number; 
  int total = 0; 

  while((ch = getchar()) != EOF){
  
    if(isdigit(ch)){
      count_number++;
    }else{
      total += (count_number == 3 ? 1 : 0);
      count_number = 0; 
    }

  }
  
  printf("Вы ввели %d трехзначных числа !", total); 
  return 0; 
}

// Вариант 27
