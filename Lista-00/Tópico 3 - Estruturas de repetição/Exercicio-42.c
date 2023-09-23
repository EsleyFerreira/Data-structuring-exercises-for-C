#include <stdio.h>
#include <stdlib.h>

int main() {
int numeroMagico, tentativa, tentativas = 0;

numeroMagico = rand() % 500; 
  
   do {
  printf("Qual é o número mágico ?");
  scanf("%d", &tentativa); tentativas++;

    if (tentativa < numeroMagico) {
  printf("Tente um número maior!\n");
    if (tentativa > numeroMagico) {
  printf("Tente um número menor!\n");
      } 
    }
  } 
   
     while (tentativa != numeroMagico);
 printf("Você acertou o número em %d tentativas.\n", tentativas);

    if (tentativas >= 1 && tentativas <= 3) {
  printf("Você é muito sortudo!\n");
    if (tentativas >= 4 & tentativas <= 6) {
  printf("Você é sortudo!\n");
   if (tentativas >= 7 & tentativas <= 10) {
  printf("Você é normal!\n");
    if (tentativas >= 11 & tentativas <= 500) {
  printf("Tente novamente.\n");
        }
      }
    }
  }

    return 0;
}
