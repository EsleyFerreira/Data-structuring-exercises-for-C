#include <stdio.h>

int main() {
  int vetor1[10], vetor2[10], vetor3[20], i;

  printf("Digite os valores do primeiro vetor\n");
  for (i = 0; i < 10; i++) {
    printf("Digite o valor para a posição %d: ", i);
    scanf("%d", &vetor1[i]);
  }
  printf("Digite os valores do segundo vetor:\n");
  for (i = 0; i < 10; i++) {
    printf("Digite o valor para a posição %d: ", i);
    scanf("%d", &vetor2[i]);
  }
  for (i = 0; i < 10; i++) {
    vetor3[2 * i] = vetor1[i];
    vetor3[2 * i + 1] = vetor2[i];
  }
  printf("Vetor Resultado:\n");
  for (i = 0; i < 2 * 10; i++) {
    printf("%d ", vetor3[i]);
  }
  return 0;
}
