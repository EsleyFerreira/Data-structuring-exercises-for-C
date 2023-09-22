#include <stdio.h>

int main() {
  
  int altura_chico = 150;
  int altura_ze = 110;
  int crescimento_chico = 2;
  int crescimento_ze = 3;
  int anos = 0;

  while (altura_chico >= altura_ze) {
    
    altura_chico += crescimento_chico;
    altura_ze += crescimento_ze;
    anos++;
  }

  printf("Serão necessários %d anos para Zé ser maior que Chico.\n", anos);

  return 0;
}
