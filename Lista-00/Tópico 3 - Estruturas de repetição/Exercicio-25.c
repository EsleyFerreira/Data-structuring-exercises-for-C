#include <stdio.h>

int main() {
  int a,b,c,d,soma,resultado;

  
  for (int num = 1000; num <= 9999; num++) {
  
    a = num / 1000;        
    b = (num % 1000) / 100; 
    c = (num % 100) / 10;   
    d = num % 10;          

    
    soma = ((a * 10) + b) + ((c * 10) + d); 
    resultado = soma * soma;            
    
    if (resultado == num) {
      printf("%d\n", num); 
    }
  }

  return 0;
}
