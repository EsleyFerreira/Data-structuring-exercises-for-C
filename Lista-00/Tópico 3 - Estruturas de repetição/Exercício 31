#include <stdio.h>

int main() {
  int n;
  int i;

  printf("Digite um número: ");
  scanf("%d", &n);

  for (i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      n /= i;
    }
  }

    if (n > 1) {
    printf("%d ", n);
  }

  return 0;
}
