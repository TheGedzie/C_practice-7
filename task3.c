#include <stdio.h>

double calculateAVG(double a, double b);

int main(){
  
  double a;
  double b; 
  
  printf("Вводите пары чисел, получите их среднее арифметическое: \n");

  while(scanf("%lf %lf", &a, &b) == 2){
    printf("Среднее арифметическое %lf и %lf = %.4lf\n",
        a,
        b,
        calculateAVG(a,b));
  }

  return 0; 
}

double calculateAVG(double a, double b){
  return (a + b) / 2; 
}

// Вариант 3
