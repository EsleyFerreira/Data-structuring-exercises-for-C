#include <stdio.h>

int main() {
  int numeros[10];
  int pares[10];
  int impares[10];

  for (int i = 0; i < 10; i++) {
    printf("Digite um número inteiro: ");
    scanf("%d", &numeros[i]);
  }

  int j = 0, k = 0;
  for (int i = 0; i < 10; i++) {
    if (numeros[i] % 2 == 0) {
      pares[j] = numeros[i];
      j++;
    } else {
      impares[k] = numeros[i];
      k++;
    }
  }

  printf("Números pares: ");
  for (int i = 0; i < j; i++) {
    printf("%d ", pares[i]);
  }
  printf("\n");
  printf("Números ímpares: ");
  for (int i = 0; i < k; i++) {
    printf("%d ", impares[i]);
  }
  printf("\n");

  return 0;
}
