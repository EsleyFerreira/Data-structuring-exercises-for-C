#include <stdio.h>
#include <stdbool.h>
#include <string.h>

    bool arePermutations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return false;
    } 
      
    int count1[10] = {0};
    int count2[10] = {0};

    for (int i = 0; i < len1; i++) {
    count1[str1[i] - '0']++;
    count2[str2[i] - '0']++;
    }

     for (int i = 0; i < 10; i++) {
     if (count1[i] != count2[i]) {
     return false;
   }
 }
    return true;
} 
    int main() {
    int n = 10;
    char numeros[10][5];
    bool agrupado[10] = {false};

    printf("Digite dez números de até 4 dígitos:\n");
    for (int i = 0; i < n; i++) {
    scanf("%s", numeros[i]);
    }
      
    for (int i = 0; i < n; i++) {
    if (!agrupado[i]) {
    printf("Grupo %d: %s", i + 1, numeros[i]);
    agrupado[i] = true;

    for (int j = i + 1; j < n; j++) {
    if (!agrupado[j] && arePermutations(numeros[i], numeros[j])) {
    printf(", %s", numeros[j]);
    agrupado[j] = true;
     }
        }

    printf("\n");
        }
    }

    return 0;
}
