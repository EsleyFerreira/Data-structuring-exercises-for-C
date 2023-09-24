#include <stdio.h>

//QUESTÃO 71: A[0], A[1] e A[5] do vetor e mostre na tela esta soma.

int main() {
int A[6]; 
int i;
  for (i = 0; i < 6; i++) {
      printf("Digite o %dº número inteiro: ", i + 1);
      scanf("%d", &A[i]);
    }   
int somaElementos = A[0] + A[1] + A[5];
     printf("A soma dos elementos A[0], A[1] e A[5] é: %d\n", 
     somaElementos);
    return 0;
}