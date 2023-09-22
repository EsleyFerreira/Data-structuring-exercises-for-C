#include <stdio.h>

int main() {
  int Lado1, Lado2, Lado3;

    
  printf("Digite o valor de X: ");
  scanf("%d", &Lado1);
  printf("Digite o valor de Y: ");
  scanf("%d", &Lado2);
  printf("Digite o valor de Z: ");
  scanf("%d", &Lado3);

    
  if (Lado1 + Lado2 > Lado3 && Lado1 + Lado3 > Lado2 && Lado2 + Lado3 > Lado1) {
    // Verificar o tipo de triângulo
    if (Lado1 == Lado2 && Lado2 == Lado3) {
      printf("Os valores formam um triângulo equilátero.\n");
    } 
    else if (Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3) {
      printf("Os valores formam um triângulo isósceles.\n");
    } 
    else {
      printf("Os valores formam um triângulo escaleno.\n");
    }
  } 
  else {
    printf("Os valores NÃO formam um triângulo.\n");
  }

  return 0;
}
