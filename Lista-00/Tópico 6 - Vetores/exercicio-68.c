#include <stdio.h>

//QUESTÃO 68: Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:

int main() {
  int A[6];
  int i;
  for (i = 0; i < 6; i++){
    printf("Digite o %d° número inteiro: ", i + 1);
    scanf("%d", &A[i]);
  }
  int soma = 0;
  for (i = 0;i< 6; i++){
    soma+= A[i];
  }
  float media  = (float)soma / 6;
  printf("A média dos números no vetor A é: %.2f\n", media);
  int maior = A[0];
  int menor = A[0];
  for (i = 1; i < 6; i++){
    if (A[i] > maior){
     maior = A[i];
      if (A[i] > menor){
     menor = A[i];
    }
  }
  printf("O maior número no vetor A é: %d\n", maior);
  printf("O menor número no vetor A é: %d\n", menor);
  return 0;
  }
}