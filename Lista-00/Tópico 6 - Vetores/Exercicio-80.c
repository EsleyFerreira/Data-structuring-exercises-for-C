#include <stdio.h>

int main() {
    
  int numerosEscolhidos[6];
  int i=0;

  for (i = 0; i < 6; i++) {
     printf("Digite 6 números aleatórios:\n");
     scanf("%d", &numerosEscolhidos[i]);
    }
      printf("A ordem dos números invertida fica:\n", numerosEscolhidos[i]);

  for (i = 5; i >= 0; i--) {
      printf("%d\n", numerosEscolhidos[i]);
    }

       return 0;
}
