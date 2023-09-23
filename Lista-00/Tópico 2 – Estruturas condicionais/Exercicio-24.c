#include <stdio.h>


int main() {
  int numeroLados;
  float tamanhoLados;
  float area;
  
    printf("Digite o número de lados do polígono: ");
    scanf("%d", &numeroLados);

    printf("Digite o tamanho dos lados do polígono: ");
    scanf("%f", &tamanhoLados);

    switch (numeroLados) {
        case 3: // Triângulo
      area = tamanhoLados * tamanhoLados * 1.73 / 4;
    printf("A área do triângulo é: %.2f\n", area);
            break;
      
        case 4: // Quadrado
      area = tamanhoLados * tamanhoLados;
    printf("A área do quadrado é: %.2f\n", area);
            break;
      
        case 6: // Hexágono
      area = 6 * tamanhoLados * tamanhoLados * 1.73 / 4;
     printf("A área do hexágono é: %.2f\n", area);
            break;
      
        default:
      printf("Não sei calcular a área para um polígono com %d lados.\n", numeroLados);
            break;
    }

    return 0;
}
