#include <stdio.h>

int main() {
int i, j;

printf("Números perfeitos entre 1 e 100:\n");

 for (i = 1; i <= 100; i++) {
int soma = 0;

        
 for (j = 1; j < i; j++) {
if (i % j == 0) {
soma += j;
}
 }

        
if (soma == i) {
 printf("%d\n", i);
}
}

return 0;
