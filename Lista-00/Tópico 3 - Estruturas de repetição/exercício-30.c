#include <stdio.h>

int main() {
  int dividendo, divisor, quociente = 0, resto;

  printf("Digite o dividendo: ");
  scanf("%d", &dividendo);

  printf("Digite o divisor: ");
  scanf("%d", &divisor);

  if (divisor == 0) {
    printf("Erro: Divisão por zero!\n");
  } else {
    while (dividendo >= divisor) {
      dividendo = dividendo - divisor;
      quociente = quociente + 1;
    }
    resto = dividendo;
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);
  }
  return 0;
}
