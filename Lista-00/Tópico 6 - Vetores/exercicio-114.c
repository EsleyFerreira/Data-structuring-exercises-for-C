#include <stdio.h>

int main() {
    int n;
    printf("Informe o número de bois (ou 0 para fixar em 10): ");
    scanf("%d", &n);
    
    if (n == 0) {
        n = 10; 
    }
    
    int pesos[n];
    int identificadores[n];
    
   
    for (int i = 0; i < n; i++) {
        pesos[i] = 0;
        identificadores[i] = i + 1;
    }
    
    int peso, mais_gordo = 0, mais_magro = 0;
    
    for (int i = 0; i < n; i++) {
        printf("Informe o peso do boi %d (ou 0 para encerrar): ", i + 1);
        scanf("%d", &peso);
        
        if (peso == 0) {
            break;
        }
        
        pesos[i] = peso;
        
      
        if (peso > pesos[mais_gordo]) {
            mais_gordo = i;
        }
        
        
        if (peso < pesos[mais_magro]) {
            mais_magro = i;
        }
    }
    
    printf("Lista de bois com seus identificadores:\n");
    for (int i = 0; i < n; i++) {
        printf("Boi %d - Peso: %d\n", identificadores[i], pesos[i]);
    }
    
    printf("Boi mais gordo: Boi %d - Peso: %d\n", identificadores[mais_gordo], pesos[mais_gordo]);
    printf("Boi mais magro: Boi %d - Peso: %d\n", identificadores[mais_magro], pesos[mais_magro]);
    
    return 0;
}
