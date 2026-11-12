#include <stdio.h>

void calculateAWS(int *a, int *b);

int main(){
  
  int num1 = 10;
  int num2 = 20; 

  printf("Исходные значения переменных:\nnum1 : %d\nnum2 : %d\n",
      num1,
      num2);
  
  calculateAWS(&num1, &num2);

  printf("Новые значения переменных:\nnum1 : %d\nnum2 : %d\n",
      num1,
      num2);

  return 0; 
}

void calculateAWS(int *a, int *b){
  int new_value = (*a + *b) / 2;

  *a = new_value;
  *b = new_value; 
}

// Вариант 9 
