#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int t = rand() % 5000 + 1000;
    printf("Prepare-se para digitar em %d ms...\n", t);
    fflush(stdout);
    while (clock() % t);
    
   
printf("Agora!\n");
    int num = rand() % 100 + 1;
    
   
clock_t start = clock();
    int guess;
    printf("Digite o número %d: ", num);
    scanf("%d", &guess);
    
   
printf("Tempo: %.2lf s\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    printf(guess == num ? "Reflexos afiados!\n" : "Melhore seus reflexos.\n");
    return 0;
}
