include <stdio.h>


int main() {
int vetor[10];
    
printf("Digite 10 valores:\n");
for (int i = 0; i < 10; i++) {
printf("Digite o valor para a posição %d: ", i+1);
scanf("%d", &vetor[i]);
 }
    
printf("Valores iguais no vetor:\n");
for (int i = 0; i < 10; i++) {
for (int j = i+1; j < 10; j++) {
if (vetor[i] == vetor[j]) {
printf("%d\n", vetor[i]);
 }
   }
    }
    
    return 0;
}
