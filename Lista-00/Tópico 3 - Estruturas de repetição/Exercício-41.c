#include <stdio.h>

/* 41° - Fazer um programa para encontrar todos os pares de números amigáveis entre 1 e 100000. Um par de números é amigável quando cada um deles é igual à soma dos divisores do outro.
*/

int calculo_divisores(int num){
  int soma = 0;
  for (int i=1; i<= num / 2; i++){
    if(num % i == 0){
      soma += i;
    }
  }
   return soma;
}

int main() {


  for(int num1=1; num1<=100000; num1++){
    int num2 = calculo_divisores(num1);
    if(num1 < num2 && num2 < 100000){
      if(calculo_divisores(num2) == num1){
        printf("Pares encontrados: %d e %d\n", num1, num2);
      }
    }
  }
  
  return 0;
}
