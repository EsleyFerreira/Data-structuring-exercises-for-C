#include <stdio.h>
#include <math.h>

int arredonda(double x) {
    if (x >= 0) {
        return (int)(x + 0.5);
    } else {
        return (int)(x - 0.5);
    }
}

int main() {
    double numero1 = 1.5;
    double numero2 = -1.5;

    int arredondado1 = arredonda(numero1);
    int arredondado2 = arredonda(numero2);

    printf("Numero1 arredondado: %d\n", arredondado1); // Deve imprimir 2
    printf("Numero2 arredondado: %d\n", arredondado2); // Deve imprimir -2

    return 0;
}
