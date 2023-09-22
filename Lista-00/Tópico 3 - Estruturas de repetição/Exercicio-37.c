#include <stdio.h>

int main() {
  int i; 
  double s, v; 
    
  printf("Fazer um programa no qual o usuário vai entrando sucessivamente com valores positivos. Quando o usuário entrar com um valor negativo o programa para de pedir valores e calcula a média dos valores já fornecidos. \n");
  printf("\n");
    
  while (1) {
    printf("Digite um valor positivo: ");
    scanf("%lf", &v);
        
    if (v < 0 || v == 0) {
      printf("\n");
      printf("Valor negativo, ou valor 0");
      break; 
    }
        
    i++;
    s += v;
  }
    
  if (i > 0) {
    double m = s / i;
    printf("\n");
    printf("A média dos valores positivos é: %.1lf\n", m);
  }
  return 0;
}
